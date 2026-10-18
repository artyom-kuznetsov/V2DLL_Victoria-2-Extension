// FUN_008c9740 @ 008c9740 body=[[008c9740, 008c97c5]]


undefined4 FUN_008c9740(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    if (*(char *)(in_ECX + 0x18) == '\0') {
      if (*(char *)(in_ECX + 0x19) == '\0') {
        if (*(int *)(iVar1 + 300) == *(int *)(in_ECX + 0x20)) {
          return 1;
        }
      }
      else if (*(int *)(iVar1 + 300) == *(int *)(param_1 + 0x30)) {
        return 1;
      }
    }
    else {
      iVar2 = FUN_008a8dc0();
      if (*(int *)(iVar1 + 300) == *(int *)(iVar2 + 4)) {
        return 1;
      }
    }
  }
  return 0;
}

