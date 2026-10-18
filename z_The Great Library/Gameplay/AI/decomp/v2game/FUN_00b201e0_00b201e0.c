// FUN_00b201e0 @ 00b201e0 body=[[00b201e0, 00b202fd]]


int FUN_00b201e0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  char *_MaxCount;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *_Str2;
  int local_8;
  
  _Str2 = (char *)*param_2;
  iVar3 = 1;
  local_8 = 1;
  if (*_Str2 != '\0') {
    pcVar7 = (char *)param_1[2];
    if (pcVar7 != (char *)0x0) {
      pcVar1 = pcVar7 + 1;
      pcVar4 = pcVar7;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      pcVar5 = _Str2;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      _MaxCount = pcVar4 + (-1 - (int)pcVar1);
      if (((pcVar5 + -(int)(_Str2 + 1) < _MaxCount) ||
          (local_8 = _strncmp(pcVar7,_Str2,(size_t)_MaxCount), local_8 != 0)) ||
         ((_MaxCount < pcVar5 + -(int)(_Str2 + 1) &&
          (_Str2[(int)(pcVar4 + (-1 - (int)pcVar1))] != '/')))) {
        FUN_00b1f840("Path not found");
        return 0;
      }
      pcVar7 = _Str2 + (int)(pcVar4 + (-1 - (int)pcVar1));
      _Str2 = _Str2 + (int)(pcVar4 + (-1 - (int)pcVar1));
      if (*pcVar7 == '/') {
        _Str2 = _Str2 + 1;
      }
      *param_2 = _Str2;
    }
    local_8 = 1;
    iVar3 = 1;
    pcVar7 = _Str2;
    if (DAT_00f20a98 == 0) {
      while( true ) {
        puVar6 = (undefined1 *)FUN_00ab4790(pcVar7,0x2f);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
        }
        iVar3 = (**(code **)(param_1[3] + 0x18))(*param_1,_Str2,&local_8);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0x2f;
        }
        if (iVar3 != 0) {
          FUN_00b1f840("Symbolic links are disabled");
          return 0;
        }
        if (local_8 == 0) break;
        if (puVar6 == (undefined1 *)0x0) {
          return local_8;
        }
        pcVar7 = puVar6 + 1;
      }
      if ((puVar6 == (undefined1 *)0x0) || (iVar3 = 0, param_3 != 0)) {
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}

