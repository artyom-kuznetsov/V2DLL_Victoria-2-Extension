// FUN_007a7860 @ 007a7860 body=[[007a7860, 007a79e5] [007a79e9, 007a7a08] [007a7a0c, 007a7ab2] [007a7ab6, 007a7b5a]]


void FUN_007a7860(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined **ppuStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined1 uStack_294;
  undefined4 uStack_284;
  uint *puStack_280;
  char *pcStack_27c;
  undefined1 *puStack_278;
  undefined4 uStack_274;
  undefined1 local_260 [164];
  undefined1 local_1bc [168];
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  undefined1 local_f8 [164];
  undefined1 local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a6a7;
  local_10 = ExceptionList;
  uStack_274 = 0x7a7893;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x100))();
  uStack_274 = 1;
  puStack_278 = (undefined1 *)0x7a78a2;
  (**(code **)(**(int **)(iVar1 + 0xe4) + 0x10))();
  puStack_278 = (undefined1 *)0x7a78a9;
  FUN_007a8070();
  puStack_278 = (undefined1 *)0xa0;
  pcStack_27c = (char *)0x7a78b3;
  puStack_278 = (undefined1 *)FUN_00aae9af();
  local_8 = 0;
  if (puStack_278 == (undefined1 *)0x0) {
    local_18 = 0;
  }
  else {
    pcStack_27c = (char *)0x7a78c8;
    local_14 = puStack_278;
    local_18 = FUN_00a16220();
  }
  local_8 = 0xffffffff;
  local_14 = *(undefined1 **)(param_1 + 0x3a0);
  if (*(undefined4 **)((int)local_14 + 0x1b8) != (undefined4 *)0x0) {
    puStack_278 = (undefined1 *)0x1;
    pcStack_27c = (char *)0x7a78f2;
    (**(code **)**(undefined4 **)((int)local_14 + 0x1b8))();
  }
  puStack_278 = (undefined1 *)0x0;
  *(undefined4 *)((int)local_14 + 0x1b8) = local_18;
  pcStack_27c = "";
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  puStack_280 = (uint *)0x7a7919;
  FUN_00409350();
  local_8 = 1;
  puStack_278 = (undefined1 *)0xc;
  pcStack_27c = "LobbySession";
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_280 = (uint *)0x7a793c;
  FUN_00409350();
  local_8._0_1_ = 2;
  puStack_278 = (undefined1 *)0x1;
  pcStack_27c = (char *)0x7a794f;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x100))();
  uStack_2a4 = *(undefined4 *)(iVar1 + 0x24);
  local_14 = (undefined1 *)&ppuStack_2a8;
  ppuStack_2a8 = CVersion::vftable;
  uStack_2a0 = *(undefined4 *)(iVar1 + 0x28);
  uStack_29c = *(undefined4 *)(iVar1 + 0x2c);
  uStack_298 = *(undefined4 *)(iVar1 + 0x30);
  puStack_280 = (uint *)0xf;
  uStack_284 = 0;
  uStack_294 = 0;
  FUN_00408ed0(iVar1 + 0x34,0,0xffffffff);
  FUN_009f8180(local_260,local_50,local_34,0x666,in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x24),7,0,1)
  ;
  puStack_278 = local_1bc;
  local_8._0_1_ = 3;
  pcStack_27c = (char *)0x7a79c8;
  FUN_00648af0();
  puStack_278 = (undefined1 *)0x7a79d3;
  FUN_00648a60();
  if (0xf < local_3c) {
    puStack_278 = (undefined1 *)local_50[0];
                    /* WARNING: Subroutine does not return */
    pcStack_27c = &UNK_007a79e6;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_8._0_1_ = 7;
  if (0xf < local_20) {
    puStack_278 = (undefined1 *)local_34[0];
                    /* WARNING: Subroutine does not return */
    pcStack_27c = &UNK_007a7a09;
    FUN_00aae91b();
  }
  puStack_278 = (undefined1 *)0xffffffff;
  pcStack_27c = (char *)0x0;
  puStack_280 = (uint *)(param_1 + 0x3dc);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  uStack_284 = 0x7a7a3f;
  FUN_00408ed0();
  puStack_278 = local_f8;
  local_8._0_1_ = 8;
  pcStack_27c = (char *)0x7a7a55;
  FUN_00648af0();
  local_54 = 0;
  local_8._0_1_ = 9;
  puStack_278 = (undefined1 *)0xffffffff;
  local_14 = (undefined1 *)(*(int *)(param_1 + 0xc) + 0x98);
  pcStack_27c = (char *)0x0;
  puStack_280 = local_114;
  uStack_284 = 0x7a7a79;
  FUN_00408ed0();
  puStack_278 = (undefined1 *)0x7a7a87;
  FUN_007589c0();
  *(undefined1 *)((int)local_14 + 0xc0) = local_54;
  local_8 = CONCAT31(local_8._1_3_,7);
  puStack_278 = (undefined1 *)0x7a7a9e;
  FUN_00648a60();
  if (0xf < local_100) {
    puStack_278 = (undefined1 *)local_114[0];
                    /* WARNING: Subroutine does not return */
    pcStack_27c = &UNK_007a7ab3;
    FUN_00aae91b();
  }
  *(undefined1 *)(DAT_012588e8 + 3000) = 1;
  iVar1 = *(int *)(param_1 + 0xc);
  DAT_012589ac = 2;
  puStack_278 = (undefined1 *)0x7a7ad8;
  iVar2 = FUN_00475500();
  *(undefined1 *)(iVar2 + 0x165) = 0;
  puStack_278 = (undefined1 *)0x7a7af4;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 0xc))();
  *(undefined4 *)(iVar1 + 0x75c) = 4;
  puStack_278 = (undefined1 *)0x7a7b0e;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + 0x10) + 4))();
  puStack_278 = (undefined1 *)0x7a7b24;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 8))();
  if (*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) != 0) {
    puStack_278 = (undefined1 *)0x7a7b3d;
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) + 0x18) + 0x38))();
  }
  puStack_278 = (undefined1 *)0x7a7b48;
  FUN_00648a60();
  ExceptionList = local_10;
  return;
}

