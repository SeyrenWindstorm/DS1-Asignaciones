#include<stdio.h>
#include <conio2.h>


int numeros[10][10];

main(){


int c=1;

for(int a =1;a<=10;a++){
  for(int b =1;b<=10;b++){

numeros[a-1][b-1]=c; c=c+1;
   }
 }

int rom=0, v;

printf("ingresa un numero ");scanf("%d",&v);

  for(int a =1;a<=10;a++){
    for(int b =1;b<=10;b++){
        if(numeros[a-1][b-1]==v){
            printf("el numero esta almacenado en la fila #%d y la columna #%d",a,b);
         rom=1;

        }

 if(rom==1){break;}
  }
 if(rom==1){break;}
  }
 if(rom!=1){
    printf("el numero no esta almacenado");

  }
 getch();

}
