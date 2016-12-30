#include <stdio.h>

void ordenar(int a[],int tamanio);

int main(){
	int numeros[] = {2,5,3,4,10,6,1};
	ordenar(numeros, sizeof(numeros)/sizeof(int));
	return 0;
}

void ordenar(int a[], int tamanio){
	int i, x, aux;
	for (i=1; i < tamanio; i++) {
    		aux = a[i];
    		x = i-1;
    		while (x >= 0 && a[x] > aux) {
      			a[x + 1] = a[x];
      			x--;
    		}
    		a[x+1] = aux;
  	}
	
	for(x = 0 ; x < tamanio ; x++){
		printf("%d\n",a[x]);
	}
		
}
