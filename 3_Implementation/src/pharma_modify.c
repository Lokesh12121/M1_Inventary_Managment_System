

#include<pharma_operations.h>

void UpdateMedicine(int number)
{
  int id,quantity,choice,c,i;
  printf("Enter id to change Details\n");
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id && m[i].id!=0)
   {
    do
    {
        printf("Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\nAny other number to exit\n");
        scanf("%d",&choice);
        if(choice==1)
        {
         int quantity;
         printf("Enter Quantity to be update\n");
         fflush(stdin);
         scanf("%d",&quantity);
         m[i].quantity=quantity;
         printf("Quantity updated Successfully\n");
        }
        if(choice==2)
        {
         int price;
         printf("Enter Price to be update\n");
         fflush(stdin);
         scanf("%d",&price);
         m[i].price=price;
         printf("Price updated Successfully\n");
        }
        if(choice==3)
        {
         char name[100];
         printf("Enter Name to be update\n");
         fflush(stdin);
         scanf("%s",name);
         strcpy(m[i].medicneName,name);
         printf("Medicine Name updated Successfully\n");
        }
        if(choice==4)
        {
         char company[100];
         printf("Enter company to be update\n");
         fflush(stdin);
         scanf("%s",company);
         strcpy(m[i].Company,company);
         printf("Company updated Successfully\n");
        }
        if(choice==5)
        {
         char mfg[11];
         printf("Enter Manufacturing date to be updatd\n");
         fflush(stdin);
         scanf("%s",mfg);
         strcpy(m[i].Mfg_Date,mfg);
         printf("Manufacturing Date updated Successfully\n");
        }
        if(choice==6)
        {
         char exp[11];
         printf("Enter Expiry date to be update\n");
         fflush(stdin);
         scanf("%s",exp);
         strcpy(m[i].Exp_Date,exp);
         printf("Expiry Date updated Successfully\n");
        }
        if(choice<=0 && choice>6)
        {
         printf("Enter valid Choice\n");
        }
        printf("Enter 1 to Change other Details Else any other number\n");
        fflush(stdin);
        scanf("%d",&c);
    }while(c==1);
    break;
   }
  }
 }