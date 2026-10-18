// FUN_0063f0c0 @ 0063f0c0 body=[[0063f0c0, 0063f176] [0063f17a, 0063f215] [0063f219, 0063f302] [0063f306, 0063f313] [0063f317, 0063f32f]]


undefined4 FUN_0063f0c0(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *in_ECX;
  undefined1 local_184 [8];
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uint *local_174;
  char *local_170;
  undefined ***pppuStack_16c;
  undefined4 local_15c;
  int local_158;
  char *local_154;
  uint local_150 [4];
  undefined4 local_140;
  uint local_13c;
  undefined1 *local_134;
  uint auStack_130 [4];
  undefined4 uStack_120;
  uint uStack_11c;
  undefined **local_114 [5];
  uint uStack_100;
  undefined4 uStack_f0;
  uint uStack_ec;
  int local_e4;
  char local_dc;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5a28c;
  pvStack_14 = ExceptionList;
  local_15c = 0;
  local_158 = 0;
  local_154 = (char *)0x0;
  local_13c = 0xf;
  local_140 = 0;
  local_150[0] = local_150[0] & 0xffffff00;
  pcVar1 = in_ECX + 1;
  do {
    cVar2 = *in_ECX;
    in_ECX = in_ECX + 1;
  } while (cVar2 != '\0');
  pppuStack_16c = (undefined ***)((int)in_ECX - (int)pcVar1);
  local_174 = (uint *)0x63f124;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_134 = local_184;
  local_c = 0;
  local_170 = (char *)0xf;
  local_174 = (uint *)0x0;
  local_184[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_114,local_150,0);
  local_c = CONCAT31(local_c._1_3_,2);
  if (0xf < local_13c) {
    pppuStack_16c = (undefined ***)local_150[0];
                    /* WARNING: Subroutine does not return */
    local_170 = &UNK_0063f177;
    FUN_00aae91b();
  }
  local_13c = 0xf;
  local_140 = 0;
  local_150[0] = local_150[0] & 0xffffff00;
  iVar3 = local_158;
  if (local_dc == '\0') {
    if (local_e4 == 0) {
      local_158 = 0;
      iVar3 = 0;
    }
    else {
      pppuStack_16c = (undefined ***)local_e4;
      local_170 = (char *)0x63f1a0;
      iVar3 = PHYSFS_fileLength();
      if (0 < iVar3) {
        local_170 = (char *)0x63f1af;
        pppuStack_16c = (undefined ***)iVar3;
        local_170 = (char *)FUN_00aad56b();
        local_174 = (uint *)0x63f1c1;
        pppuStack_16c = (undefined ***)iVar3;
        local_154 = local_170;
        FUN_00992f20();
      }
    }
  }
  local_c = 0xffffffff;
  local_114[0] = &PTR_FUN_00e37dc0;
  if (local_e4 != 0) {
    pppuStack_16c = (undefined ***)local_e4;
    local_170 = (char *)0x63f1f3;
    PHYSFS_close();
    local_e4 = 0;
  }
  pcVar1 = local_154;
  local_114[0] = &PTR_FUN_00e3b540;
  if (uStack_ec < 0x10) {
    uStack_ec = 0xf;
    uStack_f0 = 0;
    uStack_100 = uStack_100 & 0xffffff00;
    if (local_154 == (char *)0x0) {
      ExceptionList = pvStack_14;
      return local_15c;
    }
    pppuStack_16c = (undefined ***)&local_15c;
    local_174 = (uint *)local_154;
    uStack_178 = param_1;
    uStack_17c = 0x63f242;
    local_170 = (char *)iVar3;
    iVar3 = D3DXCreateTextureFromFileInMemory();
    pppuStack_16c = (undefined ***)pcVar1;
    if (iVar3 < 0) {
      pppuStack_16c = (undefined ***)0x12;
      local_170 = "eu3application.cpp";
      uStack_11c = 0xf;
      uStack_120 = 0;
      auStack_130[0] = auStack_130[0] & 0xffffff00;
      local_174 = (uint *)0x63f26c;
      FUN_00409350();
      pppuStack_16c = (undefined ***)0x10004;
      local_174 = auStack_130;
      local_170 = (char *)0x5db;
      local_c = 3;
      uStack_178 = 0x63f292;
      uVar4 = FUN_004015b0();
      local_c._0_1_ = 4;
      local_170 = (char *)0x63f2a5;
      pppuStack_16c = (undefined ***)iVar3;
      local_174 = (uint *)FUN_00aa5068();
      local_170 = (char *)local_174;
      do {
        cVar2 = *local_170;
        local_170 = local_170 + 1;
      } while (cVar2 != '\0');
      pppuStack_16c = (undefined ***)0x0;
      local_170 = (char *)((int)local_170 - (int)((int)local_174 + 1));
      uStack_17c = 0x63f2c2;
      uStack_178 = uVar4;
      FUN_00987d50();
      pppuStack_16c = appuStack_60;
      local_c = CONCAT31(local_c._1_3_,3);
      local_170 = (char *)0x63f2d7;
      FUN_00987ac0();
      pppuStack_16c = appuStack_60;
      appuStack_60[0] = std::ios_base::vftable;
      local_170 = (char *)0x63f2ef;
      FUN_00aad52d();
      if (0xf < uStack_11c) {
        pppuStack_16c = (undefined ***)auStack_130[0];
                    /* WARNING: Subroutine does not return */
        local_170 = &UNK_0063f303;
        FUN_00aae91b();
      }
      local_15c = 0;
      pppuStack_16c = (undefined ***)local_154;
    }
                    /* WARNING: Subroutine does not return */
    local_170 = &UNK_0063f314;
    FUN_00aae91b();
  }
  pppuStack_16c = (undefined ***)uStack_100;
                    /* WARNING: Subroutine does not return */
  local_170 = &UNK_0063f216;
  FUN_00aae91b();
}

