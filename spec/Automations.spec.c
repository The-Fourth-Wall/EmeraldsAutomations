#include "../libs/cSpec/export/cSpec.h"
#include "hash_functions/hash_functions.module.spec.h"
#include "standard_string/standard_string.module.spec.h"

spec_suite({
  T_hash_functions();
  T_standard_string();
});

int main(void) { run_spec_suite("all"); }
