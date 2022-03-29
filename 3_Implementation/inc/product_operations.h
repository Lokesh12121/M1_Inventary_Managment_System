
#ifndef __PRODUCT_OPERATIONS_H__
#define __PRODUCT_OPERATIONS_H__

#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct Prod
{
   int id,price,quantity;
   char productName[100],Company[100],Mfg_Date[11],Exp_Date[11];
}m[100];

void DisplayProduct(int number);
void SearchProduct(int number);
void AddProduct(int number,struct Prod m[]);
void DeleteProduct(int number);
void UpdateProduct(int number);

#endif  