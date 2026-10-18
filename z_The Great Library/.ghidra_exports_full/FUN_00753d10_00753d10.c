// FUN_00753d10 @ 00753d10 body=[[00753d10, 00753e2f] [00753e33, 0075405d] [00754061, 00754089] [007540a4, 007541ff] [00754203, 007542b0]]


void FUN_00753d10(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  int *piVar8;
  int in_ECX;
  undefined1 *puVar9;
  undefined1 auStack_1e4 [8];
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1b8;
  undefined4 ***local_1b4 [4];
  undefined4 local_1a4;
  uint local_1a0;
  undefined4 local_198;
  int local_194;
  uint local_190;
  undefined4 local_180;
  uint local_17c;
  uint local_174 [4];
  undefined4 local_164;
  uint local_160;
  uint local_158;
  undefined4 local_148;
  uint local_144;
  undefined1 local_13c [4];
  undefined1 local_138 [20];
  undefined1 local_124 [196];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6d967;
  local_14 = ExceptionList;
  if (param_2 < 0x2f1) {
    if (param_2 == 0x2f0) {
      local_1d0 = 0xded94d;
      local_1a0 = 0xf;
      local_1a4 = 0;
      local_1b4[0] = (undefined4 ***)((uint)local_1b4[0] & 0xffffff00);
      local_1d8 = CONCAT44(0x753edd,(undefined4)local_1d8);
      ExceptionList = &local_14;
      FUN_00409350();
      local_1d0 = ZEXT48(local_1b4);
      local_c = 6;
      local_1d8 = CONCAT44(0x753ef6,(undefined4)local_1d8);
      FUN_009a1750();
      ppppuVar7 = (undefined4 ****)local_1b4[0];
      if (local_1a0 < 0x10) {
        ppppuVar7 = local_1b4;
      }
      local_1d0 = CONCAT44(ppppuVar7,&local_198);
      local_1d8 = CONCAT44(DAT_012587e4,0x753f17);
      FUN_0055c6c0();
      if (local_194 == 0) {
        local_1d0 = 0xd00e13ab4;
        local_160 = 0xf;
        local_164 = 0;
        local_174[0] = local_174[0] & 0xffffff00;
        local_1d8 = CONCAT44(0x753fa0,(undefined4)local_1d8);
        FUN_00409350();
        local_1d0 = 0x1000400000049;
        local_c._0_1_ = 7;
        local_1d8 = CONCAT44(local_174,0x753fc0);
        uVar5 = FUN_004015b0();
        local_1d0 = 8;
        local_1d8 = CONCAT44("Bad tag ",uVar5);
        local_c._0_1_ = 8;
        uStack_1dc = 0x753fdc;
        FUN_00987d50();
        ppppuVar7 = (undefined4 ****)local_1b4[0];
        if (local_1a0 < 0x10) {
          ppppuVar7 = local_1b4;
        }
        local_1d0 = CONCAT44(ppppuVar7,uVar5);
        local_1d8 = CONCAT44(0x753ff6,(undefined4)local_1d8);
        uVar5 = FUN_00418e30();
        local_1d8 = CONCAT44(" in bookmark ",uVar5);
        puVar6 = (undefined4 *)(in_ECX + 8);
        uStack_1dc = 0x754004;
        uVar5 = FUN_00418e30();
        if (0xf < *(uint *)(in_ECX + 0x1c)) {
          puVar6 = (undefined4 *)*puVar6;
        }
        local_1d0 = CONCAT44(puVar6,uVar5);
        local_1d8 = CONCAT44(0x754015,(undefined4)local_1d8);
        uVar5 = FUN_00418e30();
        local_1d8 = CONCAT44(uVar5,0x75401b);
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,7);
        local_1d0 = CONCAT44(appuStack_60,0x754033);
        FUN_00987ac0();
        appuStack_60[0] = std::ios_base::vftable;
        local_1d0 = CONCAT44(appuStack_60,0x75404b);
        FUN_00aad52d();
        if (0xf < local_160) {
          local_1d0 = CONCAT44(local_174[0],&UNK_0075405e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_160 = 0xf;
        local_164 = 0;
        local_174[0] = local_174[0] & 0xffffff00;
      }
      else {
        iVar4 = *(int *)(in_ECX + 0x98);
        local_1d0 = 0x1400753f2c;
        puVar6 = (undefined4 *)FUN_00aae9af();
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = local_198;
          puVar6[1] = local_194;
          puVar6[2] = iVar4;
          puVar6[3] = 0;
          *(undefined1 *)(puVar6 + 4) = 0;
        }
        iVar2 = *(int *)(in_ECX + 0x9c);
        *(undefined4 **)(in_ECX + 0x98) = puVar6;
        *(int *)(in_ECX + 0x9c) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined4 **)(in_ECX + 0x94) = puVar6;
        }
        else {
          *(undefined4 **)(iVar4 + 0xc) = puVar6;
        }
      }
      if (local_1a0 < 0x10) {
        ExceptionList = local_14;
        return;
      }
      local_1d0 = CONCAT44(local_1b4[0],&UNK_0075408a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_2 != 0x1a) {
      if (param_2 == 0xb2) {
        local_1d0 = (ulonglong)(in_ECX + 0x78);
        local_1d8 = CONCAT44(0x753da8,(undefined4)local_1d8);
        ExceptionList = &local_14;
        FUN_009a1750();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x2a1) {
        local_1b8 = auStack_1e4;
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      }
LAB_007540b9:
      local_1d0 = CONCAT44(0x7540c1,(undefined4)local_1d0);
      ExceptionList = &local_14;
      FUN_009a0f40();
      ExceptionList = local_14;
      return;
    }
    uVar1 = in_ECX + 8;
    local_1d0 = (ulonglong)uVar1;
    local_1d8 = CONCAT44(0x753dce,(undefined4)local_1d8);
    ExceptionList = &local_14;
    FUN_009a1750();
    local_1d0 = 0xffffffff00000000;
    local_1d8 = CONCAT44(uVar1,0x753dda);
    FUN_00408ed0();
    local_1d0 = 0xded94d;
    local_17c = 0xf;
    local_180 = 0;
    local_190 = local_190 & 0xffffff00;
    local_1d8 = CONCAT44(0x753dfa,(undefined4)local_1d8);
    FUN_00409350();
    local_c = 0;
    local_1d0 = CONCAT44(0x753e0d,(undefined4)local_1d0);
    cVar3 = FUN_00416db0();
    local_c = 0xffffffff;
    if (0xf < local_17c) {
      local_1d0 = CONCAT44(local_190,&UNK_00753e30);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_17c = 0xf;
    local_180 = 0;
    local_190 = local_190 & 0xffffff00;
    if (cVar3 != '\0') {
      ExceptionList = local_14;
      return;
    }
    local_1d0 = CONCAT44(uVar1,local_124);
    local_1d8 = CONCAT44(0x753e5d,(undefined4)local_1d8);
    FUN_009a8ee0();
    local_c = 1;
    local_1d0 = CONCAT44(0x753e6f,(undefined4)local_1d0);
    iVar4 = FUN_00475500();
    local_1d8 = *(undefined8 *)(iVar4 + 0x6c);
    local_1d0 = *(undefined8 *)(iVar4 + 0x74);
    uStack_1dc = 0x753e95;
    uVar5 = FUN_009a9880();
    local_1d0 = 0xffffffff00000000;
    local_c = CONCAT31(local_c._1_3_,2);
    local_1d8 = CONCAT44(uVar5,0x753ea9);
    FUN_00408ed0();
    local_1d0 = CONCAT44(0x753eb0,(undefined4)local_1d0);
    FUN_00408ad0();
    puVar9 = local_124;
  }
  else {
    if (param_2 != 0x3e3) {
      if (param_2 == 0x9a5) {
        local_1d0 = CONCAT44(local_13c,param_1 + 0x228);
        ExceptionList = &local_14;
        *(undefined1 *)(in_ECX + 0xa8) = 1;
        local_1d8 = CONCAT44(0x754146,(undefined4)local_1d8);
        piVar8 = (int *)FUN_0098fb60();
        *(float *)(in_ECX + 0xac) = (float)*piVar8 / 1000.0;
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x9a6) {
        local_1d0 = CONCAT44(&local_1b8,param_1 + 0x228);
        ExceptionList = &local_14;
        *(undefined1 *)(in_ECX + 0xa8) = 1;
        local_1d8 = CONCAT44(0x7540f2,(undefined4)local_1d8);
        piVar8 = (int *)FUN_0098fb60();
        *(float *)(in_ECX + 0xb0) = (float)*piVar8 / 1000.0;
        ExceptionList = local_14;
        return;
      }
      goto LAB_007540b9;
    }
    uVar1 = in_ECX + 0x24;
    local_1d0 = (ulonglong)uVar1;
    local_1d8 = CONCAT44(0x75418a,(undefined4)local_1d8);
    ExceptionList = &local_14;
    FUN_009a1750();
    local_1d0 = 0xffffffff00000000;
    local_1d8 = CONCAT44(uVar1,0x754197);
    FUN_00408ed0();
    local_1d0 = 0xded94d;
    local_144 = 0xf;
    local_148 = 0;
    local_158 = local_158 & 0xffffff00;
    local_1d8 = CONCAT44(0x7541c3,(undefined4)local_1d8);
    FUN_00409350();
    local_c = 3;
    local_1d0 = CONCAT44(0x7541da,(undefined4)local_1d0);
    cVar3 = FUN_00416db0();
    local_c = 0xffffffff;
    if (0xf < local_144) {
      local_1d0 = CONCAT44(local_158,&UNK_00754200);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_144 = 0xf;
    local_148 = 0;
    local_158 = local_158 & 0xffffff00;
    if (cVar3 != '\0') {
      ExceptionList = local_14;
      return;
    }
    local_1d0 = CONCAT44(uVar1,local_138);
    local_1d8 = CONCAT44(0x75422f,(undefined4)local_1d8);
    FUN_009a8ee0();
    local_c = 4;
    local_1d0 = CONCAT44(0x754241,(undefined4)local_1d0);
    iVar4 = FUN_00475500();
    local_1d8 = *(undefined8 *)(iVar4 + 0x6c);
    local_1d0 = *(undefined8 *)(iVar4 + 0x74);
    uStack_1dc = 0x754267;
    uVar5 = FUN_009a9880();
    local_1d0 = 0xffffffff00000000;
    local_c = CONCAT31(local_c._1_3_,5);
    local_1d8 = CONCAT44(uVar5,0x75427b);
    FUN_00408ed0();
    local_1d0 = CONCAT44(0x754282,(undefined4)local_1d0);
    FUN_00408ad0();
    puVar9 = local_138;
  }
  local_c = 0xffffffff;
  local_1d0 = CONCAT44(puVar9,0x75429a);
  FUN_009a9740();
  ExceptionList = local_14;
  return;
}

