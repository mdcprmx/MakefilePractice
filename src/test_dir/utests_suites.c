#include "utests_lib.h"

START_TEST(aaaa_test_01) {

  int num1 = 2;
  int num2 = 5;

  int expected_result = 7;
  int actual_result = s21_aaaa(num1, num2);

  ck_assert_int_eq(expected_result, actual_result);

}
END_TEST



Suite *s21_aaaa_full_test() {
  TCase *tcase = tcase_create("MF_Practice tcase");
  Suite *suite = suite_create("pract_suite");

  // add cases here
  tcase_add_test(tcase, aaaa_test_01);

  suite_add_tcase(suite, tcase);
  return suite;
}
