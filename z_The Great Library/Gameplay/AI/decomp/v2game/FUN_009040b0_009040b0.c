// FUN_009040b0 @ 009040b0 body=[[009040b0, 009041bd] [009041c6, 00904282] [00904286, 0090434c]]


void FUN_009040b0(undefined4 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  int in_ECX;
  char *pcVar9;
  bool bVar10;
  undefined4 local_10c [2];
  undefined4 *local_104;
  int local_100;
  undefined4 local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b58927;
  pvStack_14 = ExceptionList;
  local_104 = (undefined4 *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0045be80(param_1,&local_104);
  puVar2 = local_104;
  if ((local_100 - (int)local_104) / 0x1c == 3) {
    puVar8 = local_104;
    if (0xf < (uint)local_104[5]) {
      puVar8 = (undefined4 *)*local_104;
    }
    uVar4 = FUN_00aaf0c5(puVar8);
    *(undefined4 *)(in_ECX + 0x1c) = uVar4;
    piVar5 = puVar2 + 7;
    if (0xf < (uint)puVar2[0xc]) {
      piVar5 = (int *)*piVar5;
    }
    uVar4 = FUN_00aaf0c5(piVar5);
    *(undefined4 *)(in_ECX + 0x20) = uVar4;
    if ((uint)puVar2[0x13] < 0x10) {
      pbVar6 = (byte *)(puVar2 + 0xe);
    }
    else {
      pbVar6 = (byte *)puVar2[0xe];
    }
    pcVar9 = "PLAYER";
    do {
      bVar1 = *pbVar6;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_00904230:
        iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00904235;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_00904230;
      pbVar6 = pbVar6 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_00904235:
    if (iVar7 == 0) {
      *(undefined2 *)(in_ECX + 0x2c) = 0x101;
    }
    else {
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        if ((uint)puVar2[0x13] < 0x10) {
          puVar8 = puVar2 + 0xe;
        }
        else {
          puVar8 = (undefined4 *)puVar2[0xe];
        }
        puVar8 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10c,puVar8);
        *(undefined4 *)(in_ECX + 0x24) = *puVar8;
        iVar7 = puVar8[1];
        *(int *)(in_ECX + 0x28) = iVar7;
        if (iVar7 == 0) {
          FUN_009885d0();
          local_c._0_1_ = 3;
          uVar4 = FUN_004015b0(local_f4,0x26b9,0x10004);
          local_c._0_1_ = 4;
          FUN_00987d50(uVar4,"tags_eq has invalid country tag\n",0x20,0);
          local_c = CONCAT31(local_c._1_3_,3);
          FUN_00987ac0(appuStack_60);
          appuStack_60[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_60);
          FUN_00408ad0();
          goto LAB_0090426a;
        }
      }
      else {
        local_10c[0] = 0x2d2d2d;
        *(undefined4 *)(in_ECX + 0x24) = 0x2d2d2d;
        *(undefined4 *)(in_ECX + 0x28) = 0;
      }
      *(undefined1 *)(in_ECX + 0x2d) = 1;
    }
  }
  else {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c._0_1_ = 1;
    uVar4 = FUN_004015b0(local_f4,0x26a3,0x10004);
    local_c._0_1_ = 2;
    FUN_00987d50(uVar4,"tags_eq has invalid amount of arguments.\n",0x29,0);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
LAB_0090426a:
  puVar8 = local_104;
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
  FUN_00413860();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar8);
}

