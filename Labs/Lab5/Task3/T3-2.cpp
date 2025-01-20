
#include <iostream>
using namespace std;

template <typename T>
T fib(T x)
{
	T t_zero(0);
	T t_one(1);
	if (x <= 0)
		return t_zero;
	if (x <= 1)
		return t_one;
	T y = fib(x - 1) + fib(x - 2);
	return y;
}

int main()

{

	unsigned int x;
	cin >> x;
	cout << fib<unsigned int>(x) << endl;

	float y;
	cin >> y;
	cout << fib<float>(y) << endl;

	return 0;
}
