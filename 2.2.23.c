#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if (n <= 1){
		return 1;
	}
	else return fibonaci(n - 1) + fibonaci(n - 2);;
}
int main()
{
	int n = 0;
	scanf("%i", &n);
	printf("%i", fibonaci(n));
	return 0;
}