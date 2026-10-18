// FUN_00476ba0 @ 00476ba0 body=[[00476ba0, 00476c30]]


undefined1 * FUN_00476ba0(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d229;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  param_1 = 1;
  cVar1 = FUN_00476ae0();
  if (cVar1 == '\0') {
    cVar1 = FUN_00476ae0();
    if (cVar1 == '\0') {
      FUN_00476ae0();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

