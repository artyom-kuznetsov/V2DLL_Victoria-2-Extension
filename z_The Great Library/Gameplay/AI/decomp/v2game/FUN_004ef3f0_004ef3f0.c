// FUN_004ef3f0 @ 004ef3f0 body=[[004ef3f0, 004ef46f]]


void FUN_004ef3f0(void)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  undefined4 *unaff_EDI;
  
  iVar3 = *(int *)(in_ECX + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + **(int **)(*(int *)(in_ECX + 8) + 0x48) * 4);
  }
  cVar2 = FUN_004b8b90();
  if (cVar2 == '\0') {
    *unaff_EDI = 0;
    unaff_EDI[1] = 0;
    return;
  }
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 300) * 4);
  uVar1 = *(undefined4 *)(iVar3 + 0x1538);
  unaff_EDI[1] = *(undefined4 *)(iVar3 + 0x153c);
  *unaff_EDI = uVar1;
  return;
}

