// FUN_00a7b8a0 @ 00a7b8a0 body=[[00a7b8a0, 00a7b8f9]]


undefined4 FUN_00a7b8a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_013f0764 != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  if (param_1 == DAT_013f0758) {
    DAT_013f0758 = iVar2;
  }
  if (param_1 == DAT_013f075c) {
    DAT_013f075c = iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

