#include <iostream>
using namespace std;
// array is sorted or not
int main()
{
    int arr[6] = {1, 2, 3, 8 , 6, 7};
    bool sorted = true;
    for (int i = 1; i <6; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            sorted = false;
            break;
        }
    }
    cout << sorted;
    return 0;
}