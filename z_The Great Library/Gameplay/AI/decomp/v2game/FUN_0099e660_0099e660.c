// FUN_0099e660 @ 0099e660 body=[[0099e660, 0099e6a9]]


undefined4 FUN_0099e660(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((char)unaff_ESI[3] != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x10) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  if (param_1 == *unaff_ESI) {
    *unaff_ESI = iVar2;
  }
  if (param_1 == unaff_ESI[1]) {
    unaff_ESI[1] = iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

