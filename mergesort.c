#include <stdio.h>

void mergesort(int a[], int i, int n);
void merge(int a[], int i, int n1, int n2);

int main(){
	int numeros[] = {2,5,3,4,10,6,1};
	mergesort(numeros,0,(sizeof(numeros)/sizeof(int)) - 1);
	return 0;
}

void mergesort(int a[], int inicio, int final){
	int n1, n2;
	if(final > 1){
		n1 = final/2;
		n2 = final - n1;
		mergesort(a, inicio, n1);
		mergesort(a, inicio + n1, n2);
		merge(a, inicio, n1, n2);
	}	
}

void merge(int a[], int inicio, int mitad, int final){
	int buffer[mitad + final];
	int temp = 0, temp1 = 0, temp2 = 0, z;
	
	while ((temp1 < mitad) && (temp2 < final)){
		if (a[inicio + temp1] < a[inicio + mitad + temp2]){
			buffer[temp++] = a[inicio + (temp1++)];
		}else{
			buffer[temp++] = a[inicio + mitad + (temp2++)];
		}
	}

	while (temp1 < mitad){
		buffer[temp++] = a[inicio + (temp1++)];
	}	
	
	while (temp2 < final){
		buffer[temp++] = a[inicio + mitad + (temp2++)];
	}
	
	for (z = 0; z < mitad + final; z++){
		a[inicio + z] = buffer[z];
	}
}
