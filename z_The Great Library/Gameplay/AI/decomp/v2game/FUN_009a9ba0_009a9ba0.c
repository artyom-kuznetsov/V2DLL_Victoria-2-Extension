// FUN_009a9ba0 @ 009a9ba0 body=[[009a9ba0, 009a9c19]]


undefined4 * FUN_009a9ba0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00e38ecc;
    puVar1[1] = *(undefined4 *)(in_ECX + 4);
    puVar1[7] = 0xf;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    FUN_00408ed0(in_ECX + 8,0,0xffffffff);
    *puVar1 = &PTR_FUN_00e38ee0;
    puVar1[9] = *(undefined4 *)(in_ECX + 0x24);
    puVar2 = puVar1;
  }
  ExceptionList = local_10;
  return puVar2;
}

