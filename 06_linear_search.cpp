// linear search
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9};
    int target = 4;
    int f = 0;
    for (int i = 0; i < v.size(); i++)
        if (v[i] == target)
        {
            cout << "target element found at index: " << i + 1 << endl;
            f = 1;
            break;
        }
    if (!f)
        cout << "target element not found!\n";
}