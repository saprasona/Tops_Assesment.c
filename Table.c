#include<stdio.h>
int main()
{ int n,i,s;
printf("Enter the number=");
scanf("%d",&n);
for(i=1;i<=10;i++)
{   s=i*n;
    printf("%d\n",s);}
    return 0;
}