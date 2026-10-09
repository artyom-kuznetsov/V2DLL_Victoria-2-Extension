// FUN_0059c520 @ 0059c520

int FUN_0059c520(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = *(uint *)(iVar2 + 0x34);
  local_8 = 30000;
  while ((*(uint *)(iVar2 + 0x34) <= uVar3 && (uVar3 < *(uint *)(iVar2 + 0x38)))) {
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xc) +
            *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar3 + 4) * 4) + 0xbcc
                             ) + 0x38);
    uVar3 = uVar3 + 8;
    if (iVar1 < 2000) {
      iVar1 = 2000;
    }
    if (iVar1 < local_8) {
      local_8 = iVar1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  uVar3 = *(uint *)(iVar2 + 0x34);
  while ((*(uint *)(iVar2 + 0x34) <= uVar3 && (uVar3 < *(uint *)(iVar2 + 0x38)))) {
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xc) +
            *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar3 + 4) * 4) + 0xbcc
                             ) + 0x38);
    uVar3 = uVar3 + 8;
    if (iVar1 < 2000) {
      iVar1 = 2000;
    }
    if (iVar1 < local_8) {
      local_8 = iVar1;
    }
  }
  iVar2 = __alldiv((longlong)
                   (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x5c) + 0x14) + 0x94) +
                   1000) * (longlong)local_8,1000,0);
  if (iVar2 < 2000) {
    iVar2 = 2000;
  }
  return iVar2 / 1000;
}


