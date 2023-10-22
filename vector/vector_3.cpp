#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int occurance = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << endl;

        occurance = i;
        break;
    }
    cout << occurance << endl;
}