// FUN_00974de0 @ 00974de0 body=[[00974de0, 00974e1c] [00974e20, 00974f7c] [00974f80, 00974fdc] [00974fe0, 00975034] [00975038, 00975052] [00975056, 0097506d] [00975071, 00975088] [0097508c, 009750a3] [009750a7, 009750be] [009750c2, 009750d9] [009750dd, 00975121]]


void FUN_00974de0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  int iVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a950;
  local_10 = ExceptionList;
  local_8 = 8;
  piVar6 = *(int **)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x1c) - (int)piVar6 >> 2;
  ppvVar4 = &local_10;
  if (iVar5 != 0) {
    piVar1 = piVar6 + iVar5;
    ExceptionList = &local_10;
    for (; ppvVar4 = ExceptionList, piVar6 != piVar1; piVar6 = piVar6 + 1) {
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
      }
    }
  }
  ExceptionList = ppvVar4;
  pvVar2 = *(void **)(param_1 + 0x18);
  if (pvVar2 != *(void **)(param_1 + 0x1c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x1c),0);
    *(void **)(param_1 + 0x1c) = pvVar2;
  }
  piVar6 = *(int **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c) - (int)piVar6 >> 2;
  if (iVar5 != 0) {
    piVar1 = piVar6 + iVar5;
    for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
      }
    }
  }
  pvVar2 = *(void **)(param_1 + 0x28);
  if (pvVar2 != *(void **)(param_1 + 0x2c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x2c),0);
    *(void **)(param_1 + 0x2c) = pvVar2;
  }
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) & 0xfffffffcU)) {
    do {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x48) + iVar5 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2);
  }
  pvVar2 = *(void **)(param_1 + 0x48);
  if (pvVar2 != *(void **)(param_1 + 0x4c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x4c),0);
    *(void **)(param_1 + 0x4c) = pvVar2;
  }
  if (4 < (int)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) & 0xfffffffcU)) {
    iVar5 = 1;
    do {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x38) + iVar5 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2);
  }
  pvVar2 = *(void **)(param_1 + 0x38);
  if (pvVar2 != *(void **)(param_1 + 0x3c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x3c),0);
    *(void **)(param_1 + 0x3c) = pvVar2;
  }
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) & 0xfffffffcU)) {
    do {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x68) + iVar5 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2);
  }
  pvVar2 = *(void **)(param_1 + 0x68);
  if (pvVar2 != *(void **)(param_1 + 0x6c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x6c),0);
    *(void **)(param_1 + 0x6c) = pvVar2;
  }
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) & 0xfffffffcU)) {
    do {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x58) + iVar5 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2);
  }
  pvVar2 = *(void **)(param_1 + 0x58);
  if (pvVar2 != *(void **)(param_1 + 0x5c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x5c),0);
    *(void **)(param_1 + 0x5c) = pvVar2;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x68));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_0057afc0(param_1 + 0xc);
    FUN_00aaea59(*(undefined4 *)(param_1 + 0x14));
    FUN_0057afc0(param_1);
    FUN_00aaea59(*(undefined4 *)(param_1 + 8));
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(param_1 + 0x18));
}

