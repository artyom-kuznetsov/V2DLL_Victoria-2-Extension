// FUN_0098bd60 @ 0098bd60 body=[[0098bd60, 0098bf35]]


undefined4 FUN_0098bd60(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_14;
  
  FUN_00a36ea0();
  FUN_00a36ea0();
  iVar1 = FUN_0099e240();
  iVar1 = *(int *)(iVar1 + 8);
  iVar2 = local_20 - local_14;
  iVar3 = FUN_00816010();
  if ((uint)(local_14 - iVar1) < (uint)(*(int *)(iVar3 + 8) - local_20)) {
    FUN_0099e240();
    FUN_0098c0d0();
    if (iVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 0x10);
      do {
        if (iVar1 != 0) {
          *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 1;
          if ((uint)(*(int *)(in_EAX + 8) * 4) <= *(uint *)(in_EAX + 0xc)) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) {
            *(undefined4 *)(in_EAX + 0xc) = 0;
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(int *)(in_EAX + 0x10) = iVar1;
    }
  }
  else {
    FUN_00816010();
    FUN_0098c160();
    if (iVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 0x10);
      do {
        if ((iVar1 != 0) && (iVar1 = iVar1 + -1, iVar1 == 0)) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(int *)(in_EAX + 0x10) = iVar1;
    }
  }
  FUN_0099e240();
  FUN_00868600();
  return param_1;
}

