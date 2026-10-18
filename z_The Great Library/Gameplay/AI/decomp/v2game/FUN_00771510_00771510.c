// FUN_00771510 @ 00771510 body=[[00771510, 007715ae] [007715b2, 007716d3] [007716d7, 00771743] [00771747, 007717bf] [007717c3, 00771869] [0077186d, 007719c1] [007719c5, 00771a46] [00771a4a, 00771a8d] [00771a91, 00771aae] [00771ab2, 00771ad7] [00771adb, 00771b73] [00771b77, 00771be6] [00771bea, 00771c5a] [00771c5e, 00771ccb] [00771ccf, 00771d27] [00771d2b, 00771d7d] [00771d81, 00771d97]]


/* WARNING: Removing unreachable block (ram,0x00771cc2) */
/* WARNING: Removing unreachable block (ram,0x00771c51) */
/* WARNING: Removing unreachable block (ram,0x00771d1e) */
/* WARNING: Removing unreachable block (ram,0x00771b6a) */

void FUN_00771510(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  uint *puVar8;
  uint *puVar9;
  undefined4 uStack_19c;
  uint uStack_18c;
  undefined4 *local_188;
  uint uStack_180;
  undefined1 auStack_17c [4];
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  int *piStack_15c;
  undefined4 *puStack_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  uint local_144 [3];
  undefined4 *puStack_138;
  undefined4 uStack_134;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  undefined4 uStack_128;
  uint uStack_10c;
  undefined1 local_108 [12];
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 local_f4;
  uint auStack_f0 [4];
  int iStack_e0;
  uint uStack_dc;
  undefined1 auStack_d8 [48];
  undefined4 uStack_a8;
  short sStack_94;
  undefined2 uStack_92;
  void *pvStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b95e;
  pvStack_14 = ExceptionList;
  uStack_19c = (undefined4 *)0x7;
  local_f4 = 0xf;
  local_f8 = 0;
  local_108[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("chatlog");
  local_c = 0;
  uStack_19c = (undefined4 *)local_108;
  local_144[0] = (**(code **)(**(int **)(in_ECX + 0x278) + 0x7c))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_10c);
  }
  local_f8 = 0xf;
  uStack_fc = 0;
  uStack_10c = uStack_10c & 0xffffff00;
  local_188 = (undefined4 *)FUN_00aae9af(0x28);
  puStack_10 = (undefined1 *)0x1;
  if (local_188 == (undefined4 *)0x0) {
    local_188 = (undefined4 *)0x0;
  }
  else {
    uStack_dc = 0xf;
    iStack_e0 = 0;
    auStack_f0[0] = auStack_f0[0] & 0xffffff00;
    FUN_00409350("lobby_chat_text",0xf);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    uStack_18c = 1;
    uVar2 = (**(code **)(**(int **)(iStack_148 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(**(int **)(iStack_148 + 4) + 0x34))();
    local_188[1] = 0;
    local_188[2] = 0;
    local_188[3] = 0;
    *(undefined1 *)(local_188 + 4) = 0;
    DAT_013f08e0 = DAT_013f08e0 + 1;
    *(undefined1 *)(local_188 + 5) = 0;
    *(undefined1 *)(local_188 + 6) = 0;
    local_188[7] = &PTR_FUN_00e39158;
    puStack_10 = (undefined1 *)0x6;
    *local_188 = &PTR_FUN_00e392f0;
    local_188[7] = &PTR_FUN_00e39320;
    *(undefined1 *)(local_188 + 9) = 0;
    uVar2 = (**(code **)(*piVar3 + 0x2c))(auStack_f0,uVar2);
    local_188[8] = uVar2;
  }
  puStack_10 = (undefined1 *)0xffffffff;
  if ((uStack_18c & 1) != 0) {
    if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_f0[0]);
    }
    uStack_dc = 0xf;
    iStack_e0 = 0;
    auStack_f0[0] = auStack_f0[0] & 0xffffff00;
  }
  uStack_150 = 0xf;
  uStack_154 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  FUN_00409350("messagelogtext",0xe);
  puStack_10 = (undefined1 *)0x8;
  puVar9 = &uStack_164;
  piVar3 = (int *)(**(code **)(*(int *)local_188[8] + 0x3c))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_168);
  }
  uStack_154 = 0xf;
  puStack_158 = (undefined4 *)0x0;
  uStack_168 = uStack_168 & 0xffffff00;
  iVar4 = FUN_00973bd0(piVar3 + 0x18);
  if (iVar4 == 0) {
    iVar4 = FUN_00973bd0(piVar3 + 0x18);
  }
  puStack_130 = (undefined4 *)0xf;
  uStack_134 = 0;
  local_144[0] = local_144[0] & 0xffffff00;
  pvStack_14 = (void *)0x9;
  FUN_009f4bc0(auStack_d8,local_144,iVar4);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
  if (0xf < puStack_130) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_144[0]);
  }
  puStack_130 = (undefined4 *)0xf;
  uStack_134 = 0;
  local_144[0] = local_144[0] & 0xffffff00;
  psVar5 = (short *)(**(code **)(*piVar3 + 0xbc))(&stack0xfffffe6c);
  sStack_94 = *psVar5 + -10;
  uStack_92 = 2000;
  puVar8 = &uStack_16c;
  uVar2 = (**(code **)(*param_1 + 0x20))();
  uStack_1c = 0xc;
  FUN_00409350(&DAT_00ded94d,0);
  uStack_19c = (undefined4 *)0x0;
  uStack_a8 = 0;
  uStack_2c._0_2_ = CONCAT11(1,(undefined1)uStack_2c);
  (**(code **)(iStack_e0 + 0x54))(uVar2);
  uStack_20 = 0xb;
  if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_174);
  }
  FUN_009f6090(&stack0xfffffe70);
  uStack_20 = 0xd;
  FUN_00989510(&puStack_12c,10);
  uStack_20 = 0xe;
  uVar2 = 1;
  (**(code **)*unaff_EDI)(1);
  for (puStack_138 = puStack_130; (puStack_130 <= puStack_138 && (puStack_138 < puStack_12c));
      puStack_138 = puStack_138 + 7) {
    puVar6 = (undefined4 *)FUN_00aae9af(0x28);
    uStack_24._0_1_ = 0xf;
    if (puVar6 == (undefined4 *)0x0) {
      uStack_19c = (undefined4 *)0x0;
    }
    else {
      uStack_164 = 0xf;
      uStack_168 = 0;
      uStack_178 = uStack_178 & 0xffffff00;
      FUN_00409350("lobby_chat_text",0xf);
      piVar3 = DAT_01258a80;
      uStack_24 = CONCAT31(uStack_24._1_3_,0x10);
      puVar9 = (uint *)((uint)puVar9 | 2);
      uVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined1 *)(puVar6 + 4) = 0;
      DAT_013f08e0 = DAT_013f08e0 + 1;
      *(undefined1 *)(puVar6 + 5) = 0;
      *(undefined1 *)(puVar6 + 6) = 0;
      puVar6[7] = &PTR_FUN_00e39158;
      uStack_24 = 0x14;
      *puVar6 = &PTR_FUN_00e392f0;
      puVar6[7] = &PTR_FUN_00e39320;
      *(undefined1 *)(puVar6 + 9) = 0;
      uVar7 = (**(code **)(*piVar3 + 0x2c))(&uStack_178,uVar7);
      puVar6[8] = uVar7;
      uStack_19c = puVar6;
    }
    uStack_24 = 0xe;
    if (((uint)puVar9 & 2) != 0) {
      puVar9 = (uint *)((uint)puVar9 & 0xfffffffd);
      if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_178);
      }
      uStack_164 = 0xf;
      uStack_168 = 0;
      uStack_178 = uStack_178 & 0xffffff00;
    }
    local_144[1] = 0xf;
    local_144[0] = 0;
    uStack_154 = uStack_154 & 0xffffff00;
    FUN_00409350("messagelogtext",0xe);
    uStack_24 = CONCAT31(uStack_24._1_3_,0x16);
    (**(code **)(*(int *)uStack_19c[8] + 0x3c))(&uStack_154);
    FUN_00408ed0(local_144[2],0,0xffffffff);
    FUN_00a5ecc0(local_144[2],0);
    uStack_28 = CONCAT31(uStack_28._1_3_,0xe);
    if (0xf < local_144[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_158);
    }
    (**(code **)(*piStack_15c + 0x10))(puVar9,1);
  }
  if (puStack_130 != (undefined4 *)0x0) {
    puStack_158 = puStack_12c;
    puVar6 = puStack_130;
    while( true ) {
      if (puVar6 == puStack_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_130);
      }
      if (0xf < (uint)puVar6[5]) break;
      puVar6[5] = 0xf;
      puVar6[4] = 0;
      *(undefined1 *)puVar6 = 0;
      puVar6 = puVar6 + 7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar6);
  }
  puStack_130 = (undefined4 *)0x0;
  puStack_12c = (undefined4 *)0x0;
  uStack_128 = 0;
  if (uStack_180 < 0x10) {
    uStack_24 = 0xffffffff;
    FUN_009f4d20();
    FUN_00409350("chatlog",7);
    uStack_24 = 0x17;
    piVar3 = (int *)(**(code **)(*(int *)piStack_15c[0x9e] + 0x7c))(&stack0xfffffe6c);
    iVar4 = (**(code **)(*piVar3 + 0x2c))();
    bVar1 = (int)(uint)*(ushort *)(piStack_15c[0x9f] + 0x4c) < *(int *)(iVar4 + 8);
    uStack_19c = (undefined4 *)CONCAT13(bVar1,(undefined3)uStack_19c);
    uStack_28 = 0xffffffff;
    if (bVar1) {
      uStack_168 = 0xf;
      uStack_16c = 0;
      auStack_17c[0] = 0;
      FUN_00409350("chatlog",7);
      uStack_28 = 0x18;
      piVar3 = (int *)(**(code **)(*(int *)piStack_15c[0x9e] + 0x7c))(auStack_17c);
      (**(code **)(*piVar3 + 0x2c))();
      uStack_2c = 0xffffffff;
      if (0xf < uStack_16c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(0xf);
      }
      uStack_16c = 0xf;
      uStack_170 = 0;
      uStack_19c = (undefined4 *)((uint)uStack_19c & 0xffffff00);
      FUN_00409350("chatlog",7);
      uStack_2c = 0x19;
      piVar3 = (int *)(**(code **)(*(int *)piStack_15c[0x9e] + 0x7c))(&uStack_19c);
      (**(code **)(*piVar3 + 0x20))(uVar2,1);
      uStack_28 = 0xffffffff;
      if (puVar8 != (uint *)0x0) {
        (**(code **)*puVar8)(1);
      }
    }
    FUN_00409350("chatlog",7);
    uStack_28 = 0x1a;
    piVar3 = (int *)(**(code **)(*(int *)piStack_15c[0x9e] + 0x7c))(&stack0xfffffe68);
    (**(code **)(*piVar3 + 0x50))();
    uStack_2c = 0xffffffff;
    uStack_19c = (undefined4 *)((uint)uStack_19c & 0xffffff00);
    FUN_00409350("gamesetup",9);
    uStack_2c = 0x1b;
    (**(code **)(*(int *)(piStack_15c[0x9e] + 0x18) + 0x78))(&uStack_19c);
    uStack_30 = 0xffffffff;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = uStack_160 & 0xffffff00;
    FUN_00409350("chatlog",7);
    uStack_30 = 0x1c;
    piVar3 = (int *)(**(code **)(*(int *)piStack_15c[0x9e] + 0x7c))(&uStack_160);
    (**(code **)(*piVar3 + 0x78))();
    if (uStack_150 < 0x10) {
      ExceptionList = pvStack_3c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_164);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(unaff_ESI);
}

