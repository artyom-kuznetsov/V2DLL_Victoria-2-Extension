// FUN_00b0a660 @ 00b0a660 body=[[00b0a660, 00b0a7da]]


float10 FUN_00b0a660(float param_1,ushort *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  float10 fVar4;
  
  if ((param_2 == (ushort *)0x0) || (uVar3 = (uint)*param_2, *param_2 == 0xffff)) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    uVar3 = FUN_00adcb60(param_1);
    uVar3 = uVar3 & 0xffff;
    if (param_2 == (ushort *)0x0) goto LAB_00b0a743;
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
    iVar1 = *in_ECX + uVar3 * 8;
    if ((*(float *)(*in_ECX + 4 + uVar3 * 8) <= param_1) &&
       (param_1 < *(float *)(iVar1 + 0xc) != (param_1 == *(float *)(iVar1 + 0xc)))) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      goto LAB_00b0a743;
    }
    if ((((int)uVar3 < (int)(uVar2 - 2)) && (*(float *)(iVar1 + 0xc) <= param_1)) &&
       (param_1 < *(float *)(iVar1 + 0x14) != (param_1 == *(float *)(iVar1 + 0x14)))) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      uVar3 = uVar3 + 1 & 0xffff;
      goto LAB_00b0a743;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    uVar3 = FUN_00adcb60(param_1);
    uVar3 = uVar3 & 0xffff;
  }
  *param_2 = (ushort)uVar3;
LAB_00b0a743:
  if ((short)uVar3 != -1) {
    if ((int)(uVar3 + 1) <= (int)(*(ushort *)(in_ECX + 1) - 1)) {
      iVar1 = *in_ECX + uVar3 * 8;
      fVar4 = (float10)(**(code **)(*(int *)in_ECX[2] + 4))
                                 (uVar3,(param_1 - *(float *)(*in_ECX + 4 + uVar3 * 8)) /
                                        (*(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 4)));
      return fVar4;
    }
    return (float10)*(ushort *)(*in_ECX + -8 + (uint)*(ushort *)(in_ECX + 1) * 8) *
           (float10)1.5259022e-05;
  }
  if (*(ushort *)(in_ECX + 1) != 0) {
    return (float10)*(ushort *)(*in_ECX + -8 + (uint)*(ushort *)(in_ECX + 1) * 8) *
           (float10)1.5259022e-05;
  }
  return (float10)0;
}

