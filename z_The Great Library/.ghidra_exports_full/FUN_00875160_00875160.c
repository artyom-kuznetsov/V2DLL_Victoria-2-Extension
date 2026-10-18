// FUN_00875160 @ 00875160 body=[[00875160, 0087519c] [008751a0, 0087523c] [00875240, 0087526e] [00875272, 0087529f]]


void FUN_00875160(int param_1)

{
  int *piVar1;
  void *pvVar2;
  void **ppvVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ab09;
  local_10 = ExceptionList;
  local_8 = 3;
  piVar5 = *(int **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c) - (int)piVar5 >> 2;
  ppvVar3 = &local_10;
  if (iVar4 != 0) {
    piVar1 = piVar5 + iVar4;
    ExceptionList = &local_10;
    for (; ppvVar3 = ExceptionList, piVar5 != piVar1; piVar5 = piVar5 + 1) {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
    }
  }
  ExceptionList = ppvVar3;
  pvVar2 = *(void **)(param_1 + 0x28);
  if (pvVar2 != *(void **)(param_1 + 0x2c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x2c),0);
    *(void **)(param_1 + 0x2c) = pvVar2;
  }
  piVar5 = *(int **)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10) - (int)piVar5 >> 2;
  if (iVar4 != 0) {
    piVar1 = piVar5 + iVar4;
    for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
    }
  }
  pvVar2 = *(void **)(param_1 + 0xc);
  if (pvVar2 != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_0057afc0(param_1 + 0x1c);
    FUN_00aaea59(*(undefined4 *)(param_1 + 0x24));
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      FUN_0057afc0(param_1);
      FUN_00aaea59(*(undefined4 *)(param_1 + 8));
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(param_1 + 0x28));
}

