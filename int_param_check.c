#include "sv_vpi_user.h"


#define CASE(_type) case _type: return #_type

char *type_to_string(PLI_INT32 type) {
    switch (type) {
        CASE(vpiAlways);
        CASE(vpiAssignStmt);
        CASE(vpiAssignment);
        CASE(vpiBegin);
        CASE(vpiCase);
        CASE(vpiCaseItem);
        CASE(vpiConstant);
        CASE(vpiContAssign);
        CASE(vpiDeassign);
        CASE(vpiDefParam);
        CASE(vpiDelayControl);
        CASE(vpiDisable);
        CASE(vpiEventControl);
        CASE(vpiEventStmt);
        CASE(vpiFor);
        CASE(vpiForce);
        CASE(vpiForever);
        CASE(vpiFork);
        CASE(vpiFuncCall);
        CASE(vpiFunction);
        CASE(vpiGate);
        CASE(vpiIf);
        CASE(vpiIfElse);
        CASE(vpiInitial);
        CASE(vpiIntegerVar);
        CASE(vpiInterModPath);
        CASE(vpiIterator);
        CASE(vpiIODecl);
        CASE(vpiMemory);
        CASE(vpiMemoryWord);
        CASE(vpiModPath);
        CASE(vpiModule);
        CASE(vpiNamedBegin);
        CASE(vpiNamedEvent);
        CASE(vpiNamedFork);
        CASE(vpiNet);
        CASE(vpiNetBit);
        CASE(vpiNullStmt);
        CASE(vpiOperation);
        CASE(vpiParamAssign);
        CASE(vpiParameter);
        CASE(vpiPartSelect);
        CASE(vpiPathTerm);
        CASE(vpiPort);
        CASE(vpiPortBit);
        CASE(vpiPrimTerm);
        CASE(vpiRealVar);
        CASE(vpiReg);
        CASE(vpiRegBit);
        CASE(vpiRelease);
        CASE(vpiRepeat);
        CASE(vpiRepeatControl);
        CASE(vpiSchedEvent);
        CASE(vpiSpecParam);
        CASE(vpiSwitch);
        CASE(vpiSysFuncCall);
        CASE(vpiSysTaskCall);
        CASE(vpiTableEntry);
        CASE(vpiTask);
        CASE(vpiTaskCall);
        CASE(vpiTchk);
        CASE(vpiTchkTerm);
        CASE(vpiTimeVar);
        CASE(vpiTimeQueue);
        CASE(vpiUdp);
        CASE(vpiUdpDefn);
        CASE(vpiUserSystf);
        CASE(vpiVarSelect);
        CASE(vpiWait);
        CASE(vpiWhile);
        CASE(vpiAttribute);
        CASE(vpiBitSelect);
        CASE(vpiCallback);
        CASE(vpiDelayTerm);
        CASE(vpiDelayDevice);
        CASE(vpiFrame);
        CASE(vpiGateArray);
        CASE(vpiModuleArray);
        CASE(vpiPrimitiveArray);
        CASE(vpiNetArray);
        CASE(vpiRange);
        CASE(vpiRegArray);
        CASE(vpiSwitchArray);
        CASE(vpiUdpArray);
        CASE(vpiContAssignBit);
        CASE(vpiNamedEventArray);
        CASE(vpiIndexedPartSelect);
        CASE(vpiGenScopeArray);
        CASE(vpiGenScope);
        CASE(vpiGenVar);

        CASE(vpiPackage);
        CASE(vpiInterface);
        CASE(vpiProgram);
        CASE(vpiInterfaceArray);
        CASE(vpiProgramArray);
        CASE(vpiTypespec);
        CASE(vpiModport);
        CASE(vpiInterfaceTfDecl);
        CASE(vpiRefObj);
        CASE(vpiTypeParameter);
        CASE(vpiLongIntVar);
        CASE(vpiShortIntVar);
        CASE(vpiIntVar);
        CASE(vpiShortRealVar);
        CASE(vpiByteVar);
        CASE(vpiClassVar);
        CASE(vpiStringVar);
        CASE(vpiEnumVar);
        CASE(vpiStructVar);
        CASE(vpiUnionVar);
        CASE(vpiBitVar);
        CASE(vpiClassObj);
        CASE(vpiChandleVar);
        CASE(vpiPackedArrayVar);
        CASE(vpiVirtualInterfaceVar);
        CASE(vpiLongIntTypespec);
        CASE(vpiShortRealTypespec);
        CASE(vpiByteTypespec);
        CASE(vpiShortIntTypespec);
        CASE(vpiIntTypespec);
        CASE(vpiClassTypespec);
        CASE(vpiStringTypespec);
        CASE(vpiChandleTypespec);
        CASE(vpiEnumTypespec);
        CASE(vpiEnumConst);
        CASE(vpiIntegerTypespec);
        CASE(vpiTimeTypespec);
        CASE(vpiRealTypespec);
        CASE(vpiStructTypespec);
        CASE(vpiUnionTypespec);
        CASE(vpiBitTypespec);
        CASE(vpiLogicTypespec);
        CASE(vpiArrayTypespec);
        CASE(vpiVoidTypespec);
        CASE(vpiTypespecMember);
        CASE(vpiPackedArrayTypespec);
        CASE(vpiSequenceTypespec);
        CASE(vpiPropertyTypespec);
        CASE(vpiEventTypespec);
        CASE(vpiInterfaceTypespec);
        CASE(vpiClockingBlock);
        CASE(vpiClockingIODecl);
        CASE(vpiClassDefn);
        CASE(vpiConstraint);
        CASE(vpiConstraintOrdering);
        CASE(vpiDistItem);
        CASE(vpiAliasStmt);
        CASE(vpiThread);
        CASE(vpiMethodFuncCall);
        CASE(vpiMethodTaskCall);
        CASE(vpiAssert);
        CASE(vpiAssume);
        CASE(vpiCover);
        CASE(vpiRestrict);
        CASE(vpiDisableCondition);
        CASE(vpiClockingEvent);
        CASE(vpiPropertyDecl);
        CASE(vpiPropertySpec);
        CASE(vpiPropertyExpr);
        CASE(vpiMulticlockSequenceExpr);
        CASE(vpiClockedSeq);
        CASE(vpiClockedProp);
        CASE(vpiPropertyInst);
        CASE(vpiSequenceDecl);
        CASE(vpiCaseProperty);
        CASE(vpiCasePropertyItem);
        CASE(vpiSequenceInst);
        CASE(vpiImmediateAssert);
        CASE(vpiImmediateAssume);
        CASE(vpiImmediateCover);
        CASE(vpiReturn);
        CASE(vpiAnyPattern);
        CASE(vpiTaggedPattern);
        CASE(vpiStructPattern);
        CASE(vpiDoWhile);
        CASE(vpiOrderedWait);
        CASE(vpiWaitFork);
        CASE(vpiDisableFork);
        CASE(vpiExpectStmt);
        CASE(vpiForeachStmt);
        CASE(vpiReturnStmt);
        CASE(vpiFinal);
        CASE(vpiExtends);
        CASE(vpiDistribution);
        CASE(vpiSeqFormalDecl);
        CASE(vpiPropFormalDecl);
        CASE(vpiEnumNet);
        CASE(vpiIntegerNet);
        CASE(vpiTimeNet);
        CASE(vpiStructNet);
        CASE(vpiBreak);
        CASE(vpiContinue);
        CASE(vpiPackedArrayNet);
        CASE(vpiConstraintExpr);
        CASE(vpiElseConst);
        CASE(vpiImplication);
        CASE(vpiConstrIf);
        CASE(vpiConstrIfElse);
        CASE(vpiConstrForEach);
        CASE(vpiSoftDisable);
        CASE(vpiLetDecl);
        CASE(vpiLetExpr);

        CASE(vpiUndefined);
        default: return "vpiUndefined";
    }
}

