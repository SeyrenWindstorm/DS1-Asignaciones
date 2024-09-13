#include<stdio.h>
#include<conio2.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
#include<ctime>
int main()
{
char clave[4], fecha[25];
int i,e, j= 0, x = 1;
i=0;
e=42;
gotoxy(38,9);printf("*");
gotoxy(38,10);printf("*");
gotoxy(38,11);printf("*");
gotoxy(38,12);printf("*");
gotoxy(38,13);printf("*");
gotoxy(38,14);printf("*");
gotoxy(38,15);printf("*");
gotoxy(38,16);printf("*");
gotoxy(38,17);printf("*");
gotoxy(40,17);printf("*");
gotoxy(42,17);printf("*");
gotoxy(44,17);printf("*");
gotoxy(46,17);printf("*");
gotoxy(48,17);printf("*");
gotoxy(50,17);printf("*");
gotoxy(52,17);printf("*");
gotoxy(54,17);printf("*");
gotoxy(56,17);printf("*");
gotoxy(58,17);printf("*");
gotoxy(60,17);printf("*");
gotoxy(62,17);printf("*");
gotoxy(64,17);printf("*");
gotoxy(66,17);printf("*");
gotoxy(68,17);printf("*");
gotoxy(70,17);printf("*");
gotoxy(72,17);printf("*");
gotoxy(74,17);printf("*");
gotoxy(76,17);printf("*");
gotoxy(78,17);printf("*");
gotoxy(80,9);printf("*");
gotoxy(80,10);printf("*");
gotoxy(80,11);printf("*");
gotoxy(80,12);printf("*");
gotoxy(80,13);printf("*");
gotoxy(80,14);printf("*");
gotoxy(80,15);printf("*");
gotoxy(80,16);printf("*");
gotoxy(80,17);printf("*");
gotoxy(40,9);printf("*");
gotoxy(40,9);printf("*");
gotoxy(42,9);printf("*");
gotoxy(44,9);printf("*");
gotoxy(46,9);printf("*");
gotoxy(48,9);printf("*");
gotoxy(50,9);printf("*");
gotoxy(52,9);printf("*");
gotoxy(54,9);printf("*");
gotoxy(56,9);printf("*");
gotoxy(58,9);printf("*");
gotoxy(60,9);printf("*");
gotoxy(62,9);printf("*");
gotoxy(64,9);printf("*");
gotoxy(66,9);printf("*");
gotoxy(68,9);printf("*");
gotoxy(70,9);printf("*");
gotoxy(72,9);printf("*");
gotoxy(74,9);printf("*");
gotoxy(76,9);printf("*");
gotoxy(78,9);printf("*");

gotoxy(42,10);textcolor(GREEN);printf("Universidad Tecnologica de Panama\n");
gotoxy(52,11);textcolor(GREEN);printf("Sede de Azuero\n");
gotoxy(44,12);textcolor(GREEN);printf("Facultad de Ing. En Sistemas\n");
gotoxy(40,13);textcolor(GREEN);printf("Proyecto #1 de Desarrollo de Software");
gotoxy(44,14);printf("Estudiantes: Manuel Moreno");

    time_t current_time;
    current_time=time(NULL);
    ctime(&current_time);
    strcpy(fecha, ctime(&current_time));
   gotoxy(44,16);printf("%s", fecha);
getch();
clrscr();

do
    {

   gotoxy(42,10);printf("INTRODUCE LA CLAVE CORRECTA... O ALMENOS INTENTALO ");
   gotoxy(1,18);printf("Recuerda que la clave debe estar compuesta por caracteres del 1 al 3 cualquier otro caracter no es valido :)");

while(i<4)
{

   gotoxy(e,11);
   clave[i]=getche();
   gotoxy(e,11);printf("*");
   if ((clave[i]=='1')||(clave[i]=='2')||(clave[i]=='3'))
{
    e++;
    i=i+1;
}

else
{
    gotoxy(42,13);printf("ERROR ESTE CARACTER ES INVALIDO!");
    gotoxy(42,14);system("pause");
    gotoxy(e,11);printf(" ");
    gotoxy(42,14);clreol();
    gotoxy(42,13);clreol();
}
}// PRIMER WHILE

clave[i]=0;


j=strcmp(clave,"1213");



if(j==0)
   {
    gotoxy(42,11);printf("LA CLAVE INTRODUCIDA ES CORRECTA");
    clrscr();
    gotoxy(45,12);printf("FELICITACIONES LO HAS LOGRADO");
    getch();
    x=x+5;
   }
else
  {
    clrscr();
    gotoxy(42,11);printf("LA CLAVE INTRODUCIDA ES INCORRECTA");
    gotoxy(42,12);printf("INTENTALO NUEVAMENTE :)");
    x=x+1;
  }

}while(x>=3 && j==0);
//while



}

