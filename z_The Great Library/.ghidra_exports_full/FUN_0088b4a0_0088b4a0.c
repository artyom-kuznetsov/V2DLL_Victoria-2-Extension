// FUN_0088b4a0 @ 0088b4a0 body=[[0088b4a0, 0088b5bb] [0088b5bf, 0088b5d3]]


undefined1 * FUN_0088b4a0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4aac8;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0088b5e0();
  if (*(int *)(in_ECX + 0x44) < 1) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
  }
  else {
    uVar2 = *(int *)(param_2 + 0x40) * 0x343fd + 0x269ec3;
    uVar3 = uVar2 * 0x343fd + 0x269ec3;
    *(uint *)(param_2 + 0x40) = uVar3;
    iVar4 = *(int *)(in_ECX + 0x44);
    FUN_008a88d0();
    local_18 = 0x2d2d2d;
    local_54 = 0;
    puVar1 = *(undefined4 **)(in_ECX + 0x3c);
    local_58 = 0x2d2d2d;
    for (iVar4 = (int)((longlong)(ulonglong)((uVar3 >> 0x10 & 0x7fff) * (uVar2 >> 0x10 & 0x7fff)) %
                      (longlong)iVar4); iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = (undefined4 *)puVar1[2];
    }
    local_50 = *puVar1;
    FUN_00408ed0(&param_4,0,0xffffffff);
    FUN_0087a6c0(param_1,local_60,param_3);
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

