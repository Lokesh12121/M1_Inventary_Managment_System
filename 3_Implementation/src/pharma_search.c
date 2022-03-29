

#include<pharma_operations.h>

void SearchMedicine(int number)
{
   int i,flag=0;
   char name[100];
   printf("Enter the Medicine Name\n");
   fflush(stdin);
   scanf("%s",name);
   for(i=0;i<number;i++)
   {
      if(strcmp(m[i].medicneName,name)==0)
      {
         flag=1;
         printf("These are the details of Medicine\n");
         printf("==================================================================================\n");
    	   printf("Id   Name            Price     Quantity  Company Name    Mfg Date    Exp Date\n");
	      printf("==================================================================================\n");
         printf("%-5d%-16s%-10d%-10d%-16s%-12s%-16s\n",m[i].id,m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
         printf("===================================================================================\n");
      }
   }
   if(flag==0)
   {
      printf("Entered Name Not Found\n");
   }
}
