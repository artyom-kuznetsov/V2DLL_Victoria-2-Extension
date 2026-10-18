// FUN_0092c250 @ 0092c250 body=[[0092c250, 0092c26c] [0092c270, 0092c371]]


void FUN_0092c250(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  while (param_2 < in_ECX) {
    iVar3 = (in_ECX + -1) / 2;
    iVar2 = iVar3 * 0x40 + param_1;
    if (((*(int *)(iVar2 + 0xc) == 0) || (*(int *)(unaff_ESI + 0xc) == 0)) ||
       (*(int *)(*(int *)(unaff_ESI + 0xc) + 0x10) <= *(int *)(*(int *)(iVar2 + 0xc) + 0x10)))
    break;
    iVar1 = in_ECX * 0x40 + param_1;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
    *(undefined1 *)(iVar1 + 0x38) = *(undefined1 *)(iVar2 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
    in_ECX = iVar3;
  }
  param_1 = in_ECX * 0x40 + param_1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_ESI + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(unaff_ESI + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(unaff_ESI + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(unaff_ESI + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(unaff_ESI + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_ESI + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(unaff_ESI + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_ESI + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(unaff_ESI + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(unaff_ESI + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(unaff_ESI + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(unaff_ESI + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(unaff_ESI + 0x34);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(unaff_ESI + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(unaff_ESI + 0x3c);
  return;
}

