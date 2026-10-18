// FUN_006bee40 @ 006bee40 body=[[006bee40, 006bf1e7]]


undefined4 FUN_006bee40(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_ec;
  undefined1 local_e8 [4];
  undefined1 *local_e4;
  int *local_dc;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  int local_d0;
  undefined1 *local_cc;
  undefined1 *local_c4;
  int local_bc;
  int local_b4;
  int *local_b0;
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 *local_a4;
  undefined1 *local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  int local_90;
  undefined1 *local_8c;
  undefined1 *local_84;
  int local_7c;
  int local_74;
  undefined1 local_70 [4];
  undefined1 *local_6c;
  int *local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  int local_58;
  undefined1 *local_54;
  undefined1 *local_4c;
  int local_44;
  int local_3c;
  undefined4 local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((DAT_013f1cb0 & 1) == 0) {
    DAT_013f1cb0 = DAT_013f1cb0 | 1;
    local_30 = DAT_012586dc;
    uVar1 = FUN_00416e30();
    FUN_00414cc0(uVar1);
  }
  local_8 = FUN_00424b30();
  local_c = FUN_00424b30();
  local_3c = FUN_009311f0();
  local_20 = local_3c * 1000;
  local_4c = local_60;
  local_44 = DAT_013f1cac;
  local_64 = &local_74;
  local_54 = local_5c;
  local_58 = 0;
  uVar3 = __allmul(DAT_013f1cac,DAT_013f1cac >> 0x1f,local_20,local_20 >> 0x1f);
  local_58 = __alldiv(uVar3,1000,0);
  *local_64 = local_58;
  local_6c = local_70;
  local_24 = local_74;
  local_b0 = (int *)FUN_009311d0();
  local_84 = local_98;
  local_7c = *local_b0;
  local_9c = local_ac;
  local_8c = local_94;
  local_90 = local_7c + local_24;
  local_a4 = local_a8;
  local_2c = local_90;
  local_b4 = FUN_009311f0();
  local_10 = local_b4 * 1000;
  local_c4 = local_d8;
  local_bc = DAT_013f1cac;
  local_dc = &local_ec;
  local_cc = local_d4;
  local_d0 = 0;
  uVar3 = __allmul(DAT_013f1cac,DAT_013f1cac >> 0x1f,local_10,local_10 >> 0x1f);
  local_d0 = __alldiv(uVar3,1000,0);
  *local_dc = local_d0;
  local_e4 = local_e8;
  local_14 = local_ec;
  piVar2 = (int *)FUN_009311d0();
  return CONCAT31((int3)((uint)(*piVar2 + local_14) >> 8),*piVar2 + local_14 < local_2c);
}

