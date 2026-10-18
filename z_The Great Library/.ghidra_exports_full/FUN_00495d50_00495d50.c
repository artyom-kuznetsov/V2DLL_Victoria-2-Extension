// FUN_00495d50 @ 00495d50 body=[[00495d50, 00495de2] [00495de6, 00496166] [0049616a, 00496185] [00496189, 004961d1] [004961d5, 004961f0] [004961f4, 0049623c] [00496240, 0049625b] [0049625f, 004962a7] [004962ab, 004962c6] [004962ca, 0049630b] [0049630f, 00496333]]


undefined4 * FUN_00495d50(undefined4 *param_1)

{
  uint uVar1;
  void *_Dst;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51be9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("default.map",0xb);
  local_8 = 0;
  local_14 = param_1 + 2;
  local_18 = param_1 + 3;
  *local_14 = &PTR___purecall_00e38700;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)local_18 = 0;
  FUN_00408ed0(local_38,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009a4bd0(local_18,local_14);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  *param_1 = CMap::vftable;
  param_1[2] = CMap::vftable;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_8._0_1_ = 6;
  _eh_vector_constructor_iterator_(param_1 + 0x18,0x10,0x200,FUN_0084a380,FUN_00849e90);
  param_1[0x818] = DAT_00f1441c;
  param_1[0x819] = 0;
  param_1[0x81f] = 0xf;
  param_1[0x81e] = 0;
  *(undefined1 *)(param_1 + 0x81a) = 0;
  param_1[0x826] = 0xf;
  param_1[0x825] = 0;
  *(undefined1 *)(param_1 + 0x821) = 0;
  param_1[0x82d] = 0xf;
  param_1[0x82c] = 0;
  *(undefined1 *)(param_1 + 0x828) = 0;
  param_1[0x834] = 0xf;
  param_1[0x833] = 0;
  *(undefined1 *)(param_1 + 0x82f) = 0;
  param_1[0x83b] = 0xf;
  param_1[0x83a] = 0;
  *(undefined1 *)(param_1 + 0x836) = 0;
  param_1[0x842] = 0xf;
  param_1[0x841] = 0;
  *(undefined1 *)(param_1 + 0x83d) = 0;
  param_1[0x849] = 0xf;
  param_1[0x848] = 0;
  *(undefined1 *)(param_1 + 0x844) = 0;
  param_1[0x84b] = 0;
  param_1[0x84c] = 0;
  param_1[0x84d] = 0;
  param_1[0x853] = 0xf;
  param_1[0x852] = 0;
  *(undefined1 *)(param_1 + 0x84e) = 0;
  param_1[0x85a] = 0xf;
  param_1[0x859] = 0;
  *(undefined1 *)(param_1 + 0x855) = 0;
  param_1[0x861] = 0xf;
  param_1[0x860] = 0;
  *(undefined1 *)(param_1 + 0x85c) = 0;
  param_1[0x868] = 0xf;
  param_1[0x867] = 0;
  *(undefined1 *)(param_1 + 0x863) = 0;
  param_1[0x86f] = 0xf;
  param_1[0x86e] = 0;
  *(undefined1 *)(param_1 + 0x86a) = 0;
  param_1[0x871] = 0;
  param_1[0x877] = 0xf;
  param_1[0x876] = 0;
  *(undefined1 *)(param_1 + 0x872) = 0;
  param_1[0x879] = 0;
  param_1[0x87a] = 0;
  param_1[0x87b] = 0;
  param_1[0x87d] = 0;
  param_1[0x87e] = 0;
  param_1[0x87f] = 0;
  *(undefined1 *)(param_1 + 0x880) = 0;
  param_1[0x881] = 0;
  param_1[0x882] = 0;
  param_1[0x883] = 0;
  param_1[0x885] = 0;
  param_1[0x886] = 0;
  param_1[0x887] = 0;
  *(undefined1 *)(param_1 + 0x888) = 0;
  param_1[0x889] = 0;
  param_1[0x88a] = 0;
  param_1[0x88b] = 0;
  param_1[0x88d] = 0;
  param_1[0x88e] = 0;
  param_1[0x88f] = 0;
  param_1[0x890] = 0;
  param_1[0x892] = 0;
  param_1[0x893] = 0;
  param_1[0x894] = 0;
  param_1[0x896] = 0;
  param_1[0x897] = 0;
  param_1[0x898] = 0;
  param_1[0xa9a] = 0;
  param_1[0xa9b] = 0;
  param_1[0xa9c] = 0;
  param_1[0xa9e] = 0;
  param_1[0xa9f] = 0;
  param_1[0xaa0] = 0;
  param_1[0xaa2] = 0;
  param_1[0xaa3] = 0;
  param_1[0xaa4] = 0;
  local_8._0_1_ = 0x1f;
  param_1[0xaa7] = 0x1ff;
  param_1[0xaa6] = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  param_1[0xaa8] = _Dst;
  _memset(_Dst,0,param_1[0xaa7] * 4);
  param_1[0xaa9] = 0;
  param_1[0xaaa] = 0;
  local_8._0_1_ = 0x21;
  param_1[0xaab] = 0;
  param_1[0xaad] = 0;
  param_1[0xaae] = 0;
  param_1[0xaaf] = 0;
  param_1[0xab0] = 0;
  param_1[0xab1] = 0;
  local_1c = 0x2d2d2d;
  param_1[0xab2] = 400;
  *(undefined1 *)(param_1 + 0xab3) = 0;
  param_1[0xab4] = 0x2d2d2d;
  param_1[0xab5] = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CProvinceFlagReloader::vftable;
    puVar2[1] = param_1;
  }
  param_1[0xab7] = puVar2;
  param_1[0xab8] = 0;
  param_1[0xab9] = 0;
  param_1[0xaba] = 0;
  local_8._0_1_ = 0x22;
  _memset(param_1 + 0x89a,0,0x400);
  _memset(param_1 + 0x99a,-1,0x400);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("default.map",0xb);
  local_8._0_1_ = 0x23;
  uVar3 = FUN_00496b60(local_54);
  local_8._0_1_ = 0x24;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_8._0_1_ = 0x22;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("cache/time",10);
  local_8._0_1_ = 0x25;
  uVar3 = FUN_00496b60(local_54);
  local_8._0_1_ = 0x26;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_8._0_1_ = 0x22;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("cache/navaldist.bin",0x13);
  local_8._0_1_ = 0x27;
  uVar3 = FUN_00496b60(local_54);
  local_8._0_1_ = 0x28;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_8._0_1_ = 0x22;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("cache/provincecache.bin",0x17);
  local_8._0_1_ = 0x29;
  uVar3 = FUN_00496b60(local_54);
  local_8._0_1_ = 0x2a;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_8._0_1_ = 0x22;
  local_40 = 0xf;
  local_44 = 0;
  uVar1 = local_54[0] >> 8;
  local_54[0] = uVar1 << 8;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = uVar1 << 8;
  FUN_00409350("province_flag_sprites",0x15);
  local_8._0_1_ = 0x2b;
  FUN_009a4bd0(local_54,param_1[0xab7]);
  local_8 = CONCAT31(local_8._1_3_,0x22);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  FUN_004bf300(12000);
  ExceptionList = local_10;
  return param_1;
}

