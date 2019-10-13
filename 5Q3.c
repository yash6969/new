#include<stdio.h>
int main()
{
            int i=1,a,b;
            long int k;
            printf("enter 2 integers");
            scanf("%d,%d",&a,&b);
            while(i<=b)
            {
                        k=k*i;
                        printf("%d",k);
                        i++;
            }

            return 0;


}
