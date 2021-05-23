#include <stdio.h>

int main(){

int modelo;

printf("DIGITE O MODELO\n");

printf("1 para hatch,\n");

printf("2 para sedans,\n");

printf("3 para motocicletas\n");

printf("4 para caminhonetes.\n");

printf("\n");
scanf("%i", &modelo);
printf("\n");

switch(modelo){

    case 1:
    printf("Compra efetuadacom sucesso");
    break;

    case 2:
    printf("Tem certeza que nao prefere este modelo?");
    break;

    case 3:
    printf("Tem certeza que nao prefere este modelo?");
    break;

    case 4:
    printf("Tem certeza que nao prefere este modelo?");
    break;

    default:
    printf("Nao trabalhamos com este tipo de automovel aqui");
    break;
}

return 0;
}


