// FUN_004b7db0 @ 004b7db0 body=[[004b7db0, 004b7e20]]


int FUN_004b7db0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint3 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(in_EAX + 0x5c);
  iVar2 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
  iVar4 = 0;
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if (0 < iVar2) {
    piVar5 = *(int **)(iVar1 + 200);
    do {
      if ((*piVar5 != 4) &&
         (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + piVar5[1] * 4) + 0x134) ==
          *(int *)(param_1 + 4))) {
        return CONCAT31(uVar3,1);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 9;
    } while (iVar4 < iVar2);
  }
  return (uint)uVar3 << 8;
}

