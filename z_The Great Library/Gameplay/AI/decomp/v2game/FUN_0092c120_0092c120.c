// FUN_0092c120 @ 0092c120 body=[[0092c120, 0092c24e]]


void FUN_0092c120(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  while( true ) {
    iVar3 = in_ECX * 2 + 2;
    if (param_1 <= iVar3) break;
    iVar1 = *(int *)(iVar3 * 0x40 + 0xc + unaff_EDI);
    if (((iVar1 != 0) && (iVar2 = *(int *)(iVar3 * 0x40 + -0x34 + unaff_EDI), iVar2 != 0)) &&
       (*(int *)(iVar1 + 0x10) < *(int *)(iVar2 + 0x10))) {
      iVar3 = in_ECX * 2 + 1;
    }
    iVar1 = iVar3 * 0x40 + unaff_EDI;
    iVar2 = in_ECX * 0x40 + unaff_EDI;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 * 0x40 + 4 + unaff_EDI);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined1 *)(iVar2 + 0x38) = *(undefined1 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    in_ECX = iVar3;
  }
  if (iVar3 == param_1) {
    iVar3 = param_1 * 0x40 + -0x40 + unaff_EDI;
    iVar1 = in_ECX * 0x40 + unaff_EDI;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar3 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar3 + 0x34);
    *(undefined1 *)(iVar1 + 0x38) = *(undefined1 *)(iVar3 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar3 + 0x3c);
  }
  FUN_0092c250();
  return;
}

