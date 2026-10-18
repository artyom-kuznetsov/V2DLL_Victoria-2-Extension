// FUN_00802930 @ 00802930 body=[[00802930, 00802968] [00802970, 00802b77] [00802b7b, 00802bd2] [00802bd6, 00802d85] [00802d89, 00802dfd] [00802e01, 00803201]]


void FUN_00802930(void)

{
  void **ppvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_ESI;
  int iVar5;
  void *pvVar6;
  char *pcStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  char *pcStack_b8;
  int *piStack_b4;
  uint uStack_b0;
  char *pcStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  char *pcStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined *puStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined *puStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  uint *puStack_68;
  undefined *puStack_64;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6a990;
  pvStack_14 = ExceptionList;
  iVar5 = 0;
  ExceptionList = &pvStack_14;
  ppvVar1 = &pvStack_14;
  if (0 < (int)(*(int *)(unaff_ESI + 0x280) - *(int *)(unaff_ESI + 0x27c) & 0xfffffffcU)) {
    do {
      ExceptionList = ppvVar1;
      puStack_64 = *(undefined **)(*(int *)(unaff_ESI + 0x27c) + iVar5 * 4);
      puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
      piStack_6c = (int *)0x802988;
      FUN_009bd030();
      iVar5 = iVar5 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar5 < *(int *)(unaff_ESI + 0x280) - *(int *)(unaff_ESI + 0x27c) >> 2);
  }
  iVar5 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0x290) - *(int *)(unaff_ESI + 0x28c) & 0xfffffffcU)) {
    do {
      puStack_64 = *(undefined **)(*(int *)(unaff_ESI + 0x28c) + iVar5 * 4);
      puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
      piStack_6c = (int *)0x8029cb;
      FUN_009bd030();
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_ESI + 0x290) - *(int *)(unaff_ESI + 0x28c) >> 2);
  }
  puStack_64 = *(undefined **)(unaff_ESI + 0x29c);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x8029f5;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0x2a0);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802a0b;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0x180);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802a20;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0x184);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802a36;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0xb8);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802a4c;
  FUN_009bd030();
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  if (*(uint *)(unaff_ESI + 0xb8) < 10000) {
    iVar5 = *(uint *)(unaff_ESI + 0xb8) * 0x2c;
    uVar3 = *(undefined4 *)(iVar5 + 0x24 + (int)puStack_68);
    uVar2 = *(undefined4 *)(iVar5 + 0x28 + (int)puStack_68);
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
  }
  *(undefined4 *)(unaff_ESI + 200) = uVar3;
  puStack_64 = *(undefined **)(unaff_ESI + 0xb4);
  *(undefined4 *)(unaff_ESI + 0xcc) = uVar2;
  piStack_6c = (int *)0x802a8c;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0xb8);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802aa2;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0xc0);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802ab7;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0xc4);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802acd;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0xd0);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802ae3;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0x17c);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802af8;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0x178);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802b0e;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0x188);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802b24;
  FUN_009bd030();
  puStack_64 = (undefined *)0xd;
  puStack_68 = (uint *)0xe1a700;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  piStack_6c = (int *)0x802b44;
  FUN_00409350();
  local_c = 0;
  puStack_64 = *(undefined **)(*(int *)(unaff_ESI + 0x3c) + 100);
  puStack_68 = local_34;
  piStack_6c = (int *)0x802b5f;
  FUN_009bec30();
  local_c = 0xffffffff;
  if (0xf < local_20) {
    puStack_64 = (undefined *)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_68 = (uint *)&UNK_00802b78;
    FUN_00aae91b();
  }
  puStack_64 = (undefined *)0xb;
  puStack_68 = (uint *)0xe1a890;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  piStack_6c = (int *)0x802b9b;
  FUN_00409350();
  local_c = 1;
  puStack_64 = *(undefined **)(*(int *)(unaff_ESI + 0x3c) + 100);
  puStack_68 = local_34;
  piStack_6c = (int *)0x802bba;
  FUN_009bec30();
  local_c = 0xffffffff;
  if (0xf < local_20) {
    puStack_64 = (undefined *)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_68 = (uint *)&UNK_00802bd3;
    FUN_00aae91b();
  }
  puStack_64 = *(undefined **)(unaff_ESI + 0x2b0);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802bec;
  FUN_009bd030();
  puStack_64 = *(undefined **)(unaff_ESI + 0xbc);
  puStack_68 = (uint *)(*(int *)(unaff_ESI + 0x3c) + 0x158);
  piStack_6c = (int *)0x802c01;
  FUN_009bd030();
  if (*(int *)(unaff_ESI + 0x1588) != 0) {
    puStack_64 = (undefined *)0x802c10;
    FUN_007d3280();
  }
  if (*(int *)(unaff_ESI + 0x2a0) == 0) {
    piStack_6c = (int *)0x0;
  }
  else {
    piStack_6c = *(int **)(*(int *)(*(int *)(unaff_ESI + 0x3c) + 0x6bd00) + -4 +
                          *(int *)(unaff_ESI + 0x2a0) * 4);
  }
  puStack_64 = &DAT_00e0bce4;
  *(int **)(unaff_ESI + 0x1a0) = piStack_6c;
  puStack_68 = (uint *)0x0;
  puStack_70 = (undefined *)0x802c3f;
  uVar3 = (**(code **)(*piStack_6c + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1a4) = uVar3;
  piStack_78 = *(int **)(unaff_ESI + 0x1a0);
  puStack_70 = &DAT_00e19384;
  uStack_74 = 0;
  puStack_7c = (undefined *)0x802c59;
  uVar3 = (**(code **)(*piStack_78 + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1a8) = uVar3;
  piStack_84 = *(int **)(unaff_ESI + 0x1a0);
  puStack_7c = &DAT_00e1939c;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x802c73;
  uVar3 = (**(code **)(*piStack_84 + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1ac) = uVar3;
  piStack_90 = *(int **)(unaff_ESI + 0x1a0);
  puStack_88 = &DAT_00e1a710;
  uStack_8c = 0;
  pcStack_94 = (char *)0x802c8d;
  uVar3 = (**(code **)(*piStack_90 + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1b0) = uVar3;
  piStack_9c = *(int **)(unaff_ESI + 0x1a0);
  pcStack_94 = "WorldViewProjectionMatrix";
  uStack_98 = 0;
  pcStack_a0 = (char *)0x802ca7;
  uVar3 = (**(code **)(*piStack_9c + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1c0) = uVar3;
  piStack_a8 = *(int **)(unaff_ESI + 0x1a0);
  pcStack_a0 = "WorldMatrix";
  uStack_a4 = 0;
  pcStack_ac = (char *)0x802cc1;
  uVar3 = (**(code **)(*piStack_a8 + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1b4) = uVar3;
  piStack_b4 = *(int **)(unaff_ESI + 0x1a0);
  pcStack_ac = "ViewMatrix";
  uStack_b0 = 0;
  pcStack_b8 = (char *)0x802cdb;
  uVar3 = (**(code **)(*piStack_b4 + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1b8) = uVar3;
  piStack_c0 = *(int **)(unaff_ESI + 0x1a0);
  pcStack_b8 = "ProjectionMatrix";
  uStack_bc = 0;
  pcStack_c4 = (char *)0x802cf5;
  uVar3 = (**(code **)(*piStack_c0 + 0x24))();
  *(undefined4 *)(unaff_ESI + 0x1bc) = uVar3;
  pcStack_c4 = "LightDirection";
  uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))(*(int **)(unaff_ESI + 0x1a0),0);
  *(undefined4 *)(unaff_ESI + 0x1c4) = uVar3;
  uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                    (*(int **)(unaff_ESI + 0x1a0),"TerrainShader_Graphical");
  *(undefined4 *)(unaff_ESI + 0x208) = uVar3;
  pcStack_94 = (char *)0xf;
  uStack_98 = 0;
  piStack_a8 = (int *)((uint)piStack_a8 & 0xffffff00);
  FUN_00409350("Borders",7);
  uStack_80 = 2;
  FUN_009bec30(&piStack_a8,*(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 100));
  uStack_80 = 0xffffffff;
  if (pcStack_94 < 0x10) {
    uStack_b0 = 0xf;
    piStack_b4 = (int *)0x0;
    pcStack_c4 = (char *)((uint)pcStack_c4 & 0xffffff00);
    FUN_00409350("Borders",7);
    uStack_80 = 3;
    iVar5 = *(int *)(unaff_ESI + 0x3c) + 0x6bcfc;
    piVar4 = (int *)FUN_00a45090(&pcStack_c4);
    if (*piVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(iVar5 + 4) + -4 + *piVar4 * 4);
    }
    uStack_80 = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0x268) = uVar3;
    if (uStack_b0 < 0x10) {
      uStack_b0 = 0xf;
      piStack_b4 = (int *)0x0;
      pcStack_c4 = (char *)((uint)pcStack_c4 & 0xffffff00);
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x268) + 0x24))
                        (*(int **)(unaff_ESI + 0x268),0,"WorldViewProjectionMatrix");
      *(undefined4 *)(unaff_ESI + 0x270) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x268) + 0x34))
                        (*(int **)(unaff_ESI + 0x268),"WaterBorderShader");
      *(undefined4 *)(unaff_ESI + 0x26c) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"TerrainShader_General");
      *(undefined4 *)(unaff_ESI + 0x210) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"TerrainShader_General_Low");
      *(undefined4 *)(unaff_ESI + 0x214) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"TerrainShader_Border");
      *(undefined4 *)(unaff_ESI + 0x228) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"TreeShader");
      *(undefined4 *)(unaff_ESI + 0x22c) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"PTIShader");
      *(undefined4 *)(unaff_ESI + 0x230) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"BeachShader_Graphical");
      *(undefined4 *)(unaff_ESI + 0x218) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"BeachShader_General");
      *(undefined4 *)(unaff_ESI + 0x220) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x34))
                        (*(int **)(unaff_ESI + 0x1a0),"BeachShader_General_Low");
      *(undefined4 *)(unaff_ESI + 0x224) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"ColorMapHeight");
      *(undefined4 *)(unaff_ESI + 0x1c8) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"ColorMapWidth");
      *(undefined4 *)(unaff_ESI + 0x1cc) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"ColorMapTextureHeight");
      *(undefined4 *)(unaff_ESI + 0x1d0) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"ColorMapTextureWidth");
      *(undefined4 *)(unaff_ESI + 0x1d4) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"MapWidth");
      *(undefined4 *)(unaff_ESI + 0x1e0) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"MapHeight");
      *(undefined4 *)(unaff_ESI + 0x1e4) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"BorderWidth");
      *(undefined4 *)(unaff_ESI + 0x1d8) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                        (*(int **)(unaff_ESI + 0x1a0),0,"BorderHeight");
      *(undefined4 *)(unaff_ESI + 0x1dc) = uVar3;
      if (*(int *)(unaff_ESI + 0x29c) == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(*(int *)(*(int *)(unaff_ESI + 0x3c) + 0x6bd00) + -4 +
                          *(int *)(unaff_ESI + 0x29c) * 4);
      }
      *(int **)(unaff_ESI + 0x234) = piVar4;
      uVar3 = (**(code **)(*piVar4 + 0x34))(piVar4,"WaterShader_2_0");
      *(undefined4 *)(unaff_ESI + 0x23c) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x34))
                        (*(int **)(unaff_ESI + 0x234),"WaterShader_1_1");
      *(undefined4 *)(unaff_ESI + 0x238) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x34))
                        (*(int **)(unaff_ESI + 0x234),"HoiWaterShader_2_0");
      *(undefined4 *)(unaff_ESI + 0x248) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,&DAT_00e0bce4);
      *(undefined4 *)(unaff_ESI + 0x240) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,&DAT_00e19384);
      *(undefined4 *)(unaff_ESI + 0x244) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,&DAT_00e19990);
      *(undefined4 *)(unaff_ESI + 0x24c) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"WorldViewProjectionMatrix");
      *(undefined4 *)(unaff_ESI + 0x250) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"WorldMatrix");
      *(undefined4 *)(unaff_ESI + 0x254) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"CameraPosition");
      *(undefined4 *)(unaff_ESI + 600) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"LightPosition");
      *(undefined4 *)(unaff_ESI + 0x25c) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"LightDirection");
      *(undefined4 *)(unaff_ESI + 0x260) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"MapWidth");
      *(undefined4 *)(unaff_ESI + 0x1e8) = uVar3;
      pvVar6 = (void *)0x0;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"MapHeight");
      *(undefined4 *)(unaff_ESI + 0x1ec) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"BorderWidth");
      *(undefined4 *)(unaff_ESI + 0x1f0) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"BorderHeight");
      *(undefined4 *)(unaff_ESI + 500) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"ColorMapHeight");
      *(undefined4 *)(unaff_ESI + 0x1f8) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"ColorMapWidth");
      *(undefined4 *)(unaff_ESI + 0x1fc) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"ColorMapTextureHeight");
      *(undefined4 *)(unaff_ESI + 0x200) = uVar3;
      uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x234) + 0x24))
                        (*(int **)(unaff_ESI + 0x234),0,"ColorMapTextureWidth");
      *(undefined4 *)(unaff_ESI + 0x204) = uVar3;
      if (*(int *)(unaff_ESI + 0x1584) != 0) {
        FUN_00815740();
      }
      ExceptionList = pvVar6;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pcStack_c4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piStack_a8);
}

