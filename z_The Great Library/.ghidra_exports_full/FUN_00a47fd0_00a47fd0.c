// FUN_00a47fd0 @ 00a47fd0 body=[[00a47fd0, 00a480b4]]


undefined4 * FUN_00a47fd0(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52513;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x178);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_009d9070(puVar1,param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
    *(undefined2 *)(puVar1 + 0x55) = 0;
    *puVar1 = &PTR_FUN_00e44080;
    puVar1[0x54] = 0;
    puVar1[0x5b] = 0xf;
    puVar1[0x5a] = 0;
    *(undefined1 *)(puVar1 + 0x56) = 0;
    FUN_00409350("animated",8);
    puVar1[0x53] = in_ECX;
    *(short *)(puVar1 + 0x5d) = (short)*(undefined4 *)(in_ECX + 0x8c);
    *(short *)((int)puVar1 + 0x176) = (short)*(undefined4 *)(in_ECX + 0x90);
    ExceptionList = local_10;
    return puVar1;
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

