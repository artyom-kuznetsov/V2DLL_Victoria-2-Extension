// FUN_0055c7e0 @ 0055c7e0 body=[[0055c7e0, 0055c81c] [0055c820, 0055c844] [0055c848, 0055c87f] [0055c883, 0055c89e]]


void FUN_0055c7e0(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3cf3f;
  local_10 = ExceptionList;
  local_8 = 2;
  piVar4 = *(int **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8) - (int)piVar4 >> 2;
  ppvVar2 = &local_10;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    ExceptionList = &local_10;
    for (; ppvVar2 = ExceptionList, piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  ExceptionList = ppvVar2;
  if (*(int *)(param_1 + 0x414) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x414));
  }
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x14),0x10,0x40,FUN_00aa8540);
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_10;
  return;
}

