#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

float soma, subitracao, v1, v2 ,v3;

printf("medias");

printf("informe v1\n");
scanf("%f",&v1);
printf("informe v2\n");
scanf("%f",&v2);
printf("informe v3\n");
scanf("%f",&v3);

soma=v1+v2;
subitracao=soma-v3;


printf("subitração:%f\n",subitracao);

return 0;
}
