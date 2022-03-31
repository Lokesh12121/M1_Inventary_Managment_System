/**
 * @file product_operations.h
 * @author Lokesh R 
 * @brief Interface for Add, Delete, Modify, Search and Display Products
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __PRODUCT_OPERATIONS_H__
#define __PRODUCT_OPERATIONS_H__

#include<stdio.h>
#include<string.h>
#include<ctype.h>

/**
* Create structure and features
* @brief Creating structure named Prod 
* @param[in] ID
* @param[in] Price
* @param[in] Quantity
* @return Stores value in variables
*/

struct Prod
{
   int id,price,quantity;
   char productName[100],Company[100],Mfg_Date[11],Exp_Date[11];
}m[100];

/**
 * @brief Displays all products/items in Inventory 
 */
void DisplayProduct(int number);

/**
 * @brief Searches for an Item/Product in Inventory 
 */
void SearchProduct(int number);

/**
 * @brief Adds an item in Inventory
 */
void AddProduct(int number,struct Prod m[]);

/**
 * @brief Deletes an item in Inventory 
 */
void DeleteProduct(int number);

/**
 * @brief Updates/Modify an item in Inventory 
 */
void UpdateProduct(int number);

#endif  /* _PRODUCT_OPERATIONS_H_ */
