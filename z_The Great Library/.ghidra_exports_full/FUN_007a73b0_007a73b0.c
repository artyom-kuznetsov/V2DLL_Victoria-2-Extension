// FUN_007a73b0 @ 007a73b0 body=[[007a73b0, 007a7577] [007a757b, 007a7599] [007a75a2, 007a75b9] [007a75c2, 007a75dd] [007a75e6, 007a768c] [007a7690, 007a77b5]]


void FUN_007a73b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_348 [72];
  undefined4 uStack_300;
  undefined1 *puStack_2fc;
  uint *puStack_2f8;
  uint *puStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  uint *puStack_2d8;
  undefined **ppuStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined1 uStack_2c0;
  undefined4 uStack_2b8;
  int iStack_2b4;
  uint *puStack_2b0;
  undefined *puStack_2ac;
  undefined1 *puStack_2a8;
  char *pcStack_2a4;
  uint *puStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_28c [164];
  undefined1 local_1e8 [164];
  uint local_144 [4];
  undefined4 local_134;
  uint local_130;
  undefined1 local_128 [164];
  undefined1 local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a72a;
  local_10 = ExceptionList;
  uStack_29c = 0x7a73e1;
  ExceptionList = &local_10;
  iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x100))();
  uStack_29c = 1;
  puStack_2a0 = (uint *)0x7a73f0;
  (**(code **)(**(int **)(iVar3 + 0xe4) + 0x10))();
  puStack_2a0 = (uint *)0x7a73f7;
  FUN_007a8070();
  puStack_2a0 = (uint *)0xa0;
  pcStack_2a4 = (char *)0x7a7401;
  puStack_2a0 = (uint *)FUN_00aae9af();
  local_8 = 0;
  if (puStack_2a0 == (uint *)0x0) {
    param_1 = 0;
  }
  else {
    pcStack_2a4 = (char *)0x7a7419;
    param_1 = FUN_00a16220();
  }
  local_8 = 0xffffffff;
  iVar3 = *(int *)(iVar2 + 0x3a0);
  puVar1 = *(undefined4 **)(iVar3 + 0x1b8);
  if (puVar1 != (undefined4 *)0x0) {
    puStack_2a0 = (uint *)0x1;
    pcStack_2a4 = (char *)0x7a7440;
    (**(code **)*puVar1)();
  }
  *(int *)(iVar3 + 0x1b8) = param_1;
  puStack_2a0 = (uint *)0xb;
  pcStack_2a4 = "HostEditBox";
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  puStack_2a8 = (undefined1 *)0x7a7467;
  FUN_00409350();
  local_8 = 1;
  puStack_2a0 = (uint *)0x9;
  pcStack_2a4 = "localhost";
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  puStack_2a8 = (undefined1 *)0x7a7487;
  FUN_00409350();
  local_8._0_1_ = 2;
  puStack_2a0 = (uint *)0xc;
  pcStack_2a4 = "LobbySession";
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  puStack_2a8 = (undefined1 *)0x7a74a4;
  FUN_00409350();
  local_8._0_1_ = 3;
  puStack_2a0 = local_64;
  pcStack_2a4 = (char *)0x7a74b9;
  iVar3 = (**(code **)(**(int **)(iVar2 + 0x3b8) + 0x40))();
  pcStack_2a4 = (char *)0x1;
  puStack_2a8 = (undefined1 *)0x7a74ca;
  iStack_2e0 = (**(code **)(**(int **)(iVar2 + 0xc) + 0x100))();
  uStack_2d0 = *(undefined4 *)(iStack_2e0 + 0x24);
  ppuStack_2d4 = CVersion::vftable;
  uStack_2cc = *(undefined4 *)(iStack_2e0 + 0x28);
  uStack_2c8 = *(undefined4 *)(iStack_2e0 + 0x2c);
  uStack_2c4 = *(undefined4 *)(iStack_2e0 + 0x30);
  puStack_2d8 = (uint *)0xffffffff;
  uStack_2dc = 0;
  iStack_2e0 = iStack_2e0 + 0x34;
  puStack_2ac = (undefined *)0xf;
  puStack_2b0 = (uint *)0x0;
  uStack_2c0 = 0;
  uStack_2e4 = 0x7a750c;
  FUN_00408ed0();
  local_8._0_1_ = 4;
  puStack_2d8 = local_80;
  uStack_2dc = 0x7a751f;
  uStack_2ec = (**(code **)(*(int *)(iVar3 + 0x54) + 0x4c))();
  uStack_2dc = 1;
  iStack_2e0 = 1;
  uStack_2e4 = 6;
  uStack_2e8 = 0;
  uStack_2f0 = 0x666;
  puStack_2f4 = local_2c;
  puStack_2f8 = local_48;
  puStack_2fc = local_28c;
  local_8._0_1_ = 6;
  uStack_300 = 0x7a7548;
  FUN_009f8180();
  puStack_2a8 = local_1e8;
  local_8._0_1_ = 7;
  puStack_2ac = (undefined *)0x7a755a;
  FUN_00648af0();
  puStack_2a8 = (undefined1 *)0x7a7565;
  FUN_00648a60();
  if (0xf < local_6c) {
    puStack_2a8 = (undefined1 *)local_80[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ac = &UNK_007a7578;
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_34) {
    puStack_2a8 = (undefined1 *)local_48[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ac = &UNK_007a759a;
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
    puStack_2a8 = (undefined1 *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ac = &UNK_007a75ba;
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8._0_1_ = 0xd;
  if (0xf < local_50) {
    puStack_2a8 = (undefined1 *)local_64[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ac = &UNK_007a75de;
    FUN_00aae91b();
  }
  puStack_2a8 = (undefined1 *)0xffffffff;
  local_50 = 0xf;
  local_130 = 0xf;
  puStack_2ac = (undefined *)0x0;
  puStack_2b0 = (uint *)(iVar2 + 0x3dc);
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_134 = 0;
  local_144[0] = local_144[0] & 0xffffff00;
  iStack_2b4 = 0x7a7618;
  FUN_00408ed0();
  puStack_2a8 = local_128;
  local_8._0_1_ = 0xe;
  puStack_2ac = (undefined *)0x7a762e;
  FUN_00648af0();
  local_84 = 1;
  local_8._0_1_ = 0xf;
  iVar3 = *(int *)(iVar2 + 0xc);
  puStack_2a8 = (undefined1 *)0xffffffff;
  puStack_2ac = (undefined *)0x0;
  puStack_2b0 = local_144;
  iStack_2b4 = 0x7a7653;
  FUN_00408ed0();
  puStack_2a8 = (undefined1 *)0x7a7661;
  FUN_007589c0();
  *(undefined1 *)(iVar3 + 0x158) = local_84;
  local_8._0_1_ = 0xd;
  puStack_2a8 = (undefined1 *)0x7a7678;
  FUN_00648a60();
  if (0xf < local_130) {
    puStack_2a8 = (undefined1 *)local_144[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ac = &UNK_007a768d;
    FUN_00aae91b();
  }
  puStack_2a8 = (undefined1 *)0x260;
  puStack_2ac = (undefined *)0x7a769a;
  iVar3 = FUN_00aae9af();
  local_8._0_1_ = 0x10;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_00648af0(auStack_348);
    iVar3 = FUN_009ae5f0(iVar3);
  }
  local_8 = CONCAT31(local_8._1_3_,0xd);
  puStack_2a8 = (undefined1 *)0x7a76de;
  iVar4 = (**(code **)(**(int **)(iVar2 + 0xc) + 0x100))();
  *(undefined4 *)(iVar3 + 0x1c4) = *(undefined4 *)(iVar4 + 0x24);
  *(undefined4 *)(iVar3 + 0x1c8) = *(undefined4 *)(iVar4 + 0x28);
  puStack_2a8 = (undefined1 *)0xffffffff;
  *(undefined4 *)(iVar3 + 0x1cc) = *(undefined4 *)(iVar4 + 0x2c);
  puStack_2ac = (undefined *)0x0;
  puStack_2b0 = (uint *)(iVar4 + 0x34);
  *(undefined4 *)(iVar3 + 0x1d0) = *(undefined4 *)(iVar4 + 0x30);
  iStack_2b4 = 0x7a7715;
  FUN_00408ed0();
  puStack_2ac = (undefined *)0x7a7720;
  puStack_2a8 = (undefined1 *)iVar3;
  (**(code **)(**(int **)(iVar2 + 0xc) + 0x48))();
  *(undefined1 *)(iVar3 + 0x1bc) = 0;
  puStack_2ac = (undefined *)0x0;
  puStack_2b0 = (uint *)0x0;
  iStack_2b4 = 0x7a7737;
  (**(code **)(**(int **)(iVar3 + 0x38) + 8))();
  *(undefined1 *)(DAT_012588e8 + 3000) = 1;
  iVar3 = *(int *)(iVar2 + 0xc);
  DAT_012589ac = 1;
  iStack_2b4 = 0x7a7761;
  (**(code **)(**(int **)(*(int *)(iVar3 + 0x74c) + 0xc) + 0x30))();
  iVar3 = *(int *)(iVar3 + 0x1b4);
  if (*(int *)(iVar3 + 0x20) != 0) {
    iStack_2b4 = 0x7a777b;
    (**(code **)(*(int *)(*(int *)(iVar3 + 0x20) + 0x18) + 0x38))();
  }
  iStack_2b4 = 0x7a7788;
  FUN_007580e0();
  iStack_2b4 = *(int *)(iVar2 + 0x3a0);
  if (iStack_2b4 != 0) {
    uStack_2b8 = 0x7a7798;
    FUN_009af9f0();
  }
  iStack_2b4 = 0x7a77a3;
  FUN_00648a60();
  ExceptionList = local_10;
  return;
}

