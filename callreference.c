#include<stdio.h>
void swap(int *c,int *d);
int main()
{ int c=50;
int d=20;
printf("Before swap of value c and d=%d,%d\n",c,d);
swap(&c,&d);
printf("\nAfter swap of value c and d=%d,%d",c,d);
    return 0;
}
void swap(int *c,int *d)
{int i;
i=*c;
*c=*d;
*d=i;
}