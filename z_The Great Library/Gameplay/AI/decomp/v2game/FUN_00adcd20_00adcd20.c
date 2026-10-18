// FUN_00adcd20 @ 00adcd20 body=[[00adcd20, 00adcd8e]]


void FUN_00adcd20(ushort param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  short sVar2;
  ushort uVar3;
  int *in_ECX;
  
  sVar2 = (short)in_ECX[1] + 1;
  *(short *)(in_ECX + 1) = sVar2;
  FUN_00adca40(sVar2);
  uVar3 = ((short)in_ECX[1] - param_1) - 1;
  if (uVar3 != 0) {
    FID_conflict__memcpy
              ((void *)(*in_ECX + (uint)(ushort)(param_1 + 1) * 8),
               (void *)(*in_ECX + (uint)param_1 * 8),(uint)uVar3 * 8);
  }
  puVar1 = (undefined4 *)(*in_ECX + (uint)param_1 * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  return;
}

