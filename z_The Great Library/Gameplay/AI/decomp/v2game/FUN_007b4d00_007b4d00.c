// FUN_007b4d00 @ 007b4d00 body=[[007b4d00, 007b4d98]]


void FUN_007b4d00(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_d0 [164];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  uStack_28 = 0x11c;
  uStack_2c = 0x7b4d29;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  uVar2 = 0;
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_007b47e0(auStack_d0);
    uVar2 = FUN_007b43d0(iVar1,*(undefined4 *)(DAT_012588e8 + 0xb24),in_ECX + 0x48,
                         *(undefined4 *)(in_ECX + 0x44),*(undefined4 *)(in_ECX + 0x128));
  }
  local_8 = 0xffffffff;
  uStack_2c = 0x7b4d89;
  uStack_28 = uVar2;
  FUN_006480e0();
  ExceptionList = local_10;
  return;
}

