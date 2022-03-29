/**
 * @file pharma_search.c
 * @author Karthik S (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<product_operations.h>

void SearchProduct(int number)
{
   int i,flag=0;
   char name[100];
   printf("Enter the Product Name\n");
   fflush(stdin);
   scanf("%s",name);
   for(i=0;i<number;i++)
   {
      if(strcmp(m[i].productName,name)==0)
      {
         flag=1;
         printf("These are the details of Product\n");
         printf("==================================================================================\n");
    	   printf("Id   Name            Price     Quantity  Company Name    Mfg Date    Exp Date\n");
	      printf("==================================================================================\n");
         printf("%-5d%-16s%-10d%-10d%-16s%-12s%-16s\n",m[i].id,m[i].productName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
         printf("===================================================================================\n");
      }
   }
   if(flag==0)
   {
      printf("Entered Name Not Found\n");
   }
}
