#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // loop
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
