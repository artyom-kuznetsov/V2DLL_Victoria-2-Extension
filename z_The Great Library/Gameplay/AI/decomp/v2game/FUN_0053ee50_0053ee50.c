// FUN_0053ee50 @ 0053ee50 body=[[0053ee50, 0053eedf] [0053eee3, 0053ef06] [0053ef0a, 0053ef1e]]


/* WARNING: Removing unreachable block (ram,0x0053ee96) */

int FUN_0053ee50(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b3a868;
  piVar1 = *(int **)(param_1 + 0x83c);
  ppvVar4 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar4;
    if (piVar1 == (int *)0x0) {
      if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_2);
      }
      ExceptionList = local_10;
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    uVar3 = *(uint *)(*(int *)(iVar2 + 0x54) + 0x1c);
    uVar6 = in_stack_00000018;
    if (uVar3 < in_stack_00000018) {
      uVar6 = uVar3;
    }
    iVar5 = FUN_00414bd0(uVar6);
    ppvVar4 = ExceptionList;
  } while (((iVar5 != 0) || (uVar3 < in_stack_00000018)) || (uVar3 != in_stack_00000018));
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return iVar2;
}

