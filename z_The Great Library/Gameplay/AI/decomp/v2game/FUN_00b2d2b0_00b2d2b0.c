// FUN_00b2d2b0 @ 00b2d2b0 body=[[00b2d2b0, 00b2d403]]


int FUN_00b2d2b0(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,
                int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int *param_10,
                undefined4 *param_11)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  iVar1 = FUN_00b2cad0(param_2,&local_14,param_6,&local_8,param_7,param_8,param_9,*param_11,param_11
                      );
  if (iVar1 != 0) {
    return iVar1;
  }
  local_10 = local_10 + param_5 + (uint)CARRY4(local_14,param_4);
  if (param_6[4] != 1) {
    return 6;
  }
  local_c = param_6[5];
  uVar2 = FUN_00b2f800(local_c);
  iVar1 = (*(code *)param_1[1])(param_1,local_14 + param_4,local_10);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *param_6;
  if (iVar1 != 0) {
    piVar3 = (int *)param_6[1];
    do {
      iVar4 = iVar4 + *piVar3;
      piVar3 = piVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (iVar4 != 0) {
      iVar1 = (*(code *)*param_11)(iVar4);
      *param_10 = iVar1;
      if (iVar1 == 0) {
        return -0x7ff8fff2;
      }
      goto LAB_00b2d375;
    }
  }
  *param_10 = 0;
LAB_00b2d375:
  iVar1 = (*(code *)*param_1)(param_1,*param_10,iVar4,&local_8);
  if (iVar1 == 0) {
    if (local_8 != iVar4) {
      return -0x7fffbffb;
    }
    iVar1 = FUN_00b2f980(param_3,uVar2,*param_11);
    iVar4 = local_c;
    if (iVar1 == 0) {
      return -0x7ff8fff2;
    }
    iVar1 = FUN_00b2f640(param_6[1],local_c,*param_10,*(undefined4 *)(param_3 + 4),uVar2,param_11);
    if (iVar1 == 0) {
      if ((*(int *)(iVar4 + 0x1c) != 0) && (iVar1 = FUN_00b2d8f0(), iVar1 != *(int *)(iVar4 + 0x20))
         ) {
        return -0x7fffbffb;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

