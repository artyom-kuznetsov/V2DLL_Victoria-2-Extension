// FUN_00a791f0 @ 00a791f0 body=[[00a791f0, 00a79299]]


undefined4 * FUN_00a791f0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b4b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00a3a480();
  *puVar1 = *(undefined4 *)(in_ECX + 4);
  puVar1[1] = *(undefined4 *)(in_ECX + 4);
  puVar1[2] = *(undefined4 *)(in_ECX + 4);
  *(undefined2 *)(puVar1 + 0x10) = 0;
  local_8 = 1;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    FUN_00408ed0(param_1,0,0xffffffff);
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_1 + 0x2c);
  }
  ExceptionList = local_10;
  return puVar1;
}

