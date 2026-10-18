// FUN_007a4810 @ 007a4810 body=[[007a4810, 007a48b6] [007a48ba, 007a48d4] [007a48d8, 007a4919]]


void FUN_007a4810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c970;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0(in_ECX + 0x58,0,0xffffffff);
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
  local_14 = param_2;
  local_8 = 1;
  FUN_00408ed0(local_4c,0,0xffffffff);
  FUN_00408ed0(local_30,0,0xffffffff);
  *(undefined4 *)(in_ECX + 0x90) = local_14;
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (local_38 < 0x10) {
    puVar1 = *(undefined4 **)(in_ECX + 0x34);
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    *(undefined4 *)(in_ECX + 0x50) = param_3;
    *(undefined4 *)(in_ECX + 0x4c) = param_1;
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
      (*(code *)**(undefined4 **)*puVar1)();
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

