// FUN_00768980 @ 00768980 body=[[00768980, 007689df]]


undefined4 FUN_00768980(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((char)unaff_EDI[3] != '\0') {
    *(undefined1 *)(param_1 + 0xac) = 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xa8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xa8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xa4) = iVar1;
  }
  if (param_1 == *unaff_EDI) {
    *unaff_EDI = iVar2;
  }
  if (param_1 == unaff_EDI[1]) {
    unaff_EDI[1] = iVar1;
  }
  FUN_00648a60();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

