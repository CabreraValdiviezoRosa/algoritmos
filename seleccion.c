#include <stdio.h>

void seleccion(int a[],int tamanio);

int main(){
	int numeros[] = {2,5,3,4,10,6,1};
	seleccion(numeros, sizeof(numeros)/sizeof(int));	
	return 0;
}


void seleccion(int a[],int tamanio){
	int i,j,minimo,temp;
	for(i = 0 ; i < (tamanio - 1) ; i++){
		minimo = i;
		for(j = (i+1); j < tamanio ; j++){
			if(a[j] < a[minimo]){
				minimo = j;
			}
		}

		if(i != minimo){
			temp = a[i];
			a[i] = a[minimo];
			a[minimo] = temp;
		}
	}

	for(i = 0 ; i < tamanio ; i++){
		printf("%d\n",a[i]);
	}
	
}
