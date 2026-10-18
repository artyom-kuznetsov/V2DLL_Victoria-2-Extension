// FUN_00989b80 @ 00989b80 body=[[00989b80, 00989bca]]


void FUN_00989b80(void)

{
  int iVar1;
  int *unaff_ESI;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*unaff_ESI + 4) + 0xc + (int)unaff_ESI) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(*unaff_ESI + 4) + 0x38 + (int)unaff_ESI) + 0x34))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0xc) | uVar2;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x38) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_00401120(uVar2,0);
  }
  return;
}

