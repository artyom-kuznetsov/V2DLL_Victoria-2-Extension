// FUN_004cb2d0 @ 004cb2d0 body=[[004cb2d0, 004cb36d]]


void FUN_004cb2d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_EDI;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x98);
  do {
    if (*piVar2 == unaff_EDI[1]) {
      piVar2 = (int *)(param_1 + 0x9c + iVar1 * 0x1c);
      *piVar2 = *piVar2 + param_2;
      param_1 = param_1 + iVar1 * 0x1c;
      if (*piVar2 < 0) {
        *(undefined4 *)(param_1 + 0x9c) = 0;
      }
      goto LAB_004cb356;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 7;
  } while (iVar1 < 4);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x98);
  while (*piVar2 != 0) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 7;
    if (3 < iVar1) {
      return;
    }
  }
  param_1 = param_1 + iVar1 * 0x1c;
  *(undefined4 *)(param_1 + 0x94) = *unaff_EDI;
  *(undefined4 *)(param_1 + 0x98) = unaff_EDI[1];
  *(int *)(param_1 + 0x9c) = param_2;
LAB_004cb356:
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  return;
}

