#include <stdio.h>
int main() {
	int a[3][3], b[3][3], i, j;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Digite um valor para matriz A:");
	        scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Digite um valor para matriz B:");
	        scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Multiplicacao: %d ", a[i][j]*b[i][j]);
        }
    }
    
	return 0;
}