// FUN_004b7ed0 @ 004b7ed0 body=[[004b7ed0, 004b7f48]]


int FUN_004b7ed0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint3 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(in_EAX + 0x5c);
  iVar2 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
  iVar5 = 0;
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if (0 < iVar2) {
    piVar4 = *(int **)(iVar1 + 200);
    do {
      if (*piVar4 != 4) {
        iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + piVar4[1] * 4);
        if ((*(int *)(iVar1 + 300) == *(int *)(param_1 + 4)) ||
           (*(int *)(iVar1 + 0x134) == *(int *)(param_1 + 4))) {
          return CONCAT31(uVar3,1);
        }
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 9;
    } while (iVar5 < iVar2);
  }
  return (uint)uVar3 << 8;
}

