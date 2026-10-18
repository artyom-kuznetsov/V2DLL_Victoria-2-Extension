// FUN_00891ca0 @ 00891ca0 body=[[00891ca0, 00891d21]]


void FUN_00891ca0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0)) {
    if ((*(char *)(iVar1 + 0x131) != '\0') &&
       (iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                          *(int *)(param_1 + 0x10) * 4) + 0x118) +
                        *(int *)(iVar1 + 0x134) * 4), iVar1 != 0)) {
      FUN_004b6120(*(int *)(in_ECX + 0x20) + *(int *)(iVar1 + 0x10),1);
      return;
    }
    if (0 < *(int *)(in_ECX + 0x20)) {
      FUN_004b6120(*(int *)(in_ECX + 0x20),1);
    }
  }
  return;
}

