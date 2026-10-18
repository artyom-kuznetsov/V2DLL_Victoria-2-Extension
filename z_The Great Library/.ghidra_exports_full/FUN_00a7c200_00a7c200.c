// FUN_00a7c200 @ 00a7c200 body=[[00a7c200, 00a7c2ec]]


void FUN_00a7c200(int *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [12];
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *(float *)(in_ECX + 0xfc) = (float)*param_1;
  *(float *)(in_ECX + 0x100) = (float)param_1[1];
  FUN_005da1e0();
  local_14 = (float)*(ushort *)(in_ECX + 0x106) * 0.5 - (float)param_1[1];
  local_10 = DAT_00f092dc;
  local_18 = (float)*(ushort *)(in_ECX + 0x104) * -1.0 * 0.5 + (float)*param_1;
  local_c = DAT_00f092fc;
  puVar2 = local_48;
  puVar3 = (undefined4 *)(in_ECX + 0x54);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

