// FUN_009eb1f0 @ 009eb1f0 body=[[009eb1f0, 009eb2c9]]


uint FUN_009eb1f0(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *in_EAX;
  int *piVar5;
  int *unaff_EDI;
  
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  if (unaff_EDI != (int *)0x0) {
    *unaff_EDI = 0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  piVar5 = in_EAX + 3;
  if ((*in_EAX == 0x46464952) && (in_EAX[2] == 0x45564157)) {
    piVar1 = (int *)(in_EAX[1] + -4 + (int)piVar5);
    for (; piVar5 < piVar1; piVar5 = (int *)((int)piVar5 + (uVar3 + 1 & 0xfffffffe))) {
      iVar2 = *piVar5;
      uVar3 = piVar5[1];
      piVar5 = piVar5 + 2;
      if (iVar2 == 0x20746d66) {
        if ((param_1 != (uint *)0x0) && (*param_1 == 0)) {
          if (uVar3 < 0xe) break;
          *param_1 = (uint)piVar5;
          if ((unaff_EDI == (int *)0x0) || (*unaff_EDI != 0)) {
            if (param_2 == (uint *)0x0) goto LAB_009eb2c2;
            uVar4 = *param_2;
            goto LAB_009eb2ae;
          }
        }
      }
      else if ((iVar2 == 0x61746164) &&
              (((unaff_EDI != (int *)0x0 && (*unaff_EDI == 0)) ||
               ((param_2 != (uint *)0x0 && (*param_2 == 0)))))) {
        if (unaff_EDI != (int *)0x0) {
          *unaff_EDI = (int)piVar5;
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = uVar3;
        }
        if (param_1 == (uint *)0x0) goto LAB_009eb2c2;
        uVar4 = *param_1;
LAB_009eb2ae:
        if (uVar4 != 0) {
LAB_009eb2c2:
          return CONCAT31((int3)((uint)piVar5 >> 8),1);
        }
      }
    }
  }
  return (uint)piVar5 & 0xffffff00;
}

