#include <bits/stdc++.h>
using namespace std;
#define MAX 100006

int arr[MAX];
int main()
{
    int t, n, q, cs = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("Case %d\n", cs++);
        while (q--)
        {
            int L, R;
            cin >> L >> R;
            int ub = upper_bound(arr, arr + n, R) - arr;
            int lb = lower_bound(arr, arr + n, L) - arr;
            printf("%d\n", ub - lb);
        }
    }

    return 0;
}