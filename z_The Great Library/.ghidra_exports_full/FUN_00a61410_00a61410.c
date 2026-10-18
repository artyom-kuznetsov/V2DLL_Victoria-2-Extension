// FUN_00a61410 @ 00a61410 body=[[00a61410, 00a616e8] [00a616f2, 00a61705]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a61410(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  short *psVar10;
  uint uVar11;
  code *pcVar12;
  void *pvVar13;
  undefined1 *puVar14;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *puStack_58;
  void *pvStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_30;
  int *local_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3fed8;
  pvStack_14 = ExceptionList;
  uVar2 = *(uint *)((int)*(undefined8 **)(param_6 + 8) + 4);
  local_30 = **(undefined8 **)(param_6 + 8);
  uStack_4c = 0xa61461;
  ExceptionList = &pvStack_14;
  FUN_00a5fb40();
  local_c = 0;
  for (; local_28 != (int *)0x0; local_28 = (int *)local_28[2]) {
    if (*local_28 != *(int *)(param_1[7] + 0x6c)) {
      iVar5 = *param_1;
      local_30 = CONCAT44(*local_28,2);
      uStack_50 = (uint)*(ushort *)(param_3 + 0x10);
      pvStack_54 = *(void **)(param_3 + 0xc);
      uStack_4c = 1;
      puStack_58 = (undefined8 *)0xa6149e;
      uStack_50 = FUN_00a603d0();
      pvStack_54 = (void *)0x8;
      puStack_58 = &local_30;
      uStack_5c = 0xa614ad;
      (**(code **)(iVar5 + 0x14))();
    }
  }
  uStack_4c = 0x20;
  uStack_50 = 0xa614bd;
  iVar5 = FUN_00aae9af();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(iVar5 + 4) = uVar3;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined1 *)(iVar5 + 0x18) = 0;
    *(uint *)(iVar5 + 0x1c) = uVar2;
  }
  uVar11 = *(uint *)(iVar5 + 0x1c) % (uint)param_1[0x20];
  uStack_4c = 8;
  uStack_50 = 0xa61501;
  piVar6 = (int *)FUN_00aae9af();
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar4 = *(int *)(param_1[0x21] + uVar11 * 4);
    *piVar6 = iVar5;
    piVar6[1] = iVar4;
  }
  *(int **)(param_1[0x21] + uVar11 * 4) = piVar6;
  param_1[0x1f] = param_1[0x1f] + 1;
  iVar5 = param_1[7];
  uVar11 = *(uint *)(iVar5 + 0x5c);
  uStack_4c = 0x10;
  uStack_50 = 0xa61537;
  puVar7 = (uint *)FUN_00aae9af();
  if (puVar7 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    *puVar7 = uVar2;
    puVar7[1] = uVar11;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar4 = *(int *)(iVar5 + 0x60);
  *(uint **)(iVar5 + 0x5c) = puVar7;
  *(int *)(iVar5 + 0x60) = iVar4 + 1;
  if (iVar4 == 0) {
    *(uint **)(iVar5 + 0x58) = puVar7;
  }
  else {
    *(uint **)(uVar11 + 8) = puVar7;
  }
  uStack_4c = 1;
  uStack_50 = 0xffffffff;
  pvStack_54 = (void *)0x8;
  puStack_58 = &local_30;
  local_30 = CONCAT44(uVar2,2);
  uStack_5c = 0xa6159a;
  (**(code **)(*param_1 + 0x14))();
  uVar11 = (uint)*(ushort *)(param_1 + 0x23);
  uStack_5c = 1;
  uStack_60 = 0xffffffff;
  if (*(ushort *)(param_1 + 0x23) == 0) {
    pvVar13 = *(void **)(param_3 + 0xc);
    pcVar12 = *(code **)(*param_1 + 0x14);
    uVar11 = uVar2;
  }
  else {
    pvVar13 = *(void **)(param_1[7] + 0x40);
    pcVar12 = *(code **)(*param_1 + 0x14);
  }
  puVar14 = &stack0xffffffb8;
  (*pcVar12)(puVar14,8);
  *(short *)(param_1 + 0x23) = (short)uVar11;
  *(void **)(param_1[7] + 0x40) = pvVar13;
  puStack_58 = (undefined8 *)0x1;
  pvStack_54 = pvVar13;
  (**(code **)(*param_1 + 0x14))(&puStack_58,8,0xffffffff,1);
  uStack_5c = *(undefined4 *)(param_1[7] + 0x54);
  uStack_60 = 4;
  uVar2 = *(uint *)(param_1[6] + 0x20);
  iVar5 = 0;
  if (uVar2 < *(int *)(param_1[6] + 0x24) * 0xe8 + uVar2) {
    psVar10 = (short *)(uVar2 + 0x10);
    do {
      if ((*(int *)(psVar10 + -2) == *(int *)(param_3 + 0xc)) &&
         (*psVar10 == *(short *)(param_3 + 0x10))) goto LAB_00a61683;
      psVar1 = psVar10 + 0x6c;
      iVar5 = iVar5 + 1;
      psVar10 = psVar10 + 0x74;
    } while (psVar1 < (short *)(*(int *)(param_1[6] + 0x24) * 0xe8 + *(int *)(param_1[6] + 0x20)));
  }
  iVar5 = -1;
LAB_00a61683:
  (**(code **)(*param_1 + 0x14))(&uStack_60,8,iVar5);
  DVar8 = timeGetTime();
  DAT_012586d0 = DVar8 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  puVar9 = (undefined4 *)FUN_00aae9af(4);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = 1;
  }
  *(undefined4 **)(param_3 + 0x14) = puVar9;
  param_1[0x24] = param_1[0x24] + 1;
  if (puVar14 == (undefined1 *)0x0) {
    ExceptionList = pvStack_54;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar14);
}

