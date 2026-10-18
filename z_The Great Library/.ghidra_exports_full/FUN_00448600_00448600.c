// FUN_00448600 @ 00448600 body=[[00448600, 0044864b]]


undefined1 * FUN_00448600(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  
  pcVar2 = *(char **)(in_ECX + 8);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_1;
}

