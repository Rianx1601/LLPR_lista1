#include <stdio.h> 
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float media, soma, v1, v2 ,v3;
	
	printf("medias");
	
	printf("informe v1\n");
	scanf("%f",&v1);
	printf("informe v2\n");
	scanf("%f",&v2);
	printf("informe v3\n");
	scanf("%f",&v3);
	
	soma=v1+v2+v3;
	media=soma/3;

	printf("O valor calculado entre os valores  %f,%f,%f foi:%f", v1,v2,v3,media);
	
	
	
	return 0;
}
