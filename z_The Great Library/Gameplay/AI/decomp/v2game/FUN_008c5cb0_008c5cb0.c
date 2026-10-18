// FUN_008c5cb0 @ 008c5cb0 body=[[008c5cb0, 008c5d54] [008c5d58, 008c5d6b]]


undefined4 FUN_008c5cb0(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_50 [16];
  uint uStack_40;
  undefined4 uStack_38;
  undefined1 local_34 [16];
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  pvStack_14 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &pvStack_14;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x18))(local_34);
    puStack_10 = (undefined1 *)0x1;
    FUN_0042c180(param_1,uVar1);
    if (uStack_24 < 0x10) {
      ExceptionList = pvStack_18;
      return param_1;
    }
  }
  else {
    ExceptionList = &pvStack_14;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x18))(local_50);
    puStack_10 = (undefined1 *)0x0;
    FUN_0042c180(param_1,uVar1);
    if (uStack_40 < 0x10) {
      ExceptionList = pvStack_18;
      return param_1;
    }
    uStack_38 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_38);
}

