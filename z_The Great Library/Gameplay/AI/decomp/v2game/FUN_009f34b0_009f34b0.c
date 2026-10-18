// FUN_009f34b0 @ 009f34b0 body=[[009f34b0, 009f3542]]


undefined4 * FUN_009f34b0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b493f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x74);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_009f2f30(puVar1,in_ECX);
    local_8 = CONCAT31(local_8._1_3_,1);
    *puVar1 = &PTR_FUN_00e3d08c;
    puVar1[0x15] = *(undefined4 *)(in_ECX + 0x54);
    puVar1[0x1b] = 0xf;
    puVar1[0x1a] = 0;
    *(undefined1 *)(puVar1 + 0x16) = 0;
    FUN_00408ed0(in_ECX + 0x58,0,0xffffffff);
    ExceptionList = local_10;
    return puVar1;
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

