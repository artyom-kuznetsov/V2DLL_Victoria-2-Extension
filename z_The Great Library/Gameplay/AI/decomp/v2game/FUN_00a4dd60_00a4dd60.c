// FUN_00a4dd60 @ 00a4dd60 body=[[00a4dd60, 00a4dde8] [00a4ddec, 00a4de0f] [00a4de13, 00a4de27]]


undefined4 FUN_00a4dd60(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x114);
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_00a45090(&param_1);
  if ((*piVar3 == 0) || (*(int *)(*(int *)(iVar1 + 4) + -4 + *piVar3 * 4) == 0)) {
    if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0x114);
  piVar3 = (int *)FUN_00a45090(&param_1);
  uVar4 = 0;
  if (*piVar3 != 0) {
    uVar4 = *(undefined4 *)(*(int *)(iVar1 + 4) + -4 + *piVar3 * 4);
  }
  cVar2 = FUN_00a4daa0(uVar4);
  if (cVar2 != '\0') {
    FUN_00a4db90();
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return 1;
}

