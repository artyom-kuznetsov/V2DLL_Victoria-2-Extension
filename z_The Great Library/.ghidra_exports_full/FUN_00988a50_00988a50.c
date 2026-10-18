// FUN_00988a50 @ 00988a50 body=[[00988a50, 00988b1d]]


undefined1 * FUN_00988a50(undefined1 *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char local_30 [32];
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
  pcVar2 = local_30;
  if (param_2 < 0) {
    local_30[0] = '-';
    pcVar2 = local_30 + 1;
    param_2 = -param_2;
  }
  __itoa(param_2 / 1000,pcVar2,10);
  if (0 < param_3) {
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    __itoa(param_2 % 1000 + 1000,pcVar2,10);
    *pcVar2 = '.';
    pcVar2[param_3 + 1] = '\0';
  }
  pcVar2 = local_30;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_30,(int)pcVar2 - (int)(local_30 + 1));
  ExceptionList = local_10;
  return param_1;
}

