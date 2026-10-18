// FUN_00561fe0 @ 00561fe0 body=[[00561fe0, 00562016]]


int FUN_00561fe0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  int in_ECX;
  int iVar5;
  
  iVar2 = *(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48);
  iVar5 = 1;
  iVar3 = iVar2 >> 3;
  uVar4 = (uint3)(iVar2 >> 0xb);
  if (1 < iVar3) {
    piVar1 = *(int **)(in_ECX + 0x48);
    do {
      if (piVar1[2] != 0 || piVar1[3] != 0) {
        return (uint)uVar4 << 8;
      }
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar5 < iVar3);
  }
  return CONCAT31(uVar4,1);
}

