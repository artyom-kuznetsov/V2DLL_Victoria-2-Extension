// FUN_009bdf40 @ 009bdf40 body=[[009bdf40, 009be105] [009be109, 009be118] [009be11c, 009be13c] [009be140, 009be15b] [009be15f, 009be173]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009bdf40(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 auStack_174 [8];
  undefined4 uStack_16c;
  undefined4 **ppuStack_168;
  uint *puStack_164;
  char *pcStack_160;
  undefined ***pppuStack_15c;
  undefined4 **appuStack_14c [4];
  undefined4 uStack_13c;
  uint uStack_138;
  undefined4 **appuStack_130 [4];
  undefined4 uStack_120;
  uint uStack_11c;
  uint auStack_114 [4];
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_f8;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *puStack_dc;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b56d77;
  pvStack_14 = ExceptionList;
  pppuStack_15c = (undefined ***)0xffffffff;
  puStack_164 = (uint *)0x9bdf6f;
  ExceptionList = &pvStack_14;
  iVar2 = lua_isstring();
  if (iVar2 != 0) {
    pppuStack_15c = (undefined ***)0x0;
    pcStack_160 = (char *)0xffffffff;
    ppuStack_168 = (undefined4 **)0x9bdf86;
    pcStack_160 = (char *)lua_tolstring();
    uStack_138 = 0xf;
    uStack_13c = 0;
    appuStack_14c[0] = (undefined4 **)((uint)appuStack_14c[0] & 0xffffff00);
    pcVar4 = pcStack_160;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pppuStack_15c = (undefined ***)((int)pcVar4 - (int)(pcStack_160 + 1));
    puStack_164 = (uint *)0x9bdfb4;
    FUN_00409350();
    pppuStack_15c = (undefined ***)0xfffffffe;
    uStack_c = 0;
    puStack_164 = (uint *)0x9bdfc4;
    lua_settop();
    ppuStack_168 = appuStack_130;
    uStack_16c = 0x9bdfcf;
    FUN_009bdb20();
    puStack_dc = auStack_174;
    uStack_c._0_1_ = 1;
    pcStack_160 = (char *)0xf;
    puStack_164 = (uint *)0x0;
    auStack_174[0] = 0;
    FUN_00408ed0(appuStack_14c,0,0xffffffff);
    FUN_009bda60();
    uStack_c._0_1_ = 2;
    if (iStack_e8 == 0) {
      pppuStack_15c = (undefined ***)0x1d;
      pcStack_160 = " - no script source to reload";
      puStack_164 = (uint *)0x9be027;
      FUN_00448740();
      _DAT_00f1f690 = 0;
    }
    pppuStack_15c = (undefined ***)0x10;
    pcStack_160 = "luainterface.cpp";
    uStack_100 = 0xf;
    uStack_104 = 0;
    auStack_114[0] = auStack_114[0] & 0xffffff00;
    puStack_164 = (uint *)0x9be04d;
    FUN_00409350();
    pppuStack_15c = (undefined ***)0x3;
    puStack_164 = auStack_114;
    pcStack_160 = (char *)0x6e;
    uStack_c._0_1_ = 3;
    ppuStack_168 = (undefined4 **)0x9be06a;
    uVar3 = FUN_004015b0();
    pppuStack_15c = (undefined ***)0x0;
    pcStack_160 = (char *)0xc;
    puStack_164 = (uint *)0xe3a308;
    uStack_c._0_1_ = 4;
    uStack_16c = 0x9be085;
    ppuStack_168 = (undefined4 **)uVar3;
    FUN_00987d50();
    pppuStack_15c = (undefined ***)appuStack_14c[0];
    if (uStack_138 < 0x10) {
      pppuStack_15c = (undefined ***)appuStack_14c;
    }
    puStack_164 = (uint *)0x9be09a;
    pcStack_160 = (char *)uVar3;
    ppuStack_168 = (undefined4 **)FUN_00418e30();
    puStack_164 = (uint *)&DAT_00dee2cc;
    uStack_16c = 0x9be0a5;
    pcStack_160 = (char *)FUN_00418e30();
    pppuStack_15c = (undefined ***)appuStack_130[0];
    if (uStack_11c < 0x10) {
      pppuStack_15c = (undefined ***)appuStack_130;
    }
    puStack_164 = (uint *)0x9be0bd;
    puStack_164 = (uint *)FUN_00418e30();
    ppuStack_168 = (undefined4 **)0x9be0c3;
    FUN_00401280();
    pppuStack_15c = appuStack_60;
    uStack_c = CONCAT31(uStack_c._1_3_,3);
    pcStack_160 = (char *)0x9be0db;
    FUN_00987ac0();
    pppuStack_15c = appuStack_60;
    appuStack_60[0] = std::ios_base::vftable;
    pcStack_160 = (char *)0x9be0f3;
    FUN_00aad52d();
    if (0xf < uStack_100) {
      pppuStack_15c = (undefined ***)auStack_114[0];
                    /* WARNING: Subroutine does not return */
      pcStack_160 = &UNK_009be106;
      FUN_00aae91b();
    }
    if (0xf < uStack_e4) {
      pppuStack_15c = (undefined ***)uStack_f8;
                    /* WARNING: Subroutine does not return */
      pcStack_160 = &UNK_009be119;
      FUN_00aae91b();
    }
    uStack_e4 = 0xf;
    iStack_e8 = 0;
    uStack_f8 = uStack_f8 & 0xffffff00;
    if (0xf < uStack_11c) {
      pppuStack_15c = (undefined ***)appuStack_130[0];
                    /* WARNING: Subroutine does not return */
      pcStack_160 = &UNK_009be13d;
      FUN_00aae91b();
    }
    uStack_11c = 0xf;
    uStack_120 = 0;
    appuStack_130[0] = (undefined4 **)((uint)appuStack_130[0] & 0xffffff00);
    if (0xf < uStack_138) {
      pppuStack_15c = (undefined ***)appuStack_14c[0];
                    /* WARNING: Subroutine does not return */
      pcStack_160 = &UNK_009be15c;
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_14;
  return;
}

