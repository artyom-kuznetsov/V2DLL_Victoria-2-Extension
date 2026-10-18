// FUN_008802f0 @ 008802f0 body=[[008802f0, 00880369]]


void FUN_008802f0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x20);
  if (*(char *)(in_ECX + 0x24) != '\0') {
    iVar1 = DAT_01258a94;
    if (*(uint *)(param_1 + 0x38) < 0x1269) {
      iVar1 = DAT_01258a98;
    }
    if (iVar1 != 0) {
      iVar1 = FUN_009c1d40();
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x40);
      }
    }
  }
  if (iVar2 != 0) {
    FUN_00513a90(iVar2,1,0,0);
  }
  return;
}

