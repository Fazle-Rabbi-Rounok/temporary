#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fl = 0;
    string s1 = "a cat dances";
    string s2 = "esd";
    int siz = s1.size() - s2.size() + 1;
    for (int i = 0; i < siz; i++)
        if (s1[i] == s2[0])
        {
            int k = i, f = 1;
            for (int j = 0; j < s2.size(); j++, k++)
                if (s1[k] != s2[j])
                {
                    f = 0;
                    break;
                }
            if (f)
            {
                fl = 1;
                cout << "match found\n";
                break;
            }
        }
        if(!fl)
            cout << "no match found\n";
}