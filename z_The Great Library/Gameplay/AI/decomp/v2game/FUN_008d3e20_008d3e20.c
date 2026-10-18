// FUN_008d3e20 @ 008d3e20 body=[[008d3e20, 008d3ef5] [008d3ef9, 008d3f0c]]


undefined1 * FUN_008d3e20(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_50 [5];
  uint local_3c;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_14;
    return param_1;
  }
  if (param_3 == '\0') {
    ExceptionList = &local_14;
    uVar2 = FUN_0090a830(iVar1,local_34);
    local_c = 1;
    FUN_0042c180(param_1,uVar2);
  }
  else {
    ExceptionList = &local_14;
    uVar2 = FUN_0090a830(iVar1,local_50);
    local_c = 0;
    FUN_0042c180(param_1,uVar2);
    local_34[0] = local_50[0];
    local_20 = local_3c;
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_14;
  return param_1;
}

