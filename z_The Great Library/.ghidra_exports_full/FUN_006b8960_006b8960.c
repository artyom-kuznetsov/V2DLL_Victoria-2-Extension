// FUN_006b8960 @ 006b8960 body=[[006b8960, 006b89de] [006b89e2, 006b8dec] [006b8df0, 006b8f11] [006b8f15, 006b8fbe] [006b8fc2, 006b9198] [006b91a0, 006b923a]]


/* WARNING: Removing unreachable block (ram,0x006b8de7) */
/* WARNING: Removing unreachable block (ram,0x006b8fb2) */
/* WARNING: Removing unreachable block (ram,0x006b89d5) */

void FUN_006b8960(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iStack_a0;
  int iStack_9c;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb7867;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  FUN_007e1210();
  local_c = 0xffffffff;
  FUN_009973b0();
  FUN_00997280();
  Sleep(1000);
  if (in_ECX[0x10b] == 0) {
    iVar1 = FUN_00996910();
    in_ECX[0x10b] = iVar1;
    (**(code **)(*(int *)(iVar1 + 0x1c) + 0x34))();
    FUN_0068f390();
  }
  *(int *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x20b4) = in_ECX[0x10b];
  iVar1 = FUN_00aae9af();
  local_c = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00613380();
  }
  local_c = 0xffffffff;
  in_ECX[0x171] = iVar1;
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x24) + 0x18) + 0x38))();
  *(undefined1 *)(iVar1 + 0x30) = 0;
  FUN_0055c6c0();
  DAT_0131ca68 = FUN_009c12d0();
  DAT_01258a9c = DAT_01258a9c + 1;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_c = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005c5e00();
    *puVar2 = CArmy::vftable;
    puVar2[2] = CArmy::vftable;
    puVar2[0x6d] = 0;
    puVar2[0x6a] = 0;
    puVar2[0x69] = 0;
    puVar2[0x6c] = 0;
    *(undefined1 *)(puVar2 + 0x6b) = 0;
  }
  local_c = 0xffffffff;
  in_ECX[0x2a7] = (int)puVar2;
  (**(code **)(puVar2[2] + 0x18))();
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + iStack_9c * 4);
  puVar2 = *(undefined4 **)(iVar1 + 0x7b4);
  *(int **)(iVar1 + 0xcdc) = in_ECX;
  while (puVar2 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar2;
    puVar2 = (undefined4 *)puVar2[2];
    (**(code **)(*piVar4 + 0x6c))();
  }
  FUN_00513c80();
  FUN_005cae80();
  FUN_004a0fa0();
  FUN_00682b40();
  in_ECX[0x1d] = 0;
  pvVar3 = (void *)in_ECX[0x1e];
  if (pvVar3 != (void *)in_ECX[0x1f]) {
    FID_conflict__memcpy(pvVar3,(void *)in_ECX[0x1f],0);
    in_ECX[0x1f] = (int)pvVar3;
  }
  iVar6 = 1;
  iVar1 = (**(code **)(*DAT_012588e8 + 0x18))();
  if (1 < iVar1) {
    do {
      iVar1 = *(int *)(DAT_012588e8[0x2b3] + iVar6 * 4);
      if ((*(char *)(*(int *)(iVar1 + 0x5c) + 0x2a) != '\0') && (*(int *)(iVar1 + 300) == 0)) {
        puStack_10 = (undefined1 *)0x3;
        FUN_004e9b90();
        FUN_004b5a90();
        puStack_10 = (undefined1 *)0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar1 = (**(code **)(*DAT_012588e8 + 0x18))();
    } while (iVar6 < iVar1);
  }
  piVar4 = DAT_012588e8;
  DAT_012588e8[0x2d8] = iStack_9c;
  piVar4[0x2d7] = iStack_a0;
  FUN_00409350();
  puStack_10._0_1_ = 4;
  puStack_10._1_3_ = 0;
  puVar2 = DAT_0125ce80;
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00aae9af();
    puStack_10._0_1_ = 5;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0x1ff;
      *puVar2 = 0;
      pvVar3 = (void *)FUN_00aad56b();
      puVar2[2] = pvVar3;
      _memset(pvVar3,0,puVar2[1] * 4);
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
    }
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    if ((puVar2 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  DAT_0125ce80 = puVar2;
  puStack_10._0_1_ = 4;
  iVar1 = 0;
  puVar2 = (undefined4 *)FUN_004dc420();
  if ((puVar2 == (undefined4 *)0x0) && (puVar2 = DAT_01258730, DAT_01258730 == (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)FUN_00aae9af();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,7);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
      DAT_01258730 = puVar2;
    }
    else {
      FUN_00409350("nobuilding",10);
      FUN_004d8b60(puVar2);
      *puVar2 = CNullBuilding::vftable;
      DAT_01258730 = puVar2;
    }
  }
  puStack_10 = (undefined1 *)0xffffffff;
  in_ECX[0x2a8] = (int)puVar2;
  FUN_006b9240();
  FUN_00409350("nudge_selection_text");
  FUN_009fa4c0();
  if ((char)in_ECX[0x28c] != '\0') {
    DAT_013f0934 = DAT_013f0934 + 1;
  }
  iVar6 = in_ECX[0x289];
  piVar4 = (int *)FUN_00aae9af();
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = (int)(in_ECX + 0x294);
    piVar4[1] = iVar6;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar5 = in_ECX[0x28a];
  in_ECX[0x289] = (int)piVar4;
  in_ECX[0x28a] = iVar5 + 1;
  if (iVar5 == 0) {
    in_ECX[0x288] = (int)piVar4;
  }
  else {
    *(int **)(iVar6 + 8) = piVar4;
  }
  iVar6 = DAT_0125870c;
  *(int **)(DAT_0125870c + 0x2aac) = in_ECX;
  iVar5 = 0;
  if (0 < (int)(*(int *)(iVar6 + 0x223c) - *(int *)(iVar6 + 0x2238) & 0xfffffffcU)) {
    do {
      *(int **)(*(int *)(*(int *)(iVar6 + 0x2238) + iVar5 * 4) + 0x54) = in_ECX;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar6 + 0x223c) - *(int *)(iVar6 + 0x2238) >> 2);
  }
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar6 = FUN_00aae9af();
    puStack_10 = (undefined1 *)0x8;
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    puStack_10 = (undefined1 *)0x9;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    DAT_0125b5e0 = puVar2;
  }
  DAT_0125b5e0[0x3b] = 0xffff;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar6 = FUN_00aae9af();
    puStack_10 = (undefined1 *)0xa;
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    puStack_10 = (undefined1 *)0xb;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    DAT_0125b5e0 = puVar2;
  }
  piVar4 = DAT_012588e8;
  DAT_0125b5e0[0x3c] = 0;
  if (0 < (int)(piVar4[0x2b4] - piVar4[0x2b3] & 0xfffffffcU)) {
    do {
      (**(code **)(**(int **)(piVar4[0x2b3] + iVar1 * 4) + 0x18))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < piVar4[0x2b4] - piVar4[0x2b3] >> 2);
  }
  FUN_0068c040();
  (**(code **)(*in_ECX + 0x38))();
  FUN_007fc980();
  (**(code **)(*in_ECX + 0x38))();
  FUN_00819830();
  DAT_00f0aa50 = 1000;
  DAT_012586d9 = 1;
  (**(code **)(**(int **)(in_ECX[0x2d] + 0xe4) + 0x10))();
  ExceptionList = pvStack_1c;
  return;
}

