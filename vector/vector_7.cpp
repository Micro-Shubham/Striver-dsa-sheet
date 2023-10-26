#include <iostream>
using namespace std;
int main()
{
    //difference between sum of even index and odd index
    int arr[] = {1, 2, 1, 2, 1, 2};
    int ans = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            ans += arr[i];
        else
            ans -= arr[i];
    }
    cout << ans;
    return 0;
}