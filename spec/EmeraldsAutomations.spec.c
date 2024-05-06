#include "../libs/cSpec/export/cSpec.h"
#include "dll_export/dll_export.module.spec.h"
#include "version_setup/version_setup.module.spec.h"

spec_suite({
  T_dll_export();
  T_version_setup();
});

int main(void) { run_spec_suite("all"); }
