#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()

{
    int s,e,ht,he,ex;
    float sal=2.50,p,pe,pt;

    printf("Ingrese su hora de entrada\n");
    scanf("%d",&e);
    printf("Ingrese su hora de salida\n");
    scanf("%d",&s);

    ht=s-e;// horas trabajadas
    p=ht*sal;// pago sin horas extra
    if (ht>8)
    {
     ex=ht-8;// horas extra
     pe=ex*0.05;// pago de horas extra
     pt=p+pe; //pago total

            printf("Horas trabajadas:%d\n",ht);
            printf("Horas extra trabajadas:%d\n",ex);
            printf("Su pego es de: %.2f\n",pt);

    }

    else
        {
            printf("Horas trabajadas:%d\n",ht);
            printf("No se trbajaron horas extra\n");
            printf("Su pego es de: %f\n",p);
        }




}
