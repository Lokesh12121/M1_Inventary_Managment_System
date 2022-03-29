


#include <pharma_operations.h>
 
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
    strcpy(m[i].medicneName,"");
    strcpy(m[i].Company,"");
  }
  m[0].id=1;
  m[0].price=120;
  m[0].quantity=30;
  strcpy(m[0].Mfg_Date,"23-04-2021");
  strcpy(m[0].Exp_Date,"24-04-2022");
  strcpy(m[0].medicneName,"Paracetmol");
  strcpy(m[0].Company,"JK Pharma");
  
  do{
      printf("Enter\n1 - Add Medicine\n2 - Update Medicine\n3 - Delete Medicine\n4 - Search Medicine\n5 - Display Medicine\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          {
              ++number;
              AddMedicine(number,m);
              break;
          }
          case 2:
          {
              UpdateMedicine(number+1);
              break;
          }
          case 3:
          {
              DeleteMedicine(number+1);
              break;
          }
	        case 4:
          {
              SearchMedicine(number+1);
              break;
          }
	        case 5:
          {
              DisplayMedicine(number+1);
              break;
          }
      }
      printf("To Continue with other Options Enter 1 Else any other number\n");
      scanf("%d",&c);
    }while(c==1);
} 

