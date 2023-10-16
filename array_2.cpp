#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element:";
    cin >> n;
    int largest, second_largest, arr[n];
    cout << "Enter the element of array:";
    largest = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    second_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    cout << "Second largest number :" << second_largest;
    return 0;
}