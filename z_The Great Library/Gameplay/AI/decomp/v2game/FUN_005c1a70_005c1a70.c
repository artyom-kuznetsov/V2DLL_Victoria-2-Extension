// FUN_005c1a70 @ 005c1a70 body=[[005c1a70, 005c1aac] [005c1ab0, 005c1ad1] [005c1ad5, 005c1b04]]


void FUN_005c1a70(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a9e3;
  local_10 = ExceptionList;
  local_8 = 1;
  piVar4 = *(int **)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10) - (int)piVar4 >> 2;
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
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0057afc0(param_1);
  FUN_00aaea59(*(undefined4 *)(param_1 + 8));
  ExceptionList = local_10;
  return;
}

