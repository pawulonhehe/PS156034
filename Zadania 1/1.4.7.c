#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("podaj n:");
    scanf("%i", &n);
    printf("podaj m:");
    scanf("%i", &m);
    int wynik=1;
    if(n >= m){
        printf("niepoprawne dane");
    }
    else{
        for(int i=n; i<=m; i++)
            wynik*=i;
			printf("%i\n", wynik);
    }
    return 0;
}