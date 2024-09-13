#include<conio2.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main()
{
int op;

  printf("Elija una opcion\n");
  printf("1.  Pantalla Uno\n");
  printf("2.  Pantalla Dos\n");
  printf("3.  Pantalla Tres\n");
  printf("4.  Pantalla Cuatro\n");
  printf("Precione otra tecla para salir\n");
  scanf("%d",&op);
  clrscr();

  switch(op)
  {

    case 1:

    gotoxy(50,15);printf("1. Pantalla Uno\n");
    gotoxy(95,30);printf("Manuel Morneo");
    system("color 17");
    gotoxy(50,16);system("pause\n");
    break;

    case 2:
      gotoxy(45,15);printf("2. Pantalla Dos");
      gotoxy(95,30);printf("Manuel Morneo");
      system("color 54");
      gotoxy(50,16);system("pause\n");

    break;

    case 3:
     gotoxy(50,15);printf("3. Pantalla Tres");
     gotoxy(95,30);printf("Manuel Morneo");
     system("color 34");
     gotoxy(50,16);system("pause\n");
    break;

    case 4:
        gotoxy(50,15);printf("4. Pantalla Cuatro");
        gotoxy(95,30);printf("Manuel Morneo");
        system("color 34");
        gotoxy(50,16);system("pause\n");
    break;

    default:
        printf("Error!");
        gotoxy(95,30);printf("Manuel Morneo");
        system("pause\n");
}

}
