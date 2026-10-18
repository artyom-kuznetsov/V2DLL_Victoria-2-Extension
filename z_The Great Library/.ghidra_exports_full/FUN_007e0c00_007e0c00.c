// FUN_007e0c00 @ 007e0c00 body=[[007e0c00, 007e0cef] [007e0cf3, 007e0dfe] [007e0e02, 007e0fcc] [007e0fd0, 007e0ff2] [007e0ff6, 007e101c] [007e1020, 007e1049]]


void FUN_007e0c00(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  char *pcVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined4 uStack_cc;
  int local_c0;
  uint auStack_b8 [4];
  undefined4 uStack_a8;
  uint uStack_a4;
  int local_9c;
  int iStack_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint uStack_74;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  uint uStack_60;
  int iStack_40;
  int iStack_3c;
  char acStack_38 [24];
  undefined1 uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6b37b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0131bd5c == 0) {
    ExceptionList = &local_14;
    iVar5 = FUN_00aae9af(0x1c);
    local_c = 0;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_008b0060();
    }
    local_c = 0xffffffff;
    FUN_00972090(uVar6);
  }
  local_c0 = 0;
  iVar5 = *(int *)(DAT_0131bd5c + 0x10) - *(int *)(DAT_0131bd5c + 0xc) >> 2;
  if (0 < iVar5) {
    local_9c = param_1 + 0x6b81c;
    do {
      if (DAT_0131bd5c == 0) {
        iVar7 = FUN_00aae9af(0x1c);
        local_c = 1;
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_008b0060();
        }
        iVar1 = DAT_0131bd5c;
        local_c = 2;
        if ((iVar7 != DAT_0131bd5c) && (DAT_0131bd5c != 0)) {
          FUN_0090cd00(DAT_0131bd5c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar1);
        }
        local_c = 0xffffffff;
        DAT_0131bd5c = iVar7;
      }
      puVar13 = *(uint **)(*(int *)(DAT_0131bd5c + 0xc) + local_c0 * 4);
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      FUN_00408ed0(puVar13 + 0x18,0,0xffffffff);
      local_c = 3;
      cVar4 = (**(code **)(*puVar13 + 0x2c))();
      if (cVar4 == '\0') {
        FUN_00409350(&DAT_00ded94d,0);
      }
      puVar8 = (undefined4 *)FUN_00aae9af(0x44);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *(undefined1 *)(puVar8 + 4) = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xf] = 0x5d;
        puVar8[0x10] = 0x40;
      }
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      auStack_b8[0] = auStack_b8[0] & 0xffffff00;
      FUN_00409350("gfx/flags",9);
      puVar15 = local_90;
      local_c = CONCAT31(local_c._1_3_,4);
      FUN_007e3900(puVar8,auStack_b8,DAT_012587e4,param_1);
      uStack_20 = 3;
      if (0xf < auStack_b8[0]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_cc);
      }
      puVar2 = *(undefined1 **)(param_1 + 0x6bd70);
      if (&stack0xffffff28 < puVar2) {
        puVar3 = *(undefined1 **)(param_1 + 0x6bd6c);
        if (&stack0xffffff28 < puVar3) goto LAB_007e0e55;
        puVar13 = puVar15;
        if (puVar2 == *(undefined1 **)(param_1 + 0x6bd74)) {
          FUN_00a513f0();
          puVar13 = puVar15;
        }
        if (*(undefined4 **)(param_1 + 0x6bd70) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x6bd70) =
               *(undefined4 *)
                (*(int *)(param_1 + 0x6bd6c) + ((int)&stack0xffffff28 - (int)puVar3 >> 2) * 4);
        }
      }
      else {
LAB_007e0e55:
        if (puVar2 == *(undefined1 **)(param_1 + 0x6bd74)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x6bd70) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x6bd70) = puVar8;
        }
      }
      *(int *)(param_1 + 0x6bd70) = *(int *)(param_1 + 0x6bd70) + 4;
      cVar4 = (**(code **)(*puVar13 + 0x2c))();
      if (cVar4 != '\0') {
        (**(code **)(*(int *)(param_1 + 0x6bdac) + 0x18))
                  (puVar13 + 9,(*(int *)(param_1 + 0x6bd70) - *(int *)(param_1 + 0x6bd6c) >> 2) + -1
                  );
      }
      (**(code **)(*(int *)*puVar8 + 0x44))((int *)*puVar8,0,auStack_6c);
      iVar7 = iStack_3c;
      iStack_98 = iStack_40;
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      auStack_b8[0] = auStack_b8[0] & 0xffffff00;
      local_c._0_1_ = 5;
      pcVar9 = __itoa(local_c0,acStack_38,10);
      pcVar12 = pcVar9;
      do {
        cVar4 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar9,(int)pcVar12 - (int)(pcVar9 + 1));
      local_c._0_1_ = 6;
      uVar10 = FUN_00988fa0(auStack_b8);
      local_c = CONCAT31(local_c._1_3_,7);
      uVar6 = *puVar8;
      uVar14 = FUN_009bc440();
      iVar1 = (int)uVar14 * 0x2c + (int)((ulonglong)uVar14 >> 0x20);
      *(int *)(iVar1 + 0x24) = iStack_98;
      *(undefined4 *)(iVar1 + 4) = uVar6;
      *(int *)(iVar1 + 0x28) = iVar7;
      FUN_00408ed0(uVar10,0,0xffffffff);
      *(undefined4 *)(iVar1 + 0x2c) = 1;
      piVar11 = (int *)FUN_00a45090(uVar10);
      *piVar11 = (int)uVar14;
      *(int *)(param_1 + 0x6b830) = *(int *)(param_1 + 0x6b830) + 1;
      *(int *)(param_1 + 0x6b834) = *(int *)(param_1 + 0x6b834) + iVar7 * iStack_98 * 4;
      if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_74);
      }
      uStack_60 = 0xf;
      uStack_64 = 0;
      uStack_74 = uStack_74 & 0xffffff00;
      if (0xf < uStack_a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_b8[0]);
      }
      local_c = 0xffffffff;
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      auStack_b8[0] = auStack_b8[0] & 0xffffff00;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_90[0]);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 < iVar5);
  }
  ExceptionList = local_14;
  return;
}

