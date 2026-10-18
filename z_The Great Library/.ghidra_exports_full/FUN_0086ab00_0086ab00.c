// FUN_0086ab00 @ 0086ab00 body=[[0086ab00, 0086ab9b]]


undefined4 FUN_0086ab00(undefined4 param_1,int *param_2)

{
  undefined1 local_bc [16];
  undefined1 local_ac [152];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52914;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_0086bf50(local_bc);
  local_8 = 1;
  FUN_0048b410(local_ac,(float)*param_2 / 1000.0);
  FUN_0086c000();
  local_14 = 1;
  local_8 = local_8 & 0xffffff00;
  FUN_0086ac30();
  ExceptionList = local_10;
  return param_1;
}

