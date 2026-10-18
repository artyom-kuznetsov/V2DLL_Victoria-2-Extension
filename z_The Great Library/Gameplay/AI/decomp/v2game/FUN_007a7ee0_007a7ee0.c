// FUN_007a7ee0 @ 007a7ee0 body=[[007a7ee0, 007a7f94]]


void FUN_007a7ee0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a8070();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x398) + 0x18) + 0x34))();
  if (*(int *)(in_ECX + 0x3ac) == 0) {
    iVar1 = FUN_00aae9af(0xd4);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_007a1fa0(iVar1,*(undefined4 *)(in_ECX + 0x3a0),*(undefined4 *)(in_ECX + 0x18),
                           *(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x1c),
                           *(int *)(in_ECX + 0x3a8) + 0x58,*(undefined4 *)(in_ECX + 0xc),
                           *(undefined1 *)(in_ECX + 0x3c4));
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x3ac) = uVar2;
  }
  FUN_007a2480(*(undefined4 *)(in_ECX + 0x3ac));
  ExceptionList = local_10;
  return;
}

