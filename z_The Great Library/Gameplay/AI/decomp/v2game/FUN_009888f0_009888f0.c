// FUN_009888f0 @ 009888f0  (requested 009888F0, first bytes: 55 8B EC 6A FF 68 B8 E5)


undefined1 * FUN_009888f0(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
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
  pcVar2 = __itoa(in_ECX,local_30,10);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  ExceptionList = local_10;
  return param_1;
}

