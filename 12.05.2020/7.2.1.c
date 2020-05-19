#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    float a;
    float b;
    float c;
};

float obwod(struct trojkat tmp)
{
    float suma = tmp.a + tmp.b + tmp.c;
    return suma;
}
int main()
{
    struct trojkat tmp = {2, 4, 3};
    printf("%f", obwod(tmp));
}
