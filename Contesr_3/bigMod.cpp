/**
Bismillahir Rahmanir Raheem
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int bigMod(int a, int b, int c)
{
    if (b == 0)
        return 1;

    if (b % 2 == 0)
    {
        int x = bigMod(a, b / 2, c);
        return (x * x) % c;
    }
    else
        return (a % c * bigMod(a, b - 1, c)) % c;
}

int main()
{
    //ios_base::sync_with_stdio(0);
    int b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << bigMod(b, p, m) << endl;
    }

    return 0;
}