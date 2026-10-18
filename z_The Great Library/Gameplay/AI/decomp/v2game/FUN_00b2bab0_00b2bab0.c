// FUN_00b2bab0 @ 00b2bab0 body=[[00b2bab0, 00b2bb27]]


undefined4 FUN_00b2bab0(undefined4 *param_1,uint param_2,int *param_3,code *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1[1] == 0) {
    return 6;
  }
  param_1[1] = param_1[1] + -1;
  cVar1 = *(char *)*param_1;
  *param_1 = (char *)*param_1 + 1;
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      *param_3 = 0;
    }
    else {
      iVar4 = (*param_4)(param_2);
      *param_3 = iVar4;
      if (iVar4 == 0) {
        return 0x8007000e;
      }
    }
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        *(undefined1 *)(uVar3 + *param_3) = 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
    return 0;
  }
  uVar2 = FUN_00b2ba20(param_1,param_2,param_3,param_4);
  return uVar2;
}

