// FUN_009d1470 @ 009d1470 body=[[009d1470, 009d1680]]


void FUN_009d1470(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x19d) {
    if (param_2 == 0x19c) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x40,0);
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x1a) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 8,0);
      ExceptionList = local_10;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x19d:
      ExceptionList = &local_10;
      FUN_0045be80(param_1,in_ECX + 0x78);
      ExceptionList = local_10;
      return;
    case 0x19e:
      ExceptionList = &local_10;
      FUN_009a1c10();
      *(undefined4 *)(in_ECX + 0xd4) = 1;
      ExceptionList = local_10;
      return;
    case 0x19f:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0xe0,0);
      *(undefined4 *)(in_ECX + 0xd4) = 2;
      ExceptionList = local_10;
      return;
    case 0x1a0:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x5c,0);
      ExceptionList = local_10;
      return;
    case 0x1a1:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0xb4,0);
      ExceptionList = local_10;
      return;
    case 0x1a2:
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0xd0);
      ExceptionList = local_10;
      return;
    case 0x1a7:
      ExceptionList = &local_10;
      FUN_009a1c10();
      *(undefined4 *)(in_ECX + 0xd4) = 3;
      ExceptionList = local_10;
      return;
    case 0x1a8:
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = 0;
      local_8 = 0;
      ExceptionList = &local_10;
      FUN_009a1750(local_2c,0);
      FUN_00a840b0();
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    case 0x1a9:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x98,0);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = &local_10;
  FUN_009a0f40();
  ExceptionList = local_10;
  return;
}

