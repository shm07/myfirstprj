#include<stdio.h>
void swap(int *,int *);
int main()
{
int a=3,b=4,*ptra,*ptrb;
ptra=&a;
ptrb=&b;
swap(ptra,ptrb);
printf("a=%d,b=%d\n",a,b);

}


void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
