#include <stdio.h>

int main(){

int modo;
float valor_total;

printf("Digite o valor total\n");
scanf("%f", &valor_total);
printf("\n");


printf("DIGITE O MODO DE PAGAR: \n");
printf("1 a vista \n");
printf("2 a prazo: \n");
printf("\n");

scanf("%i", &modo);


switch(modo){

    case 1:
    printf("DESCONTO %2.f",(((0.1)*valor_total)));
printf("\n");
    printf("RESULTADO %2.f",(valor_total - ((0.1)*valor_total)));
    break;

    case 2:
    printf("RESULTADO %2.f",valor_total);
    break;
}

return 0;
}




