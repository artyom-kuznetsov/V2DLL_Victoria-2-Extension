// FUN_00a06370 @ 00a06370 body=[[00a06370, 00a06448]]


undefined4 * FUN_00a06370(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 uStack_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  char local_3c [32];
  undefined4 *local_1c;
  char *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56118;
  local_10 = ExceptionList;
  local_18 = local_70;
  uStack_74 = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_78 = &DAT_00ded94d;
  local_70[0] = 0;
  local_7c = 0xa063b7;
  ExceptionList = &local_10;
  FUN_00409350();
  local_1c = (undefined4 *)local_8c;
  local_8 = 0;
  local_78 = (undefined1 *)0xf;
  local_7c = 0;
  local_8c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_009fa9f0(param_1,0xf1);
  local_1c = param_1 + 0x1d;
  *param_1 = &PTR_FUN_00e3e958;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)local_1c = 0;
  local_8 = 2;
  uStack_58 = 0xa06416;
  pcVar2 = __itoa(0,local_3c,10);
  local_18 = pcVar2 + 1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  ExceptionList = local_10;
  return param_1;
}

