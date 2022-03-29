

#include<pharma_operations.h>

void DisplayMedicine(int number)
{
  int i;
  if(number!=0)
  {
    printf("All Available Items are\n");
    printf("==================================================================================\n");
    printf("Id   Name            Price     Quantity  Company Name    Mfg Date    Exp Date\n");
	  printf("==================================================================================\n");
    
    for(i=0;i<number;i++)
    {
      if(m[i].id!=0)
      {
        printf("%-5d%-16s%-10d%-10d%-16s%-12s%-16s\n\n",m[i].id,m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
      }
    }
  }
  else
  {
    printf("\nNo Items or Medicines Available\n");
  }
}
