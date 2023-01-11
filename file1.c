#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   while(1)
   {
   printf("Enter num: ");
   scanf("%d",&num);
   if(num==0)
   break;
   fprintf(fptr,"%d",num);
   fclose(fptr);
   }
   return 0;
}
  
