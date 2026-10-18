// FUN_00aed660 @ 00aed660 body=[[00aed660, 00aed6de]]


uint FUN_00aed660(uint param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_2[1];
  while( true ) {
    param_1 = param_1 + 1;
    if (uVar1 <= param_1) {
      return CONCAT31((int3)(param_1 >> 8),1);
    }
    piVar2 = *(int **)(*param_2 + param_1 * 4);
    uVar5 = param_1;
    if (param_3 == (int *)0x0) break;
    uVar3 = param_3[1];
    uVar6 = 0;
    uVar5 = 0;
    if (uVar3 == 0) break;
    while (iVar4 = *param_3, uVar5 = (**(code **)(*piVar2 + 4))(),
          uVar5 != *(uint *)(iVar4 + uVar6 * 4)) {
      uVar6 = uVar6 + 1;
      if (uVar3 <= uVar6) goto LAB_00aed6ba;
    }
  }
LAB_00aed6ba:
  return uVar5 & 0xffffff00;
}

