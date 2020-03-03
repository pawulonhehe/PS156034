#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Podaj wspolczynniki ukladu: ax+by=c // dx+ey=f");
    printf("Podaj a");
    scanf("%f",&a);
    printf("Podaj b");
    scanf("%f",&b);
    printf("Podaj c");
    scanf("%f",&c);
    printf("Podaj d");
    scanf("%f",&d);
    printf("Podaj e");
    scanf("%f",&e);
    printf("Podaj f");
    scanf("%f",&f);
    float w = a*e-b*d;
    float wx = c*e-b*f;
    float wy = a*f-c*d;
    if ( w == 0)
    {
        if(wx==0 &&wy==0)
        {
            printf("Nieskonczenie wiele rozwiazan");
        }
        else
        {
            printf("Brak rozwiazan");
        }
    }
    else
    {
        printf("1 rozwiazanie: x=%f, y=%f",wx/w,wy/w);
    }
    return 0;
}
