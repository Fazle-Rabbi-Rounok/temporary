// quick sort
#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int tem = a;
    a = b;
    b = tem;
}
void quick(vector<int> &v, int l, int h)
{
    if (l >= h)
        return;
    int lo = l, hi = h - 1;
    int piv = v[h];
    while (lo < hi)
    {
        if (v[lo] >= piv)
        {
            while (v[hi] >= piv && lo < hi)
                hi--;
            if (lo < hi)
                swap(v[lo], v[hi]), hi--;
            else
                break;
        }
        lo++;
    }
    if (v[lo] < piv)
        lo++;
    swap(v[lo], v[h]);
    quick(v, l, lo - 1);
    quick(v, lo + 1, h);
}
int main()
{
    vector<int> v = {17, 96, 33, 80, 9, 66, 1, 70, 33, 72, 39, 56, 77, 82, 7, 14, 51, 16, 87, 58, 96, 14, 65, 72, 4, 36, 34, 32, 13, 47, 84, 59, 95, 70, 100, 61, 74, 90, 8, 61, 62, 80, 97, 67, 86, 52, 65, 61, 81, 45, 28, 86, 99, 40, 78, 1, 24, 8, 57, 32, 75, 79, 33, 14, 73, 48, 64, 61, 16, 75, 99, 74, 90, 57, 49, 54, 80, 45, 30, 97, 33, 100, 27, 69, 7, 16, 76, 44, 95, 92, 54, 50, 93, 74, 40, 74, 55, 36, 70, 1};
    quick(v, 0, v.size() - 1);
    for (auto &a : v)
        cout << a << " ";
}