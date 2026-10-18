// FUN_0068f090 @ 0068f090 body=[[0068f090, 0068f0cf]]


void FUN_0068f090(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_ESI;
  int unaff_EDI;
  
  uVar3 = (uint)(*(int *)(unaff_EDI + 8) * 0x10000 + *(int *)(unaff_EDI + 0xc)) % (uint)unaff_ESI[1]
  ;
  piVar2 = (int *)FUN_00aae9af(8);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(unaff_ESI[2] + uVar3 * 4);
    *piVar2 = unaff_EDI;
    piVar2[1] = iVar1;
    *(int **)(unaff_ESI[2] + uVar3 * 4) = piVar2;
    *unaff_ESI = *unaff_ESI + 1;
    return;
  }
  *(undefined4 *)(unaff_ESI[2] + uVar3 * 4) = 0;
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

