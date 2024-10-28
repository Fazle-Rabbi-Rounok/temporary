// C++ program for the implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])

                swap(v[j], v[j + 1]);
        }
    }
}
int main()
{
    vector<int> v = {5, 1, 1, 1, 1, 4, 2, 1, 11, 8};
    bubbleSort(v);
    for (auto i : v)
        cout << i << " ";
}