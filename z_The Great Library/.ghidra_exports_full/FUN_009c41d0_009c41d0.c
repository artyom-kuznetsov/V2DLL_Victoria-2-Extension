// FUN_009c41d0 @ 009c41d0 body=[[009c41d0, 009c427a]]


void FUN_009c41d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4f2d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3a930;
  param_1[0x15] = &PTR_LAB_00e3aa5c;
  local_8 = 1;
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_009962f0(param_1[0x28]);
  }
  else {
    FUN_009963d0(param_1[0x25]);
  }
  local_8 = local_8 & 0xffffff00;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2d])(1);
  }
  local_8 = 0xffffffff;
  *param_1 = &PTR_FUN_00e3a6d8;
  param_1[0x15] = &PTR_LAB_00e3a7f0;
  FUN_009c2f40();
  ExceptionList = local_10;
  return;
}

