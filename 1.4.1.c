#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%f", &n);
    scanf("%f", &m);
    for (int i=n;i<m;i+=n)
    {
        printf("%d\n",i);
    }
    return 0;
}
