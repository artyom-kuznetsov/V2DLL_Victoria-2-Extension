// FUN_009e6810 @ 009e6810 body=[[009e6810, 009e687c] [009e6880, 009e6890]]


/* WARNING: Removing unreachable block (ram,0x009e6874) */

void FUN_009e6810(undefined4 param_1)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3d728;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_c = 0;
  FUN_00a72850();
  ExceptionList = local_14;
  return;
}

