// FUN_009aca80 @ 009aca80 body=[[009aca80, 009acaeb]]


undefined4 * FUN_009aca80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3bd73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_8 = 1;
    *puVar1 = &PTR_FUN_00e38f64;
    puVar1[6] = 0xf;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    FUN_00408ed0(in_ECX + 4,0,0xffffffff);
    puVar2 = puVar1;
  }
  ExceptionList = local_10;
  return puVar2;
}

