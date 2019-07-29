#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, cont, valor1, valor2;
	printf("Digite o primeiro valor::");
	scanf("%d", &valor1);
	printf("Digite o segundo valor::");
	scanf("%d", &valor2);
	
	if(valor1>valor2){
		printf("O maior valor digitado eh:: %d", valor1);
	}
	if(valor2>valor1){
		printf("O maior valor digitado eh:: %d", valor2);	
	}
	if(valor1==valor2){
		printf("Valor nao encontrado::");
	}
}
