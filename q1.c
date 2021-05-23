#include <stdio.h>

int main(){

int n1, n2, op;

printf("DIGITE PRIMEIRO NUMERO \n");
scanf("%i", &n1);

printf("DIGITE SEGUNDO NUMERO \n");
scanf("%i", &n2);

printf("DIGITE A OPERACAO\n");

printf("1 para soma\n");

printf("2 para subtracao\n");

printf("3 para multiplicacao\n");

printf("4 para divisao\n");

printf("\n");
scanf("%i", &op);
printf("\n");

switch(op){

    case 1:
    printf("RESULTADO %i",n1+n2);
    break;

    case 2:
    printf("RESULTADO %i",n1-n2);
    break;

    case 3:
    printf("RESULTADO %i",n1*n2);
    break;

    case 4:
    printf("RESULTADO %i",n1/n2);
    break;
}

return 0;
}


