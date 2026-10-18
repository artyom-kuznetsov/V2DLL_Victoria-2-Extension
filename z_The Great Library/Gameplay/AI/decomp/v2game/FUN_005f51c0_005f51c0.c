// FUN_005f51c0 @ 005f51c0 body=[[005f51c0, 005f52ef]]


void FUN_005f51c0(char param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3cd30;
  local_10 = ExceptionList;
  if (param_1 == '\0') {
    ExceptionList = &local_10;
    FUN_00401320();
    local_8 = 1;
    FUN_00401320();
    local_8 = 0xffffffff;
    FUN_004b8a30(*(undefined4 *)(in_ECX + 0x54));
  }
  else {
    ExceptionList = &local_10;
    *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x40);
    *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x44);
    FUN_00401320();
    local_8 = 0;
    FUN_00401320();
    local_8 = 0xffffffff;
    FUN_004b8a30(*(undefined4 *)(in_ECX + 0x14));
  }
  ExceptionList = local_10;
  return;
}

