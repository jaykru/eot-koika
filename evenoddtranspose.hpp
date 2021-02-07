#ifndef MODULE_EVENODDTRANSPOSE_HPP
#define MODULE_EVENODDTRANSPOSE_HPP

//////////////
// PREAMBLE //
//////////////

#include "cuttlesim.hpp"

//////////////
// TYPEDEFS //
//////////////

namespace prims {
#ifndef SIM_MINIMAL
#endif

} // namespace prims

////////////////////
// IMPLEMENTATION //
////////////////////

template <typename extfuns_t> class module_evenoddtranspose {
public:
  struct state_t {
    bits<32> rData_0;
    bits<32> rData_1;
    bits<32> rData_2;
    bits<32> rData_3;
    bits<32> rData_4;
    bits<32> rData_5;
    bits<32> rData_6;
    bits<32> rData_7;
    bits<32> rData_8;
    bits<32> rData_9;
    bits<32> rData_10;
    bits<32> rData_11;
    bits<32> rData_12;
    bits<32> rData_13;
    bits<32> rData_14;
    bits<32> rData_15;
    bits<32> rData_16;
    bits<32> rData_17;
    bits<32> rData_18;
    bits<32> rData_19;
    bits<32> rData_20;
    bits<32> rData_21;
    bits<32> rData_22;
    bits<32> rData_23;
    bits<32> rData_24;
    bits<32> rData_25;
    bits<32> rData_26;
    bits<32> rData_27;
    bits<32> rData_28;
    bits<32> rData_29;
    bits<32> rData_30;
    bits<32> rData_31;
    bits<32> rData_32;
    bits<32> rData_33;
    bits<32> rData_34;
    bits<32> rData_35;
    bits<32> rData_36;
    bits<32> rData_37;
    bits<32> rData_38;
    bits<32> rData_39;
    bits<32> rData_40;
    bits<32> rData_41;
    bits<32> rData_42;
    bits<32> rData_43;
    bits<32> rData_44;
    bits<32> rData_45;
    bits<32> rData_46;
    bits<32> rData_47;
    bits<32> rData_48;
    bits<32> rData_49;
    bits<32> rData_50;
    bits<32> rData_51;
    bits<32> rData_52;
    bits<32> rData_53;
    bits<32> rData_54;
    bits<32> rData_55;
    bits<32> rData_56;
    bits<32> rData_57;
    bits<32> rData_58;
    bits<32> rData_59;
    bits<32> rData_60;
    bits<32> rData_61;
    bits<32> rData_62;
    bits<32> rData_63;
    bits<1> clock;

#ifndef SIM_MINIMAL
    void dump(std::ostream &os = std::cout) const {
      os << "rData_0 = " << rData_0 << std::endl;
      os << "rData_1 = " << rData_1 << std::endl;
      os << "rData_2 = " << rData_2 << std::endl;
      os << "rData_3 = " << rData_3 << std::endl;
      os << "rData_4 = " << rData_4 << std::endl;
      os << "rData_5 = " << rData_5 << std::endl;
      os << "rData_6 = " << rData_6 << std::endl;
      os << "rData_7 = " << rData_7 << std::endl;
      os << "rData_8 = " << rData_8 << std::endl;
      os << "rData_9 = " << rData_9 << std::endl;
      os << "rData_10 = " << rData_10 << std::endl;
      os << "rData_11 = " << rData_11 << std::endl;
      os << "rData_12 = " << rData_12 << std::endl;
      os << "rData_13 = " << rData_13 << std::endl;
      os << "rData_14 = " << rData_14 << std::endl;
      os << "rData_15 = " << rData_15 << std::endl;
      os << "rData_16 = " << rData_16 << std::endl;
      os << "rData_17 = " << rData_17 << std::endl;
      os << "rData_18 = " << rData_18 << std::endl;
      os << "rData_19 = " << rData_19 << std::endl;
      os << "rData_20 = " << rData_20 << std::endl;
      os << "rData_21 = " << rData_21 << std::endl;
      os << "rData_22 = " << rData_22 << std::endl;
      os << "rData_23 = " << rData_23 << std::endl;
      os << "rData_24 = " << rData_24 << std::endl;
      os << "rData_25 = " << rData_25 << std::endl;
      os << "rData_26 = " << rData_26 << std::endl;
      os << "rData_27 = " << rData_27 << std::endl;
      os << "rData_28 = " << rData_28 << std::endl;
      os << "rData_29 = " << rData_29 << std::endl;
      os << "rData_30 = " << rData_30 << std::endl;
      os << "rData_31 = " << rData_31 << std::endl;
      os << "rData_32 = " << rData_32 << std::endl;
      os << "rData_33 = " << rData_33 << std::endl;
      os << "rData_34 = " << rData_34 << std::endl;
      os << "rData_35 = " << rData_35 << std::endl;
      os << "rData_36 = " << rData_36 << std::endl;
      os << "rData_37 = " << rData_37 << std::endl;
      os << "rData_38 = " << rData_38 << std::endl;
      os << "rData_39 = " << rData_39 << std::endl;
      os << "rData_40 = " << rData_40 << std::endl;
      os << "rData_41 = " << rData_41 << std::endl;
      os << "rData_42 = " << rData_42 << std::endl;
      os << "rData_43 = " << rData_43 << std::endl;
      os << "rData_44 = " << rData_44 << std::endl;
      os << "rData_45 = " << rData_45 << std::endl;
      os << "rData_46 = " << rData_46 << std::endl;
      os << "rData_47 = " << rData_47 << std::endl;
      os << "rData_48 = " << rData_48 << std::endl;
      os << "rData_49 = " << rData_49 << std::endl;
      os << "rData_50 = " << rData_50 << std::endl;
      os << "rData_51 = " << rData_51 << std::endl;
      os << "rData_52 = " << rData_52 << std::endl;
      os << "rData_53 = " << rData_53 << std::endl;
      os << "rData_54 = " << rData_54 << std::endl;
      os << "rData_55 = " << rData_55 << std::endl;
      os << "rData_56 = " << rData_56 << std::endl;
      os << "rData_57 = " << rData_57 << std::endl;
      os << "rData_58 = " << rData_58 << std::endl;
      os << "rData_59 = " << rData_59 << std::endl;
      os << "rData_60 = " << rData_60 << std::endl;
      os << "rData_61 = " << rData_61 << std::endl;
      os << "rData_62 = " << rData_62 << std::endl;
      os << "rData_63 = " << rData_63 << std::endl;
      os << "clock = " << clock << std::endl;
    }

    static _unused void vcd_header(std::ostream &os) {
#ifndef SIM_VCD_SCOPES
#define SIM_VCD_SCOPES                                                                             \
  { "TOP", "evenoddtranspose" }
#endif
      cuttlesim::vcd::begin_header(os, SIM_VCD_SCOPES);
      cuttlesim::vcd::var(os, "rData_0", 32);
      cuttlesim::vcd::var(os, "rData_1", 32);
      cuttlesim::vcd::var(os, "rData_2", 32);
      cuttlesim::vcd::var(os, "rData_3", 32);
      cuttlesim::vcd::var(os, "rData_4", 32);
      cuttlesim::vcd::var(os, "rData_5", 32);
      cuttlesim::vcd::var(os, "rData_6", 32);
      cuttlesim::vcd::var(os, "rData_7", 32);
      cuttlesim::vcd::var(os, "rData_8", 32);
      cuttlesim::vcd::var(os, "rData_9", 32);
      cuttlesim::vcd::var(os, "rData_10", 32);
      cuttlesim::vcd::var(os, "rData_11", 32);
      cuttlesim::vcd::var(os, "rData_12", 32);
      cuttlesim::vcd::var(os, "rData_13", 32);
      cuttlesim::vcd::var(os, "rData_14", 32);
      cuttlesim::vcd::var(os, "rData_15", 32);
      cuttlesim::vcd::var(os, "rData_16", 32);
      cuttlesim::vcd::var(os, "rData_17", 32);
      cuttlesim::vcd::var(os, "rData_18", 32);
      cuttlesim::vcd::var(os, "rData_19", 32);
      cuttlesim::vcd::var(os, "rData_20", 32);
      cuttlesim::vcd::var(os, "rData_21", 32);
      cuttlesim::vcd::var(os, "rData_22", 32);
      cuttlesim::vcd::var(os, "rData_23", 32);
      cuttlesim::vcd::var(os, "rData_24", 32);
      cuttlesim::vcd::var(os, "rData_25", 32);
      cuttlesim::vcd::var(os, "rData_26", 32);
      cuttlesim::vcd::var(os, "rData_27", 32);
      cuttlesim::vcd::var(os, "rData_28", 32);
      cuttlesim::vcd::var(os, "rData_29", 32);
      cuttlesim::vcd::var(os, "rData_30", 32);
      cuttlesim::vcd::var(os, "rData_31", 32);
      cuttlesim::vcd::var(os, "rData_32", 32);
      cuttlesim::vcd::var(os, "rData_33", 32);
      cuttlesim::vcd::var(os, "rData_34", 32);
      cuttlesim::vcd::var(os, "rData_35", 32);
      cuttlesim::vcd::var(os, "rData_36", 32);
      cuttlesim::vcd::var(os, "rData_37", 32);
      cuttlesim::vcd::var(os, "rData_38", 32);
      cuttlesim::vcd::var(os, "rData_39", 32);
      cuttlesim::vcd::var(os, "rData_40", 32);
      cuttlesim::vcd::var(os, "rData_41", 32);
      cuttlesim::vcd::var(os, "rData_42", 32);
      cuttlesim::vcd::var(os, "rData_43", 32);
      cuttlesim::vcd::var(os, "rData_44", 32);
      cuttlesim::vcd::var(os, "rData_45", 32);
      cuttlesim::vcd::var(os, "rData_46", 32);
      cuttlesim::vcd::var(os, "rData_47", 32);
      cuttlesim::vcd::var(os, "rData_48", 32);
      cuttlesim::vcd::var(os, "rData_49", 32);
      cuttlesim::vcd::var(os, "rData_50", 32);
      cuttlesim::vcd::var(os, "rData_51", 32);
      cuttlesim::vcd::var(os, "rData_52", 32);
      cuttlesim::vcd::var(os, "rData_53", 32);
      cuttlesim::vcd::var(os, "rData_54", 32);
      cuttlesim::vcd::var(os, "rData_55", 32);
      cuttlesim::vcd::var(os, "rData_56", 32);
      cuttlesim::vcd::var(os, "rData_57", 32);
      cuttlesim::vcd::var(os, "rData_58", 32);
      cuttlesim::vcd::var(os, "rData_59", 32);
      cuttlesim::vcd::var(os, "rData_60", 32);
      cuttlesim::vcd::var(os, "rData_61", 32);
      cuttlesim::vcd::var(os, "rData_62", 32);
      cuttlesim::vcd::var(os, "rData_63", 32);
      cuttlesim::vcd::var(os, "clock", 1);
      cuttlesim::vcd::end_header(os, SIM_VCD_SCOPES);
    }

    void vcd_dumpvars(std::uint_fast64_t cycle_id, _unused std::ostream &os,
                      const state_t &previous, const bool force) const {
      os << '#' << cycle_id << std::endl;
      cuttlesim::vcd::dumpvar(os, "rData_0", rData_0, previous.rData_0, force);
      cuttlesim::vcd::dumpvar(os, "rData_1", rData_1, previous.rData_1, force);
      cuttlesim::vcd::dumpvar(os, "rData_2", rData_2, previous.rData_2, force);
      cuttlesim::vcd::dumpvar(os, "rData_3", rData_3, previous.rData_3, force);
      cuttlesim::vcd::dumpvar(os, "rData_4", rData_4, previous.rData_4, force);
      cuttlesim::vcd::dumpvar(os, "rData_5", rData_5, previous.rData_5, force);
      cuttlesim::vcd::dumpvar(os, "rData_6", rData_6, previous.rData_6, force);
      cuttlesim::vcd::dumpvar(os, "rData_7", rData_7, previous.rData_7, force);
      cuttlesim::vcd::dumpvar(os, "rData_8", rData_8, previous.rData_8, force);
      cuttlesim::vcd::dumpvar(os, "rData_9", rData_9, previous.rData_9, force);
      cuttlesim::vcd::dumpvar(os, "rData_10", rData_10, previous.rData_10, force);
      cuttlesim::vcd::dumpvar(os, "rData_11", rData_11, previous.rData_11, force);
      cuttlesim::vcd::dumpvar(os, "rData_12", rData_12, previous.rData_12, force);
      cuttlesim::vcd::dumpvar(os, "rData_13", rData_13, previous.rData_13, force);
      cuttlesim::vcd::dumpvar(os, "rData_14", rData_14, previous.rData_14, force);
      cuttlesim::vcd::dumpvar(os, "rData_15", rData_15, previous.rData_15, force);
      cuttlesim::vcd::dumpvar(os, "rData_16", rData_16, previous.rData_16, force);
      cuttlesim::vcd::dumpvar(os, "rData_17", rData_17, previous.rData_17, force);
      cuttlesim::vcd::dumpvar(os, "rData_18", rData_18, previous.rData_18, force);
      cuttlesim::vcd::dumpvar(os, "rData_19", rData_19, previous.rData_19, force);
      cuttlesim::vcd::dumpvar(os, "rData_20", rData_20, previous.rData_20, force);
      cuttlesim::vcd::dumpvar(os, "rData_21", rData_21, previous.rData_21, force);
      cuttlesim::vcd::dumpvar(os, "rData_22", rData_22, previous.rData_22, force);
      cuttlesim::vcd::dumpvar(os, "rData_23", rData_23, previous.rData_23, force);
      cuttlesim::vcd::dumpvar(os, "rData_24", rData_24, previous.rData_24, force);
      cuttlesim::vcd::dumpvar(os, "rData_25", rData_25, previous.rData_25, force);
      cuttlesim::vcd::dumpvar(os, "rData_26", rData_26, previous.rData_26, force);
      cuttlesim::vcd::dumpvar(os, "rData_27", rData_27, previous.rData_27, force);
      cuttlesim::vcd::dumpvar(os, "rData_28", rData_28, previous.rData_28, force);
      cuttlesim::vcd::dumpvar(os, "rData_29", rData_29, previous.rData_29, force);
      cuttlesim::vcd::dumpvar(os, "rData_30", rData_30, previous.rData_30, force);
      cuttlesim::vcd::dumpvar(os, "rData_31", rData_31, previous.rData_31, force);
      cuttlesim::vcd::dumpvar(os, "rData_32", rData_32, previous.rData_32, force);
      cuttlesim::vcd::dumpvar(os, "rData_33", rData_33, previous.rData_33, force);
      cuttlesim::vcd::dumpvar(os, "rData_34", rData_34, previous.rData_34, force);
      cuttlesim::vcd::dumpvar(os, "rData_35", rData_35, previous.rData_35, force);
      cuttlesim::vcd::dumpvar(os, "rData_36", rData_36, previous.rData_36, force);
      cuttlesim::vcd::dumpvar(os, "rData_37", rData_37, previous.rData_37, force);
      cuttlesim::vcd::dumpvar(os, "rData_38", rData_38, previous.rData_38, force);
      cuttlesim::vcd::dumpvar(os, "rData_39", rData_39, previous.rData_39, force);
      cuttlesim::vcd::dumpvar(os, "rData_40", rData_40, previous.rData_40, force);
      cuttlesim::vcd::dumpvar(os, "rData_41", rData_41, previous.rData_41, force);
      cuttlesim::vcd::dumpvar(os, "rData_42", rData_42, previous.rData_42, force);
      cuttlesim::vcd::dumpvar(os, "rData_43", rData_43, previous.rData_43, force);
      cuttlesim::vcd::dumpvar(os, "rData_44", rData_44, previous.rData_44, force);
      cuttlesim::vcd::dumpvar(os, "rData_45", rData_45, previous.rData_45, force);
      cuttlesim::vcd::dumpvar(os, "rData_46", rData_46, previous.rData_46, force);
      cuttlesim::vcd::dumpvar(os, "rData_47", rData_47, previous.rData_47, force);
      cuttlesim::vcd::dumpvar(os, "rData_48", rData_48, previous.rData_48, force);
      cuttlesim::vcd::dumpvar(os, "rData_49", rData_49, previous.rData_49, force);
      cuttlesim::vcd::dumpvar(os, "rData_50", rData_50, previous.rData_50, force);
      cuttlesim::vcd::dumpvar(os, "rData_51", rData_51, previous.rData_51, force);
      cuttlesim::vcd::dumpvar(os, "rData_52", rData_52, previous.rData_52, force);
      cuttlesim::vcd::dumpvar(os, "rData_53", rData_53, previous.rData_53, force);
      cuttlesim::vcd::dumpvar(os, "rData_54", rData_54, previous.rData_54, force);
      cuttlesim::vcd::dumpvar(os, "rData_55", rData_55, previous.rData_55, force);
      cuttlesim::vcd::dumpvar(os, "rData_56", rData_56, previous.rData_56, force);
      cuttlesim::vcd::dumpvar(os, "rData_57", rData_57, previous.rData_57, force);
      cuttlesim::vcd::dumpvar(os, "rData_58", rData_58, previous.rData_58, force);
      cuttlesim::vcd::dumpvar(os, "rData_59", rData_59, previous.rData_59, force);
      cuttlesim::vcd::dumpvar(os, "rData_60", rData_60, previous.rData_60, force);
      cuttlesim::vcd::dumpvar(os, "rData_61", rData_61, previous.rData_61, force);
      cuttlesim::vcd::dumpvar(os, "rData_62", rData_62, previous.rData_62, force);
      cuttlesim::vcd::dumpvar(os, "rData_63", rData_63, previous.rData_63, force);
      cuttlesim::vcd::dumpvar(os, "clock", clock, previous.clock, force);
    }

    std::uint_fast64_t vcd_readvars(_unused std::istream &is) {
      std::string var{}, val{};
      std::uint_fast64_t cycle_id = std::numeric_limits<std::uint_fast64_t>::max();
      cuttlesim::vcd::read_header(is);
      while (cuttlesim::vcd::readvar(is, cycle_id, var, val)) {
        if (var == "rData_0") {
          rData_0 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_1") {
          rData_1 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_2") {
          rData_2 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_3") {
          rData_3 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_4") {
          rData_4 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_5") {
          rData_5 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_6") {
          rData_6 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_7") {
          rData_7 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_8") {
          rData_8 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_9") {
          rData_9 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_10") {
          rData_10 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_11") {
          rData_11 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_12") {
          rData_12 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_13") {
          rData_13 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_14") {
          rData_14 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_15") {
          rData_15 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_16") {
          rData_16 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_17") {
          rData_17 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_18") {
          rData_18 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_19") {
          rData_19 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_20") {
          rData_20 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_21") {
          rData_21 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_22") {
          rData_22 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_23") {
          rData_23 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_24") {
          rData_24 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_25") {
          rData_25 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_26") {
          rData_26 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_27") {
          rData_27 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_28") {
          rData_28 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_29") {
          rData_29 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_30") {
          rData_30 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_31") {
          rData_31 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_32") {
          rData_32 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_33") {
          rData_33 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_34") {
          rData_34 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_35") {
          rData_35 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_36") {
          rData_36 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_37") {
          rData_37 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_38") {
          rData_38 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_39") {
          rData_39 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_40") {
          rData_40 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_41") {
          rData_41 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_42") {
          rData_42 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_43") {
          rData_43 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_44") {
          rData_44 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_45") {
          rData_45 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_46") {
          rData_46 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_47") {
          rData_47 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_48") {
          rData_48 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_49") {
          rData_49 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_50") {
          rData_50 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_51") {
          rData_51 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_52") {
          rData_52 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_53") {
          rData_53 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_54") {
          rData_54 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_55") {
          rData_55 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_56") {
          rData_56 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_57") {
          rData_57 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_58") {
          rData_58 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_59") {
          rData_59 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_60") {
          rData_60 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_61") {
          rData_61 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_62") {
          rData_62 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "rData_63") {
          rData_63 = prims::unpack<bits<32>>(bits<32>::of_str(val));
        } else if (var == "clock") {
          clock = prims::unpack<bits<1>>(bits<1>::of_str(val));
        }
      }
      return cycle_id;
    }
#endif
  };

  using snapshot_t = cuttlesim::snapshot_t<state_t>;

protected:
  struct rwset_t {
    cuttlesim::ehr_rwset rData_1;
    cuttlesim::ehr_rwset rData_2;
    cuttlesim::ehr_rwset rData_3;
    cuttlesim::ehr_rwset rData_4;
    cuttlesim::ehr_rwset rData_5;
    cuttlesim::ehr_rwset rData_6;
    cuttlesim::ehr_rwset rData_7;
    cuttlesim::ehr_rwset rData_8;
    cuttlesim::ehr_rwset rData_9;
    cuttlesim::ehr_rwset rData_10;
    cuttlesim::ehr_rwset rData_11;
    cuttlesim::ehr_rwset rData_12;
    cuttlesim::ehr_rwset rData_13;
    cuttlesim::ehr_rwset rData_14;
    cuttlesim::ehr_rwset rData_15;
    cuttlesim::ehr_rwset rData_16;
    cuttlesim::ehr_rwset rData_17;
    cuttlesim::ehr_rwset rData_18;
    cuttlesim::ehr_rwset rData_19;
    cuttlesim::ehr_rwset rData_20;
    cuttlesim::ehr_rwset rData_21;
    cuttlesim::ehr_rwset rData_22;
    cuttlesim::ehr_rwset rData_23;
    cuttlesim::ehr_rwset rData_24;
    cuttlesim::ehr_rwset rData_25;
    cuttlesim::ehr_rwset rData_26;
    cuttlesim::ehr_rwset rData_27;
    cuttlesim::ehr_rwset rData_28;
    cuttlesim::ehr_rwset rData_29;
    cuttlesim::ehr_rwset rData_30;
    cuttlesim::ehr_rwset rData_31;
    cuttlesim::ehr_rwset rData_32;
    cuttlesim::ehr_rwset rData_33;
    cuttlesim::ehr_rwset rData_34;
    cuttlesim::ehr_rwset rData_35;
    cuttlesim::ehr_rwset rData_36;
    cuttlesim::ehr_rwset rData_37;
    cuttlesim::ehr_rwset rData_38;
    cuttlesim::ehr_rwset rData_39;
    cuttlesim::ehr_rwset rData_40;
    cuttlesim::ehr_rwset rData_41;
    cuttlesim::ehr_rwset rData_42;
    cuttlesim::ehr_rwset rData_43;
    cuttlesim::ehr_rwset rData_44;
    cuttlesim::ehr_rwset rData_45;
    cuttlesim::ehr_rwset rData_46;
    cuttlesim::ehr_rwset rData_47;
    cuttlesim::ehr_rwset rData_48;
    cuttlesim::ehr_rwset rData_49;
    cuttlesim::ehr_rwset rData_50;
    cuttlesim::ehr_rwset rData_51;
    cuttlesim::ehr_rwset rData_52;
    cuttlesim::ehr_rwset rData_53;
    cuttlesim::ehr_rwset rData_54;
    cuttlesim::ehr_rwset rData_55;
    cuttlesim::ehr_rwset rData_56;
    cuttlesim::ehr_rwset rData_57;
    cuttlesim::ehr_rwset rData_58;
    cuttlesim::ehr_rwset rData_59;
    cuttlesim::ehr_rwset rData_60;
    cuttlesim::ehr_rwset rData_61;
    cuttlesim::ehr_rwset rData_62;
  };

  struct log_t {
    rwset_t rwset;
    state_t state;

    const state_t &snapshot() const { return state; }
    explicit log_t(const state_t &init) : rwset{}, state(init) {}
  };

  log_t log;
  log_t Log;
  extfuns_t extfuns;
  cuttlesim::sim_metadata meta;

#ifndef SIM_MINIMAL
  std::default_random_engine rng{};
  std::uniform_int_distribution<int> uniform{0, 2};
#endif

#define RULE_NAME tick
  DEF_RESET(tick) { log.state.clock = Log.state.clock; }

  DEF_COMMIT(tick) { Log.state.clock = log.state.clock; }

  DEF_RULE(tick) {
    bits<1> _v0 = READ0_FAST(clock);
    WRITE0_FAST(clock, (_v0 + 1'1_b));

    COMMIT();
  }
#undef RULE_NAME

#define RULE_NAME do_swap_evens
  DEF_RESET(do_swap_evens) { log = Log; }

  DEF_COMMIT(do_swap_evens) { Log = log; }

  DECL_FN(write_vect_0, unit)
  DEF_FN(write_vect_0, unit &_ret, bits<32> val) {
    WRITE1(rData_1, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_1, unit)
  DEF_FN(write_vect_1, unit &_ret, bits<32> val) {
    WRITE1_FAST(rData_0, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_2, unit)
  DEF_FN(write_vect_2, unit &_ret, bits<32> val) {
    WRITE1(rData_3, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_3, unit)
  DEF_FN(write_vect_3, unit &_ret, bits<32> val) {
    WRITE1(rData_2, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_4, unit)
  DEF_FN(write_vect_4, unit &_ret, bits<32> val) {
    WRITE1(rData_5, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_5, unit)
  DEF_FN(write_vect_5, unit &_ret, bits<32> val) {
    WRITE1(rData_4, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_6, unit)
  DEF_FN(write_vect_6, unit &_ret, bits<32> val) {
    WRITE1(rData_7, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_7, unit)
  DEF_FN(write_vect_7, unit &_ret, bits<32> val) {
    WRITE1(rData_6, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_8, unit)
  DEF_FN(write_vect_8, unit &_ret, bits<32> val) {
    WRITE1(rData_9, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_9, unit)
  DEF_FN(write_vect_9, unit &_ret, bits<32> val) {
    WRITE1(rData_8, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_10, unit)
  DEF_FN(write_vect_10, unit &_ret, bits<32> val) {
    WRITE1(rData_11, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_11, unit)
  DEF_FN(write_vect_11, unit &_ret, bits<32> val) {
    WRITE1(rData_10, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_12, unit)
  DEF_FN(write_vect_12, unit &_ret, bits<32> val) {
    WRITE1(rData_13, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_13, unit)
  DEF_FN(write_vect_13, unit &_ret, bits<32> val) {
    WRITE1(rData_12, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_14, unit)
  DEF_FN(write_vect_14, unit &_ret, bits<32> val) {
    WRITE1(rData_15, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_15, unit)
  DEF_FN(write_vect_15, unit &_ret, bits<32> val) {
    WRITE1(rData_14, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_16, unit)
  DEF_FN(write_vect_16, unit &_ret, bits<32> val) {
    WRITE1(rData_17, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_17, unit)
  DEF_FN(write_vect_17, unit &_ret, bits<32> val) {
    WRITE1(rData_16, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_18, unit)
  DEF_FN(write_vect_18, unit &_ret, bits<32> val) {
    WRITE1(rData_19, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_19, unit)
  DEF_FN(write_vect_19, unit &_ret, bits<32> val) {
    WRITE1(rData_18, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_20, unit)
  DEF_FN(write_vect_20, unit &_ret, bits<32> val) {
    WRITE1(rData_21, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_21, unit)
  DEF_FN(write_vect_21, unit &_ret, bits<32> val) {
    WRITE1(rData_20, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_22, unit)
  DEF_FN(write_vect_22, unit &_ret, bits<32> val) {
    WRITE1(rData_23, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_23, unit)
  DEF_FN(write_vect_23, unit &_ret, bits<32> val) {
    WRITE1(rData_22, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_24, unit)
  DEF_FN(write_vect_24, unit &_ret, bits<32> val) {
    WRITE1(rData_25, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_25, unit)
  DEF_FN(write_vect_25, unit &_ret, bits<32> val) {
    WRITE1(rData_24, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_26, unit)
  DEF_FN(write_vect_26, unit &_ret, bits<32> val) {
    WRITE1(rData_27, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_27, unit)
  DEF_FN(write_vect_27, unit &_ret, bits<32> val) {
    WRITE1(rData_26, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_28, unit)
  DEF_FN(write_vect_28, unit &_ret, bits<32> val) {
    WRITE1(rData_29, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_29, unit)
  DEF_FN(write_vect_29, unit &_ret, bits<32> val) {
    WRITE1(rData_28, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_30, unit)
  DEF_FN(write_vect_30, unit &_ret, bits<32> val) {
    WRITE1(rData_31, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_31, unit)
  DEF_FN(write_vect_31, unit &_ret, bits<32> val) {
    WRITE1(rData_30, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_32, unit)
  DEF_FN(write_vect_32, unit &_ret, bits<32> val) {
    WRITE1(rData_33, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_33, unit)
  DEF_FN(write_vect_33, unit &_ret, bits<32> val) {
    WRITE1(rData_32, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_34, unit)
  DEF_FN(write_vect_34, unit &_ret, bits<32> val) {
    WRITE1(rData_35, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_35, unit)
  DEF_FN(write_vect_35, unit &_ret, bits<32> val) {
    WRITE1(rData_34, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_36, unit)
  DEF_FN(write_vect_36, unit &_ret, bits<32> val) {
    WRITE1(rData_37, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_37, unit)
  DEF_FN(write_vect_37, unit &_ret, bits<32> val) {
    WRITE1(rData_36, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_38, unit)
  DEF_FN(write_vect_38, unit &_ret, bits<32> val) {
    WRITE1(rData_39, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_39, unit)
  DEF_FN(write_vect_39, unit &_ret, bits<32> val) {
    WRITE1(rData_38, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_40, unit)
  DEF_FN(write_vect_40, unit &_ret, bits<32> val) {
    WRITE1(rData_41, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_41, unit)
  DEF_FN(write_vect_41, unit &_ret, bits<32> val) {
    WRITE1(rData_40, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_42, unit)
  DEF_FN(write_vect_42, unit &_ret, bits<32> val) {
    WRITE1(rData_43, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_43, unit)
  DEF_FN(write_vect_43, unit &_ret, bits<32> val) {
    WRITE1(rData_42, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_44, unit)
  DEF_FN(write_vect_44, unit &_ret, bits<32> val) {
    WRITE1(rData_45, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_45, unit)
  DEF_FN(write_vect_45, unit &_ret, bits<32> val) {
    WRITE1(rData_44, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_46, unit)
  DEF_FN(write_vect_46, unit &_ret, bits<32> val) {
    WRITE1(rData_47, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_47, unit)
  DEF_FN(write_vect_47, unit &_ret, bits<32> val) {
    WRITE1(rData_46, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_48, unit)
  DEF_FN(write_vect_48, unit &_ret, bits<32> val) {
    WRITE1(rData_49, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_49, unit)
  DEF_FN(write_vect_49, unit &_ret, bits<32> val) {
    WRITE1(rData_48, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_50, unit)
  DEF_FN(write_vect_50, unit &_ret, bits<32> val) {
    WRITE1(rData_51, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_51, unit)
  DEF_FN(write_vect_51, unit &_ret, bits<32> val) {
    WRITE1(rData_50, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_52, unit)
  DEF_FN(write_vect_52, unit &_ret, bits<32> val) {
    WRITE1(rData_53, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_53, unit)
  DEF_FN(write_vect_53, unit &_ret, bits<32> val) {
    WRITE1(rData_52, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_54, unit)
  DEF_FN(write_vect_54, unit &_ret, bits<32> val) {
    WRITE1(rData_55, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_55, unit)
  DEF_FN(write_vect_55, unit &_ret, bits<32> val) {
    WRITE1(rData_54, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_56, unit)
  DEF_FN(write_vect_56, unit &_ret, bits<32> val) {
    WRITE1(rData_57, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_57, unit)
  DEF_FN(write_vect_57, unit &_ret, bits<32> val) {
    WRITE1(rData_56, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_58, unit)
  DEF_FN(write_vect_58, unit &_ret, bits<32> val) {
    WRITE1(rData_59, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_59, unit)
  DEF_FN(write_vect_59, unit &_ret, bits<32> val) {
    WRITE1(rData_58, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_60, unit)
  DEF_FN(write_vect_60, unit &_ret, bits<32> val) {
    WRITE1(rData_61, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_61, unit)
  DEF_FN(write_vect_61, unit &_ret, bits<32> val) {
    WRITE1(rData_60, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_62, unit)
  DEF_FN(write_vect_62, unit &_ret, bits<32> val) {
    WRITE1_FAST(rData_63, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_63, unit)
  DEF_FN(write_vect_63, unit &_ret, bits<32> val) {
    WRITE1(rData_62, val);
    _ret = prims::tt;
    return true;
  }
  DEF_RULE(do_swap_evens) {
    bits<1> _x1 = READ0_FAST(clock);
    if (~(~(_x1))) {
      FAIL_FAST();
    }
    /* bind */ {
      bits<32> left_val = READ0_FAST(rData_0);
      bits<32> right_val = READ0_FAST(rData_0);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_0, left_val);
        CALL_FN(write_vect_1, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_2);
      bits<32> right_val = READ0(rData_2);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_2, left_val);
        CALL_FN(write_vect_3, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_4);
      bits<32> right_val = READ0(rData_4);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_4, left_val);
        CALL_FN(write_vect_5, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_6);
      bits<32> right_val = READ0(rData_6);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_6, left_val);
        CALL_FN(write_vect_7, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_8);
      bits<32> right_val = READ0(rData_8);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_8, left_val);
        CALL_FN(write_vect_9, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_10);
      bits<32> right_val = READ0(rData_10);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_10, left_val);
        CALL_FN(write_vect_11, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_12);
      bits<32> right_val = READ0(rData_12);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_12, left_val);
        CALL_FN(write_vect_13, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_14);
      bits<32> right_val = READ0(rData_14);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_14, left_val);
        CALL_FN(write_vect_15, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_16);
      bits<32> right_val = READ0(rData_16);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_16, left_val);
        CALL_FN(write_vect_17, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_18);
      bits<32> right_val = READ0(rData_18);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_18, left_val);
        CALL_FN(write_vect_19, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_20);
      bits<32> right_val = READ0(rData_20);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_20, left_val);
        CALL_FN(write_vect_21, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_22);
      bits<32> right_val = READ0(rData_22);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_22, left_val);
        CALL_FN(write_vect_23, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_24);
      bits<32> right_val = READ0(rData_24);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_24, left_val);
        CALL_FN(write_vect_25, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_26);
      bits<32> right_val = READ0(rData_26);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_26, left_val);
        CALL_FN(write_vect_27, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_28);
      bits<32> right_val = READ0(rData_28);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_28, left_val);
        CALL_FN(write_vect_29, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_30);
      bits<32> right_val = READ0(rData_30);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_30, left_val);
        CALL_FN(write_vect_31, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_32);
      bits<32> right_val = READ0(rData_32);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_32, left_val);
        CALL_FN(write_vect_33, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_34);
      bits<32> right_val = READ0(rData_34);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_34, left_val);
        CALL_FN(write_vect_35, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_36);
      bits<32> right_val = READ0(rData_36);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_36, left_val);
        CALL_FN(write_vect_37, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_38);
      bits<32> right_val = READ0(rData_38);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_38, left_val);
        CALL_FN(write_vect_39, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_40);
      bits<32> right_val = READ0(rData_40);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_40, left_val);
        CALL_FN(write_vect_41, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_42);
      bits<32> right_val = READ0(rData_42);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_42, left_val);
        CALL_FN(write_vect_43, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_44);
      bits<32> right_val = READ0(rData_44);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_44, left_val);
        CALL_FN(write_vect_45, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_46);
      bits<32> right_val = READ0(rData_46);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_46, left_val);
        CALL_FN(write_vect_47, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_48);
      bits<32> right_val = READ0(rData_48);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_48, left_val);
        CALL_FN(write_vect_49, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_50);
      bits<32> right_val = READ0(rData_50);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_50, left_val);
        CALL_FN(write_vect_51, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_52);
      bits<32> right_val = READ0(rData_52);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_52, left_val);
        CALL_FN(write_vect_53, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_54);
      bits<32> right_val = READ0(rData_54);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_54, left_val);
        CALL_FN(write_vect_55, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_56);
      bits<32> right_val = READ0(rData_56);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_56, left_val);
        CALL_FN(write_vect_57, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_58);
      bits<32> right_val = READ0(rData_58);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_58, left_val);
        CALL_FN(write_vect_59, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_60);
      bits<32> right_val = READ0(rData_60);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_60, left_val);
        CALL_FN(write_vect_61, right_val);
      }
    }
    bits<32> left_val = READ0(rData_62);
    bits<32> right_val = READ0(rData_62);
    if ((left_val > right_val)) {
      CALL_FN(write_vect_62, left_val);
      CALL_FN(write_vect_63, right_val);
    }

    COMMIT();
  }
#undef RULE_NAME

#define RULE_NAME do_swap_odds
  DEF_RESET(do_swap_odds) { log = Log; }

  DEF_COMMIT(do_swap_odds) { Log = log; }

  DECL_FN(write_vect_64, unit)
  DEF_FN(write_vect_64, unit &_ret, bits<32> val) {
    WRITE1(rData_2, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_65, unit)
  DEF_FN(write_vect_65, unit &_ret, bits<32> val) {
    WRITE1(rData_1, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_66, unit)
  DEF_FN(write_vect_66, unit &_ret, bits<32> val) {
    WRITE1(rData_4, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_67, unit)
  DEF_FN(write_vect_67, unit &_ret, bits<32> val) {
    WRITE1(rData_3, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_68, unit)
  DEF_FN(write_vect_68, unit &_ret, bits<32> val) {
    WRITE1(rData_6, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_69, unit)
  DEF_FN(write_vect_69, unit &_ret, bits<32> val) {
    WRITE1(rData_5, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_70, unit)
  DEF_FN(write_vect_70, unit &_ret, bits<32> val) {
    WRITE1(rData_8, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_71, unit)
  DEF_FN(write_vect_71, unit &_ret, bits<32> val) {
    WRITE1(rData_7, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_72, unit)
  DEF_FN(write_vect_72, unit &_ret, bits<32> val) {
    WRITE1(rData_10, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_73, unit)
  DEF_FN(write_vect_73, unit &_ret, bits<32> val) {
    WRITE1(rData_9, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_74, unit)
  DEF_FN(write_vect_74, unit &_ret, bits<32> val) {
    WRITE1(rData_12, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_75, unit)
  DEF_FN(write_vect_75, unit &_ret, bits<32> val) {
    WRITE1(rData_11, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_76, unit)
  DEF_FN(write_vect_76, unit &_ret, bits<32> val) {
    WRITE1(rData_14, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_77, unit)
  DEF_FN(write_vect_77, unit &_ret, bits<32> val) {
    WRITE1(rData_13, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_78, unit)
  DEF_FN(write_vect_78, unit &_ret, bits<32> val) {
    WRITE1(rData_16, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_79, unit)
  DEF_FN(write_vect_79, unit &_ret, bits<32> val) {
    WRITE1(rData_15, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_80, unit)
  DEF_FN(write_vect_80, unit &_ret, bits<32> val) {
    WRITE1(rData_18, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_81, unit)
  DEF_FN(write_vect_81, unit &_ret, bits<32> val) {
    WRITE1(rData_17, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_82, unit)
  DEF_FN(write_vect_82, unit &_ret, bits<32> val) {
    WRITE1(rData_20, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_83, unit)
  DEF_FN(write_vect_83, unit &_ret, bits<32> val) {
    WRITE1(rData_19, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_84, unit)
  DEF_FN(write_vect_84, unit &_ret, bits<32> val) {
    WRITE1(rData_22, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_85, unit)
  DEF_FN(write_vect_85, unit &_ret, bits<32> val) {
    WRITE1(rData_21, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_86, unit)
  DEF_FN(write_vect_86, unit &_ret, bits<32> val) {
    WRITE1(rData_24, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_87, unit)
  DEF_FN(write_vect_87, unit &_ret, bits<32> val) {
    WRITE1(rData_23, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_88, unit)
  DEF_FN(write_vect_88, unit &_ret, bits<32> val) {
    WRITE1(rData_26, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_89, unit)
  DEF_FN(write_vect_89, unit &_ret, bits<32> val) {
    WRITE1(rData_25, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_90, unit)
  DEF_FN(write_vect_90, unit &_ret, bits<32> val) {
    WRITE1(rData_28, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_91, unit)
  DEF_FN(write_vect_91, unit &_ret, bits<32> val) {
    WRITE1(rData_27, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_92, unit)
  DEF_FN(write_vect_92, unit &_ret, bits<32> val) {
    WRITE1(rData_30, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_93, unit)
  DEF_FN(write_vect_93, unit &_ret, bits<32> val) {
    WRITE1(rData_29, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_94, unit)
  DEF_FN(write_vect_94, unit &_ret, bits<32> val) {
    WRITE1(rData_32, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_95, unit)
  DEF_FN(write_vect_95, unit &_ret, bits<32> val) {
    WRITE1(rData_31, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_96, unit)
  DEF_FN(write_vect_96, unit &_ret, bits<32> val) {
    WRITE1(rData_34, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_97, unit)
  DEF_FN(write_vect_97, unit &_ret, bits<32> val) {
    WRITE1(rData_33, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_98, unit)
  DEF_FN(write_vect_98, unit &_ret, bits<32> val) {
    WRITE1(rData_36, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_99, unit)
  DEF_FN(write_vect_99, unit &_ret, bits<32> val) {
    WRITE1(rData_35, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_100, unit)
  DEF_FN(write_vect_100, unit &_ret, bits<32> val) {
    WRITE1(rData_38, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_101, unit)
  DEF_FN(write_vect_101, unit &_ret, bits<32> val) {
    WRITE1(rData_37, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_102, unit)
  DEF_FN(write_vect_102, unit &_ret, bits<32> val) {
    WRITE1(rData_40, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_103, unit)
  DEF_FN(write_vect_103, unit &_ret, bits<32> val) {
    WRITE1(rData_39, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_104, unit)
  DEF_FN(write_vect_104, unit &_ret, bits<32> val) {
    WRITE1(rData_42, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_105, unit)
  DEF_FN(write_vect_105, unit &_ret, bits<32> val) {
    WRITE1(rData_41, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_106, unit)
  DEF_FN(write_vect_106, unit &_ret, bits<32> val) {
    WRITE1(rData_44, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_107, unit)
  DEF_FN(write_vect_107, unit &_ret, bits<32> val) {
    WRITE1(rData_43, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_108, unit)
  DEF_FN(write_vect_108, unit &_ret, bits<32> val) {
    WRITE1(rData_46, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_109, unit)
  DEF_FN(write_vect_109, unit &_ret, bits<32> val) {
    WRITE1(rData_45, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_110, unit)
  DEF_FN(write_vect_110, unit &_ret, bits<32> val) {
    WRITE1(rData_48, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_111, unit)
  DEF_FN(write_vect_111, unit &_ret, bits<32> val) {
    WRITE1(rData_47, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_112, unit)
  DEF_FN(write_vect_112, unit &_ret, bits<32> val) {
    WRITE1(rData_50, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_113, unit)
  DEF_FN(write_vect_113, unit &_ret, bits<32> val) {
    WRITE1(rData_49, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_114, unit)
  DEF_FN(write_vect_114, unit &_ret, bits<32> val) {
    WRITE1(rData_52, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_115, unit)
  DEF_FN(write_vect_115, unit &_ret, bits<32> val) {
    WRITE1(rData_51, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_116, unit)
  DEF_FN(write_vect_116, unit &_ret, bits<32> val) {
    WRITE1(rData_54, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_117, unit)
  DEF_FN(write_vect_117, unit &_ret, bits<32> val) {
    WRITE1(rData_53, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_118, unit)
  DEF_FN(write_vect_118, unit &_ret, bits<32> val) {
    WRITE1(rData_56, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_119, unit)
  DEF_FN(write_vect_119, unit &_ret, bits<32> val) {
    WRITE1(rData_55, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_120, unit)
  DEF_FN(write_vect_120, unit &_ret, bits<32> val) {
    WRITE1(rData_58, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_121, unit)
  DEF_FN(write_vect_121, unit &_ret, bits<32> val) {
    WRITE1(rData_57, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_122, unit)
  DEF_FN(write_vect_122, unit &_ret, bits<32> val) {
    WRITE1(rData_60, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_123, unit)
  DEF_FN(write_vect_123, unit &_ret, bits<32> val) {
    WRITE1(rData_59, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_124, unit)
  DEF_FN(write_vect_124, unit &_ret, bits<32> val) {
    WRITE1(rData_62, val);
    _ret = prims::tt;
    return true;
  }

  DECL_FN(write_vect_125, unit)
  DEF_FN(write_vect_125, unit &_ret, bits<32> val) {
    WRITE1(rData_61, val);
    _ret = prims::tt;
    return true;
  }
  DEF_RULE(do_swap_odds) {
    bits<1> _x0 = READ0_FAST(clock);
    if (~(_x0)) {
      FAIL_FAST();
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_1);
      bits<32> right_val = READ0(rData_1);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_64, left_val);
        CALL_FN(write_vect_65, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_3);
      bits<32> right_val = READ0(rData_3);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_66, left_val);
        CALL_FN(write_vect_67, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_5);
      bits<32> right_val = READ0(rData_5);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_68, left_val);
        CALL_FN(write_vect_69, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_7);
      bits<32> right_val = READ0(rData_7);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_70, left_val);
        CALL_FN(write_vect_71, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_9);
      bits<32> right_val = READ0(rData_9);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_72, left_val);
        CALL_FN(write_vect_73, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_11);
      bits<32> right_val = READ0(rData_11);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_74, left_val);
        CALL_FN(write_vect_75, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_13);
      bits<32> right_val = READ0(rData_13);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_76, left_val);
        CALL_FN(write_vect_77, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_15);
      bits<32> right_val = READ0(rData_15);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_78, left_val);
        CALL_FN(write_vect_79, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_17);
      bits<32> right_val = READ0(rData_17);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_80, left_val);
        CALL_FN(write_vect_81, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_19);
      bits<32> right_val = READ0(rData_19);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_82, left_val);
        CALL_FN(write_vect_83, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_21);
      bits<32> right_val = READ0(rData_21);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_84, left_val);
        CALL_FN(write_vect_85, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_23);
      bits<32> right_val = READ0(rData_23);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_86, left_val);
        CALL_FN(write_vect_87, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_25);
      bits<32> right_val = READ0(rData_25);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_88, left_val);
        CALL_FN(write_vect_89, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_27);
      bits<32> right_val = READ0(rData_27);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_90, left_val);
        CALL_FN(write_vect_91, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_29);
      bits<32> right_val = READ0(rData_29);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_92, left_val);
        CALL_FN(write_vect_93, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_31);
      bits<32> right_val = READ0(rData_31);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_94, left_val);
        CALL_FN(write_vect_95, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_33);
      bits<32> right_val = READ0(rData_33);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_96, left_val);
        CALL_FN(write_vect_97, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_35);
      bits<32> right_val = READ0(rData_35);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_98, left_val);
        CALL_FN(write_vect_99, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_37);
      bits<32> right_val = READ0(rData_37);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_100, left_val);
        CALL_FN(write_vect_101, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_39);
      bits<32> right_val = READ0(rData_39);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_102, left_val);
        CALL_FN(write_vect_103, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_41);
      bits<32> right_val = READ0(rData_41);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_104, left_val);
        CALL_FN(write_vect_105, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_43);
      bits<32> right_val = READ0(rData_43);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_106, left_val);
        CALL_FN(write_vect_107, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_45);
      bits<32> right_val = READ0(rData_45);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_108, left_val);
        CALL_FN(write_vect_109, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_47);
      bits<32> right_val = READ0(rData_47);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_110, left_val);
        CALL_FN(write_vect_111, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_49);
      bits<32> right_val = READ0(rData_49);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_112, left_val);
        CALL_FN(write_vect_113, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_51);
      bits<32> right_val = READ0(rData_51);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_114, left_val);
        CALL_FN(write_vect_115, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_53);
      bits<32> right_val = READ0(rData_53);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_116, left_val);
        CALL_FN(write_vect_117, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_55);
      bits<32> right_val = READ0(rData_55);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_118, left_val);
        CALL_FN(write_vect_119, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_57);
      bits<32> right_val = READ0(rData_57);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_120, left_val);
        CALL_FN(write_vect_121, right_val);
      }
    }
    /* bind */ {
      bits<32> left_val = READ0(rData_59);
      bits<32> right_val = READ0(rData_59);
      if ((left_val > right_val)) {
        CALL_FN(write_vect_122, left_val);
        CALL_FN(write_vect_123, right_val);
      }
    }
    bits<32> left_val = READ0(rData_61);
    bits<32> right_val = READ0(rData_61);
    if ((left_val > right_val)) {
      CALL_FN(write_vect_124, left_val);
      CALL_FN(write_vect_125, right_val);
    }

    COMMIT();
  }
#undef RULE_NAME

public:
  void finish(cuttlesim::exit_info exit_config, int exit_code) {
    meta.finished = true;
    meta.exit_config = exit_config;
    meta.exit_code = exit_code;
  }

  bool finished() { return meta.finished; }

  snapshot_t snapshot() const { return snapshot_t(Log.snapshot(), meta); }

  static constexpr state_t initial_state() {
    state_t init{
        .rData_0 = 0x32'0019_x,
        .rData_1 = 0x32'0032_x,
        .rData_2 = 0x32'004f_x,
        .rData_3 = 0x32'003d_x,
        .rData_4 = 0x32'0041_x,
        .rData_5 = 0x32'0015_x,
        .rData_6 = 0x32'0023_x,
        .rData_7 = 0x32'0053_x,
        .rData_8 = 0x32'0036_x,
        .rData_9 = 0x32'004d_x,
        .rData_10 = 0x32'002d_x,
        .rData_11 = 0x32'0030_x,
        .rData_12 = 0x32'0059_x,
        .rData_13 = 0x32'0037_x,
        .rData_14 = 0x32'0009_x,
        .rData_15 = 0x32'0048_x,
        .rData_16 = 0x32'0047_x,
        .rData_17 = 0x32'0039_x,
        .rData_18 = 0x32'001e_x,
        .rData_19 = 0x32'003f_x,
        .rData_20 = 0x32'004e_x,
        .rData_21 = 0x32'0029_x,
        .rData_22 = 0x32'0058_x,
        .rData_23 = 0x32'0031_x,
        .rData_24 = 0x32'0050_x,
        .rData_25 = 0x32'003b_x,
        .rData_26 = 0x32'003e_x,
        .rData_27 = 0x32'0044_x,
        .rData_28 = 0x32'002a_x,
        .rData_29 = 0x32'001f_x,
        .rData_30 = 0x32'0010_x,
        .rData_31 = 0x32'0025_x,
        .rData_32 = 0x32'000d_x,
        .rData_33 = 0x32'0008_x,
        .rData_34 = 0x32'0054_x,
        .rData_35 = 0x32'001b_x,
        .rData_36 = 0x32'0013_x,
        .rData_37 = 0x32'0014_x,
        .rData_38 = 0x32'000e_x,
        .rData_39 = 0x32'0060_x,
        .rData_40 = 32'1_b,
        .rData_41 = 0x32'0027_x,
        .rData_42 = 0x32'0005_x,
        .rData_43 = 0x32'0055_x,
        .rData_44 = 0x32'0016_x,
        .rData_45 = 0x32'001c_x,
        .rData_46 = 0x32'0045_x,
        .rData_47 = 0x32'0021_x,
        .rData_48 = 0x32'0061_x,
        .rData_49 = 0x32'0002_x,
        .rData_50 = 0x32'000b_x,
        .rData_51 = 0x32'0043_x,
        .rData_52 = 0x32'000c_x,
        .rData_53 = 0x32'002b_x,
        .rData_54 = 0x32'0012_x,
        .rData_55 = 0x32'0062_x,
        .rData_56 = 0x32'003a_x,
        .rData_57 = 0x32'0040_x,
        .rData_58 = 0x32'005c_x,
        .rData_59 = 0x32'002e_x,
        .rData_60 = 0x32'0064_x,
        .rData_61 = 0x32'001a_x,
        .rData_62 = 0x32'0022_x,
        .rData_63 = 32'0_b,
        .clock = 1'0_b,
    };
    return init;
  }

  explicit module_evenoddtranspose(const state_t init = initial_state())
      : log(init), Log(init), extfuns{}, meta{} {
#ifndef SIM_MINIMAL
    rng.seed(cuttlesim::random_seed);
#endif
  }

  _virtual void strobe() const {}

  void cycle() {
    meta.cycle_id++;
    log.rwset = Log.rwset = rwset_t{};
    rule_do_swap_evens();
    rule_do_swap_odds();
    rule_tick();
    strobe();
  }

  _flatten module_evenoddtranspose &run(std::uint_fast64_t ncycles) {
    for (std::uint_fast64_t cycle_id = 0; cycle_id < ncycles && !meta.finished; cycle_id++) {
      cycle();
    }
    return *this;
  }

#ifndef SIM_MINIMAL
  typedef bool (module_evenoddtranspose::*rule_ptr)();
  void cycle_randomized() {
    meta.cycle_id++;
    log.rwset = Log.rwset = rwset_t{};
    static constexpr rule_ptr rules[3]{&module_evenoddtranspose::rule_tick,
                                       &module_evenoddtranspose::rule_do_swap_evens,
                                       &module_evenoddtranspose::rule_do_swap_odds};
    (this->*rules[uniform(rng)])();
    strobe();
  }

  _flatten module_evenoddtranspose &run_randomized(std::uint_fast64_t ncycles) {
    for (std::uint_fast64_t cycle_id = 0; cycle_id < ncycles && !meta.finished; cycle_id++) {
      cycle_randomized();
    }
    return *this;
  }

  _flatten module_evenoddtranspose &trace(std::string fname, std::uint_fast64_t ncycles) {
    std::ofstream vcd(fname);
    state_t::vcd_header(vcd);
    state_t latest = Log.snapshot();
    latest.vcd_dumpvars(meta.cycle_id, vcd, latest, true);
    for (std::uint_fast64_t cycle_id = 0; cycle_id < ncycles && !meta.finished; cycle_id++) {
      cycle();
      state_t current = Log.snapshot();
      current.vcd_dumpvars(meta.cycle_id, vcd, latest, false);
      latest = current;
    }
    return *this;
  }

  _flatten module_evenoddtranspose &trace_randomized(std::string fname,
                                                     std::uint_fast64_t ncycles) {
    std::ofstream vcd(fname);
    state_t::vcd_header(vcd);
    state_t latest = Log.snapshot();
    latest.vcd_dumpvars(meta.cycle_id, vcd, latest, true);
    for (std::uint_fast64_t cycle_id = 0; cycle_id < ncycles && !meta.finished; cycle_id++) {
      cycle_randomized();
      state_t current = Log.snapshot();
      current.vcd_dumpvars(meta.cycle_id, vcd, latest, false);
      latest = current;
    }
    return *this;
  }
#endif
};

#endif
