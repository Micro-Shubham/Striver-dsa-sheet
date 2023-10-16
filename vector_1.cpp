// largest element in array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element";
    cin >> n;
    int largest, arr[n];
    cout << "Enter the member of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    cout << "The largest member is:" << largest;
    return 0;
}
