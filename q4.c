#include <stdio.h>

int main(){

int modo, habitant, nasciment, mortalidad;
float resultado;

printf("Digite o numero de habitantes\n");
scanf("%i", &habitant);
printf("\n");

printf("Digite o numero de nascimentos\n");
scanf("%i", &nasciment);
printf("\n");

printf("Digite o numero de mortos\n");
scanf("%i", &mortalidad);
printf("\n");


printf("DIGITE O A TAXA: \n");
printf("1 NATALIDADE \n");
printf("2 MORTALIDADE: \n");
printf("\n");

scanf("%i", &modo);


switch(modo){

    case 1:
        resultado = (nasciment*1000);
        resultado = resultado/habitant;
        printf("NATALIDADE: %2.f", resultado);
    break;

    case 2:
        resultado = (mortalidad*1000);
        resultado = resultado/habitant;
        printf("MORTALIDADE: %2.f", resultado);
    break;
}

return 0;
}





