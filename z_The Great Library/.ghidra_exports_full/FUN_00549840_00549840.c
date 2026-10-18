// FUN_00549840 @ 00549840 body=[[00549840, 00549894]]


undefined4 FUN_00549840(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((char)unaff_EDI[3] != '\0') {
    *(undefined1 *)(param_1 + 0x24) = 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x1c) = iVar1;
  }
  if (param_1 == *unaff_EDI) {
    *unaff_EDI = iVar2;
  }
  if (param_1 == unaff_EDI[1]) {
    unaff_EDI[1] = iVar1;
  }
  FUN_0067a5c0();
  unaff_EDI[2] = unaff_EDI[2] + -1;
  return 1;
}

