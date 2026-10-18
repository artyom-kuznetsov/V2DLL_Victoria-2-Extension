// FUN_00988bb0 @ 00988bb0 body=[[00988bb0, 00988c68]]


undefined1 * FUN_00988bb0(undefined1 *param_1,int param_2,longlong param_3)

{
  char cVar1;
  char *pcVar2;
  char local_4c [32];
  undefined *local_2c [4];
  undefined *local_1c;
  undefined *local_18;
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_2c[0] = &DAT_00e37878;
  local_2c[1] = &DAT_00e37880;
  local_2c[2] = &DAT_00e37888;
  local_2c[3] = &DAT_00e37870;
  local_1c = &DAT_00e37890;
  local_18 = &DAT_00e37898;
  local_14 = &DAT_00e378a0;
  _sprintf(local_4c,local_2c[param_2],(double)param_3 * 3.0517578125e-05);
  pcVar2 = local_4c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_4c,(int)pcVar2 - (int)(local_4c + 1));
  ExceptionList = local_10;
  return param_1;
}

