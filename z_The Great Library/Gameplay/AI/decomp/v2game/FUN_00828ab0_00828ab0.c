// FUN_00828ab0 @ 00828ab0 body=[[00828ab0, 00828ba6]]


uint FUN_00828ab0(uint param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int *in_EAX;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar3 = param_1;
  if (*(int *)(*(int *)(param_1 + 0x5c) + 0xdc) != 0) {
    *param_3 = 0;
    *param_2 = 0;
    uVar3 = FUN_005dc5d0();
    if (uVar3 == 0) {
      piVar7 = in_EAX;
      uVar4 = (**(code **)(*in_EAX + 0xe8))();
      uVar3 = FUN_0084e740(uVar4,piVar7);
      if ((char)uVar3 == '\0') goto LAB_00828aca;
    }
    if ((0 < in_EAX[0x2d]) && (iVar1 = *(int *)in_EAX[0x2b], iVar1 != 0)) {
      uVar5 = FUN_005dbad0();
      uVar3 = uVar5;
      if (0 < (int)uVar5) {
        uVar4 = (**(code **)(*in_EAX + 0xe8))(param_1);
        uVar3 = FUN_0084b840(uVar4,param_1);
        uVar2 = *(uint *)(iVar1 + 0x98);
        *param_3 = uVar2;
        uVar6 = uVar2;
        if ((int)uVar5 <= (int)uVar2) {
          uVar6 = uVar5;
        }
        if ((int)uVar3 <= (int)(uVar6 * 4)) {
          if ((int)uVar5 < (int)uVar2) {
            *param_2 = uVar5;
          }
          else {
            *param_2 = uVar2;
          }
          if ((int)*param_3 < (int)*param_2) {
            *param_3 = *param_2;
          }
          return (uint)((int)*param_2 <= (int)uVar5);
        }
      }
    }
  }
LAB_00828aca:
  return uVar3 & 0xffffff00;
}

