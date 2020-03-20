#include <stdio.h>
#include <stdlib.h> 

int npodniesioneM(int n, int m){
	int wynik = 1;
	if(m == 0){
		return 1;
	}
	else{
		for (int i = m; i > 0; i--){
			wynik *= n;
		}
	}
	return wynik;
}

int main(){
	int n, m;
	scanf("%i", &n);
	scanf("%i", &m);
	printf("%i", npodniesioneM(n, m));

}