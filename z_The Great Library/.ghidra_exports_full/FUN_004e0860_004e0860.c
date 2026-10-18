// FUN_004e0860 @ 004e0860 body=[[004e0860, 004e08f9]]


void FUN_004e0860(int param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 local_174 [356];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5150d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004dff10(local_174,in_ECX + -0x160);
  local_8 = 0;
  FUN_004dcf00(param_1);
  FUN_004e0650(param_1,0,((in_ECX - param_1) + -0x160) / 0x160,local_174,param_2);
  local_8 = 0xffffffff;
  FUN_004dd290(local_174);
  ExceptionList = local_10;
  return;
}

