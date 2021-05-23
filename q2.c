#include <stdio.h>

int main(){

int cliente_cod;
float valor_total;

printf("Digite o valor total \n");
scanf("%f", &valor_total);
printf("\n");


printf("DIGITE O SEU COD DE CLIENTE: \n");
printf("1 para comum \n");
printf("2 para funcionario: \n");
printf("3 para vip: \n");
printf("\n");

scanf("%i", &cliente_cod);


switch(cliente_cod){

    case 1:
    printf("RESULTADO %2.f",valor_total);
    break;

    case 2:
    printf("RESULTADO %2.f",(valor_total-((0.1)*valor_total)));
    break;

    case 3:
    printf("RESULTADO %2.f",(valor_total - ((0.05)*valor_total)));
    break;
}

return 0;
}



