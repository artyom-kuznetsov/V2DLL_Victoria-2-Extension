// FUN_00a34db0 @ 00a34db0 body=[[00a34db0, 00a34e51]]


void FUN_00a34db0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = DAT_01258b40;
  if (DAT_01258b40 != 0) {
    iVar6 = *(int *)(DAT_01258b40 + 200);
    iVar1 = (*(int *)(DAT_01258b40 + 0xcc) - iVar6) / 0x54;
    iVar4 = 0;
    if (0 < iVar1) {
      piVar5 = (int *)(iVar6 + 0x34);
      do {
        if (*piVar5 == *(int *)(in_ECX + 0x40)) {
          iVar6 = iVar6 + iVar4 * 0x54;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x15;
      } while (iVar4 < iVar1);
    }
    FUN_00a330d0(iVar6);
    piVar5 = *(int **)(iVar6 + 0x24);
    piVar3 = *(int **)(iVar6 + 0x20);
    if (piVar3 != piVar5) {
      do {
        if (*piVar3 == *(int *)(iVar2 + 0xa4)) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar5);
      if (piVar3 != piVar5) {
        FUN_00a317b0();
      }
    }
    if (*(int *)(iVar2 + 0xd8) == *(int *)(in_ECX + 0x40)) {
      FUN_00a319d0(iVar2);
    }
  }
  return;
}

