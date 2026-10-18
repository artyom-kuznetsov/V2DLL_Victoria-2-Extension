// FUN_00a54930 @ 00a54930 body=[[00a54930, 00a54ae9]]


void FUN_00a54930(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b54ab0;
  local_10 = ExceptionList;
  local_8 = 1;
  switch(param_2) {
  case 0x48:
    ExceptionList = &local_10;
    FUN_009a18e0();
    ExceptionList = local_10;
    return;
  case 0x49:
    ExceptionList = &local_10;
    FUN_009a18e0();
    ExceptionList = local_10;
    return;
  case 0x4a:
    ExceptionList = &local_10;
    FUN_009a18e0();
    ExceptionList = local_10;
    return;
  case 0x4b:
    ExceptionList = &local_10;
    FUN_009a1810();
    ExceptionList = local_10;
    return;
  case 0x4c:
    ExceptionList = &local_10;
    FUN_009a1810();
    ExceptionList = local_10;
    return;
  case 0x4d:
    ExceptionList = &local_10;
    FUN_009a1de0();
    ExceptionList = local_10;
    return;
  case 0x4e:
    ExceptionList = &local_10;
    FUN_009a1de0();
    ExceptionList = local_10;
    return;
  case 0x4f:
    ExceptionList = &local_10;
    FUN_009a1810();
    ExceptionList = local_10;
    return;
  case 0x50:
    ExceptionList = &local_10;
    FUN_009a1de0();
    ExceptionList = local_10;
    return;
  case 0x51:
    ExceptionList = &local_10;
    FUN_009a1de0();
    ExceptionList = local_10;
    return;
  default:
    ExceptionList = &local_10;
    FUN_00a20b80(param_1,param_2);
    ExceptionList = local_10;
    return;
  case 0x53:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0xc0,0);
    ExceptionList = local_10;
    return;
  }
}

