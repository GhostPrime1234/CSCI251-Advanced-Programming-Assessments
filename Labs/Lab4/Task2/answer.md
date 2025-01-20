(a) **What concept does it illustrate?**

This code illustrates the concept of **associations** between classes, specifically **composition** and **aggregation**. It shows how objects of different classes (Person, Company, and Contract) can be related to each other to represent real-world relationships.

(b) **How are the classes related?**

- **Person**: Represents a worker.
- **Company**: Represents a company.
- **Contract**: Represents a contract between a Person and a Company.

The Contract class likely has pointers or references to Person and Company objects, indicating that a Contract is associated with both a Person and a Company.

(c) **What happens if either the worker or company is deleted in main, after the Contract is set up but before the output is displayed?**

If either the worker or company is deleted after the Contract is set up but before the output is displayed, it will lead to **undefined behavior**. The Contract object holds pointers to the Person and Company objects, and deleting these objects will leave dangling pointers in the Contract

object. Accessing these pointers will likely cause a crash or incorrect behavior.

(d) **What happens if we add an additional company and add a contract between John and the new company? How would we manage this situation, or the case where a new worker wants to work for Bell?**

If we add an additional company and create a new contract between John and the new company, we need to ensure that the Person class can handle multiple contracts. Similarly, if a new worker wants to work for Bell, the Company class should be able to handle multiple contracts.

To manage this situation, we can modify the Person and Company classes to maintain a list of contracts. Here is an example of how this can be done:

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Company;

class Contract
{
private:
    Person *worker;
    Company *company;
    int contractNumber;
    int duration;
    double rate;

public:
    Contract(Person *w, Company *c, int cn, int d, double r)
        : worker(w), company(c), contractNumber(cn), duration(d), rate(r) {}

    int getContractNumber() const { return contractNumber; }
    int getDuration() const { return duration; }
    double getRate() const { return rate; }
    string getCompName() const;
};

class Person
{
private:
    string name;
    vector<Contract *> contracts;

public:
    Person(string n) : name(n) {}
    ~Person()
    {
        for (Contract *contract : contracts)
            delete contract;
    }

    string getName() const { return name; }
    void addContract(Contract *contract) { contracts.push_back(contract); }
    Contract *getContract(int index) const { return contracts[index]; }
};

class Company
{
private:
    string name;
    vector<Contract *> contracts;

public:
    Company(string n) : name(n) {}
    ~Company()
    {
        for (Contract *contract : contracts)
            delete contract;
    }

    string getName() const { return name; }
    void addContract(Contract *contract) { contracts.push_back(contract); }
};

string Contract::getCompName() const
{
    return company->getName();
}

int main()
{
    Person *worker = new Person("John");
    Company *company1 = new Company("Bell Pty Ltd");
    Company *company2 = new Company("Tech Corp");

    Contract *cont1 = new Contract(worker, company1, 5247, 12, 50.0);
    Contract *cont2 = new Contract(worker, company2, 5248, 6, 60.0);

    worker->addContract(cont1);
    worker->addContract(cont2);
    company1->addContract(cont1);
    company2->addContract(cont2);

    cout << worker->getName() << " has a contract number "
         << worker->getContract(0)->getContractNumber()
         << " with " << worker->getContract(0)->getCompName()
         << endl;

    cout << "Duration: " << worker->getContract(0)->getDuration()
         << " months" << endl;
    cout << "Rate: $" << worker->getContract(0)->getRate()
         << "/hr " << endl;

    cout << worker->getName() << " has a contract number "
         << worker->getContract(1)->getContractNumber()
         << " with " << worker->getContract(1)->getCompName()
         << endl;

    cout << "Duration: " << worker->getContract(1)->getDuration()
         << " months" << endl;
    cout << "Rate: $" << worker->getContract(1)->getRate()
         << "/hr " << endl;

    delete worker;
    delete company1;
    delete company2;

    return 0;
}
```

In this implementation:

1. The Person and Company classes maintain a list of contracts.
2. The Contract class holds pointers to Person and Company objects.
3. The main function demonstrates creating multiple contracts for a worker and multiple companies, and displays the contract details.
