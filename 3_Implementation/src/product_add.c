#include<product_operations.h>

void AddProduct(int number,struct Prod m[])
{
  char name[100];
  
  
  printf("Enter Product Id\n");
  scanf("%d",&(m[number].id));
  fflush(stdin);
  
  printf("Enter Product Name\n");
  scanf("%s",(m[number].productName));
  fflush(stdin);
  
  printf("Enter Company Name\n");
  fflush(stdin);
  scanf("%s",(m[number].Company));
  
  printf("Enter Manufactured Date\n");
  fflush(stdin);
  scanf("%s",(m[number].Mfg_Date));
  
  printf("Enter Expiry Date\n");
  fflush(stdin);
  scanf("%s",(m[number].Exp_Date));
  
  printf("Enter Quantity\n");
  fflush(stdin);
  scanf("%d",&(m[number].quantity));
  
  printf("Enter Price\n");
  fflush(stdin);
  scanf("%d",&(m[number].price));
  
  printf("Product with id %d Added Successfully\n",m[number].id);
}