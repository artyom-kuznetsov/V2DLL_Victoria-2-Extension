// FUN_00904de0 @ 00904de0 body=[[00904de0, 00904eed] [00904ef6, 00905021] [00905027, 0090503f] [00905043, 00905059]]


void FUN_00904de0(undefined4 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  char *pcVar7;
  bool bVar8;
  uint local_10c [4];
  int local_fc;
  uint local_f8;
  undefined4 *local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [128];
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b588d7;
  pvStack_14 = ExceptionList;
  local_f0 = (undefined4 *)0x0;
  local_ec = 0;
  local_e8 = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0045be80(param_1,&local_f0);
  puVar2 = local_f0;
  if ((local_ec - (int)local_f0) / 0x1c == 2) {
    puVar6 = local_f0;
    if (0xf < (uint)local_f0[5]) {
      puVar6 = (undefined4 *)*local_f0;
    }
    uVar3 = FUN_00aaf0c5(puVar6);
    *(undefined4 *)(in_ECX + 0x1c) = uVar3;
    if ((uint)puVar2[0xc] < 0x10) {
      pbVar4 = (byte *)(puVar2 + 7);
    }
    else {
      pbVar4 = (byte *)puVar2[7];
    }
    pcVar7 = "PLAYER";
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_00904f41:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00904f46;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00904f41;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00904f46:
    if (iVar5 == 0) {
      *(undefined2 *)(in_ECX + 0x28) = 0x101;
    }
    else {
      if ((uint)puVar2[0xc] < 0x10) {
        puVar6 = puVar2 + 7;
      }
      else {
        puVar6 = (undefined4 *)puVar2[7];
      }
      puVar6 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_e0,puVar6);
      *(undefined4 *)(in_ECX + 0x20) = *puVar6;
      iVar5 = puVar6[1];
      *(int *)(in_ECX + 0x24) = iVar5;
      if (iVar5 == 0) {
        local_f8 = 0xf;
        local_10c[0] = local_10c[0] & 0xffffff00;
        local_fc = iVar5;
        FUN_00409350("trigger.cpp",0xb);
        local_c._0_1_ = 3;
        uVar3 = FUN_004015b0(local_10c,0x27a8,0x10004);
        local_c._0_1_ = 4;
        FUN_00987d50(uVar3,"tags_contains has invalid country tag\n",0x26,0);
        local_c = CONCAT31(local_c._1_3_,3);
        FUN_00987ac0(appuStack_60);
        appuStack_60[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_60);
        if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_10c[0]);
        }
      }
      else {
        *(undefined1 *)(in_ECX + 0x28) = 1;
      }
    }
  }
  else {
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c._0_1_ = 1;
    uVar3 = FUN_004015b0(local_10c,0x2798,0x10004);
    local_c._0_1_ = 2;
    FUN_00987d50(uVar3,"tags_contains has invalid amount of arguments.\n",0x2f,0);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_10c[0]);
    }
  }
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
  FUN_00413860();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar2);
}

