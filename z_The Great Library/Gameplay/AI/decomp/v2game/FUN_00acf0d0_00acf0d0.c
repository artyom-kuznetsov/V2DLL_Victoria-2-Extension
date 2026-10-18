// FUN_00acf0d0 @ 00acf0d0 body=[[00acf0d0, 00acf1f2]]


void FUN_00acf0d0(void)

{
  int in_ECX;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(in_ECX + 0x120);
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_ECX + 0x124);
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x128);
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0x3f800000;
  local_10 = -*(float *)(in_ECX + 0x108);
  local_c = -*(float *)(in_ECX + 0x10c);
  local_8 = -*(float *)(in_ECX + 0x110);
  local_40 = 0x3f800000;
  local_2c = 0x3f800000;
  local_18 = 0x3f800000;
  local_4 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  FUN_009c0960(&local_40);
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + *(float *)(in_ECX + 0x108);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + *(float *)(in_ECX + 0x10c);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + *(float *)(in_ECX + 0x110);
  FUN_00ad24b0(in_ECX + 300);
  FUN_00ad27d0(&local_40);
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x114) + *(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 0x118) + *(float *)(in_ECX + 100);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x11c) + *(float *)(in_ECX + 0x68);
  return;
}

