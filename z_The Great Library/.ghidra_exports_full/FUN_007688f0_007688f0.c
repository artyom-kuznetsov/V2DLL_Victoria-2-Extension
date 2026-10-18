// FUN_007688f0 @ 007688f0 body=[[007688f0, 0076891c] [00768920, 0076893a]]


void FUN_007688f0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  FUN_00768940(unaff_ESI);
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xa8);
    FUN_00768aa0(iVar2);
    iVar2 = iVar1;
  }
  return;
}

