

#include<stdio.h>

int num,i,n;
int fib(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
return(fib(n-1)+fib(n-2));
}


int main()
{
printf("enter the the number for fabonaci series\n");
scanf("%d",&num);
for(i=0;i<num;i++)
printf("%d\t",fib(i));
printf("\n");
}


