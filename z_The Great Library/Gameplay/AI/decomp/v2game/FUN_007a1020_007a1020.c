// FUN_007a1020 @ 007a1020 body=[[007a1020, 007a1139] [007a113d, 007a11a4] [007a11a8, 007a1240] [007a1244, 007a136d] [007a1371, 007a139e] [007a13a2, 007a14f1] [007a14f5, 007a1552] [007a1556, 007a1611] [007a1615, 007a164e] [007a1652, 007a166e] [007a1672, 007a1697] [007a169b, 007a17db] [007a17df, 007a17f5]]


void FUN_007a1020(int *param_1,char param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  undefined4 *unaff_EDI;
  undefined1 *puVar8;
  undefined4 *local_184;
  uint local_180;
  undefined4 uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  int *piStack_16c;
  undefined4 uStack_168;
  uint uStack_164;
  uint auStack_160 [2];
  undefined4 local_158;
  int local_154;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined1 auStack_144 [4];
  uint local_140;
  uint local_13c;
  undefined1 auStack_138 [4];
  uint uStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  undefined4 *puStack_124;
  undefined4 uStack_120;
  uint uStack_118;
  undefined1 auStack_114 [12];
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  uint uStack_f8;
  undefined1 auStack_f0 [4];
  uint uStack_ec;
  undefined4 *puStack_e4;
  int iStack_d8;
  undefined1 auStack_d4 [52];
  undefined4 uStack_a0;
  short sStack_8c;
  short sStack_8a;
  void *pvStack_28;
  undefined1 uStack_23;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b368;
  pvStack_14 = ExceptionList;
  local_180 = 0;
  local_158 = *(undefined4 *)(in_ECX + 0x40);
  ExceptionList = &pvStack_14;
  local_154 = in_ECX;
  puVar2 = (undefined4 *)FUN_00aae9af(0x28);
  local_c = 0;
  local_184 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_13c = 0xf;
    local_140 = 0;
    local_150 = local_150 & 0xffffff00;
    FUN_00409350("chat_message",0xc);
    piVar7 = DAT_01258a80;
    local_c = CONCAT31(local_c._1_3_,1);
    local_180 = 1;
    uVar3 = (**(code **)(**(int **)(local_154 + 0x34) + 0x3c))();
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    DAT_013f08e0 = DAT_013f08e0 + 1;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[7] = &PTR_FUN_00e39158;
    local_c = 5;
    *puVar2 = &PTR_FUN_00e392f0;
    puVar2[7] = &PTR_FUN_00e39320;
    *(undefined1 *)(puVar2 + 9) = 0;
    uVar3 = (**(code **)(*piVar7 + 0x2c))(&local_150,uVar3);
    puVar2[8] = uVar3;
  }
  local_c = 0xffffffff;
  if ((local_180 & 1) != 0) {
    local_180 = local_180 & 0xfffffffe;
    if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_150);
    }
    local_13c = 0xf;
    local_140 = 0;
    local_150 = local_150 & 0xffffff00;
  }
  auStack_160[0] = 0xf;
  uStack_164 = 0;
  uStack_174 = uStack_174 & 0xffffff00;
  FUN_00409350("ChatMemberText",0xe);
  local_c = 7;
  iVar4 = (**(code **)(*(int *)puVar2[8] + 0x3c))(&uStack_174);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_178);
  }
  uStack_164 = 0xf;
  uStack_168 = 0;
  uStack_178 = uStack_178 & 0xffffff00;
  local_180 = *(undefined4 *)(*(int *)(iVar4 + 0xa0) + 0x198);
  uStack_17c = *(undefined4 *)(*(int *)(iVar4 + 0xa0) + 0x19c);
  iVar5 = FUN_00973bd0(iVar4 + 0x60);
  if (iVar5 == 0) {
    iVar5 = FUN_00973bd0(iVar4 + 0x60);
  }
  uStack_164 = 0xf;
  uStack_168 = 0;
  uStack_178 = uStack_178 & 0xffffff00;
  puStack_10 = (undefined1 *)0x8;
  FUN_009f4bc0(auStack_d4,&uStack_178,iVar5);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,10);
  if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_178);
  }
  sStack_8c = 600 - (short)local_180;
  sStack_8a = 2000 - (short)uStack_17c;
  uStack_164 = 0xf;
  uStack_168 = 0;
  uStack_178 = uStack_178 & 0xffffff00;
  if (param_2 == '\0') {
    puVar8 = auStack_f0;
    uVar3 = (**(code **)(*param_1 + 0x20))(puVar8);
    pvStack_14._0_1_ = 0xc;
    uVar3 = FUN_00988fa0(uVar3);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xd);
    FUN_00409350(&DAT_00ded94d,0);
    uStack_a0 = 0;
    uStack_23 = 1;
    (**(code **)(iStack_d8 + 0x54))(uVar3);
    if ((undefined4 *)0xf < puStack_12c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_140);
    }
    puStack_12c = (undefined4 *)0xf;
    uStack_130 = 0;
    local_140 = local_140 & 0xffffff00;
  }
  else {
    puVar8 = auStack_138;
    uVar3 = (**(code **)(*param_1 + 0x20))(puVar8);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
    FUN_00409350(&DAT_00ded94d,0);
    uStack_a0 = 0;
    uStack_23 = 1;
    (**(code **)(iStack_d8 + 0x54))(uVar3);
    uStack_f8 = local_140;
    puStack_e4 = puStack_12c;
  }
  if (puStack_e4 < (undefined4 *)0x10) {
    uStack_18 = 10;
    FUN_009f6090(auStack_114);
    uStack_18 = 0xe;
    FUN_00989510(&puStack_124,10);
    uStack_18 = 0xf;
    (**(code **)*puVar2)(1);
    puVar2 = puStack_128;
    while( true ) {
      if ((puVar2 < puStack_128) || (puStack_124 <= puVar2)) {
        puVar2 = puStack_128;
        if (puStack_128 != (undefined4 *)0x0) {
          while( true ) {
            if (puVar2 == puStack_124) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(puStack_128);
            }
            if (0xf < (uint)puVar2[5]) break;
            puVar2[5] = 0xf;
            puVar2[4] = 0;
            *(undefined1 *)puVar2 = 0;
            puVar2 = puVar2 + 7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*puVar2);
        }
        puStack_128 = (undefined4 *)0x0;
        puStack_124 = (undefined4 *)0x0;
        uStack_120 = 0;
        if (uStack_104 < 0x10) {
          uStack_104 = 0xf;
          uStack_108 = 0;
          uStack_118 = uStack_118 & 0xffffff00;
          uStack_1c = 0xffffffff;
          FUN_009f4d20();
          uVar1 = uStack_164;
          (**(code **)(**(int **)(uStack_164 + 0x40) + 0x78))();
          iVar4 = (**(code **)(**(int **)(uVar1 + 0x40) + 0x2c))();
          if (500 < *(int *)(iVar4 + 8)) {
            iVar4 = (**(code **)(**(int **)(uVar1 + 0x40) + 0x2c))();
            puVar2 = (undefined4 *)**(int **)(iVar4 + 4);
            (**(code **)(**(int **)(uVar1 + 0x40) + 0x20))(puVar2,1);
            if (puVar2 != (undefined4 *)0x0) {
              (**(code **)*puVar2)(1);
            }
          }
          if ((*(int *)(*(int *)(uVar1 + 0x34) + 0x75c) == 5) && (*(char *)(uVar1 + 0x30) != '\0'))
          {
            (**(code **)(**(int **)(uVar1 + 0x40) + 0x50))();
          }
          uStack_130 = 0xf;
          uStack_134 = 0;
          auStack_144[0] = 0;
          FUN_00409350("chat_message",0xc);
          uStack_1c = 0x19;
          if (DAT_0131ca9c == (int *)0x0) {
            piVar7 = (int *)FUN_00aae9af(0xc);
            if (piVar7 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7[1] = 10000;
              *(undefined1 *)((int)piVar7 + 9) = 1;
              *piVar7 = (int)CNullSound::vftable;
            }
            uStack_1c._0_1_ = 0x1a;
            uStack_168 = 0;
            if ((piVar7 != DAT_0131ca9c) && (DAT_0131ca9c != (int *)0x0)) {
              (**(code **)*DAT_0131ca9c)(1);
            }
            uStack_1c = CONCAT31(uStack_1c._1_3_,0x19);
            DAT_0131ca9c = piVar7;
          }
          (**(code **)(*DAT_0131ca9c + 0x60))(auStack_144);
          if (uStack_134 < 0x10) {
            ExceptionList = pvStack_28;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_148);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_118);
      }
      puVar6 = (undefined4 *)FUN_00aae9af(0x28);
      uStack_1c._0_1_ = 0x10;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uStack_170 = 0xf;
        uStack_174 = 0;
        local_184 = (undefined4 *)((uint)local_184 & 0xffffff00);
        FUN_00409350("chat_message",0xc);
        piVar7 = DAT_01258a80;
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x11);
        unaff_EDI = (undefined4 *)((uint)unaff_EDI | 2);
        uVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *(undefined1 *)(puVar6 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar6 + 5) = 0;
        *(undefined1 *)(puVar6 + 6) = 0;
        puVar6[7] = &PTR_FUN_00e39158;
        uStack_1c = 0x15;
        *puVar6 = &PTR_FUN_00e392f0;
        puVar6[7] = &PTR_FUN_00e39320;
        *(undefined1 *)(puVar6 + 9) = 0;
        uVar3 = (**(code **)(*piVar7 + 0x2c))(&local_184,uVar3);
        puVar6[8] = uVar3;
      }
      uStack_1c = 0xf;
      if (((uint)unaff_EDI & 2) != 0) {
        unaff_EDI = (undefined4 *)((uint)unaff_EDI & 0xfffffffd);
        if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_184);
        }
        uStack_170 = 0xf;
        uStack_174 = 0;
        local_184 = (undefined4 *)((uint)local_184 & 0xffffff00);
      }
      uStack_14c = 0xf;
      local_150 = 0;
      auStack_160[0] = auStack_160[0] & 0xffffff00;
      FUN_00409350("ChatMemberText",0xe);
      uStack_1c = CONCAT31(uStack_1c._1_3_,0x17);
      iVar4 = (**(code **)(*(int *)puVar6[8] + 0x3c))(auStack_160);
      uStack_20 = 0xf;
      if (0xf < local_150) break;
      local_150 = 0xf;
      local_154 = 0;
      uStack_164 = uStack_164 & 0xffffff00;
      *(undefined4 *)(iVar4 + 0x98) = 600;
      *(undefined4 *)(*(int *)(iVar4 + 0xa0) + 0x1a0) = 600;
      *(undefined4 *)(*(int *)(iVar4 + 0xa0) + 0x1a4) = 2000;
      *(undefined4 *)(iVar4 + 0x9c) = 2000;
      if (puVar2 == puStack_12c) {
        FUN_00408ed0(puVar2,0,0xffffffff);
        FUN_00a5ecc0(puVar2,0);
      }
      else {
        uVar3 = FUN_00988fa0(puVar2);
        uStack_20 = 0x18;
        FUN_00408ed0(uVar3,0,0xffffffff);
        FUN_00a5ecc0(uVar3,0);
        uStack_20 = 0xf;
        puVar2 = unaff_EDI;
        if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_100);
        }
      }
      (**(code **)(*piStack_16c + 0x10))(puVar8,1);
      puVar2 = puVar2 + 7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_164);
  }
  uStack_18 = 10;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_f8);
}

