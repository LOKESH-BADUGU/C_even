// Online C compiler to run C program online
#include <stdio.h>
int divisor(int x,int y);
int main() {
   int a=6,b=0;
   printf("%d is proper divisor of %d \n",a,divisor(a,b));
   while(a<=100)
   {
   divisor(a+1,b);
   }
}
int divisor(int x,int y)
{
while(x<100)
{
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            y=y+i;
        }
    }
    if(x==y) /*? printf("%d is proper divisor of %d \n",x,x)  : printf("%d is not a  proper divisor of %d \n",x,x) ;*/
return x;
}
}
