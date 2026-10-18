// FUN_00675050 @ 00675050 body=[[00675050, 006750da]]


void FUN_00675050(void)

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
  if (*(int *)(in_ECX + 0x718) != 0) {
    ExceptionList = &local_10;
    FUN_006480e0(*(int *)(in_ECX + 0x718));
    *(undefined4 *)(in_ECX + 0x718) = 0;
  }
  if (DAT_01262ef4 == 0) {
    iVar1 = FUN_00aae9af(0x44);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006a4e30();
    }
    local_8 = 0xffffffff;
    FUN_006a59b0(uVar2);
  }
  FUN_006a52e0(DAT_01262ef4);
  ExceptionList = local_10;
  return;
}

