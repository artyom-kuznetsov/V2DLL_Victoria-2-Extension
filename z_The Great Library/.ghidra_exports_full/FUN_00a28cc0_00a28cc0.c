// FUN_00a28cc0 @ 00a28cc0 body=[[00a28cc0, 00a28e43] [00a28e47, 00a28f78] [00a28f81, 00a29061] [00a29065, 00a290d9]]


void FUN_00a28cc0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int in_ECX;
  byte *pbVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  int *piStack_154;
  char *pcStack_150;
  int *piStack_14c;
  undefined *puStack_148;
  int *piStack_144;
  undefined *puStack_140;
  int *piStack_13c;
  undefined *puStack_138;
  byte *pbStack_134;
  byte *pbStack_130;
  undefined *puStack_12c;
  undefined **appuStack_98 [19];
  void *pvStack_4c;
  undefined4 uStack_44;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b63577;
  pvStack_14 = ExceptionList;
  pbVar1 = (byte *)(in_ECX + 0x5c);
  pbVar3 = pbVar1;
  if (0xf < *(uint *)(in_ECX + 0x70)) {
    pbVar3 = *(byte **)pbVar1;
  }
  pbVar8 = &DAT_00ded94d;
  do {
    bVar2 = *pbVar3;
    bVar11 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_00a28d23:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00a28d28;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar11 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_00a28d23;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00a28d28:
  ExceptionList = &pvStack_14;
  if (iVar4 == 0) {
    puStack_12c = (undefined *)0x15;
    pbStack_130 = (byte *)0xe3bb34;
    pbStack_134 = (byte *)0xa28d3a;
    ExceptionList = &pvStack_14;
    FUN_00409350();
  }
  puStack_12c = *(undefined **)(param_1 + 100);
  piStack_13c = (int *)0xa28d49;
  puStack_138 = (undefined *)(param_1 + 0x6bcfc);
  pbStack_134 = pbVar1;
  pbStack_130 = pbVar1;
  iVar4 = FUN_009be510();
  pbStack_134 = (byte *)0x0;
  if (iVar4 != 0) {
    pbStack_134 = *(byte **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar4 * 4);
  }
  puStack_12c = &DAT_00e0bce4;
  *(byte **)(in_ECX + 0xd0) = pbStack_134;
  pbStack_130 = (byte *)0x0;
  puStack_138 = (undefined *)0xa28d69;
  uVar5 = (**(code **)(*(int *)pbStack_134 + 0x24))();
  *(undefined4 *)(in_ECX + 0xd4) = uVar5;
  piStack_13c = *(int **)(in_ECX + 0xd0);
  puStack_138 = &DAT_00e12e7c;
  puStack_140 = (undefined *)0xa28d82;
  uVar5 = (**(code **)(*piStack_13c + 0x34))();
  *(undefined4 *)(in_ECX + 0xdc) = uVar5;
  piStack_144 = *(int **)(in_ECX + 0xd0);
  puStack_140 = &DAT_00e1a0d4;
  puStack_148 = (undefined *)0xa28d9b;
  uVar5 = (**(code **)(*piStack_144 + 0x34))();
  *(undefined4 *)(in_ECX + 0xe0) = uVar5;
  piStack_14c = *(int **)(in_ECX + 0xd0);
  puStack_148 = &DAT_00e1a0dc;
  pcStack_150 = (char *)0xa28db4;
  uVar5 = (**(code **)(*piStack_14c + 0x34))();
  *(undefined4 *)(in_ECX + 0xe4) = uVar5;
  piStack_154 = *(int **)(in_ECX + 0xd0);
  pcStack_150 = "disable";
  uVar5 = (**(code **)(*piStack_154 + 0x34))();
  *(undefined4 *)(in_ECX + 0xe8) = uVar5;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0xd0) + 0x24))
                    (*(int **)(in_ECX + 0xd0),0,"WorldViewProjectionMatrix");
  *(undefined4 *)(in_ECX + 0xd8) = uVar5;
  puStack_140 = (undefined *)0xf;
  piStack_144 = (int *)0x0;
  piStack_154 = (int *)((uint)piStack_154 & 0xffffff00);
  FUN_00409350(&DAT_00e12e7c,2);
  uStack_44 = 0;
  FUN_00408ed0(&piStack_154,0,0xffffffff);
  uStack_44 = 0xffffffff;
  if (0xf < puStack_140) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piStack_154);
  }
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0xd0);
  if (*(char *)(in_ECX + 0x4c) != '\0') {
    piVar9 = (int *)(in_ECX + 0x78);
    uVar6 = FUN_009bcbf0(piVar9,1);
    *(uint *)(in_ECX + 0x16c) = uVar6;
    if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(uVar6 * 0x2c + 0x15c + *(int *)(in_ECX + 0x58));
    }
    *(int **)(in_ECX + 0x168) = piVar7;
    if (piVar7 == (int *)0x0) {
      puStack_140 = (undefined *)0xf;
      piStack_154 = (int *)((uint)piStack_154 & 0xffffff00);
      piStack_144 = piVar7;
      FUN_00409350("spritetype.cpp",0xe);
      uStack_44 = 1;
      uVar5 = FUN_004015b0(&piStack_154,0x10e,0x1000);
      uStack_44._0_1_ = 2;
      FUN_00987d50(uVar5,"Error initialising texture: ",0x1c,0);
      if (0xf < *(uint *)(in_ECX + 0x8c)) {
        piVar9 = (int *)*piVar9;
      }
      uVar5 = FUN_00418e30(uVar5,piVar9);
      piVar9 = (int *)(in_ECX + 8);
      uVar5 = FUN_00418e30(uVar5," for spritetype ");
      if (0xf < *(uint *)(in_ECX + 0x1c)) {
        piVar9 = (int *)*piVar9;
      }
      uVar5 = FUN_00418e30(uVar5,piVar9);
      FUN_00401280(uVar5);
      uStack_44 = CONCAT31(uStack_44._1_3_,1);
      FUN_00987ac0(appuStack_98);
      appuStack_98[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_98);
      if (0xf < puStack_140) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piStack_154);
      }
    }
    else {
      (**(code **)(*piVar7 + 0x44))(piVar7,0,&pbStack_130);
      if (((pbStack_130 == (byte *)0x31545844) || (pbStack_130 == (byte *)0x35545844)) &&
         (*(char *)(in_ECX + 0x170) != '\0')) {
        FUN_009885d0();
        uStack_44 = 3;
        uVar5 = FUN_004015b0(&piStack_154,0x116,0x1000);
        uStack_44._0_1_ = 4;
        FUN_00987d50(uVar5,"Texture ",8,0);
        if (0xf < *(uint *)(in_ECX + 0x8c)) {
          piVar9 = (int *)*piVar9;
        }
        uVar5 = FUN_00418e30(uVar5,piVar9);
        uVar5 = FUN_00418e30(uVar5," have forbidden compression, have you tried DXT3?");
        FUN_00401280(uVar5);
        uStack_44 = CONCAT31(uStack_44._1_3_,3);
        FUN_00987ac0(appuStack_98);
        appuStack_98[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_98);
        if (0xf < puStack_140) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piStack_154);
        }
        *(undefined1 *)(in_ECX + 0x170) = 0;
      }
    }
    uVar6 = *(uint *)(in_ECX + 0x16c);
    if (uVar6 < 10000) {
      uVar5 = *(undefined4 *)(uVar6 * 0x2c + 0x180 + *(int *)(in_ECX + 0x58));
      uVar10 = *(undefined4 *)(uVar6 * 0x2c + 0x17c + *(int *)(in_ECX + 0x58));
    }
    else {
      uVar5 = 0;
      uVar10 = 0;
    }
    *(undefined4 *)(in_ECX + 0xa4) = uVar10;
    *(undefined4 *)(in_ECX + 0xa8) = uVar5;
  }
  ExceptionList = pvStack_4c;
  return;
}

