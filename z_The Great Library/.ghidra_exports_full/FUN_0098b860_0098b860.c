// FUN_0098b860 @ 0098b860 body=[[0098b860, 0098b919]]


void FUN_0098b860(int *param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 **ppuStack_30;
  undefined4 *puStack_2c;
  int *local_14;
  int local_c;
  undefined1 *local_8;
  
  puStack_2c = (undefined4 *)0x98b877;
  (**(code **)(*param_1 + 0x80))();
  puStack_2c = &param_1;
  ppuStack_30 = (undefined1 **)0x98b888;
  FUN_004f2680();
  if (local_8 != *(undefined1 **)(in_ECX + 8)) {
    puStack_2c = (undefined4 *)local_8;
    ppuStack_30 = &local_8;
    iStack_38 = 0x98b89b;
    iStack_34 = in_ECX + 4;
    FUN_004457a0();
  }
  puStack_2c = &param_1;
  local_8 = (undefined1 *)&iStack_38;
  uStack_3c = 0x98b8b1;
  FUN_00816010();
  local_8 = auStack_44;
  FUN_0099e240();
  FUN_0098c040();
  puStack_2c = (undefined4 *)0x98b8d5;
  iVar1 = FUN_00816010();
  if (local_c != *(int *)(iVar1 + 8)) {
    param_1 = &iStack_34;
    iStack_34 = 0;
    ppuStack_30 = (undefined1 **)0x0;
    if ((local_14 != (int *)0x0) && ((int *)*local_14 != (int *)0x0)) {
      iStack_34 = *(int *)*local_14;
    }
    uStack_3c = 0x98b912;
    iStack_38 = in_ECX + 0x14;
    FUN_0098bc80();
  }
  return;
}

