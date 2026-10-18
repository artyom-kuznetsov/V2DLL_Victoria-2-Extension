// FUN_00acf840 @ 00acf840 body=[[00acf840, 00acf9ea]]


void FUN_00acf840(undefined4 *param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  ushort uVar4;
  uint uVar5;
  float *pfVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *param_1 = 0x7f7fffff;
  param_1[1] = 0x7f7fffff;
  param_1[2] = 0x7f7fffff;
  uVar4 = 0;
  param_1[3] = 0xff7fffff;
  param_1[4] = 0xff7fffff;
  param_1[5] = 0xff7fffff;
  uVar1 = *(ushort *)(in_ECX + 400);
  iVar2 = *(int *)(in_ECX + 0xc);
  if (uVar1 != 0) {
    do {
      uVar5 = (uint)*(ushort *)(*(int *)(in_ECX + 0x18c) + (uint)uVar4 * 2);
      iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar5 * 4);
      if (((((*(byte *)(iVar3 + 0xa4) & 1) != 0) && (0.0 <= *(float *)(iVar3 + 0x8c))) &&
          (0.0 <= *(float *)(iVar3 + 0x90))) && (0.0 <= *(float *)(iVar3 + 0x94))) {
        FUN_00ad2e70(&local_30,&local_18);
        pfVar6 = (float *)(uVar5 * 0x40 + iVar2);
        local_24 = pfVar6[4] * local_2c + *pfVar6 * local_30 + pfVar6[8] * local_28 + pfVar6[0xc];
        local_20 = local_28 * pfVar6[9] + local_2c * pfVar6[5] + pfVar6[1] * local_30 + pfVar6[0xd];
        local_1c = local_30 * pfVar6[2] + pfVar6[6] * local_2c + pfVar6[10] * local_28 + pfVar6[0xe]
        ;
        FUN_00ad2ef0(&local_24);
        local_c = *pfVar6 * local_18 + pfVar6[4] * local_14 + pfVar6[8] * local_10 + pfVar6[0xc];
        local_8 = local_10 * pfVar6[9] + local_14 * pfVar6[5] + pfVar6[1] * local_18 + pfVar6[0xd];
        local_4 = local_10 * pfVar6[10] + local_18 * pfVar6[2] + pfVar6[6] * local_14 + pfVar6[0xe];
        FUN_00ad2ef0(&local_c);
      }
      uVar4 = uVar4 + param_2;
    } while (uVar4 < uVar1);
  }
  return;
}

