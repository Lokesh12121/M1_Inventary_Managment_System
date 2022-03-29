

#include<product_operations.h>

void DeleteProduct(int number)
{
  int id,i,flag=0,num;
  printf("Enter Id to be deleted\n");
  fflush(stdin);
  scanf("%d",&id);
  
  for(i=0;i<number;i++)
  {
   if(m[i].id==id)
   {
    flag=1;
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].productName,"");
    strcpy(m[i].Company,"");
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    num=i;
    break;
   }
  }
  if(flag==1)
  {
   printf("Product with %d is Deleted Successfully\n",id);
  }
}
