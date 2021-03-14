#include <cstdio>
using namespace std;

int main()
{
    int n;

    while (scanf("%d", &n), n)
    {
        printf("f91(%d) = ", n);
        if (n >= 101)
            printf("%d\n", n - 10);
        else
            printf("91\n");
    }

    return 0;
}
