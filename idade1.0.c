#include <stdio.h>

int main(){
	int ano, idade;
	char nome[15];
	
	printf("Dgite seu nome:");
	scanf("%s",&nome);
	
	printf("agora digite o ano do seu nascimento:");
	scanf("%i", &ano);
	
	if(ano<1900){
		printf("ano ivalido");
	}
	else{
	idade=2020-ano;
	printf("%s voce tem %i anos", nome, idade);	
	}
	return 0;
}
