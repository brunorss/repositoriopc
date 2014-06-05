#include <stdio.h>
main()
{
    float numero, soma, soma2, media, maiornumero, menornumero;
    int cont  ;
    cont=0;
    menornumero=0    ;
    maiornumero=0;
    soma=0;
    media=0;
    printf("Digite um numero\n");
    scanf ("%f",&numero);
    menornumero=numero;
    soma2=numero;
    for (cont=1;cont<20;++cont)
    {
    printf("Digite um numero\n");
    scanf ("%f",&numero);
    soma=soma+numero;
    if (numero>maiornumero)
        maiornumero=numero;
    else
       if (numero<menornumero)
        menornumero=numero;
    }
    media=(soma+soma2)/20;
    printf("Soma=%f\n",soma+soma2);
    printf("Media=%f\n",media);
    printf("Maior numero = %f\n",maiornumero);
    printf("Menor numero = %f\n",menornumero);

}
