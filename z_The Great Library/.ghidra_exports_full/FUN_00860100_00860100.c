// FUN_00860100 @ 00860100 body=[[00860100, 00860148]]


void FUN_00860100(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_ESI;
  
  uVar3 = *(uint *)(param_1 + 0xc) % (uint)unaff_ESI[1];
  piVar2 = (int *)FUN_00aae9af(8);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(unaff_ESI[2] + uVar3 * 4);
    *piVar2 = param_1;
    piVar2[1] = iVar1;
    *(int **)(unaff_ESI[2] + uVar3 * 4) = piVar2;
    *unaff_ESI = *unaff_ESI + 1;
    return;
  }
  *(undefined4 *)(unaff_ESI[2] + uVar3 * 4) = 0;
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

