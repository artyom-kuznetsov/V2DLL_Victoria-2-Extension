// FUN_00adce10 @ 00adce10 body=[[00adce10, 00adcf73]]


void FUN_00adce10(float param_1,undefined4 *param_2)

{
  ushort uVar1;
  short sVar2;
  int *in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  float local_4;
  
  uVar1 = *(ushort *)(in_ECX + 1);
  if (uVar1 == 0) {
    local_4 = param_1;
    FUN_00adc9c0(*param_2,0,0x3f800000);
    *(undefined2 *)(in_ECX + 1) = 1;
    FUN_00adca40(1);
    puVar4 = (undefined4 *)(*in_ECX + (uint)(ushort)((short)in_ECX[1] - 1) * 8);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = local_8;
      puVar4[1] = local_4;
      return;
    }
  }
  else if (param_1 < *(float *)(*in_ECX + -4 + (uint)uVar1 * 8)) {
    local_4 = param_1;
    if (param_1 < *(float *)(*in_ECX + 4)) {
      FUN_00adc9c0(*param_2,0,0x3f800000);
      FUN_00adcd20(0,&local_8);
      return;
    }
    FUN_00adc9c0(*param_2,0,0x3f800000);
    puVar4 = &local_8;
    sVar2 = FUN_00adcb60(param_1);
    FUN_00adcd20(sVar2 + 1,puVar4);
  }
  else {
    local_4 = param_1;
    FUN_00adc9c0(*param_2,0,0x3f800000);
    uVar3 = uVar1 + 1;
    *(short *)(in_ECX + 1) = (short)uVar3;
    FUN_00adca40(uVar3 & 0xffff);
    puVar4 = (undefined4 *)(*in_ECX + (uint)(ushort)((short)in_ECX[1] - 1) * 8);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = local_8;
      puVar4[1] = local_4;
      return;
    }
  }
  return;
}

