#include<stdio.h>
int main()
{
int a=10,b=30,c=40;
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
if(a<c)
{
    printf("a is the minimum\n");
}
else
{
    printf("c is the minimum");
}
}
{
if(b<c) 
{
    printf("b is the minimum");
}
else
{
    printf("c is the minimum");
}  
}
return 0;
}  
 