// FUN_0097fb00 @ 0097fb00 body=[[0097fb00, 0097fb86] [0097fb8a, 0097fb99] [0097fba8, 0097fc09] [0097fc0d, 0097fc71] [0097fc75, 0097fd3f] [0097fd43, 0097fe07] [0097fe0b, 0097fe1e]]


void FUN_0097fb00(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 uStack_94;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  uint local_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint auStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  uint auStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  void *pvStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b78588;
  pvStack_14 = ExceptionList;
  auStack_60[2] = 0xf;
  auStack_60[1] = 0;
  local_6c = local_6c & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("close_button",0xc);
  local_c = 0;
  iVar3 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(&local_6c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(unaff_ESI + 0x74);
  pvStack_14 = (void *)0xffffffff;
  if (0xf < auStack_60[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_74);
  }
  if (*(int *)(unaff_ESI + 100) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 100));
  }
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  uStack_7c = 0xf;
  uStack_80 = 0;
  auStack_90[0] = 0;
  FUN_00409350("popdetaildistribution_start",0x1b);
  pvStack_14 = (void *)0x1;
  (**(code **)(*DAT_01258a80 + 0x48))(auStack_90);
  uStack_18 = 0xffffffff;
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_94);
  }
  uStack_80 = 0xf;
  uStack_84 = 0;
  uStack_64 = 0xf;
  uStack_68 = 0;
  auStack_78[0] = 0;
  FUN_00409350("popdetaildistribution_offset",0x1c);
  uStack_18 = 2;
  uVar4 = (**(code **)(*DAT_01258a80 + 0x48))(auStack_78);
  uStack_1c = 0xffffffff;
  if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_7c);
  }
  uStack_68 = 0xf;
  local_6c = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  uStack_4c = 0xf;
  uStack_50 = 0;
  auStack_60[0] = auStack_60[0] & 0xffffff00;
  FUN_00409350("IDEOLOGY",8);
  uStack_1c = 3;
  piVar1 = *(int **)(unaff_ESI + 0x24);
  uVar5 = (**(code **)(*piVar1 + 0x3c))();
  (**(code **)(*piVar1 + 0x34))(uVar5);
  uVar5 = FUN_0097efd0(auStack_60,2,*(undefined4 *)(unaff_ESI + 0x20),unaff_EBX,uVar4,0);
  iVar3 = *(int *)(unaff_ESI + 0x68);
  puVar6 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = uVar5;
    puVar6[1] = iVar3;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x6c);
  *(undefined4 **)(unaff_ESI + 0x68) = puVar6;
  *(int *)(unaff_ESI + 0x6c) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(unaff_ESI + 100) = puVar6;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar6;
  }
  uStack_1c = 0xffffffff;
  if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_60[0]);
  }
  uStack_30 = 0xf;
  uStack_34 = 0;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  FUN_00409350("DOMINANT_ISSUES",0xf);
  uStack_1c = 4;
  piVar1 = *(int **)(unaff_ESI + 0x24);
  uVar5 = (**(code **)(*piVar1 + 0x3c))();
  (**(code **)(*piVar1 + 0x34))(uVar5);
  uVar4 = FUN_0097efd0(auStack_44,4,*(undefined4 *)(unaff_ESI + 0x20),unaff_EBX,uVar4,1);
  iVar3 = *(int *)(unaff_ESI + 0x68);
  puVar6 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = uVar4;
    puVar6[1] = iVar3;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x6c);
  *(undefined4 **)(unaff_ESI + 0x68) = puVar6;
  *(int *)(unaff_ESI + 0x6c) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(unaff_ESI + 100) = puVar6;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar6;
  }
  if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_44[0]);
  }
  ExceptionList = pvStack_24;
  return;
}

