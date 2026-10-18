// FUN_0079d950 @ 0079d950 body=[[0079d950, 0079d9d4]]


void FUN_0079d950(void)

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
  if (*(int *)(in_ECX + 0x34) != 0) {
    ExceptionList = &local_10;
    FUN_0079d410(*(int *)(in_ECX + 0x34));
  }
  iVar1 = FUN_00aae9af(0x13c);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00796fe0(iVar1,*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(DAT_012588e8 + 0xb24))
    ;
    *(undefined4 *)(in_ECX + 0x34) = uVar2;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  ExceptionList = local_10;
  return;
}

