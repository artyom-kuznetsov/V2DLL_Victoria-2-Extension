// FUN_00b03b10 @ 00b03b10 body=[[00b03b10, 00b03c86]]


undefined4 * FUN_00b03b10(undefined4 *param_1,float param_2,ushort *param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((param_3 == (ushort *)0x0) || (uVar3 = (uint)*param_3, *param_3 == 0xffff)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    uVar3 = FUN_00b03860(param_2);
    uVar3 = uVar3 & 0xffff;
    if (param_3 == (ushort *)0x0) goto LAB_00b03bf6;
  }
  else {
    uVar1 = (uint)*(ushort *)(in_ECX + 1);
    if ((int)(uVar1 - 2) <= (int)uVar3) {
      if (uVar1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar1 - 3 & 0xffff;
      }
    }
    iVar2 = *in_ECX + uVar3 * 0x10;
    if ((*(float *)(iVar2 + 0xc) <= param_2) &&
       (param_2 < *(float *)(iVar2 + 0x1c) != (param_2 == *(float *)(iVar2 + 0x1c)))) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      goto LAB_00b03bf6;
    }
    if ((((int)uVar3 < (int)(uVar1 - 2)) && (*(float *)(iVar2 + 0x1c) <= param_2)) &&
       (param_2 < *(float *)(iVar2 + 0x2c) != (param_2 == *(float *)(iVar2 + 0x2c)))) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      uVar3 = uVar3 + 1 & 0xffff;
      goto LAB_00b03bf6;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    uVar3 = FUN_00b03860(param_2);
    uVar3 = uVar3 & 0xffff;
  }
  *param_3 = (ushort)uVar3;
LAB_00b03bf6:
  if ((short)uVar3 == -1) {
    if (*(ushort *)(in_ECX + 1) == 0) {
      return param_1;
    }
    puVar4 = (undefined4 *)(*in_ECX + -0x10 + (uint)*(ushort *)(in_ECX + 1) * 0x10);
  }
  else {
    if ((int)(uVar3 + 1) <= (int)(*(ushort *)(in_ECX + 1) - 1)) {
      iVar2 = uVar3 * 0x10 + *in_ECX;
      (**(code **)(*(int *)in_ECX[2] + 4))
                (param_1,uVar3,
                 (param_2 - *(float *)(iVar2 + 0xc)) /
                 (*(float *)(iVar2 + 0x1c) - *(float *)(iVar2 + 0xc)));
      return param_1;
    }
    puVar4 = (undefined4 *)(*in_ECX + -0x10 + (uint)*(ushort *)(in_ECX + 1) * 0x10);
  }
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  param_1[2] = puVar4[2];
  return param_1;
}

