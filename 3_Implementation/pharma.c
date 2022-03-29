
#include <product_operations.h>
 
int main()
{
  int i,j,choice,number=0,c;
  for(i=0;i<100;i++)
  {
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    strcpy(m[i].productName,"");
    strcpy(m[i].Company,"");
  }
  m[0].id=1;
  m[0].price=120;
  m[0].quantity=30;
  strcpy(m[0].Mfg_Date,"23-04-2021");
  strcpy(m[0].Exp_Date,"24-04-2022");
  strcpy(m[0].productName,"Paracetmol");
  strcpy(m[0].Company,"JK Pharma");
  
  do{
      printf("Enter\n1 - Add Product\n2 - Update Product\n3 - Delete product\n4 - Search Product\n5 - Display Product\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          {
              ++number;
              AddProduct(number,m);
              break;
          }
          case 2:
          {
              UpdateProduct(number+1);
              break;
          }
          case 3:
          {
              DeleteProduct(number+1);
              break;
          }
	        case 4:
          {
              SearchProduct(number+1);
              break;
          }
	        case 5:
          {
              DisplayProduct(number+1);
              break;
          }
      }
      printf("To Continue with other Options Enter 1 Else any other number\n");
      scanf("%d",&c);
    }while(c==1);
} 

