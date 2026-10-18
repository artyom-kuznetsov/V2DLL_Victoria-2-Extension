// FUN_00b03c90 @ 00b03c90 body=[[00b03c90, 00b03e1f]]


undefined4 * FUN_00b03c90(undefined4 *param_1,float param_2,ushort *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  
  if ((param_3 == (ushort *)0x0) || (uVar3 = (uint)*param_3, *param_3 == 0xffff)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    uVar3 = FUN_00b03970(param_2);
    uVar3 = uVar3 & 0xffff;
    if (param_3 == (ushort *)0x0) goto LAB_00b03d75;
  }
  else {
    uVar2 = (uint)*(ushort *)(in_ECX + 1);
    if ((int)(uVar2 - 2) <= (int)uVar3) {
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar2 - 3 & 0xffff;
      }
    }
    iVar1 = *in_ECX + uVar3 * 0xc;
    if ((*(float *)(iVar1 + 8) <= param_2) &&
       (param_2 < *(float *)(iVar1 + 0x14) != (param_2 == *(float *)(iVar1 + 0x14)))) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      goto LAB_00b03d75;
    }
    if ((((int)uVar3 < (int)(uVar2 - 2)) && (*(float *)(iVar1 + 0x14) <= param_2)) &&
       (param_2 < *(float *)(iVar1 + 0x20) != (param_2 == *(float *)(iVar1 + 0x20)))) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      uVar3 = uVar3 + 1 & 0xffff;
      goto LAB_00b03d75;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    uVar3 = FUN_00b03970(param_2);
    uVar3 = uVar3 & 0xffff;
  }
  *param_3 = (ushort)uVar3;
LAB_00b03d75:
  if ((short)uVar3 != -1) {
    if ((int)(uVar3 + 1) <= (int)(*(ushort *)(in_ECX + 1) - 1)) {
      iVar1 = *in_ECX + uVar3 * 0xc;
      (**(code **)(*(int *)in_ECX[2] + 4))
                (param_1,uVar3,
                 (param_2 - *(float *)(*in_ECX + 8 + uVar3 * 0xc)) /
                 (*(float *)(iVar1 + 0x14) - *(float *)(iVar1 + 8)));
      return param_1;
    }
    FUN_00b00900(param_1);
    return param_1;
  }
  if ((short)in_ECX[1] != 0) {
    FUN_00b00900(param_1);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  return param_1;
}

