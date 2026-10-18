// FUN_00acef90 @ 00acef90 body=[[00acef90, 00acf0c9]]


void FUN_00acef90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int in_ECX;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [64];
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x1ac) + 0x110);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + param_1 * 4) + 4);
    if ((iVar1 == -1) || ((*(byte *)(*(int *)(in_ECX + 0x20) + iVar1 * 4) & 2) == 0)) {
      *param_6 = *param_5;
      param_6[1] = 0;
      param_6[2] = 0;
      param_6[3] = 0;
      param_6[4] = 0;
      param_6[5] = param_5[1];
      param_6[6] = 0;
      param_6[7] = 0;
      param_6[8] = 0;
      param_6[9] = 0;
      param_6[10] = param_5[2];
      param_6[0xb] = 0;
      param_6[0xc] = 0;
      param_6[0xd] = 0;
      param_6[0xe] = 0;
      param_6[0xf] = 0x3f800000;
      FUN_00ad24b0(param_3);
      FUN_00ad27d0(local_40);
    }
    else {
      local_4c = 1.0 / *(float *)(*(int *)(in_ECX + 0x18) + 0x20 + iVar1 * 0x38);
      iVar1 = *(int *)(in_ECX + 0x18) + 0x20 + iVar1 * 0x38;
      local_48 = 1.0 / *(float *)(iVar1 + 4);
      local_44 = 1.0 / *(float *)(iVar1 + 8);
      FUN_00ad2460(param_5);
      FUN_00ad24b0(param_3);
      FUN_00ad27d0(local_40);
      FUN_00ad2900(&local_4c);
    }
    param_6[0xc] = *param_4;
    param_6[0xd] = param_4[1];
    param_6[0xe] = param_4[2];
  }
  else if (iVar1 == 1) {
    FUN_00ad1fe0(param_2,param_3,param_5,param_4);
    return;
  }
  return;
}

