// FUN_004be5b0 @ 004be5b0 body=[[004be5b0, 004be6f9]]


void FUN_004be5b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int local_110;
  char local_108 [260];
  
  iVar2 = *(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x18) >> 2;
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (*(int *)(*(int *)(in_ECX + 8) + iVar3 * 8) != 0 ||
            *(int *)(*(int *)(in_ECX + 8) + 4 + iVar3 * 8) != 0) {
          _sprintf(local_108,"%d",iVar3);
          FUN_0099ff90(param_1);
          FUN_004013e0(param_1);
          _sprintf(local_108,"%lld",*(undefined4 *)(*(int *)(in_ECX + 8) + iVar3 * 8),
                   *(undefined4 *)(*(int *)(in_ECX + 8) + 4 + iVar3 * 8));
          FUN_0099ff90(param_1);
          FUN_004013e0(param_1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  else {
    local_110 = 0;
    if (0 < iVar2) {
      do {
        piVar1 = (int *)(*(int *)(in_ECX + 8) + local_110 * 8);
        if (*piVar1 != 0 || piVar1[1] != 0) {
          FUN_009a0940(param_1);
          _sprintf(local_108,"%lld",*piVar1,piVar1[1]);
          FUN_0099ff90(param_1);
          FUN_004013e0(param_1);
        }
        local_110 = local_110 + 1;
      } while (local_110 < iVar2);
      return;
    }
  }
  return;
}

