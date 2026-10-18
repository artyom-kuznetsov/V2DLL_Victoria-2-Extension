// FUN_004d5fd0 @ 004d5fd0 body=[[004d5fd0, 004d6031]]


undefined4 FUN_004d5fd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((char)unaff_ESI[3] != '\0') {
    *(undefined1 *)(param_1 + 0x228) = 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x220);
  iVar2 = *(int *)(param_1 + 0x224);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x224) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x220) = iVar1;
  }
  if (param_1 == *unaff_ESI) {
    *unaff_ESI = iVar2;
  }
  if (param_1 == unaff_ESI[1]) {
    unaff_ESI[1] = iVar1;
  }
  FUN_004f33c0(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

