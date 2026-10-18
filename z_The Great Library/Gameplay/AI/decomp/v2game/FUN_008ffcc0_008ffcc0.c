// FUN_008ffcc0 @ 008ffcc0 body=[[008ffcc0, 008ffcfc] [008ffd00, 008ffd2d]]


uint FUN_008ffcc0(uint param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return param_1 & 0xffffff00;
  }
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x9f8);
  if (piVar2 != (int *)0x0) {
    do {
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar2 * 4) + 300) != iVar1) {
        return (uint)piVar2 & 0xffffff00;
      }
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != (int *)0x0);
  }
  return 1;
}

