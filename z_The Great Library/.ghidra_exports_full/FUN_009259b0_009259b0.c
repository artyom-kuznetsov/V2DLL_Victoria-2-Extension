// FUN_009259b0 @ 009259b0 body=[[009259b0, 00925b7f] [00925b83, 00925ba4] [00925ba8, 00925bc3] [00925bc7, 00925bf3] [00925bf7, 00925de5] [00925de9, 00925e13] [00925e17, 00925e3b] [00925e3f, 00925e60] [00925e64, 00925e7a]]


void FUN_009259b0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int *in_ECX;
  char *pcVar8;
  uint auStack_100 [4];
  undefined4 uStack_f0;
  uint uStack_ec;
  uint auStack_e4 [4];
  undefined4 uStack_d4;
  uint uStack_d0;
  uint auStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  uint auStack_ac [4];
  undefined4 uStack_9c;
  uint uStack_98;
  uint auStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4227a;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar5 = (**(code **)(*in_ECX + 0x58))();
  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x30) + iVar5 * 4);
  uStack_44 = 0xf;
  uStack_48 = 0;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  FUN_00409350("CHANGE",6);
  uStack_ec = 0xf;
  uStack_f0 = 0;
  auStack_100[0] = auStack_100[0] & 0xffffff00;
  uStack_c._0_1_ = 1;
  uStack_c._1_3_ = 0;
  pcVar6 = __itoa(iVar5 / 1000,(char *)auStack_38,10);
  pcVar8 = pcVar6;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
  uStack_c._0_1_ = 2;
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  auStack_c8[0] = auStack_c8[0] & 0xffffff00;
  FUN_00408ed0(auStack_58,0,0xffffffff);
  uStack_c._0_1_ = 3;
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  FUN_00408ed0(auStack_100,0,0xffffffff);
  uStack_c._0_1_ = 4;
  iVar2 = param_1[1];
  puVar7 = (undefined1 *)FUN_00aae9af(0x44);
  uStack_c._0_1_ = 5;
  uVar4 = (undefined1)uStack_c;
  uStack_c._0_1_ = 5;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    uStack_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar7 + 0x14) = 0xf;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    *puVar7 = 0;
    FUN_00408ed0(auStack_c8,0,0xffffffff);
    uStack_c._0_1_ = 6;
    *(undefined4 *)(puVar7 + 0x30) = 0xf;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    puVar7[0x1c] = 0;
    FUN_00408ed0(auStack_ac,0,0xffffffff);
    *(int *)(puVar7 + 0x38) = iVar2;
    *(undefined4 *)(puVar7 + 0x3c) = 0;
    puVar7[0x40] = 0;
  }
  iVar3 = param_1[2];
  param_1[1] = puVar7;
  param_1[2] = iVar3 + 1;
  if (iVar3 == 0) {
    *param_1 = puVar7;
  }
  else {
    *(undefined1 **)(iVar2 + 0x3c) = puVar7;
  }
  if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_ac[0]);
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_c8[0]);
  }
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  auStack_c8[0] = auStack_c8[0] & 0xffffff00;
  if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_100[0]);
  }
  uStack_c = 0xffffffff;
  uStack_ec = 0xf;
  uStack_f0 = 0;
  auStack_100[0] = auStack_100[0] & 0xffffff00;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_58[0]);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[3] * 4) + 0xbe8) +
                           in_ECX[5] * 4) + 0x3c) + iVar5;
  if (iVar5 < -200000) {
    iVar5 = -200000;
  }
  uStack_24 = 0xf;
  uStack_28 = 0;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  FUN_00409350("RELATION",8);
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  auStack_e4[0] = auStack_e4[0] & 0xffffff00;
  uStack_c._0_1_ = 8;
  uStack_c._1_3_ = 0;
  pcVar6 = __itoa(iVar5 / 1000,(char *)auStack_58,10);
  pcVar8 = pcVar6;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
  uStack_c._0_1_ = 9;
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  FUN_00408ed0(auStack_38,0,0xffffffff);
  uStack_c._0_1_ = 10;
  uStack_60 = 0xf;
  uStack_64 = 0;
  auStack_74[0] = auStack_74[0] & 0xffffff00;
  FUN_00408ed0(auStack_e4,0,0xffffffff);
  uStack_c._0_1_ = 0xb;
  iVar5 = param_1[1];
  puVar7 = (undefined1 *)FUN_00aae9af(0x44);
  uStack_c._0_1_ = 0xc;
  uVar4 = (undefined1)uStack_c;
  uStack_c._0_1_ = 0xc;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    uStack_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar7 + 0x14) = 0xf;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    *puVar7 = 0;
    FUN_00408ed0(auStack_90,0,0xffffffff);
    uStack_c._0_1_ = 0xd;
    *(undefined4 *)(puVar7 + 0x30) = 0xf;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    puVar7[0x1c] = 0;
    FUN_00408ed0(auStack_74,0,0xffffffff);
    *(int *)(puVar7 + 0x38) = iVar5;
    *(undefined4 *)(puVar7 + 0x3c) = 0;
    puVar7[0x40] = 0;
  }
  iVar2 = param_1[2];
  param_1[1] = puVar7;
  param_1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *param_1 = puVar7;
  }
  else {
    *(undefined1 **)(iVar5 + 0x3c) = puVar7;
  }
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_74[0]);
  }
  uStack_60 = 0xf;
  uStack_64 = 0;
  auStack_74[0] = auStack_74[0] & 0xffffff00;
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_90[0]);
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_e4[0]);
  }
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  auStack_e4[0] = auStack_e4[0] & 0xffffff00;
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_38[0]);
  }
  ExceptionList = pvStack_14;
  return;
}

