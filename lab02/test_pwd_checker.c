#include "pwd_checker.h"
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
  printf("Running tests...\n\n");
  int tests_passed = 0;
  int total_tests = 7;

  const char *test1_first = "Abraham";
  const char *test1_last = "Garcia";
  const char *test1_pwd = "qrtv?,mp!ltrA0b13rab4ham";
  bool test1 = check_password(test1_first, test1_last, test1_pwd);
  if (test1) {
    printf("Test 1 passed\n");
    tests_passed++;
  } else {
    printf("Test 1 failed\n");
  }

  const char *test2_first = "Anjali";
  const char *test2_last = "Patel";
  const char *test2_pwd = "Aj8r";
  bool test2 = check_password(test2_first, test2_last, test2_pwd);
  if (!test2) {
    printf("Test 2 passed\n");
    tests_passed++;
  } else {
    printf("Test 2 failed\n");
  }

  const char *test3_first = "Chantelle";
  const char *test3_last = "Brown";
  const char *test3_pwd = "QLRIOW815N";
  bool test3 = check_password(test3_first, test3_last, test3_pwd);
  if (!test3) {
    printf("Test 3 passed\n");
    tests_passed++;
  } else {
    printf("Test 3 failed\n");
  }

  const char *test4_first = "Wei";
  const char *test4_last = "Zhang";
  const char *test4_pwd = "pjkdihn!o901";
  bool test4 = check_password(test4_first, test4_last, test4_pwd);
  if (!test4) {
    printf("Test 4 passed\n");
    tests_passed++;
  } else {
    printf("Test 4 failed\n");
  }

  const char *test5_first = "John";
  const char *test5_last = "Smith";
  const char *test5_pwd = "ALKLIenhLq";
  bool test5 = check_password(test5_first, test5_last, test5_pwd);
  if (!test5) {
    printf("Test 5 passed\n");
    tests_passed++;
  } else {
    printf("Test 5 failed\n");
  }

  const char *test6_first = "Haeun";
  const char *test6_last = "Kim";
  const char *test6_pwd = "Ji9anjwHaeun";
  bool test6 = check_password(test6_first, test6_last, test6_pwd);
  if (!test6) {
    printf("Test 6 passed\n");
    tests_passed++;
  } else {
    printf("Test 6 failed\n");
  }

  const char *test7_first = "Adeline";
  const char *test7_last = "DuBois";
  const char *test7_pwd = "ALKLIDuBoisen3hLq";
  bool test7 = check_password(test7_first, test7_last, test7_pwd);
  if (!test7) {
    printf("Test 7 passed\n");
    tests_passed++;
  } else {
    printf("Test 7 failed\n");
  }

  printf("\nTests passed: %d/%d\n", tests_passed, total_tests);
  if (tests_passed == total_tests) {
    printf("Congrats! You have passed all of the test cases!\n");
  } else {
    printf("Some tests failed. Please check the output above.\n");
  }

  return 0;
}
