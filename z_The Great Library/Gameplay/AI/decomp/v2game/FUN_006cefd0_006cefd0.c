// FUN_006cefd0 @ 006cefd0 body=[[006cefd0, 006cf0a0]]


void FUN_006cefd0(void)

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
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined1 *)(*(int *)(in_ECX + 0x6c) + 0x4c) = 1;
  uVar3 = *(undefined4 *)(in_ECX + 0x6c);
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  *(undefined1 *)(in_ECX + 100) = 1;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  iVar1 = FUN_00aae9af(0x50);
  puStack_10 = (undefined1 *)0x0;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
    uVar3 = FUN_007297a0(iVar1,*(undefined4 *)(in_ECX + 0x9c),*(undefined4 *)(in_ECX + 0xa0),
                         *(undefined4 *)(DAT_012588e8 + 0xb5c),*(undefined4 *)(DAT_012588e8 + 0xb60)
                         ,*(undefined4 *)(iVar2 + 0x6c));
  }
  puStack_10 = (undefined1 *)0xffffffff;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  ExceptionList = pvStack_1c;
  return;
}

