// FUN_00a31760 @ 00a31760 body=[[00a31760, 00a317ab]]


int FUN_00a31760(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(in_EAX + 200);
  iVar2 = (*(int *)(in_EAX + 0xcc) - iVar1) / 0x54;
  iVar3 = 0;
  if (0 < iVar2) {
    piVar4 = (int *)(iVar1 + 0x34);
    do {
      if (*piVar4 == *(int *)(in_EAX + 0xd8)) {
        return iVar1 + iVar3 * 0x54;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x15;
    } while (iVar3 < iVar2);
  }
  return iVar1;
}

