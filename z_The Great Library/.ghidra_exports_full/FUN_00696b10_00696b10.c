// FUN_00696b10 @ 00696b10 body=[[00696b10, 00696c3b] [00696c3f, 00696c9d] [00696ca1, 00696dc0] [00696dc4, 00696e34] [00696e38, 00696ec9] [00696ecd, 00696f77] [00696f7b, 006970cb] [006970cf, 00697154] [00697158, 006971c9] [006971cd, 006971fd] [00697201, 0069721d] [00697226, 00697248] [0069724c, 0069728e]]


/* WARNING: Removing unreachable block (ram,0x00696e2b) */

void FUN_00696b10(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  uint in_ECX;
  undefined4 *unaff_EBX;
  undefined4 *unaff_ESI;
  uint unaff_EDI;
  uint uVar7;
  undefined4 *puStack_26c;
  undefined4 uStack_268;
  uint *puStack_264;
  char *pcStack_260;
  uint uStack_25c;
  uint uVar8;
  uint local_240;
  uint local_23c;
  undefined4 uStack_238;
  undefined4 *puStack_234;
  undefined4 uStack_230;
  undefined4 *local_22c;
  undefined4 *local_228;
  undefined4 *apuStack_224 [2];
  int *piStack_21c;
  int iStack_218;
  undefined4 uStack_204;
  uint uStack_200;
  uint local_1fc [3];
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined1 auStack_1d8 [4];
  undefined4 uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  int iStack_1b8;
  undefined1 auStack_1b0 [48];
  undefined4 uStack_180;
  short sStack_16c;
  undefined2 uStack_16a;
  undefined1 uStack_103;
  undefined **appuStack_78 [12];
  void *pvStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b59e8d;
  pvStack_14 = ExceptionList;
  uStack_25c = 0xf;
  pcStack_260 = "ingamelobby.cpp";
  local_228 = (undefined4 *)0xf;
  local_22c = (undefined4 *)0x0;
  local_23c = local_23c & 0xffffff00;
  puStack_264 = (uint *)0x696b60;
  ExceptionList = &pvStack_14;
  local_1fc[0] = in_ECX;
  FUN_00409350();
  uStack_25c = 0x10002;
  puStack_264 = &local_23c;
  pcStack_260 = (char *)0x156;
  local_c = 0;
  uStack_268 = 0x696b82;
  uVar1 = FUN_004015b0();
  local_c = CONCAT31(local_c._1_3_,1);
  uStack_25c = DAT_012588e8;
  pcStack_260 = (char *)0x696ba7;
  local_240 = FUN_0068b610();
  uStack_25c = 0;
  pcStack_260 = (char *)0x17;
  puStack_264 = (uint *)0xe0b268;
  puStack_26c = (undefined4 *)0x696bb9;
  uStack_268 = uVar1;
  FUN_00987d50();
  if (0xf < (uint)unaff_EBX[5]) {
    unaff_EBX = (undefined4 *)*unaff_EBX;
  }
  puStack_26c = unaff_EBX;
  uVar1 = FUN_00418e30(uVar1);
  puStack_26c = unaff_ESI;
  uVar1 = FUN_00418e30(uVar1," session id is ",unaff_ESI);
  uVar1 = FUN_00447240(uVar1);
  FUN_00401280(uVar1);
  uStack_24 = uStack_24 & 0xffffff00;
  FUN_00987ac0(appuStack_78);
  appuStack_78[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_78);
  uStack_24 = 0xffffffff;
  if (0xf < local_240) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI);
  }
  uStack_1e8 = 0xf;
  uStack_1ec = 0;
  local_1fc[0] = local_1fc[0] & 0xffffff00;
  FUN_00409350("chatlog",7);
  uStack_24 = 2;
  uStack_204 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x7c))(local_1fc);
  uStack_28 = 0xffffffff;
  if (0xf < uStack_1ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_200);
  }
  uStack_1ec = 0xf;
  uStack_1f0 = 0;
  uStack_200 = uStack_200 & 0xffffff00;
  pcVar2 = (char *)FUN_00aae9af(0x28);
  uStack_28 = 3;
  pcStack_260 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    uStack_1d0 = 0xf;
    uStack_1d4 = 0;
    uStack_1e4 = uStack_1e4 & 0xffffff00;
    FUN_00409350("ingame_lobby_chat_text",0x16);
    uStack_28 = CONCAT31(uStack_28._1_3_,4);
    puStack_264 = (uint *)0x1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0xc0) + 0x3c))();
    piVar3 = (int *)(**(code **)(**(int **)(iStack_218 + 0xc0) + 0x34))();
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0x10] = '\0';
    DAT_013f08e0 = DAT_013f08e0 + 1;
    pcVar2[0x14] = '\0';
    pcVar2[0x18] = '\0';
    *(undefined ***)(pcVar2 + 0x1c) = &PTR_FUN_00e39158;
    uStack_28 = 8;
    *(undefined ***)pcVar2 = &PTR_FUN_00e392f0;
    *(undefined ***)(pcVar2 + 0x1c) = &PTR_FUN_00e39320;
    pcVar2[0x24] = '\0';
    uVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_1e4,uVar1);
    *(undefined4 *)(pcVar2 + 0x20) = uVar1;
  }
  uStack_28 = 0xffffffff;
  if (((uint)puStack_264 & 1) != 0) {
    puStack_264 = (uint *)((uint)puStack_264 & 0xfffffffe);
    if (0xf < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1e4);
    }
    uStack_1d0 = 0xf;
    uStack_1d4 = 0;
    uStack_1e4 = uStack_1e4 & 0xffffff00;
  }
  uVar8 = unaff_EDI & 0xffffff00;
  FUN_00409350("messagelogtext",0xe);
  uStack_28 = 10;
  uVar7 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(pcVar2 + 0x20) + 0x3c))();
  uStack_2c = 0xffffffff;
  uStack_25c = uStack_25c & 0xffffff00;
  puStack_264 = (uint *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
  iVar4 = FUN_00973bd0(piVar3 + 0x18);
  if (iVar4 == 0) {
    iVar4 = FUN_00973bd0(piVar3 + 0x18);
  }
  local_22c = (undefined4 *)0xf;
  uStack_230 = 0;
  local_240 = local_240 & 0xffffff00;
  uStack_2c = 0xb;
  FUN_009f4bc0(auStack_1b0,&local_240,iVar4);
  uStack_2c = CONCAT31(uStack_2c._1_3_,0xd);
  if (0xf < local_22c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_240);
  }
  local_22c = (undefined4 *)0xf;
  uStack_230 = 0;
  local_240 = local_240 & 0xffffff00;
  psVar5 = (short *)(**(code **)(*piVar3 + 0xbc))(&puStack_264);
  sStack_16c = *psVar5 + -10;
  uStack_16a = 2000;
  uVar1 = (**(code **)(*param_1 + 0x20))(&pcStack_260);
  uStack_34 = 0xe;
  FUN_00409350(&DAT_00ded94d,0);
  uStack_268 = 0;
  uStack_180 = 0;
  uStack_103 = 1;
  (**(code **)(iStack_1b8 + 0x54))(uVar1);
  uStack_38 = 0xd;
  if ((undefined4 *)0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_268);
  }
  FUN_009f6090(auStack_1d8);
  uStack_38 = 0xf;
  FUN_00989510(apuStack_224,10);
  uStack_38 = 0x10;
  (*(code *)**(undefined4 **)pcVar2)(1);
  puStack_234 = local_228;
  while( true ) {
    if ((puStack_234 < local_228) || (apuStack_224[0] <= puStack_234)) {
      local_23c = 0xf;
      local_240 = 0;
      FUN_00409350("chatlog",7);
      uStack_3c = CONCAT31(uStack_3c._1_3_,0x19);
      piVar3 = (int *)(**(code **)(*(int *)local_22c[0xd] + 0x7c))(&stack0xfffffdb0);
      (**(code **)(*piVar3 + 0x78))();
      if (0xf < local_240) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_ESI);
      }
      local_240 = 0xf;
      puVar6 = local_22c;
      if (local_22c != (undefined4 *)0x0) {
        while( true ) {
          if (puVar6 == local_228) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_22c);
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
      local_22c = (undefined4 *)0x0;
      local_228 = (undefined4 *)0x0;
      apuStack_224[0] = (undefined4 *)0x0;
      if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_1e0);
      }
      uStack_1cc = 0xf;
      uStack_1d0 = 0;
      uStack_1e0 = uStack_1e0 & 0xffffff00;
      uStack_40 = 0xffffffff;
      FUN_009f4d20();
      ExceptionList = pvStack_48;
      return;
    }
    puVar6 = (undefined4 *)FUN_00aae9af(0x28);
    uStack_3c._0_1_ = 0x11;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar8 = 0xf;
      uStack_25c = 0;
      puStack_26c = (undefined4 *)((uint)puStack_26c & 0xffffff00);
      FUN_00409350("ingame_lobby_chat_text",0x16);
      uStack_3c = CONCAT31(uStack_3c._1_3_,0x12);
      piVar3 = *(int **)(DAT_012588e8 + 0xb24);
      uVar7 = uVar7 | 2;
      uVar1 = (**(code **)(*piVar3 + 0x3c))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x34))();
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined1 *)(puVar6 + 4) = 0;
      DAT_013f08e0 = DAT_013f08e0 + 1;
      *(undefined1 *)(puVar6 + 5) = 0;
      *(undefined1 *)(puVar6 + 6) = 0;
      puVar6[7] = &PTR_FUN_00e39158;
      uStack_3c = 0x16;
      *puVar6 = &PTR_FUN_00e392f0;
      puVar6[7] = &PTR_FUN_00e39320;
      *(undefined1 *)(puVar6 + 9) = 0;
      uVar1 = (**(code **)(*piVar3 + 0x2c))(&puStack_26c,uVar1);
      puVar6[8] = uVar1;
    }
    uStack_3c = 0x10;
    if ((uVar7 & 2) != 0) {
      uVar7 = 0;
      if (0xf < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_26c);
      }
      uVar8 = 0xf;
      uStack_25c = 0;
      puStack_26c = (undefined4 *)((uint)puStack_26c & 0xffffff00);
    }
    local_23c = 0xf;
    local_240 = 0;
    FUN_00409350("messagelogtext",0xe);
    uStack_3c = CONCAT31(uStack_3c._1_3_,0x18);
    (**(code **)(*(int *)puVar6[8] + 0x3c))(&stack0xfffffdb0);
    FUN_00408ed0(uStack_238,0,0xffffffff);
    FUN_00a5ecc0(uStack_238,0);
    uStack_40 = CONCAT31(uStack_40._1_3_,0x10);
    if (0xf < local_240) break;
    (**(code **)(*piStack_21c + 0x10))(puVar6,1);
    puStack_234 = puStack_234 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(unaff_ESI);
}

