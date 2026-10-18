// FUN_00a70110 @ 00a70110 body=[[00a70110, 00a701a1]]


void FUN_00a70110(int param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d81b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e37db4;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  FUN_00408ed0(param_1 + 8,0,0xffffffff);
  local_8 = 0;
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  FUN_00408ed0(param_1 + 0x24,0,0xffffffff);
  *in_ECX = &PTR_FUN_00e37db4;
  ExceptionList = local_10;
  return;
}

