

#ifndef __PHARMA_OPERATIONS_H__
#define __PHARMA_OPERATIONS_H__

#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct Medicine
{
   int id,price,quantity;
   char medicneName[100],Company[100],Mfg_Date[11],Exp_Date[11];
}m[100];

void DisplayMedicine(int number);
void SearchMedicine(int number);
void AddMedicine(int number,struct Medicine m[]);
void DeleteMedicine(int number);
void UpdateMedicine(int number);

#endif  /* __PHARMA_OPERATIONS_H__*/