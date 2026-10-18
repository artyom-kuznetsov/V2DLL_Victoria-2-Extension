// FUN_0043ef60 @ 0043ef60 body=[[0043ef60, 0043f239]]


uint FUN_0043ef60(void)

{
  short sVar1;
  int iVar2;
  int in_EAX;
  undefined2 extraout_var;
  short *psVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  int *in_ECX;
  short sVar7;
  float local_28;
  float local_24;
  float local_20;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  (**(code **)(*in_ECX + 0xc))(&local_28);
  if ((local_28 == (float)DAT_00f0abb0) && (local_24 == DAT_00f0abb0._4_4_)) {
    uVar5 = (uint)CONCAT21(extraout_var,
                           (local_20 == DAT_00f0abb8) << 6 |
                           (NAN(local_20) || NAN(DAT_00f0abb8)) << 2 | 2U | local_20 < DAT_00f0abb8)
            << 8;
    if (local_20 == DAT_00f0abb8) goto LAB_0043f231;
  }
  local_8 = *(float *)(in_EAX + 0x1a4) * local_24 + *(float *)(in_EAX + 0x194) * local_28 +
            *(float *)(in_EAX + 0x1b4) * local_20 + *(float *)(in_EAX + 0x1c4);
  local_c = (*(float *)(in_EAX + 0x198) * local_24 + *(float *)(in_EAX + 0x188) * local_28 +
             *(float *)(in_EAX + 0x1a8) * local_20 + *(float *)(in_EAX + 0x1b8)) / local_8;
  local_8 = (*(float *)(in_EAX + 0x19c) * local_24 + *(float *)(in_EAX + 0x18c) * local_28 +
             *(float *)(in_EAX + 0x1ac) * local_20 + *(float *)(in_EAX + 0x1bc)) / local_8;
  iVar2 = *(int *)(DAT_01258a74 + 0x6b9bc);
  local_18 = *(int *)(DAT_01258a74 + 0x6b9c0);
  local_14 = (float)iVar2 * (local_c * 0.5 + 0.5);
  local_10 = (float)local_18 * (local_8 * -0.5 + 0.5);
  psVar3 = (short *)(**(code **)(*(int *)in_ECX[4] + 0x60))(&local_8);
  sVar1 = *psVar3;
  iVar4 = (**(code **)(*(int *)in_ECX[4] + 0x60))(&local_8);
  sVar6 = (short)(int)(local_14 - (float)(int)sVar1 * 0.5);
  sVar7 = (short)(int)(local_10 - (float)(int)*(short *)(iVar4 + 2) * 0.5);
  uVar5 = (int)*(short *)(iVar4 + 2) + CONCAT22(local_8._0_2_,sVar7);
  if ((((sVar6 <= iVar2) && (sVar7 <= local_18)) && (-1 < (short)(sVar1 + sVar6))) &&
     (-1 < (short)uVar5)) {
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
LAB_0043f231:
  return uVar5 & 0xffffff00;
}

