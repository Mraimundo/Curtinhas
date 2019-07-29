#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, quant=0, soma=0, maior, menor, dif;
	float med;
	
	for(i=0 ; i<4; i++)
	{
		printf("Digite os Valores Necessario:: ");
		scanf("%d", &num);
		
		//================================
		if(num%2!=0){
			quant++;
			soma=soma+num;
			
		}
		//================================
		if(num%2==0){
			
			maior=num;
			
			if(num>maior){
				
				maior=num;
			}
		}		
		//================================

	if(i==0)
	{
	maior=num;
	menor=num;	
	}
	else{
		if(num>maior){
			maior=num;
		}
		if(num<menor){
			menor=num;
		}
	}
		
		
		
				
		
	}
	med=soma/quant;
	dif=maior-menor;
	
	printf("A media dos impares eh:: %.0f \n", med);
	printf("A diferença entre o Maior e o Menor eh:: %d \n", dif);
	
	
	
}
