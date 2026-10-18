// FUN_008672f0 @ 008672f0 body=[[008672f0, 008673d5]]


void FUN_008672f0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 uVar5;
  
  iVar4 = *(int *)(unaff_EDI + 0xa4);
  *(undefined4 *)(unaff_EDI + 0xa0) = *(undefined4 *)(unaff_EDI + 0xa8);
  if (iVar4 == 1) {
    *(undefined4 *)(unaff_EDI + 0xa0) = *(undefined4 *)(unaff_EDI + 0xac);
  }
  else if (iVar4 == 2) {
    *(undefined4 *)(unaff_EDI + 0xa0) = *(undefined4 *)(unaff_EDI + 0xb0);
  }
  uVar5 = *(undefined4 *)(unaff_EDI + 0xa0);
  FUN_0099e240(uVar5);
  piVar1 = (int *)FUN_00868600(uVar5);
  if ((int *)*piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)*piVar1;
  }
  uVar2 = (uint)piVar1[2] >> 2;
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4);
  *(int *)(iVar3 + 0x900) = iVar4;
  *(int *)(iVar3 + 0x74c) = iVar4;
  uVar5 = *(undefined4 *)(unaff_EDI + 0xa0);
  FUN_0099e240(uVar5);
  piVar1 = (int *)FUN_00868600(uVar5);
  if ((int *)*piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)*piVar1;
  }
  uVar2 = (uint)piVar1[2] >> 2;
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  FUN_00862960(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4));
  return;
}

