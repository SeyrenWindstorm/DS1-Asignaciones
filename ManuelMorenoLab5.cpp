#include<stdlib.h>
#include<stdio.h>

main()

{

int n,r,m=1;


    printf("Dame un numero\n");
    scanf("%d",&n);
    printf("Multiplicacion:\n");

    while(m<13)
    {
      r=n*m;

      m++;
      printf("%d\n",r);

    }

}
