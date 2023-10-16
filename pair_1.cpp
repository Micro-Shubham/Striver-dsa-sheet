#include <iostream>
using namespace std;
// pairs
void explainpair()
{
    pair<int, int> p = {2, 4};
    // first element and second element.
    cout << p.first << " " << p.second;
}
int main()

{
    // funtion call
    explainpair();
    return 0;
}
