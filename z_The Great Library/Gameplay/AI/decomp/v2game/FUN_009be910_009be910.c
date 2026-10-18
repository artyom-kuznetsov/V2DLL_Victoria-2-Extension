// FUN_009be910 @ 009be910 body=[[009be910, 009beaf5] [009beaf9, 009beb22] [009beb26, 009bebdb] [009bebe4, 009bec0b] [009bec0f, 009bec29]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_009be910(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 ****appppuStack_194 [3];
  int local_188 [4];
  undefined4 *local_178;
  undefined4 ****local_174;
  int iStack_170;
  undefined **local_e4 [18];
  undefined4 **local_9c [12];
  int local_6c;
  undefined **local_60;
  undefined4 ****local_5c;
  int local_58;
  undefined4 ****local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar7 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5db89;
  local_10 = ExceptionList;
  iStack_170 = -1;
  iVar12 = 0;
  local_174 = (undefined4 ****)0x0;
  local_178 = param_1;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (undefined4 ****)((uint)local_54[0] & 0xffffff00);
  local_188[3] = 0x9be950;
  ExceptionList = &local_10;
  FUN_00408ed0();
  iStack_170 = (int)&DAT_00dedc68;
  local_174 = local_54;
  local_8 = 0;
  local_178 = (undefined4 *)0x9be966;
  FUN_00989720();
  param_1 = local_188;
  appppuStack_194[2] = (undefined4 ****)0x0;
  local_174 = (undefined4 ****)0xf;
  local_178 = (undefined4 *)0x0;
  appppuStack_194[1] = (undefined4 ****)&DAT_00ded94d;
  local_188[0]._0_1_ = 0;
  appppuStack_194[0] = (undefined4 ****)0x9be986;
  FUN_00409350();
  appppuStack_194[2] = (undefined4 ****)0x0;
  appppuStack_194[1] = local_54;
  appppuStack_194[0] = (undefined4 ****)local_9c;
  FUN_00992740();
  local_8._0_1_ = 1;
  if (local_6c != 0) {
    iStack_170 = local_6c;
    local_174 = (undefined4 ****)0x9be9ab;
    iVar12 = PHYSFS_fileLength();
  }
  iStack_170 = 0x9be9b7;
  iVar2 = -iVar12;
  *(int *)((int)&iStack_170 + iVar2) = iVar12;
  *(undefined1 **)((int)&local_174 + iVar2) = &stack0xfffffe94 + iVar2;
  local_1c = &stack0xfffffe94 + iVar2;
  *(undefined4 *)((int)&local_178 + iVar2) = 0x9be9c9;
  FUN_00992f20();
  *(int ***)((int)&iStack_170 + iVar2) = &param_1;
  param_1 = (int *)CONCAT31(param_1._1_3_,0x2f);
  *(undefined4 *)((int)&local_174 + iVar2) = 0x9be9dc;
  iVar4 = FUN_0098a0d0();
  local_5c = local_54[0];
  if (local_40 < 0x10) {
    local_5c = local_54;
  }
  *(int ***)((int)&iStack_170 + iVar2) = &local_14;
  puVar3 = local_1c;
  *(undefined4 **)((int)&local_174 + iVar2) = &local_18;
  *(undefined4 *)((int)&local_178 + iVar2) = 0;
  *(undefined4 *)((int)local_188 + iVar2 + 0xc) = 0;
  local_58 = iVar4 + 1;
  *(undefined ****)((int)local_188 + iVar2 + 8) = &local_60;
  *(undefined4 *)((int)local_188 + iVar2 + 4) = 0;
  *(int *)((int)local_188 + iVar2) = iVar12;
  *(undefined1 **)((int)local_188 + iVar2 + -4) = puVar3;
  *(undefined4 *)((int)appppuStack_194 + iVar2 + 4) = param_2;
  local_60 = &PTR_FUN_00e3a378;
  puVar8 = (undefined1 *)((int)appppuStack_194 + iVar2);
  *(undefined4 *)((int)appppuStack_194 + iVar2) = 0x9bea1b;
  iVar12 = D3DXCreateEffect();
  if (iVar12 < 0) {
    if (local_14 == (int *)0x0) {
      *(undefined4 *)(puVar8 + -4) = 0x11;
      *(char **)(puVar8 + -8) = "effecthandler.cpp";
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      *(undefined4 *)(puVar8 + -0xc) = 0x9beb4e;
      FUN_00409350();
      *(undefined4 *)(puVar8 + -4) = 0x1000;
      *(undefined4 *)(puVar8 + -8) = 0x6f;
      *(uint **)(puVar8 + -0xc) = local_38;
      local_8._0_1_ = 5;
      *(undefined4 *)(puVar8 + -0x10) = 0x9beb68;
      FUN_004015b0();
      local_8._0_1_ = 6;
      *(undefined4 *)(puVar8 + -4) = 0x9beb7b;
      uVar5 = FUN_00987d20();
      if (0xf < (uint)puVar7[5]) {
        puVar7 = (undefined4 *)*puVar7;
      }
      *(undefined4 **)(puVar8 + -4) = puVar7;
      *(undefined4 *)(puVar8 + -8) = uVar5;
      *(undefined4 *)(puVar8 + -0xc) = 0x9beb89;
      uVar5 = FUN_00418e30();
      *(char **)(puVar8 + -0xc) = ". Couldn\'t open file.";
      *(undefined4 *)(puVar8 + -0x10) = uVar5;
      *(undefined4 *)(puVar8 + -0x14) = 0x9beb94;
      uVar5 = FUN_00418e30();
      *(undefined4 *)(puVar8 + -0x14) = uVar5;
      *(undefined4 *)(puVar8 + -0x18) = 0x9beb9a;
      FUN_00401280();
      *(undefined ****)(puVar8 + -4) = local_e4;
      local_8._0_1_ = 5;
      *(undefined4 *)(puVar8 + -8) = 0x9bebad;
      FUN_00987ac0();
      *(undefined ****)(puVar8 + -4) = local_e4;
      local_e4[0] = std::ios_base::vftable;
      *(undefined4 *)(puVar8 + -8) = 0x9bebc3;
      FUN_00aad52d();
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_24) {
        *(uint *)(puVar8 + -4) = local_38[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_009bebdc;
        FUN_00aae91b();
      }
    }
    else {
      pcVar1 = *(code **)(*local_14 + 0xc);
      *(int **)(puVar8 + -4) = local_14;
      puVar9 = (undefined4 *)(puVar8 + -8);
      puVar8 = puVar8 + -8;
      *puVar9 = 0x9bea36;
      uVar5 = (*pcVar1)();
      *(undefined4 *)(puVar8 + -4) = 0x11;
      *(char **)(puVar8 + -8) = "effecthandler.cpp";
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      *(undefined4 *)(puVar8 + -0xc) = 0x9bea59;
      FUN_00409350();
      *(undefined4 *)(puVar8 + -4) = 0x1000;
      *(undefined4 *)(puVar8 + -8) = 0x6a;
      *(uint **)(puVar8 + -0xc) = local_38;
      local_8._0_1_ = 3;
      *(undefined4 *)(puVar8 + -0x10) = 0x9bea73;
      FUN_004015b0();
      local_8._0_1_ = 4;
      *(undefined4 *)(puVar8 + -4) = 0x9bea86;
      uVar6 = FUN_00987d20();
      if (0xf < (uint)puVar7[5]) {
        puVar7 = (undefined4 *)*puVar7;
      }
      *(undefined4 **)(puVar8 + -4) = puVar7;
      *(undefined4 *)(puVar8 + -8) = uVar6;
      *(undefined4 *)(puVar8 + -0xc) = 0x9bea99;
      uVar6 = FUN_00418e30();
      *(undefined4 *)(puVar8 + -4) = uVar5;
      *(undefined4 *)(puVar8 + -8) = extraout_ECX;
      *(char **)(puVar8 + -0xc) = " with error: ";
      *(undefined4 *)(puVar8 + -0x10) = uVar6;
      *(undefined4 *)(puVar8 + -0x14) = 0x9beaa9;
      uVar5 = FUN_00418e30();
      *(undefined4 *)(puVar8 + -8) = uVar5;
      *(undefined4 *)(puVar8 + -0xc) = 0x9beab2;
      uVar5 = FUN_00418e30();
      *(undefined4 *)(puVar8 + -0xc) = uVar5;
      *(undefined4 *)(puVar8 + -0x10) = 0x9beab8;
      FUN_00401280();
      *(undefined ****)(puVar8 + -4) = local_e4;
      local_8._0_1_ = 3;
      *(undefined4 *)(puVar8 + -8) = 0x9beacb;
      FUN_00987ac0();
      *(undefined ****)(puVar8 + -4) = local_e4;
      local_e4[0] = std::ios_base::vftable;
      *(undefined4 *)(puVar8 + -8) = 0x9beae1;
      FUN_00aad52d();
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_24) {
        *(uint *)(puVar8 + -4) = local_38[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_009beaf6;
        FUN_00aae91b();
      }
    }
    if (local_14 != (int *)0x0) {
      iVar12 = *local_14;
      *(int **)(puVar8 + -4) = local_14;
      pcVar1 = *(code **)(iVar12 + 8);
      puVar10 = (undefined4 *)(puVar8 + -8);
      puVar8 = puVar8 + -8;
      *puVar10 = 0x9beb0a;
      (*pcVar1)();
    }
    *(undefined4 *)(puVar8 + -4) = 0x9beb15;
    FUN_00992d60();
    if (0xf < local_40) {
      *(undefined4 *****)(puVar8 + -4) = local_54[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_009beb23;
      FUN_00aae91b();
    }
    local_18 = 0;
  }
  else {
    if (local_14 != (int *)0x0) {
      iVar12 = *local_14;
      *(int **)(puVar8 + -4) = local_14;
      pcVar1 = *(code **)(iVar12 + 8);
      puVar11 = (undefined4 *)(puVar8 + -8);
      puVar8 = puVar8 + -8;
      *puVar11 = 0x9bebf0;
      (*pcVar1)();
    }
    *(undefined4 *)(puVar8 + -4) = 0x9bebfe;
    FUN_00992d60();
    if (0xf < local_40) {
      *(undefined4 *****)(puVar8 + -4) = local_54[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_009bec0c;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return local_18;
}

