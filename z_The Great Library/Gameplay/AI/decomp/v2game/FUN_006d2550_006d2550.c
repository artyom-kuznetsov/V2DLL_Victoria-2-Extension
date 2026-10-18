// FUN_006d2550 @ 006d2550 body=[[006d2550, 006d262f]]


void FUN_006d2550(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  pvStack_14 = ExceptionList;
  puVar2 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  ExceptionList = &pvStack_14;
  iVar3 = FUN_00aaf0c5((int)puVar2 + 0x19);
  iVar1 = DAT_012588e8;
  iVar4 = FUN_00aae9af(0x48);
  local_c = 0;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    puVar2 = *(undefined4 **)
              (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xb60) * 4) + 0x83c);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = (undefined4 *)puVar2[2];
    }
    uVar5 = FUN_0058d450(iVar4,*(undefined4 *)(iVar1 + 0xb5c),*(undefined4 *)(iVar1 + 0xb60),*puVar2
                        );
  }
  local_c = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar5);
  ExceptionList = pvStack_18;
  return;
}

