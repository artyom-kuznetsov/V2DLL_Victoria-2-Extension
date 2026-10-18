// FUN_00802800 @ 00802800 body=[[00802800, 008028d5] [008028d9, 00802920]]


void FUN_00802800(int param_1,int param_2,undefined4 param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint in_stack_00000020;
  int *local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d7a8;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar5 = *(int *)(param_1 + 400) * *(int *)(param_1 + 0x18c);
  param_1 = 0;
  ppvVar1 = &local_10;
  ppvVar2 = &local_10;
  if (0 < iVar5) {
    do {
      ExceptionList = ppvVar1;
      FUN_0099e240();
      iVar3 = FUN_00816010();
      uVar4 = *(uint *)(iVar3 + 8);
      while (local_18 != uVar4) {
        if (local_20 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *local_20;
        }
        uVar4 = local_18;
        if (*(uint *)(iVar3 + 8) <= local_18) {
          uVar4 = local_18 - *(uint *)(iVar3 + 8);
        }
        if (*(int *)(*(int *)(*(int *)(iVar3 + 4) + uVar4 * 4) + 0x40) == param_2) {
          FUN_00408ed0(&param_3,0,0xffffffff);
          ppvVar2 = ExceptionList;
          goto joined_r0x00802919;
        }
        FUN_00804580();
        iVar3 = FUN_00816010();
        uVar4 = *(uint *)(iVar3 + 8);
      }
      param_1 = param_1 + 1;
      ppvVar1 = ExceptionList;
      ppvVar2 = ExceptionList;
    } while (param_1 < iVar5);
  }
joined_r0x00802919:
  ExceptionList = ppvVar2;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return;
}

