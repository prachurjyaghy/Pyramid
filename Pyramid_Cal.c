#include<stdio.h>

void main()
{
    int i,j,k,rows;
    scanf("%d",&rows);
      for(i=1;i<=rows;i++)
        {
        for(j=i;j<=rows;j++)
            printf(" ");

        for(k=1;k<=(2*i-1);k++)

         printf("%d",i);

        printf("\n");
        }
        return 0;
}

