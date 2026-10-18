// FUN_00a3d110 @ 00a3d110 body=[[00a3d110, 00a3d17e]]


undefined4 * FUN_00a3d110(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00aae9af(0x144);
  local_8 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 0x8c);
    FUN_007d9800(puVar2,in_ECX);
    puVar2[0x4f] = uVar1;
    *puVar2 = &PTR_FUN_00e40a38;
    puVar2[0x50] = 0;
    puVar3 = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}

