#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

float produto, v1, v2 ,v3, v4;

printf("produtos");

printf("informe v1\n");
scanf("%f",&v1);
printf("informe v2\n");
scanf("%f",&v2);
printf("informe v3\n");
scanf("%f",&v3);
printf("informe v4\n");
scanf("%f",&v4);

produto=v1*v2*v3*v4;



printf("media:%f\n", produto);

return 0;
}
