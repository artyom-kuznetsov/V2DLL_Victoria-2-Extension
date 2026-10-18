// FUN_00b2bb30 @ 00b2bb30 body=[[00b2bb30, 00b2bbad]]


int FUN_00b2bb30(undefined4 param_1,uint param_2,int *param_3,int *param_4,code *param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00b2bab0(param_1,param_2,param_3,param_5);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      *param_4 = 0;
    }
    else {
      iVar1 = (*param_5)(param_2 * 4);
      *param_4 = iVar1;
      if (iVar1 == 0) {
        return -0x7ff8fff2;
      }
    }
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        if ((*(char *)(uVar2 + *param_3) != '\0') &&
           (iVar1 = FUN_00b2b790(param_1,*param_4 + uVar2 * 4), iVar1 != 0)) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    iVar1 = 0;
  }
  return iVar1;
}

