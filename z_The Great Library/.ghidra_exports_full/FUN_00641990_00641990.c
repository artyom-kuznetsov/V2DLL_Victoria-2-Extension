// FUN_00641990 @ 00641990 body=[[00641990, 006419f4] [006419f8, 00641a45]]


void FUN_00641990(char param_1)

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
  FUN_00409350("DeclineButton",0xd);
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
    if (param_1 != '\0') {
      (**(code **)(*piVar1 + 0xb8))();
      ExceptionList = local_10;
      return;
    }
    (**(code **)(*piVar1 + 0xbc))();
  }
  ExceptionList = local_10;
  return;
}

