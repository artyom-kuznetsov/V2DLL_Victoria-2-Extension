// FUN_0040e790 @ 0040e790 body=[[0040e790, 0040e815]]


void FUN_0040e790(void)

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
  if ((*(int *)(in_ECX + 0x390) != 0) && (*(char *)(*(int *)(in_ECX + 0x390) + 0x1f0) == '\0')) {
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

