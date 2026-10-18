// FUN_00a847a0 @ 00a847a0 body=[[00a847a0, 00a84831]]


undefined4 * FUN_00a847a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b3e0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)(in_ECX + 4);
  if (*(char *)((int)param_1 + 0x69) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00a851b0();
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)(param_1 + 0x1a);
    if (*(char *)((int)local_18 + 0x69) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_00a847a0(*param_1,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_00a847a0(param_1[2],puVar1);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return local_18;
}

