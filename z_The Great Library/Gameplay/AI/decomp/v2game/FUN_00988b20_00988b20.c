// FUN_00988b20 @ 00988b20 body=[[00988b20, 00988ba7]]


undefined1 * FUN_00988b20(undefined1 *param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  char local_34 [36];
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
  _sprintf(local_34,"%.3f",(double)param_2 * 3.0517578125e-05);
  pcVar2 = local_34;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_34,(int)pcVar2 - (int)(local_34 + 1));
  ExceptionList = local_10;
  return param_1;
}

