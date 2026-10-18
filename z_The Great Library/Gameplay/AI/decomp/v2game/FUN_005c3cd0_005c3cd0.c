// FUN_005c3cd0 @ 005c3cd0 body=[[005c3cd0, 005c3dad] [005c3db1, 005c3dc8] [005c3dcc, 005c3dfb]]


void FUN_005c3cd0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3afde;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  FUN_0057afc0(param_1);
  piVar4 = *(int **)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10) - (int)piVar4 >> 2;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  pvVar2 = *(void **)(param_1 + 0xc);
  if (pvVar2 != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  piVar4 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20) - (int)piVar4 >> 2;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  pvVar2 = *(void **)(param_1 + 0x1c);
  if (pvVar2 != *(void **)(param_1 + 0x20)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x20),0);
    *(void **)(param_1 + 0x20) = pvVar2;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
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
  FUN_00aae91b(*(int *)(param_1 + 0x1c));
}

