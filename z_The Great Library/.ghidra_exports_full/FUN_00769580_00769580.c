// FUN_00769580 @ 00769580 body=[[00769580, 00769663]]


void FUN_00769580(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))
            (*(undefined4 *)
              (*(int *)(DAT_012588e8 + 0xacc) +
              *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x2c) * 4) + 0xbe4) *
              4));
  iVar1 = FUN_00aae9af(0x50);
  puStack_10 = (undefined1 *)0x0;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0x3c) + 0x28))();
    uVar3 = FUN_007297a0(iVar1,*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x2c),
                         *(undefined4 *)(DAT_012588e8 + 0xb5c),*(undefined4 *)(DAT_012588e8 + 0xb60)
                         ,*(undefined4 *)(iVar2 + 0x6c));
  }
  puStack_10 = (undefined1 *)0xffffffff;
  iVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0x3c) + 0x28))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  ExceptionList = pvStack_1c;
  return;
}

