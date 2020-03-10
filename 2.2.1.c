#include <stdio.h>
#include <stdlib.h>

int wartBezw(int n)
{
	if (n >= 0)
		return n;
	else
		return -n;
}

int main()
{
	int liczba;
	scanf("%d", &liczba);
	printf("%d", wartBezw(liczba));
	return 0;
}
