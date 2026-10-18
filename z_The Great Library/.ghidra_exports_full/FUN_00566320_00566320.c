// FUN_00566320 @ 00566320 body=[[00566320, 0056636c] [00566370, 00566418] [0056641c, 00566431] [00566435, 00566462]]


void FUN_00566320(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void **ppvVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce79;
  local_10 = ExceptionList;
  local_8 = 3;
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4);
      if (iVar1 != 0) {
        ExceptionList = &local_10;
        FUN_00566470();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2);
  }
  iVar5 = 1;
  ExceptionList = &local_10;
  ppvVar4 = &local_10;
  if (4 < (int)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) & 0xfffffffcU)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar5 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar5 = iVar5 + 1;
      ppvVar4 = ExceptionList;
    } while (iVar5 < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2);
  }
  ExceptionList = ppvVar4;
  pvVar3 = *(void **)(param_1 + 0xc);
  if (pvVar3 != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(pvVar3,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar3;
  }
  pvVar3 = *(void **)(param_1 + 0x1c);
  if (pvVar3 != *(void **)(param_1 + 0x20)) {
    FID_conflict__memcpy(pvVar3,*(void **)(param_1 + 0x20),0);
    *(void **)(param_1 + 0x20) = pvVar3;
  }
  FUN_004097a0(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
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

