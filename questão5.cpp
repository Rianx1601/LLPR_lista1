#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

int v1, v2;
float divisao, resto;

printf("medias");

printf("informe v1\n");
scanf("%d",&v1);
printf("informe v2\n");
scanf("%d",&v2);


divisao=v1/v2;
resto=v1%v2;


printf(" os valores %f, %f \n" ,divisao,resto );
return 0;
}
