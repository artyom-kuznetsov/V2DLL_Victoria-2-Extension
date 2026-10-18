// FUN_0045faf0 @ 0045faf0 body=[[0045faf0, 0045fb7a] [0045fb7e, 0045fb9f] [0045fba3, 0045fbb8]]


undefined4 FUN_0045faf0(int param_1)

{
  char cVar1;
  int *piVar2;
  int unaff_EDI;
  undefined4 local_30 [5];
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004672d0(*(undefined4 *)(DAT_012586f4 + 8));
  local_8 = 0;
  param_1 = FUN_00462500(local_30);
  if (param_1 != *(int *)(unaff_EDI + 0x90)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      piVar2 = &param_1;
      goto LAB_0045fb5f;
    }
  }
  local_14 = *(int *)(unaff_EDI + 0x90);
  piVar2 = &local_14;
LAB_0045fb5f:
  if (*piVar2 == *(int *)(unaff_EDI + 0x90)) {
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    ExceptionList = local_10;
    return 1;
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return *(undefined4 *)(*piVar2 + 0x28);
}

