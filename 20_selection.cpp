#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int tem = a;
    a = b;
    b = tem;
}
int main()
{
    vector<int> v = {1, 3, 6, 2, 5, 9, 2, 1, 7, 3};
    for (int i = 0; i < v.size() - 1; i++)
    {
        int mn = v[i], in = i;
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < mn)
                mn = v[j], in = j;
        }
        swap(v[i], v[in]);
    }
    for (auto &a : v)
        cout << a << " ";
}