#include<stdio.h>
#include<locale.h >

 int main ()
{
char fruta;

printf ("Escolha uma fruta");
printf("\n");
scanf ("%s",&fruta);

switch(fruta){

case 'maca':
    printf ("Nao vendemos esta fruta aqui");
    break;

case 'kiwis' :
    printf ("Estamos com escassez de kiwis");
    break;


case 'melancia' :
    printf ("Aqui esta, são 3 reais");
    break;

default :
    printf ("ERROR");
}

}
