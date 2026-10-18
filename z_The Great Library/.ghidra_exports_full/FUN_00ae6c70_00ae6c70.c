// FUN_00ae6c70 @ 00ae6c70 body=[[00ae6c70, 00ae6cf8]]


void FUN_00ae6c70(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37e5b;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_4 = 0;
  *(undefined2 *)(in_ECX + 4) = 0x134;
  puVar2 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(4,0x134,4,0,0,0xffffffff,uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_LAB_00ddd9b8;
    *in_ECX = puVar2;
    ExceptionList = local_c;
    return;
  }
  *in_ECX = 0;
  ExceptionList = local_c;
  return;
}

