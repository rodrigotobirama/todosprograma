#include<stdio.h>
#include<stdlib.h>

main()
{
    int idade;
    printf("digite sua idade.\n");
    scanf("%d",&idade);


       if(idade < 15){
           printf("voce esta abaixo do permitido.\n",idade);
       }
       else{
           printf("voce esta acima.\n"idade);
       }

   system("pause");
}

