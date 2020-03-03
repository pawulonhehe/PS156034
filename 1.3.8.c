#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double a,b,h,p;
    printf("Pole jakiej figury chcesz policzyc \n");
    printf("0 - kwadrat \n");
    printf("1 - prostokat \n");
    printf("2 - trojkat \n");
    scanf("%d", &i);
    switch (i){
    case 0: printf("Podaj dlugosc boku kwadratu");
            scanf("%i", &a);
            p = a*a;
            break;
    case 1: printf("Podaj dlugosci bokow prostokata");
            scanf("%i%i", &a, &b);
            p = a*b;
            break;
    case 2: printf("Podaj dlugosc podstawy i wysokosc trojkata");
            scanf("%i%i", &a, &h);
            p = 0.5*a*h;
            break;
    }
    printf("Pole figury o podanych wymiarach to %i \n", &p);
    return 0;
}
