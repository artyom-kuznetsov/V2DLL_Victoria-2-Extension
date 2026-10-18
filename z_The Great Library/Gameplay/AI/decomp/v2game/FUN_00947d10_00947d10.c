// FUN_00947d10 @ 00947d10 body=[[00947d10, 00947e07] [00947e0b, 00947e2e] [00947e32, 00947f6c] [00947f70, 0094802a] [0094802e, 00948044] [00948048, 00948076]]


undefined4 FUN_00947d10(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  uint unaff_EBX;
  int unaff_ESI;
  char *pcVar9;
  bool bVar10;
  undefined1 local_c4 [4];
  undefined1 local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint local_9c [2];
  undefined1 local_94 [8];
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb6e3f;
  pvStack_14 = ExceptionList;
  local_9c[0] = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = 0;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = 0;
  local_24 = 0;
  local_20 = 1;
  local_c = 0;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("wargoal_list",0xc);
  local_c._0_1_ = 1;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = 0;
  FUN_00409350("setup_goals",0xb);
  local_c = CONCAT31(local_c._1_3_,2);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_94);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(local_c4);
  if (0xf < uStack_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
  pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
  uStack_88 = 0xf;
  uStack_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EBX);
  }
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x2c))();
  piVar4 = (int *)*puVar5;
  do {
    if (piVar4 == (int *)0x0) {
      pbVar6 = (byte *)(**(code **)(*param_2 + 0x44))();
      if (0xf < *(uint *)(pbVar6 + 0x14)) {
        pbVar6 = *(byte **)pbVar6;
      }
      pcVar9 = "warscore_label";
      goto LAB_00947e85;
    }
    iVar7 = *piVar4;
    piVar4 = (int *)piVar4[2];
    cVar3 = (**(code **)(*(int *)(iVar7 + 0x1c) + 0x58))(param_2);
  } while (cVar3 == '\0');
  FUN_00948760(iVar7,param_1);
  goto LAB_00948055;
  while( true ) {
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_00947eb4;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
    if (bVar1 == 0) break;
LAB_00947e85:
    bVar1 = *pbVar6;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_00947eb4:
      iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00947eb9;
    }
    if (bVar1 == 0) break;
  }
  iVar7 = 0;
LAB_00947eb9:
  if (iVar7 == 0) {
LAB_00947ed8:
    iVar7 = *(int *)(unaff_ESI + 0x6c);
    local_ac = *(undefined4 *)(iVar7 + 8);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(iVar7 + 0xc) * 4) + 0xbe8) +
                             *(int *)(iVar7 + 0x14) * 4) + 0x34);
    if (iVar2 != 0) {
      uStack_a4 = *(undefined4 *)(iVar7 + 0x10);
      uStack_a0 = *(undefined4 *)(iVar7 + 0x14);
      local_ac = *(undefined4 *)(iVar7 + 8);
      uStack_a8 = *(undefined4 *)(iVar7 + 0xc);
      uVar8 = FUN_009373b0(iVar2,&stack0xffffff38,&local_ac,&uStack_a4);
      pvStack_14._0_1_ = 3;
      FUN_00408ed0(uVar8,0,0xffffffff);
      pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b((unaff_EBX >> 8) << 8);
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x44))();
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') goto LAB_00947ed8;
  }
  pbVar6 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar6 = *(byte **)pbVar6;
  }
  pcVar9 = "AgreeButton";
  do {
    bVar1 = *pbVar6;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_00947fa6:
      iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00947fab;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_00947fa6;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_00947fab:
  if ((iVar7 == 0) && (cVar3 = FUN_00911760(0), cVar3 == '\0')) {
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    pvStack_14._0_1_ = 4;
    uVar8 = FUN_00911be0(*(undefined4 *)(unaff_ESI + 0x6c),local_9c);
    pvStack_14._0_1_ = 5;
    FUN_00408ed0(uVar8,0,0xffffffff);
    if (0xf < uStack_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b((unaff_EBX >> 8) << 8);
    }
  }
  FUN_0040c830(param_1);
LAB_00948055:
  FUN_00459820();
  ExceptionList = pvStack_1c;
  return param_1;
}

