// FUN_007a7de0 @ 007a7de0 body=[[007a7de0, 007a7ed6]]


void FUN_007a7de0(void)

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
  if (*(int *)(in_ECX + 0x3b0) == 0) {
    iVar1 = FUN_00aae9af(0x108);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_007a33c0(iVar1,in_ECX,*(undefined4 *)(in_ECX + 0x3a0),
                           *(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x14),
                           *(undefined4 *)(in_ECX + 0x1c),*(int *)(in_ECX + 0x3a8) + 0x58,
                           *(undefined1 *)(in_ECX + 0x3c4));
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x3b0) = uVar2;
  }
  iVar1 = *(int *)(in_ECX + 0x3b0);
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x4c) + 0x18) + 0x34))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x50))();
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x100) + 0x18) + 0x34))();
  iVar1 = *(int *)(in_ECX + 0x3ac);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x30) + 0x54))();
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x48) + 0x18) + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

