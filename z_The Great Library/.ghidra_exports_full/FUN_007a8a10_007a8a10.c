// FUN_007a8a10 @ 007a8a10 body=[[007a8a10, 007a8b5e]]


void FUN_007a8a10(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4b7f6;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_007a8070();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x398) + 0x18) + 0x34))();
  if (*(int *)(in_ECX + 0x3b0) == 0) {
    iVar1 = FUN_00aae9af(0x108);
    uStack_c = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_007a33c0(iVar1,in_ECX,*(undefined4 *)(in_ECX + 0x3a0),
                           *(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x14),
                           *(undefined4 *)(in_ECX + 0x1c),*(int *)(in_ECX + 0x3a8) + 0x58,
                           *(undefined1 *)(in_ECX + 0x3c4));
    }
    uStack_c = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x3b0) = uVar2;
  }
  if (*(int *)(in_ECX + 0x3ac) == 0) {
    iVar1 = FUN_00aae9af(0xd4);
    uStack_c = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_007a1fa0(iVar1,*(undefined4 *)(in_ECX + 0x3a0),*(undefined4 *)(in_ECX + 0x18),
                           *(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x1c),
                           *(int *)(in_ECX + 0x3a8) + 0x58,*(undefined4 *)(in_ECX + 0x10),
                           *(undefined1 *)(in_ECX + 0x3c4));
    }
    uStack_c = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x3ac) = uVar2;
  }
  FUN_007a2480(*(undefined4 *)(in_ECX + 0x3ac));
  iVar1 = *(int *)(in_ECX + 0x3b0);
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x4c) + 0x18) + 0x34))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x50))();
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x100) + 0x18) + 0x34))();
  ExceptionList = pvStack_14;
  return;
}

