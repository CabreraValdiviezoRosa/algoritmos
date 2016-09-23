#include <stdio.h>

void burbuja(int a[], int tamanio);

int main(){
	int numeros[] = {2,5,3,4,10,6,1};
	burbuja(numeros, sizeof(numeros)/sizeof(int));
	return 0;
}


void burbuja(int a[], int tamanio){
	int x,z,temp;
	for(x = 0 ; x < tamanio ; x++){
		for(z = 0 ; z < x ; z++){
			if(a[x] < a[z]){
				temp = a[z];
				a[z] = a[x];
				a[x] = temp;
			}
		}
	}

	for(x = 0 ; x < tamanio ; x++){
		printf("%d\n",a[x]);
	}

}
