#include "bars-test.h"
#include "bars.h"
#include "greatest.h"


TEST t_bars(void) {
  PASS();
}


SUITE(s_bars) {
  RUN_TEST(t_bars);
}


GREATEST_MAIN_DEFS();


int do_test(int argc, char **argv) {
  GREATEST_MAIN_BEGIN();
  RUN_SUITE(s_bars);
  GREATEST_MAIN_END();
  return(0);
}


int main(int argc, char **argv) {
  (void)argc; (void)argv;
  return(do_test(argc, argv));
}
