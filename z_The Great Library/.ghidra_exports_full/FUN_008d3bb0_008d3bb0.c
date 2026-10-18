// FUN_008d3bb0 @ 008d3bb0 body=[[008d3bb0, 008d3c87] [008d3c8b, 008d3d90] [008d3d94, 008d3db3] [008d3db7, 008d3dcd]]


void FUN_008d3bb0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  int in_ECX;
  undefined4 **local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  int local_dc;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58a9a;
  local_14 = ExceptionList;
  pcVar3 = &stack0x00000008;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_c = 0;
  if (DAT_0131acac == 0) {
    local_dc = FUN_00aae9af(0x20);
    local_c._0_1_ = 1;
    if (local_dc == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0090cca0();
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_0090d9d0(uVar4);
  }
  iVar2 = DAT_0131acac;
  iVar5 = FUN_0090da40(local_114);
  if (iVar5 == 0) {
    iVar5 = **(int **)(iVar2 + 0xc);
  }
  *(int *)(in_ECX + 0x1c) = iVar5;
  local_c = 0xffffffff;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114[0]);
  }
  if (*(int *)(in_ECX + 0x1c) == 0) {
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 2;
    pcVar3 = &stack0x00000008;
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = (undefined4 **)((uint)local_130[0] & 0xffffff00);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
    local_c._0_1_ = 3;
    uVar4 = FUN_004015b0(local_f8,0xe34,0x10004);
    local_c._0_1_ = 4;
    FUN_00987d50(uVar4,"unknown CB \'",0xc,0);
    pppuVar6 = (undefined4 ***)local_130[0];
    if (local_11c < 0x10) {
      pppuVar6 = local_130;
    }
    uVar4 = FUN_00418e30(uVar4,pppuVar6);
    uVar4 = FUN_00418e30(uVar4,"\' in trigger.");
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_130[0]);
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = (undefined4 **)((uint)local_130[0] & 0xffffff00);
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

