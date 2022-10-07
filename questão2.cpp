#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

float media, v1, v2 ,v3;

printf("medias");

printf("informe v1\n");
scanf("%f",&v1);
printf("informe v2\n");
scanf("%f",&v2);
printf("informe v3\n");
scanf("%f",&v3);


media=v1+v2+v3/3;


printf("media:%f\n", media);

return 0;
}
