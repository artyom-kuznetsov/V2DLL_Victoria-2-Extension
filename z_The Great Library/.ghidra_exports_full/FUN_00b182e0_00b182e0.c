// FUN_00b182e0 @ 00b182e0 body=[[00b182e0, 00b18496]]


void FUN_00b182e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  float10 fVar6;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  float local_84;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_c4;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[0xc] = uVar1;
  in_ECX[0xd] = uVar2;
  fVar6 = (float10)FUN_00b16fc0(param_1,&local_84,local_44);
  if ((float10)0 <= fVar6) {
    uVar1 = 0x3f800000;
  }
  else {
    local_84 = -local_84;
    local_80 = -local_80;
    local_7c = -local_7c;
    local_74 = -local_74;
    local_70 = -local_70;
    local_6c = -local_6c;
    local_64 = -local_64;
    local_60 = -local_60;
    local_5c = -local_5c;
    uVar1 = 0xbf800000;
  }
  in_ECX[0xe] = uVar1;
  FUN_00b16e20(&local_c4,&local_84);
  *in_ECX = local_c4;
  in_ECX[1] = local_c0;
  in_ECX[2] = local_bc;
  in_ECX[3] = local_b8;
  FUN_00b17720(&local_b4,local_44,&local_84);
  FUN_00b16e20(&local_c4,&local_84);
  FUN_00b179c0(local_a4,local_c4,local_c0,local_bc,local_b8,&local_b4);
  puVar5 = (undefined4 *)FUN_00b185f0(local_94,&local_c4,local_a4);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  in_ECX[4] = *puVar5;
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  in_ECX[8] = local_b4;
  in_ECX[9] = local_b0;
  in_ECX[10] = local_ac;
  fVar4 = (float)in_ECX[0xe];
  in_ECX[8] = (float)in_ECX[8] * fVar4;
  in_ECX[9] = (float)in_ECX[9] * fVar4;
  in_ECX[10] = fVar4 * (float)in_ECX[10];
  __security_check_cookie(local_4 ^ (uint)&local_c4);
  return;
}

