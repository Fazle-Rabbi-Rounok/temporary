// factorial of a given number
#include <bits/stdc++.h>
using namespace std;
long long fact(int a)
{
    if (a == 1)
        return 1;
    else
        return a * fact(a - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}