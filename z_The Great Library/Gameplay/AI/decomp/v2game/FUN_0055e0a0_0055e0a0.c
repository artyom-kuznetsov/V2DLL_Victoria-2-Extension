// FUN_0055e0a0 @ 0055e0a0 body=[[0055e0a0, 0055e15d]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0055e0a0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53368;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044bc60(&DAT_013f28f0);
  local_8 = 0;
  _DAT_013f28f0 = CCrime::vftable;
  DAT_013f2934 = 0xf;
  _DAT_013f2930 = 0;
  DAT_013f2920._0_1_ = 0;
  FUN_00408ed0(param_1,0,0xffffffff);
  _DAT_013f2948 = 0;
  _DAT_013f294c = 0;
  _DAT_013f2950 = 0;
  _DAT_013f2958 = 0;
  DAT_013f295c = 0;
  _DAT_013f293c = 0xffffffff;
  _DAT_013f2944 = 0x18d;
  _DAT_013f2940 = CAndTrigger::vftable;
  _DAT_013f28f0 = CNullCrime::vftable;
  ExceptionList = local_10;
  return &DAT_013f28f0;
}

