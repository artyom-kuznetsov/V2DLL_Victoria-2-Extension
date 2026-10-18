// FUN_00549a20 @ 00549a20 body=[[00549a20, 00549a69]]


undefined4 FUN_00549a20(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((char)unaff_ESI[3] != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x28) = iVar1;
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

