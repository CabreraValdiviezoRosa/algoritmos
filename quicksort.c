#include <stdio.h>

void ordena(int a[],int izquierda, int derecha);

int main(){
	int numeros[] = {2,5,3,4,10,6,1};
	ordena(numeros,0,5);
	return 0;
}

void ordena(int a[],int izq, int der){
	int aux_izq = izq;
	int aux_der = der; 
	int pivote = a[izq];
	int aux = 0;
	
	while(aux_izq < aux_der){
		while(a[aux_izq] <= pivote && aux_izq < aux_der){
			aux_izq++;
		}
		while(a[aux_der] > pivote){
			aux_der--;
		}

		if(aux_izq < aux_der){
			aux = a[aux_izq];
			a[aux_izq] = a[aux_der];
			a[aux_der] = aux;
		}
	}

	a[izq] = a[aux_der];
	a[aux_der] = pivote;

	if((aux_der - 1) > izq){ 
                ordena(a, izq, aux_der - 1);
	} 
        if((aux_der + 1) < der){ 
        	ordena(a, aux_der + 1, der); 
	}
}
