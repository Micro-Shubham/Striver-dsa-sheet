#include <iostream>
#include <vector>
using namespace std;
// cout the number greater than entered number
int main()
{
    vector<int> v(5);
    cout << "Enter the element:";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    cout << "Enter numb to be compare:";
    int x;
    cin >> x;
    int occurance = 0;
    for (int ele : v)
    {
        if (ele > x)
            occurance++;
    }
    cout << "Greater number  then " << x << " are " << occurance;
    return 0;
}