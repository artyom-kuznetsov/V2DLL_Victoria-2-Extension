// FUN_00b1fc40 @ 00b1fc40 body=[[00b1fc40, 00b1fcb3]]


bool FUN_00b1fc40(int param_1)

{
  char cVar1;
  char *_Str2;
  char *pcVar2;
  uint _MaxCount;
  int iVar3;
  char *unaff_EBX;
  
  _Str2 = *(char **)(param_1 + 8);
  if (_Str2 == (char *)0x0) {
    return false;
  }
  if (*unaff_EBX == '\0') {
    return true;
  }
  pcVar2 = unaff_EBX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _MaxCount = (int)pcVar2 - (int)(unaff_EBX + 1);
  pcVar2 = _Str2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((_MaxCount <= (uint)((int)pcVar2 - (int)(_Str2 + 1))) &&
     (_MaxCount + 1 != (int)pcVar2 - (int)(_Str2 + 1))) {
    iVar3 = _strncmp(unaff_EBX,_Str2,_MaxCount);
    if (iVar3 == 0) {
      return *(char *)(_MaxCount + *(int *)(param_1 + 8)) == '/';
    }
  }
  return false;
}

