// binary search
#include <iostream>
#include <vector>

using namespace std;
int bin_srch(int a, int b, vector<int> &v, int target)
{
    int lo = a, hi = b, mid;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (v[mid] == target)
            return mid + 1;
        else if (v[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    if (v[hi] == target)
        return hi + 1;
    else if (v[lo] == target)
        return lo + 1;
    else
        return -1;
}
int main()
{
    vector<int> v = {1, 2, 5, 7, 7, 9, 9};
    int target = 4;
    int ans = bin_srch(0, v.size() - 1, v, target);
    if (ans != -1)
        cout << "target element found at index: " << ans << endl;
    else
        cout << "element not found\n";
}