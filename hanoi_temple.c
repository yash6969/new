#include <stdio.h>

void hanoi(int n,int a,int b,int c);

int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n,1,2,3);
}

void hanoi(int n,int a,int b,int c)
{
    if(n != 1)
    {
    hanoi(n-1,a,c,b);
    printf("move disc of size %d from %d --> %d\n",n,a,c);
    hanoi(n-1,b,a,c);
    }
    else
    {
        printf("move disc of size %d from %d --> %d\n",1,a,c);
    }
}
