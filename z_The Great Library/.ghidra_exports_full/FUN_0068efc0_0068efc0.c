// FUN_0068efc0 @ 0068efc0 body=[[0068efc0, 0068f014]]


undefined4 FUN_0068efc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((char)unaff_EDI[3] != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x3c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x38) = iVar1;
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

