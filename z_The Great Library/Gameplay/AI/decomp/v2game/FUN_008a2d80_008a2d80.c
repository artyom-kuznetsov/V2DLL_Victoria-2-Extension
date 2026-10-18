// FUN_008a2d80 @ 008a2d80 body=[[008a2d80, 008a2e9d] [008a2ea1, 008a2eec] [008a2ef0, 008a2f0f] [008a2f13, 008a2f27]]


undefined1 * FUN_008a2d80(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  void **ppvVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint in_stack_00000020;
  undefined4 local_34;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68020;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(int *)(param_2 + 0xc) == 0) && (*(int *)(param_2 + 0x18) != 0)) {
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4
                                      ) + 0x188) + 0x5c);
  }
  else {
    iVar5 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 300);
  }
  ppvVar2 = &local_10;
  if (iVar5 != 0) {
    ExceptionList = &local_10;
    for (piVar1 = *(int **)(*(int *)(param_2 + 0xc) * 0x10 + *(int *)(DAT_012588e8 + 0xb98));
        ppvVar2 = ExceptionList, piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar5 = *piVar1;
      if ((((*(int *)(iVar5 + 0x30) == *(int *)(in_ECX + 0x20)) &&
           ((cVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))(), cVar3 == '\0' ||
            (*(int *)(iVar5 + 0x4c) == *(int *)(in_ECX + 0x24))))) &&
          ((cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))(), cVar3 == '\0' ||
           (*(int *)(iVar5 + 0x50) == *(int *)(in_ECX + 0x28))))) &&
         ((cVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))(), cVar3 == '\0' ||
          (*(int *)(*(int *)(iVar5 + 0x30) + 0x130) == *(int *)(in_ECX + 0x2c))))) {
        uVar4 = FUN_0041a080(iVar5);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0042c180(param_1,uVar4);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34);
        }
        if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(param_3);
        }
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  ExceptionList = ppvVar2;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

