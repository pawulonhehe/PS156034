#include <stdio.h>
#include <stdlib.h>

int licznik = 0;
void wywo(){
	licznik++;
	printf("Ilosc wywolan: %i\n", licznik);
}

int main(){
	int n = 1;
	while (n == 1){
		wywo();
		scanf("%i", &n);
	}
}