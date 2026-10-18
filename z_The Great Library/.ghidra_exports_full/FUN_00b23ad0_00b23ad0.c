// FUN_00b23ad0 @ 00b23ad0 body=[[00b23ad0, 00b23b63]]


void FUN_00b23ad0(int param_1,char *param_2,undefined4 param_3,code *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *_Str2;
  
  _Str2 = *(char **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x10);
  if (*param_2 == '\0') {
    param_2 = (char *)iVar1;
    if (iVar1 != 0) {
      do {
        iVar1 = FUN_00ab4790(_Str2,0x2f);
        if (iVar1 == 0) {
          (*param_4)(param_6,param_5,_Str2);
        }
        _Str2 = _Str2 + 0x1c;
        param_2 = (char *)((int)param_2 + -1);
      } while (param_2 != (char *)0x0);
      return;
    }
  }
  else {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar2 = FUN_00ab4790(_Str2,0x2f);
      if ((iVar2 != 0) && (iVar3 = _strncmp(param_2,_Str2,iVar2 - (int)_Str2), iVar3 == 0)) {
        (*param_4)(param_6,param_5,iVar2 + 1);
      }
      _Str2 = _Str2 + 0x1c;
    }
  }
  return;
}

