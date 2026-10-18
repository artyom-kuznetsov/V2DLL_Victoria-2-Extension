// FUN_005b9810 @ 005b9810 body=[[005b9810, 005b98c2]]


uint FUN_005b9810(int *param_1,undefined4 param_2,int param_3,int param_4,uint *param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_5;
  if ((uVar2 == 4) ||
     ((uVar2 == 3 && (uVar2 = param_5[3], *(int *)(*(int *)(DAT_012588e8 + 8) + uVar2 * 4) == 0))))
  goto LAB_005b9885;
  if (param_3 == param_4) goto LAB_005b9885;
  uVar2 = FUN_005b9690();
  if ((char)uVar2 != '\0') goto LAB_005b9885;
  uVar3 = (**(code **)(*param_1 + 0x3c))();
  if ((char)uVar3 == '\0') goto LAB_005b98af;
  cVar1 = *(char *)(*(int *)(param_3 + 0x5c) + 0x2a);
  uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),cVar1);
  if (cVar1 == '\0') {
LAB_005b9871:
    if (*(char *)(*(int *)(param_4 + 0x5c) + 0x2a) != '\0') {
      if (*(int *)(*(int *)(param_4 + 0x5c) + 0xdc) != *(int *)(param_3 + 0x58)) {
LAB_005b9885:
        return uVar2 & 0xffffff00;
      }
      goto LAB_005b98af;
    }
    if (cVar1 == '\0') goto LAB_005b98af;
  }
  else {
    if (*(char *)(*(int *)(param_4 + 0x5c) + 0x2a) != '\0') goto LAB_005b9885;
    if (cVar1 == '\0') goto LAB_005b9871;
  }
  if ((*(char *)(*(uint *)(param_4 + 0x5c) + 0x2a) == '\0') &&
     (*(int *)(*(int *)(param_3 + 0x5c) + 0xdc) != *(int *)(param_4 + 0x58))) {
    return *(uint *)(param_4 + 0x5c) & 0xffffff00;
  }
LAB_005b98af:
  uVar2 = (**(code **)(*param_1 + 0x84))(param_4);
  return uVar2;
}

