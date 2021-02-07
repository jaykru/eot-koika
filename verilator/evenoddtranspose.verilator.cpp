/*! Default driver for Kôika programs compiled to C++ using Verilator !*/
#include "verilator.hpp"
#include "Vevenoddtranspose.h"

// #include "Vevenoddtranspose__Dpi.h"
// If you have external functions implemented through DPI, uncomment the line
// above and add your definitions here.

int main(int argc, char** argv) {
  return _main<KoikaToplevel<Vevenoddtranspose>>(argc, argv);
}

// Local Variables:
// flycheck-clang-include-path: ("/usr/share/verilator/include" "/usr/share/verilator/include/vltstd/" "Vobj_dir/trace/" "Vobj_dir/opt/")
// End:
