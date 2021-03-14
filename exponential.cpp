/**
Bismillahir Rahmanir Raheem
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int expo(int &a, int &b)
{
    int result = 1;
    while (b--)
    {
        result *= a;
    }
    return result;
}

int bigExpo(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        int result = bigExpo(a, b / 2);
        return (result * result);
    }
    return (a * bigExpo(a, b - 1));
}

int main()
{
    //ios_base::sync_with_stdio(0);
    int a, b, c;
    cin >> a >> b >> c;

    // cout << expo(a, b) % c;
    cout << bigExpo(a, b) % c;

    return 0;
}