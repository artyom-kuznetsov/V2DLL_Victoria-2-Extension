// FUN_005441a0 @ 005441a0 body=[[005441a0, 005441e0]]


int FUN_005441a0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint3 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(in_EAX + 0x1580);
  iVar1 = *(int *)(in_EAX + 0x1584) - (int)piVar4;
  iVar2 = iVar1 >> 3;
  uVar3 = (uint3)(iVar1 >> 0xb);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      if ((*(int *)(in_EAX + 0x20) != iVar1) &&
         ((0 < piVar4[1] || ((-1 < piVar4[1] && (*piVar4 != 0)))))) {
        return CONCAT31(uVar3,1);
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar1 < iVar2);
  }
  return (uint)uVar3 << 8;
}

