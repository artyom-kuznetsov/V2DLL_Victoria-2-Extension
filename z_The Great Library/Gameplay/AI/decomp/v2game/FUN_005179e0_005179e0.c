// FUN_005179e0 @ 005179e0 body=[[005179e0, 00517a67]]


void FUN_005179e0(int param_1)

{
  int iVar1;
  int in_EDX;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0xbe8) + *(int *)(in_EDX + 4) * 4);
  param_1 = *(int *)(iVar1 + 0x3c) + param_1;
  *(undefined1 *)(iVar1 + 0x71) = 1;
  iVar2 = param_1;
  if (DAT_0131b1e8 < param_1) {
    iVar2 = DAT_0131b1e8;
  }
  if (iVar2 < DAT_0131b2c8) {
    iVar2 = DAT_0131b2c8;
  }
  *(int *)(iVar1 + 0x3c) = iVar2;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EDX + 4) * 4) + 0xbe8)
                  + *(int *)(unaff_EDI + 0x20) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  if (DAT_0131b1e8 < param_1) {
    param_1 = DAT_0131b1e8;
  }
  if (param_1 < DAT_0131b2c8) {
    *(int *)(iVar1 + 0x3c) = DAT_0131b2c8;
    return;
  }
  *(int *)(iVar1 + 0x3c) = param_1;
  return;
}

