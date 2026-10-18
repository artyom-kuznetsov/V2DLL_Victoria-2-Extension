// FUN_00b2b070 @ 00b2b070 body=[[00b2b070, 00b2b2e6]]


int FUN_00b2b070(undefined4 *param_1,int param_2,uint param_3,int *param_4,int *param_5,
                uint *param_6,int *param_7,int *param_8,undefined4 *param_9,undefined4 *param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_24;
  int local_20;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_2;
  iVar4 = *(int *)(*(int *)(param_2 + 0x3c) + param_3 * 4);
  *param_7 = 0;
  param_2 = 0;
  *param_8 = 0;
  if (iVar4 == -1) {
    (*(code *)param_9[1])(*param_5);
    *param_4 = -1;
    *param_5 = 0;
    *param_6 = 0;
    return 0;
  }
  if ((*param_5 != 0) && (*param_4 == iVar4)) goto LAB_00b2b264;
  local_10 = *(int *)(iVar2 + 0x14) + iVar4 * 0x28;
  local_1c = FUN_00b2f800(local_10);
  uVar6 = FUN_00b2b520(iVar2,iVar4,0);
  local_8 = 0;
  iVar3 = FUN_00b2b550(iVar2,iVar4,&local_24);
  if (iVar3 != 0) {
    return iVar3;
  }
  local_c = local_24;
  if ((local_20 != 0) || (local_1c._4_4_ != 0)) {
    return -0x7ff8fff2;
  }
  *param_4 = iVar4;
  (*(code *)param_9[1])(*param_5);
  *param_5 = 0;
  iVar3 = (*(code *)param_1[1])(param_1,uVar6);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (local_c != 0) {
    local_8 = (*(code *)*param_10)(local_c);
    if (local_8 == 0) {
      return -0x7ff8fff2;
    }
  }
  param_2 = (*(code *)*param_1)(param_1,local_8,local_c,&local_14);
  uVar1 = (uint)local_1c;
  if (param_2 == 0) {
    if (local_14 == local_c) {
      *param_6 = (uint)local_1c;
      if ((uint)local_1c != 0) {
        iVar3 = (*(code *)*param_9)((uint)local_1c);
        *param_5 = iVar3;
        if (iVar3 == 0) {
          param_2 = -0x7ff8fff2;
          goto LAB_00b2b24f;
        }
      }
      param_2 = FUN_00b2f640(*(int *)(iVar2 + 4) + *(int *)(*(int *)(iVar2 + 0x30) + iVar4 * 4) * 8,
                             local_10,local_8,*param_5,uVar1,param_10);
      if ((param_2 == 0) && (*(int *)(local_10 + 0x1c) != 0)) {
        iVar3 = FUN_00b2d8f0();
        if (iVar3 != *(int *)(local_10 + 0x20)) {
          param_2 = 3;
        }
      }
    }
    else {
      param_2 = -0x7fffbffb;
    }
  }
LAB_00b2b24f:
  (*(code *)param_10[1])(local_8);
  if (param_2 != 0) {
    return param_2;
  }
LAB_00b2b264:
  iVar3 = param_3 * 0x20 + *(int *)(iVar2 + 0x1c);
  *param_7 = 0;
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x38) + iVar4 * 4);
  if (uVar1 < param_3) {
    iVar4 = uVar1 << 5;
    iVar5 = param_3 - uVar1;
    do {
      *param_7 = *param_7 + *(int *)(iVar4 + 8 + *(int *)(iVar2 + 0x1c));
      iVar4 = iVar4 + 0x20;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar4 = *(int *)(iVar3 + 8);
  *param_8 = iVar4;
  if ((uint)(iVar4 + *param_7) <= *param_6) {
    if (*(char *)(iVar3 + 0x18) != '\0') {
      iVar4 = FUN_00b2d8f0();
      if (iVar4 != *(int *)(iVar3 + 0x10)) {
        param_2 = 3;
      }
    }
    return param_2;
  }
  return -0x7fffbffb;
}

