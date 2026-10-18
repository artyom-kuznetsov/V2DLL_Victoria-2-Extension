// FUN_005b9bd0 @ 005b9bd0 body=[[005b9bd0, 005b9cd1]]


undefined4 FUN_005b9bd0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005b9810(param_1,param_2,param_3,param_4,param_5);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_2 != param_4) {
    cVar1 = (**(code **)(*param_1 + 0x3c))();
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x40))(), cVar1 == '\0')) {
      iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4);
      if (*(int *)(param_4 + 0x134) != *(int *)(iVar2 + 0x20)) {
        if (*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(param_4 + 0x134) * 4) + 0x34) != 0)
        {
          return 0;
        }
        if (((*(char *)(param_4 + 0x130) == 'R') && (*(char *)(param_4 + 0x131) == 'E')) &&
           (*(char *)(param_4 + 0x132) == 'B')) {
          return 0;
        }
        if (((*(char *)(iVar2 + 0x1c) == 'R') && (*(char *)(iVar2 + 0x1d) == 'E')) &&
           (*(char *)(iVar2 + 0x1e) == 'B')) {
          return 0;
        }
      }
      cVar1 = FUN_004b75d0(1);
      if (cVar1 != '\0') {
        return 0;
      }
      return 1;
    }
    iVar2 = FUN_005dc940(param_1[0x30],param_1[0x31]);
    if (iVar2 * 1000 - param_1[0x23] != 0 && param_1[0x23] <= iVar2 * 1000) {
      return 0;
    }
  }
  return 1;
}

