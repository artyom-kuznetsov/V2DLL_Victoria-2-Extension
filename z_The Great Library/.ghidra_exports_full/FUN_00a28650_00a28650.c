// FUN_00a28650 @ 00a28650 body=[[00a28650, 00a2886d]]


undefined4 * FUN_00a28650(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48dea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_8 = 0;
  param_1[0x16] = in_ECX;
  *param_1 = &PTR_FUN_00e3f910;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = DAT_00f092fc;
  param_1[0x27] = DAT_00f092fc;
  param_1[0x28] = 0;
  param_1[0x25] = 1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((int)param_1 + 0xb2) = 0;
  param_1[0x2e] = 0x18d;
  param_1[0x2d] = CColor::vftable;
  param_1[0x2f] = uVar1;
  param_1[0x30] = uVar1;
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar1;
  *(undefined1 *)(param_1 + 0x33) = 1;
  param_1[0x34] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  local_8._0_1_ = 3;
  param_1[0x44] = DAT_00f092dc;
  param_1[0x58] = 0;
  param_1[0x5b] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = uVar1;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[100] = 0xf;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00409350("gfx/FX/buttonstate.fx",0x15);
  D3DXMatrixOrthoRH(param_1 + 0x48,(float)*(int *)(param_1[0x16] + 0x6b9bc),
                    (float)*(int *)(param_1[0x16] + 0x6b9c0),0,DAT_00f092fc);
  ExceptionList = local_10;
  return param_1;
}

