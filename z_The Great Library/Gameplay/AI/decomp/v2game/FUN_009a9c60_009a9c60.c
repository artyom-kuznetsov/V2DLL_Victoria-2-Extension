// FUN_009a9c60 @ 009a9c60 body=[[009a9c60, 009a9cdb]]


undefined1 * FUN_009a9c60(undefined1 *param_1)

{
  char cVar1;
  int _Value;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  char local_34 [32];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  _Value = *(int *)(in_ECX + 0x24);
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_14 = 0;
  *param_1 = 0;
  local_8 = 0;
  pcVar2 = __itoa(_Value,local_34,10);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  ExceptionList = local_10;
  return param_1;
}

