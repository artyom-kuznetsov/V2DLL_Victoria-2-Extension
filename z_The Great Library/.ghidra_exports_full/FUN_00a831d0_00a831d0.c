// FUN_00a831d0 @ 00a831d0 body=[[00a831d0, 00a83370]]


void FUN_00a831d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  local_10 = ExceptionList;
  if (param_2 < 0x122) {
    if (param_2 == 0x121) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x10,0);
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x24) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x7c,0);
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x6d) {
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x115) {
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x122:
      ExceptionList = &local_10;
      FUN_009a1c10();
      ExceptionList = local_10;
      return;
    case 0x123:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x60);
      local_8 = 0;
      if (iVar1 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_00a833c0(iVar1);
      }
      local_8 = 0xffffffff;
      (**(code **)(*piVar2 + 0xc))(param_1);
      FUN_0068f390();
      ExceptionList = local_10;
      return;
    case 0x124:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x4c,0);
      ExceptionList = local_10;
      return;
    case 0x157:
      ExceptionList = &local_10;
      FUN_009a1ca0();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = &local_10;
  FUN_009a0f40();
  ExceptionList = local_10;
  return;
}

