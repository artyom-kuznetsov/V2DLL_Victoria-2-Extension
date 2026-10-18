// FUN_00b26150 @ 00b26150 body=[[00b26150, 00b261e9] [00b261f0, 00b26252]]


void FUN_00b26150(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  void *pvVar1;
  char cVar2;
  char *pcVar3;
  size_t _MaxCount;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar3 = param_2;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pvVar4 = (void *)*param_1;
  _MaxCount = (int)pcVar3 - (int)(param_2 + 1);
  pvVar1 = (void *)((int)pvVar4 + param_1[8] * 0x18);
  if (_MaxCount != 0) {
    pvVar4 = _bsearch(param_2,pvVar4,param_1[8],0x18,FUN_00b25a10);
    if (pvVar4 == (void *)0x0) {
      FUN_00b1f840("File not found");
      FUN_00b1f840("File not found");
      return;
    }
    pvVar4 = (void *)((int)pvVar4 + 0x18);
  }
  if (pvVar4 != (void *)0x0) {
    while( true ) {
      if (pvVar1 <= pvVar4) {
        return;
      }
      pcVar3 = *(char **)(*(int *)((int)pvVar4 + 0xc) + 0x14);
      pcVar6 = pcVar3 + (_MaxCount != 0) + _MaxCount;
      iVar5 = _strncmp(param_2,pcVar3,_MaxCount);
      if (iVar5 != 0) break;
      iVar5 = FUN_00ab4790(pcVar6,0x2f);
      pcVar3 = pcVar6;
      if (iVar5 == 0) {
        do {
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        FUN_00b260e0(param_4,param_6,param_5,pcVar6);
      }
      pvVar4 = (void *)((int)pvVar4 + 0x18);
    }
    return;
  }
  FUN_00b1f840("File not found");
  return;
}

