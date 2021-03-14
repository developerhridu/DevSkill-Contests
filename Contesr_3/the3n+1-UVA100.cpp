#include <bits/stdc++.h>
using namespace std;

void givenAlgo(int n)
{
    if (n % 2)
        n = 3 * n + 1;
    else
        n /= 2;
}

int main()
{
    // ios_base::sync_with_stdio(0);

    int num1, num2;
    while ((scanf("%d %d", &num1, &num2)) == 2)
    {
        int max = 0;
        int x = (num1 > num2) ? num1 : num2;
        int y = (num1 < num2) ? num1 : num2;
        for (int i = y; i <= x; i++)
        {
            int n = i;
            int count = 1;
            while (n > 1)
            {
                // if (n % 2)
                //     n = 3 * n + 1;
                // else
                //     n /= 2;
                givenAlgo(n);
                count++;
            }

            if (count >= max)
            {
                max = count;
            }
        }
        cout << num1 << " " << num2 << " " << max << endl;
    }

    return 0;
}