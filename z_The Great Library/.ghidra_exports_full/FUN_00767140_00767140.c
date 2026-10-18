// FUN_00767140 @ 00767140 body=[[00767140, 007671bd] [007671c1, 00767200] [00767204, 007672cf] [007672d3, 007672f2] [007672f6, 00767418] [0076741c, 00767443] [00767447, 0076746a] [0076746e, 007674ac] [007674b0, 007674c0]]


void FUN_00767140(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined **ppuStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined4 uStack_2fc;
  uint *puStack_2f8;
  undefined *puStack_2f4;
  undefined4 *puStack_2f0;
  uint *puStack_2ec;
  uint *puStack_2e8;
  undefined4 *puStack_2e4;
  uint *puStack_2e0;
  undefined1 local_2d0 [164];
  undefined1 local_22c [168];
  uint local_184 [4];
  undefined4 local_174;
  uint local_170;
  undefined1 local_168 [164];
  undefined1 local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a4 [5];
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7bceb;
  local_10 = ExceptionList;
  puStack_2e0 = (uint *)0x4;
  puStack_2e4 = (undefined4 *)&DAT_00e1460c;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  puStack_2e8 = (uint *)0x767185;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350();
  local_8 = 0;
  puStack_2e0 = local_34;
  puStack_2e4 = (undefined4 *)0x767199;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x36c) + 0x40))();
  puStack_2e4 = local_a4;
  puStack_2e8 = (uint *)0x7671ab;
  (**(code **)(*(int *)(iVar1 + 0x54) + 0x4c))();
  local_8._0_1_ = 2;
  if (0xf < local_20) {
    puStack_2e8 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_007671be;
    FUN_00aae91b();
  }
  puStack_2e8 = local_88;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  puStack_2ec = (uint *)0x7671dc;
  puStack_2f0 = (undefined4 *)FUN_00989330();
  puStack_2e8 = (uint *)0xffffffff;
  puStack_2ec = (uint *)0x0;
  local_8._0_1_ = 3;
  puStack_2f4 = (undefined *)0x7671eb;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  if (0xf < local_74) {
    puStack_2e8 = (uint *)local_88[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_00767201;
    FUN_00aae91b();
  }
  puStack_2e8 = (uint *)0x0;
  puStack_2ec = (uint *)&DAT_00ded94d;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_2f0 = (undefined4 *)0x76721b;
  FUN_00409350();
  local_8._0_1_ = 4;
  puStack_2e8 = (uint *)0xc;
  puStack_2ec = (uint *)0xe146c0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  puStack_2f0 = (undefined4 *)0x767237;
  FUN_00409350();
  puStack_2e8 = (uint *)0x0;
  local_14 = (undefined1 *)&ppuStack_318;
  uStack_314 = 0x18d;
  ppuStack_318 = CVersion::vftable;
  uStack_310 = 0;
  puStack_2f0 = (undefined4 *)0xf;
  puStack_2f4 = (undefined *)0x0;
  uStack_304 = 0;
  local_8._0_1_ = 6;
  FUN_00408ed0(local_50,0,0xffffffff);
  uStack_308 = 0;
  uStack_30c = 0;
  uStack_310 = 0;
  local_8._0_1_ = 5;
  FUN_009f8180(local_2d0,local_6c,local_a4,0x666,local_a4,0,7,0,1);
  puStack_2e8 = (uint *)local_22c;
  local_8._0_1_ = 7;
  puStack_2ec = (uint *)0x7672b2;
  FUN_00648af0();
  puStack_2e8 = (uint *)0x7672bd;
  FUN_00648a60();
  iVar1 = local_18;
  if (0xf < local_58) {
    puStack_2e8 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_007672d0;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_8._0_1_ = 0xb;
  if (0xf < local_3c) {
    puStack_2e8 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_007672f3;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_2e8 = (uint *)0x767313;
  (**(code **)(*(int *)(*(int *)(local_18 + 0x36c) + 0x18) + 0x38))();
  puStack_2e8 = (uint *)0x767318;
  FUN_00475500();
  puStack_2e8 = (uint *)0xffffffff;
  puStack_2ec = (uint *)0x0;
  puStack_2f0 = local_a4;
  puStack_2f4 = (undefined *)0x76732d;
  FUN_00408ed0();
  puStack_2e8 = (uint *)0xa;
  puStack_2ec = (uint *)0xe08ebc;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  puStack_2f0 = (undefined4 *)0x767351;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  puStack_2e8 = local_c0;
  puStack_2ec = (uint *)0x767369;
  iVar2 = (**(code **)(**(int **)(iVar1 + 0x368) + 0x40))();
  puStack_2ec = local_88;
  puStack_2f0 = (undefined4 *)0x76737a;
  puStack_2f8 = (uint *)(**(code **)(*(int *)(iVar2 + 0x54) + 0x4c))();
  puStack_2f0 = (undefined4 *)0xffffffff;
  local_8._0_1_ = 0xd;
  puStack_2f4 = (undefined *)0x0;
  local_170 = 0xf;
  local_174 = 0;
  local_184[0] = local_184[0] & 0xffffff00;
  uStack_2fc = 0x76739f;
  FUN_00408ed0();
  puStack_2f0 = (undefined4 *)local_168;
  local_8._0_1_ = 0xe;
  puStack_2f4 = (undefined *)0x7673b5;
  FUN_00648af0();
  local_c4 = 0;
  local_8._0_1_ = 0xf;
  puStack_2f0 = (undefined4 *)0xffffffff;
  local_14 = (undefined1 *)(*(int *)(iVar1 + 4) + 0x98);
  puStack_2f4 = (undefined *)0x0;
  puStack_2f8 = local_184;
  uStack_2fc = 0x7673dc;
  FUN_00408ed0();
  puStack_2f0 = (undefined4 *)0x7673ea;
  FUN_007589c0();
  *(undefined1 *)((int)local_14 + 0xc0) = local_c4;
  puStack_2f0 = (undefined4 *)0x767400;
  FUN_00648a60();
  if (0xf < local_170) {
    puStack_2f0 = (undefined4 *)local_184[0];
                    /* WARNING: Subroutine does not return */
    puStack_2f4 = &UNK_00767419;
    FUN_00aae91b();
  }
  local_170 = 0xf;
  local_174 = 0;
  local_184[0] = local_184[0] & 0xffffff00;
  if (0xf < local_74) {
    puStack_2f0 = (undefined4 *)local_88[0];
                    /* WARNING: Subroutine does not return */
    puStack_2f4 = &UNK_00767444;
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_ac) {
    puStack_2f0 = (undefined4 *)local_c0[0];
                    /* WARNING: Subroutine does not return */
    puStack_2f4 = &UNK_0076746b;
    FUN_00aae91b();
  }
  puStack_2f0 = (undefined4 *)local_18;
  *(undefined1 *)(DAT_012588e8 + 3000) = 1;
  DAT_012589ac = 2;
  puStack_2f4 = (undefined *)0x76748e;
  FUN_00765870();
  puStack_2f0 = (undefined4 *)0x767499;
  FUN_00648a60();
  if (0xf < local_90) {
    puStack_2f0 = (undefined4 *)local_a4[0];
                    /* WARNING: Subroutine does not return */
    puStack_2f4 = &UNK_007674ad;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

