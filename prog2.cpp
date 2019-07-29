#include<stdio.h>
#include<stdlib.h>

int main(){
int i, num, fat=1;
	printf("Digite um valor::  ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		fat=fat*i;
	}
	printf("O valor da Fatorial eh:: %d \n", fat);	
	
		return 0;
	}

	


