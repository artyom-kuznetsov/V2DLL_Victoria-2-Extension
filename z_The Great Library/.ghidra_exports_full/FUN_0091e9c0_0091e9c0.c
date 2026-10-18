// FUN_0091e9c0 @ 0091e9c0 body=[[0091e9c0, 0091eba2] [0091eba6, 0091ebc7] [0091ebcb, 0091ebef] [0091ebf3, 0091ecc4] [0091ecce, 0091ed50] [0091ed54, 0091ed7a] [0091ed7e, 0091ed94]]


void FUN_0091e9c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int in_ECX;
  int iVar7;
  int local_ac;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b850a4;
  pvStack_14 = ExceptionList;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0091fa10(in_ECX,1);
  FUN_0091fc40(in_ECX,local_34,&local_a0,0);
  local_c._0_1_ = 1;
  local_ac = 0;
  iVar4 = local_9c - local_a0 >> 2;
  if (0 < iVar4) {
    do {
      iVar7 = *(int *)(local_a0 + local_ac * 4);
      local_90 = *(undefined4 *)(in_ECX + 0x14);
      puVar5 = (undefined4 *)FUN_00456b90();
      *puVar5 = 0;
      iVar1 = *(int *)(iVar7 + 0x30);
      iVar7 = *(int *)(iVar7 + 0x2c);
      if (iVar7 != iVar1) {
        do {
          if (*(int *)(iVar7 + 4) == *(int *)(in_ECX + 0xc)) break;
          iVar7 = iVar7 + 8;
        } while (iVar7 != iVar1);
      }
      local_ac = local_ac + 1;
    } while (local_ac < iVar4);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00409350("VERSUS",6);
  local_c._0_1_ = 2;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 3;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 4;
  iVar4 = param_1[1];
  puVar6 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 5;
  uVar3 = (undefined1)local_c;
  local_c._0_1_ = 5;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar3;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 6;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0();
    *(int *)(puVar6 + 0x38) = iVar4;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  iVar7 = param_1[2];
  param_1[1] = puVar6;
  param_1[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *param_1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar4 + 0x3c) = puVar6;
  }
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  local_c = CONCAT31(local_c._1_3_,1);
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00517a70(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4));
  local_90 = *(undefined4 *)(in_ECX + 8);
  piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                             *(int *)(in_ECX + 0x14) * 4) + 0x20);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x2c))();
    iVar4 = DAT_012588e8;
    for (puVar5 = *(undefined4 **)(DAT_012588e8 + 0xa84); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[2]) {
      if ((int *)*puVar5 == piVar2) {
        if (puVar5 != (undefined4 *)0x0) {
          if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
            iVar7 = puVar5[1];
            iVar1 = puVar5[2];
            if (iVar7 != 0) {
              *(int *)(iVar7 + 8) = iVar1;
            }
            if (iVar1 != 0) {
              *(int *)(iVar1 + 4) = iVar7;
            }
            if (puVar5 == *(undefined4 **)(iVar4 + 0xa84)) {
              *(int *)(iVar4 + 0xa84) = iVar1;
            }
            if (puVar5 == *(undefined4 **)(iVar4 + 0xa88)) {
              *(int *)(iVar4 + 0xa88) = iVar7;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar5);
          }
          *(undefined1 *)(puVar5 + 3) = 1;
        }
        break;
      }
    }
    (**(code **)*piVar2)(1);
  }
  iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3fc);
  iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4);
  if (0 < iVar4) {
    iVar4 = __alldiv((longlong)(*(int *)(*(int *)(iVar7 + 0xbcc) + 0x288) + 1000) * (longlong)iVar4,
                     1000,0);
  }
  *(int *)(iVar7 + 0xea0) = *(int *)(iVar7 + 0xea0) + iVar4;
  if (*(int *)(iVar7 + 0xea0) < 0) {
    *(undefined4 *)(iVar7 + 0xea0) = 0;
  }
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  uStack_20 = 0xf;
  uStack_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (local_a0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  ExceptionList = pvStack_14;
  return;
}

