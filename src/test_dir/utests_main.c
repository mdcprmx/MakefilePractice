#include "utests_lib.h"

int main() {
  SRunner *suite_runner = srunner_create(NULL);
  init_suites(&suite_runner);

  srunner_run_all(suite_runner, CK_NORMAL);
  size_t num_of_failed_tests = srunner_ntests_failed(suite_runner);

  srunner_free(suite_runner);
  return num_of_failed_tests;
}

void init_suites(SRunner **runner) {
  srunner_add_suite(*runner, s21_aaaa_full_test());
}
