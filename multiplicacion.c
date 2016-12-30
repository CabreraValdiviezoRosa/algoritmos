#include <stdio.h>
#include <stdlib.h>
#define DIM 2

void multiplicacion(int a[DIM][DIM], int b[DIM][DIM]);
void imprimir_matriz(int c[DIM][DIM]);

int main(){
	int a[DIM][DIM],b[DIM][DIM],c[DIM][DIM];
	a[0][0] = 2;
	a[0][1] = 5;
	a[1][0] = 7;
	a[1][1] = 12;

	b[0][0] = 4;
        b[0][1] = 6;
        b[1][0] = 8;
        b[1][1] = 1;
	
	multiplicacion(a,b);
	
	return 0;
}

void multiplicacion(int a[DIM][DIM], int b[DIM][DIM]){
	int c[DIM][DIM];
	int i,j,k;
 	for (i = 0;i < DIM;i++){
     		for(j = 0 ;j < DIM; j++){
         		c[i][j] = 0;
          		for(k = 0;k < DIM; k++){
              			c[i][j] = c[i][j] + a[i][j] * b[i][j];
			}
      		}
 	}
	
	imprimir_matriz(c);
}

void imprimir_matriz(int c[DIM][DIM]){
	int i,j;
  	for (i = 0;i < DIM; i++){
       		for (j = 0;j < DIM; j++){
      			printf("%d \n", c[i][j]);
		}
	}
}
