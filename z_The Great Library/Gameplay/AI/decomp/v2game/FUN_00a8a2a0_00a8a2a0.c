// FUN_00a8a2a0 @ 00a8a2a0 body=[[00a8a2a0, 00a8a35a]]


void FUN_00a8a2a0(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int unaff_ESI;
  int iVar4;
  
  piVar1 = (int *)(unaff_ESI + 0xa4);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    (*(code *)PTR__free_00f071fc)(piVar2);
    piVar2 = (int *)*piVar1;
  }
  FUN_00a8a1d0(unaff_ESI + 0xac);
  FUN_00a8a1d0(unaff_ESI + 0xb4);
  FUN_00a8a1d0(unaff_ESI + 0xbc);
  FUN_00a8a1d0(unaff_ESI + 0xc4);
  uVar3 = *(uint *)(unaff_ESI + 0x1c);
  if ((uVar3 != 0) && (*(int *)(unaff_ESI + 0x20) != 0)) {
    if (uVar3 < *(int *)(unaff_ESI + 0x20) * 0x20 + uVar3) {
      iVar4 = uVar3 + 0x18;
      do {
        FUN_00a8a230(iVar4 + -8);
        FUN_00a8a230(iVar4);
        uVar3 = iVar4 + 8;
        iVar4 = iVar4 + 0x20;
      } while (uVar3 < (uint)(*(int *)(unaff_ESI + 0x20) * 0x20 + *(int *)(unaff_ESI + 0x1c)));
    }
    (*(code *)PTR__free_00f071fc)(*(undefined4 *)(unaff_ESI + 0x1c));
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  return;
}

