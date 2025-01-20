#include <iostream>

using std::cin, std::cout;

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    cout << "Enter 5 integers: ";
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int length = sizeof(arr) / sizeof(arr[0]);
    swap(&arr[0], &arr[length - 1]);

    cout << "Swapped array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}