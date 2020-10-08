#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <elements.h>
#define PROJECT_NAME    "PeriodicTable"

/* Prototypes for all the test functions */
void test_info1(void);
void test_info2(void);
void test_info3(void);
void test_info4(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "info1", test_info1);
  CU_add_test(suite, "info2", test_info2);
  CU_add_test(suite, "info3", test_info3);
  CU_add_test(suite, "info4", test_info4);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_info1(void) {
  CU_ASSERT(1 == info1("HYDROGEN"));
  
  /* Dummy fail*/
/*  CU_ASSERT(1500 == add(750, 7500)); */
}

void test_info2(void) {
  CU_ASSERT(0 == info2("O"));
  
  /* Dummy fail*/
/*  CU_ASSERT(1 == subtract(1000, 900));  */
}

void test_info3(void) {
  CU_ASSERT(0 == info3(1));
  
  /* Dummy fail*/
/*  CU_ASSERT(2 == multiply(2, 5));  */
}

void test_info4(void) {
  CU_ASSERT(0 == info4(4));
  
  /* Dummy fail*/
/*  CU_ASSERT(3 == divide(2, 2)); */
}


