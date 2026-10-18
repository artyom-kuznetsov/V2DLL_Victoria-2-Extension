// FUN_009aa1c0 @ 009aa1c0 body=[[009aa1c0, 009aa223] [009aa229, 009aa23e] [009aa244, 009aa25f]]


void FUN_009aa1c0(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a856;
  local_10 = ExceptionList;
  local_8 = 1;
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
  if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
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

