// FUN_004dff10 @ 004dff10 body=[[004dff10, 004e010c]]


undefined4 * FUN_004dff10(undefined4 *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46607;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  *param_1 = CProductionType::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(param_2 + 8,0,0xffffffff);
  local_8 = 0;
  FUN_0047db00(param_1 + 9,param_2 + 0x24);
  local_8._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x7c);
  param_1[0x20] = *(undefined4 *)(param_2 + 0x80);
  param_1[0x22] = *(undefined4 *)(param_2 + 0x88);
  param_1[0x23] = *(undefined4 *)(param_2 + 0x8c);
  FUN_0047db00(param_1 + 0x24,param_2 + 0x90);
  param_1[0x3b] = *(undefined4 *)(param_2 + 0xec);
  param_1[0x3a] = CEmployee::vftable;
  param_1[0x3c] = *(undefined4 *)(param_2 + 0xf0);
  param_1[0x3e] = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x3f] = *(undefined4 *)(param_2 + 0xfc);
  param_1[0x40] = *(undefined4 *)(param_2 + 0x100);
  param_1[0x41] = *(undefined4 *)(param_2 + 0x104);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  local_8._0_1_ = 3;
  FUN_004ded50(param_2 + 0x108);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  local_8._0_1_ = 5;
  FUN_005daad0(param_1 + 0x46,param_2 + 0x118);
  param_1[0x4a] = *(undefined4 *)(param_2 + 0x128);
  param_1[0x4b] = *(undefined4 *)(param_2 + 300);
  param_1[0x4c] = *(undefined4 *)(param_2 + 0x130);
  param_1[0x4d] = *(undefined4 *)(param_2 + 0x134);
  param_1[0x4e] = *(undefined4 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x13c);
  *(undefined1 *)((int)param_1 + 0x13d) = *(undefined1 *)(param_2 + 0x13d);
  *(undefined1 *)((int)param_1 + 0x13e) = *(undefined1 *)(param_2 + 0x13e);
  param_1[0x50] = *(undefined4 *)(param_2 + 0x140);
  param_1[0x51] = *(undefined4 *)(param_2 + 0x144);
  param_1[0x52] = *(undefined4 *)(param_2 + 0x148);
  param_1[0x53] = *(undefined4 *)(param_2 + 0x14c);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_009beeb0(param_2 + 0x150);
  ExceptionList = local_10;
  return param_1;
}

