// FUN_0040dbe0 @ 0040dbe0 body=[[0040dbe0, 0040dc76]]


void FUN_0040dbe0(void)

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
  iVar1 = *(int *)(in_ECX + 0x390);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) &&
     (*(int *)(iVar1 + 0x218) == *(int *)(in_ECX + 0x3a4))) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x78);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0040b790(iVar1,*(undefined4 *)(in_ECX + 0x80),in_ECX,
                           *(undefined4 *)(in_ECX + 0x390));
    }
    local_8 = 0xffffffff;
    FUN_006480e0(uVar2);
  }
  ExceptionList = local_10;
  return;
}

