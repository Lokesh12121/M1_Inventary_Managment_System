/**
 * @file product_test.c
 * @author Lokesh R
 * @brief 
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "unity.h"
#include "product_operations.h"
#define PROJECT_NAME "prod"


/* Prototypes for all the test functions */
void test_add_product(void);
void test_delete_product(void);
void test_modify_product(void);
void test_search_product(void);
void test_display_product(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add_product(void) {
  TEST_ASSERT_EQUAL(0, AddProduct("Add_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}

void test_delete_product(void) {
  TEST_ASSERT_EQUAL(0, AddProduct("Delete_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, DeleteProduct("Delete_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}

void test_modify_product(void) {
  TEST_ASSERT_EQUAL(0, AddProduct("Modify_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, UpdateProduct("Modify_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234", "Modified_id", "mname1", "123", "123", "cname1", "11-11-1235", "11-10-1235"));
  TEST_ASSERT_EQUAL(0, DeleteProduct("Modified_id", "mname1", "123", "123", "cname1", "11-11-1235", "11-10-1235"));
}
void test_search_product(void) {
  TEST_ASSERT_EQUAL(0, AddProduct("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0 , SearchProduct("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, DeleteProduct("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}
void test_display_product(void) 
{ 
  TEST_ASSERT_EQUAL(1, DisplayProduct()>0);
}

/* Start of the application test */
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_product);
  RUN_TEST(test_delete_product);
  RUN_TEST(test_modify_product);
  RUN_TEST(test_search_product);
  RUN_TEST(test_display_product);

  /* Close the Unity Test Framework */
  return UNITY_END();
}