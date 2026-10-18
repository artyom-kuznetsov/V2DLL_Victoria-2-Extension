// FUN_00641850 @ 00641850 body=[[00641850, 006418b4] [006418b8, 006418eb]]


void FUN_00641850(undefined4 param_1)

{
  int *piVar1;
  int *in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("AgreeButton",0xb);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x34))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(param_1,0);
  }
  ExceptionList = local_10;
  return;
}

