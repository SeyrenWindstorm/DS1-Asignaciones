#include<stdio.h>
#include<conio2.h>
#include<math.h>

main()
{

int d=1,t1,t2,tc=0,error=0;
float pc, pi;


while(t1!=0&&t2!=0)

{

printf("dame la temperatura mas baja del dia %d\n",d);
scanf("%d",&t1);
printf("dame la temperatura mas alta del dia %d\n",d);
scanf("%d",&t2);
d++;
 if(t1<t2)
 {
    tc=tc+1;
 }
else
 {
        printf("Datos Incorrectos\n");

 }

  if (t1==0||t2==0)
        {
           error=error+1;
        }

}

pc=(tc*100)/d;
pi=(error*100)/d;

printf("la cantidad de dias correctos es %d\n",tc);
printf("la cantidad de dias incorrectos es %d\n",error);
printf("el porcentaje de dias correctos es %f\n",pc);
printf("el porcentaje de dias incorrectos es %f\n",pi);


}