char *const_type_to_string(PLI_INT32 const_type) {
    switch (const_type) {
        CASE(vpiDecConst);
        CASE(vpiRealConst);
        CASE(vpiBinaryConst);
        CASE(vpiOctConst);
        CASE(vpiHexConst);
        CASE(vpiStringConst);
        CASE(vpiIntConst);
        CASE(vpiTimeConst);
        CASE(vpiOneStepConst);
        CASE(vpiUnboundedConst);
        CASE(vpiNullConst);

        CASE(vpiUndefined);
        default: return "vpiUndefined";
    }
}

#undef CASE


static void print_param_info(char *param_name) {
    vpiHandle param_handle = vpi_handle_by_name(param_name, 0);

    PLI_INT32 type = vpi_get(vpiType, param_handle);
    PLI_INT32 const_type = vpi_get(vpiConstType, param_handle);
    PLI_INT32 size = vpi_get(vpiSize, param_handle);

    vpi_printf("%-17s : vpiType = (% 3d) %-20s vpiConstType = (% 2d) %-17s size = %3d\n",
        param_name,
        type, type_to_string(type),
        const_type, const_type_to_string(const_type),
        size);

    return;
}

static PLI_INT32 int_param_check(p_cb_data cb_data) {
    print_param_info("t.bit_1_param");
    print_param_info("t.bit_2_param");
    print_param_info("t.bit_600_param");
    print_param_info("t.byte_param");
    print_param_info("t.shortint_param");
    print_param_info("t.int_param");
    print_param_info("t.longint_param");

    print_param_info("t.integer_param");
    print_param_info("t.logic_130_param");
    print_param_info("t.reg_8_param");
    print_param_info("t.time_param");
    
    return 0;
}

static PLI_INT32 start_of_sim(p_cb_data cb_data_) {
    s_cb_data cb_data = {0};
    s_vpi_time time = {.type = vpiSuppressTime};

    cb_data.reason = cbNextSimTime;
    cb_data.cb_rtn = int_param_check;
    cb_data.time = &time;

    vpi_register_cb(&cb_data);

    return 0;
}

static void register_startup_callback() {
    s_cb_data cb_data = {0};
    
    cb_data.reason = cbStartOfSimulation;
    cb_data.cb_rtn = start_of_sim;

    vpi_register_cb(&cb_data);
}

void (*vlog_startup_routines[])() = {
    register_startup_callback,
    0
};

void vlog_startup_routines_bootstrap() {
    void (*routine)();
    int i;
    for (i = 0, routine = vlog_startup_routines[i]; routine; routine = vlog_startup_routines[++i]) {
        routine();
    }
}
