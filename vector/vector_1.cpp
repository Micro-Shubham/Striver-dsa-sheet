// vector array are dynamic array
// we can resize like delete or insert element
// contiguous memory allocation
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<data type >name;
    vector<int> v;

    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    // inseting a element at the end ;
    v.push_back(1);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;
    return 0;
}