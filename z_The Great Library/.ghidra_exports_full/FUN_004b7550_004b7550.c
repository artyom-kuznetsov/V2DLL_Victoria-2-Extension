// FUN_004b7550 @ 004b7550 body=[[004b7550, 004b75cc]]


int FUN_004b7550(int param_1)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
  iVar5 = 0;
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if (0 < iVar2) {
    piVar4 = (int *)(*(int *)(iVar1 + 200) + 4);
    do {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
      if ((*(char *)(*(int *)(iVar1 + 0x5c) + 0x2a) != '\0') &&
         (*(int *)(iVar1 + 0x134) != *(int *)(param_1 + 0x134))) {
        return CONCAT31(uVar3,1);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 9;
    } while (iVar5 < iVar2);
  }
  return (uint)uVar3 << 8;
}

