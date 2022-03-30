
#include "unity.h"
#include "product_operations.h"

#define PROJECT_NAME "pharma"

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

void test_add_product(void) {
  TEST_ASSERT_EQUAL(0, add_product("Add_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}

void test_delete_product(void) {
  TEST_ASSERT_EQUAL(0, add_product("Delete_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, delete_product("Delete_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}

void test_modify_product(void) {
  TEST_ASSERT_EQUAL(0, add_product("Modify_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, modify_product("Modify_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234", "Modified_id", "mname1", "123", "123", "cname1", "11-11-1235", "11-10-1235"));
  TEST_ASSERT_EQUAL(0, delete_product("Modified_id", "mname1", "123", "123", "cname1", "11-11-1235", "11-10-1235"));
}
void test_search_product(void) {
  TEST_ASSERT_EQUAL(0, add_product("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0 , search_product("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
  TEST_ASSERT_EQUAL(0, delete_product("Search_1", "mname", "1234", "1234", "cname", "12-12-1234", "12-12-1234"));
}
void test_display_product(void) 
{ 
  TEST_ASSERT_EQUAL(1, display_product()>0);
}
