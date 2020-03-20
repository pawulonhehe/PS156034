#include <stdio.h>
#include <stdlib.h>

int funkcyja(int *x, int *y){
	if (*x < *y){
		return *x;
	}
	else{
		return *y;
	}
}

int main(){
	int a = 50, b = 100;
	printf("%i", funkcyja(&a, &b));
	return 0;
}