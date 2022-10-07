#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

float media, soma, v1, v2;

printf("medias");

printf("informe v1\n");
scanf("%f",&v1);
printf("informe v2\n");
scanf("%f",&v2);


soma=v1+v2;
media=soma/2;


printf("media:%f\n", media);

return 0;
}
