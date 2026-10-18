// FUN_009a60a0 @ 009a60a0 body=[[009a60a0, 009a611b]]


undefined4 * FUN_009a60a0(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e401;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00993dd0();
  *puVar1 = *(undefined4 *)(in_ECX + 4);
  puVar1[1] = *(undefined4 *)(in_ECX + 4);
  puVar1[2] = *(undefined4 *)(in_ECX + 4);
  *(undefined2 *)(puVar1 + 0xd) = 0;
  local_8 = 1;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    FUN_009a6140(puVar1 + 3,param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}

