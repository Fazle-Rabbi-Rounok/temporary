// insert ith element at its respective place
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
    for (int i = 1; i < v.size(); i++)
        for (int j = 0; j < i; j++)
            if (v[j] >= v[i])
            {
                for (int k = j; k <= i; k++)
                    swap(v[k], v[i]);
                break;
            }
            for(auto &a: v)
                cout << a << " ";
}