// FUN_00a36c70 @ 00a36c70 body=[[00a36c70, 00a36d9d] [00a36da1, 00a36e51] [00a36e55, 00a36e92]]


undefined4 FUN_00a36c70(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_20;
  int local_14;
  
  FUN_00a36ea0();
  FUN_00a36ea0();
  iVar4 = FUN_0099e240();
  iVar2 = *(int *)(iVar4 + 8);
  iVar4 = local_20 - local_14;
  iVar5 = FUN_00816010();
  if ((uint)(local_14 - iVar2) < (uint)(*(int *)(iVar5 + 8) - local_20)) {
    FUN_0099e240();
    FUN_00a37280();
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(int *)(in_EAX + 0x10) != 0) {
        puVar3 = *(undefined1 **)(*(int *)(in_EAX + 4) + *(int *)(in_EAX + 0xc) * 4);
        if (0xf < *(uint *)(puVar3 + 0x14)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined4 *)(puVar3 + 0x14) = 0xf;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *puVar3 = 0;
        *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 1;
        if (*(uint *)(in_EAX + 8) <= *(uint *)(in_EAX + 0xc)) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
        piVar1 = (int *)(in_EAX + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
      }
    }
  }
  else {
    FUN_00816010();
    FUN_00a37310();
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(int *)(in_EAX + 0x10) != 0) {
        uVar6 = *(int *)(in_EAX + 0x10) + -1 + *(int *)(in_EAX + 0xc);
        if (*(uint *)(in_EAX + 8) <= uVar6) {
          uVar6 = uVar6 - *(uint *)(in_EAX + 8);
        }
        puVar3 = *(undefined1 **)(*(int *)(in_EAX + 4) + uVar6 * 4);
        if (0xf < *(uint *)(puVar3 + 0x14)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined4 *)(puVar3 + 0x14) = 0xf;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *puVar3 = 0;
        piVar1 = (int *)(in_EAX + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(in_EAX + 0xc) = 0;
        }
      }
    }
  }
  FUN_0099e240();
  FUN_00868600();
  return param_1;
}

