#include "unity.h"
#include <main.h>

/* Prototypes for all the test functions */
void test_checkbalance(void);
void test_moneydeposite(void);
void test_moneywithdraw(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_checkbalance);
  RUN_TEST(test_moneydeposite);
  RUN_TEST(test_moneywithdraw);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_balance(void) {
  TEST_ASSERT_EQUAL(30, checkbalance(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, checkbalance(7500, 7500));
}

void test_deposite(void) {
  TEST_ASSERT_EQUAL(-3, moneydeposite(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, moneydeposite(1000, 900));
}

void test_withdraw(void) {
  TEST_ASSERT_EQUAL(0, moneywithdraw(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, moneywithdraw(2, 5));
}
