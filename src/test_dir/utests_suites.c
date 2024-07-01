#include "utests_lib.h"

START_TEST(aaaa_test_01) {
  char *string;

  char expected_result[100] = "moshi moshi world";
  char actual_result[100] = s21_aaaa(string);

  ck_assert_str_eq(expected_result, actual_result);

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
