// FUN_00a82b10 @ 00a82b10 body=[[00a82b10, 00a82b7f] [00a82b83, 00a82ba3] [00a82ba7, 00a82bb8]]


int FUN_00a82b10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint3 uVar5;
  uint in_stack_0000001c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  ExceptionList = &local_10;
  param_1 = FUN_00a84480(&param_2);
  if (param_1 != *(int *)(iVar2 + 0x54)) {
    cVar3 = FUN_0098ab20();
    if (cVar3 == '\0') {
      piVar4 = &param_1;
      goto LAB_00a82b6b;
    }
  }
  local_14 = *(int *)(iVar2 + 0x54);
  piVar4 = &local_14;
LAB_00a82b6b:
  uVar5 = (uint3)((uint)piVar4 >> 8);
  if (*piVar4 != iVar1) {
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_2);
    }
    ExceptionList = local_10;
    return CONCAT31(uVar5,1);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return (uint)uVar5 << 8;
}

