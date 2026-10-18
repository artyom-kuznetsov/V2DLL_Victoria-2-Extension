// FUN_00b147b0 @ 00b147b0 body=[[00b147b0, 00b147bc] [00b147c0, 00b14801]]


bool FUN_00b147b0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (in_ECX[1] != (int)pcVar2 - (int)(param_1 + 1)) {
    return false;
  }
  if ((char *)*in_ECX == (char *)0x0) {
    return param_1 == (char *)0x0;
  }
  iVar3 = __stricmp((char *)*in_ECX,param_1);
  return iVar3 == 0;
}

