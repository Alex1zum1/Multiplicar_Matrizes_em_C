#include <stdio.h>
int main() {
	int n[5], menor, posicao, i;
	printf("Digite um numero");
	scanf("%d", &n[0]);
	menor = n[0];
	posicao = 0;
	for(i=1; i<80; i++) {
        printf("Digite outro numero");
        scanf("%d", &n[i]);
        if(n[i]<menor) {
            menor = n[i];
            posicao = i;
        }
    }
    printf("O menor numero é: %d, posicao: %d", menor, posicao);
	
	return 0;
}