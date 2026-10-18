// FUN_004e18f0 @ 004e18f0 body=[[004e18f0, 004e196e]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004e18f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *unaff_EDI;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x4e190d;
  iVar1 = -(*(int *)(param_1 + 0x88) * 4 + 4);
  piVar3 = (int *)(&stack0xffffffec + iVar1);
  *(undefined1 **)((int)&uStack_18 + iVar1) = &stack0xffffffec + iVar1;
  *(undefined4 *)((int)&uStack_1c + iVar1) = 0x4e1917;
  FUN_004e3850();
  iVar1 = *(int *)(&stack0xffffffec + iVar1);
  while( true ) {
    if (iVar1 == 0) {
      unaff_EDI[1] = 0;
      *unaff_EDI = 0x2d2d2d;
      return unaff_EDI;
    }
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    if (*(int *)(iVar1 + 0xd4) != 0) break;
    iVar1 = *piVar3;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0xd4);
  *unaff_EDI = *(undefined4 *)(iVar1 + 0xd0);
  unaff_EDI[1] = uVar2;
  return unaff_EDI;
}

