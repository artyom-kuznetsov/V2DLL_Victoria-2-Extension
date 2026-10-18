// FUN_00993110 @ 00993110 body=[[00993110, 00993243] [00993247, 009933dd]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00993110(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int aiStack_1b4 [2];
  char *apcStack_1ac [2];
  undefined1 local_1a4 [8];
  undefined4 *apuStack_19c [2];
  int local_194;
  undefined ***local_190;
  uint uStack_18c;
  undefined **local_138;
  undefined4 local_134;
  undefined1 local_130 [28];
  undefined1 local_114 [28];
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_dc [16];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined **local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c;
  undefined4 local_8c;
  undefined4 local_88;
  undefined **local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a377;
  local_10 = ExceptionList;
  uVar2 = param_1[4];
  if (*(char *)(in_ECX + 0x13) == '\0') {
    uStack_18c = 0x99314f;
    iVar6 = uVar2 * -2;
    local_18 = &stack0xfffffe78 + iVar6;
    pcVar5 = &stack0xfffffe78 + iVar6;
    iVar8 = 0;
    uVar9 = uVar2;
    local_1c = in_ECX;
    puVar4 = &stack0xfffffe78 + iVar6;
    if (0 < (int)uVar2) {
      do {
        local_18 = puVar4;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        cVar1 = *(char *)((int)puVar7 + iVar8);
        *pcVar5 = cVar1;
        if (cVar1 == '\n') {
          pcVar5[0] = '\r';
          pcVar5[1] = '\n';
          pcVar5 = pcVar5 + 2;
          uVar9 = uVar9 + 1;
        }
        else {
          pcVar5 = pcVar5 + 1;
        }
        iVar8 = iVar8 + 1;
        puVar4 = local_18;
      } while (iVar8 < (int)uVar2);
    }
    puVar4 = local_18;
    uVar3 = *(undefined4 *)(local_1c + 0x30);
    *(uint *)((int)&uStack_18c + iVar6) = uVar9;
    *(undefined4 *)((int)&local_190 + iVar6) = 1;
    *(undefined1 **)((int)&local_194 + iVar6) = puVar4;
    *(undefined4 *)((int)apuStack_19c + iVar6 + 4) = uVar3;
    *(undefined4 *)((int)apuStack_19c + iVar6) = 0x993199;
    ExceptionList = &local_10;
    lVar10 = PHYSFS_write();
    if (lVar10 != (int)uVar9) {
      *(undefined4 *)((int)&uStack_18c + iVar6) = 0x15;
      *(char **)((int)&local_190 + iVar6) = "virtualfilesystem.cpp";
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8 = 0;
      *(undefined4 *)((int)&local_194 + iVar6) = 0x9931d8;
      FUN_00409350();
      local_8 = 0;
      *(undefined4 *)((int)&uStack_18c + iVar6) = 0x1a;
      *(char **)((int)&local_190 + iVar6) = "Error while writing string";
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      *(undefined4 *)((int)&local_194 + iVar6) = 0x9931f3;
      FUN_00409350();
      *(undefined4 *)(local_1a4 + iVar6 + -4) = 0xffffffff;
      local_8._0_1_ = 1;
      *(undefined4 *)((int)apcStack_1ac + iVar6) = 0;
      *(undefined4 *)((int)&local_190 + iVar6) = 0xf;
      *(undefined4 *)((int)&local_194 + iVar6) = 0;
      *(uint **)((int)aiStack_1b4 + iVar6 + 4) = local_40;
      local_1a4[iVar6] = 0;
      *(undefined4 *)((int)aiStack_1b4 + iVar6) = 0x993213;
      FUN_00408ed0();
      *(undefined4 *)(local_1a4 + iVar6 + -4) = 0x2d0;
      *(undefined ****)((int)apcStack_1ac + iVar6) = &local_138;
      *(undefined4 *)((int)aiStack_1b4 + iVar6 + 4) = 0x99322a;
      FUN_009e7a90();
      local_138 = &PTR_FUN_00e37db4;
      if (local_2c < 0x10) {
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        local_8._0_1_ = 2;
        *(undefined4 *)((int)&uStack_18c + iVar6) = 0xffffffff;
        *(undefined4 *)((int)&local_190 + iVar6) = 0;
        *(undefined1 **)((int)&local_194 + iVar6) = local_130;
        local_c0 = &PTR_FUN_00e37db4;
        local_bc = local_134;
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8 = 0;
        *(undefined4 *)((int)apuStack_19c + iVar6 + 4) = 0x993291;
        FUN_00408ed0();
        *(undefined4 *)((int)&uStack_18c + iVar6) = 0xffffffff;
        local_8._0_1_ = 3;
        *(undefined4 *)((int)&local_190 + iVar6) = 0;
        *(undefined1 **)((int)&local_194 + iVar6) = local_114;
        local_88 = 0xf;
        local_8c = 0;
        local_9c = 0;
        *(undefined4 *)((int)apuStack_19c + iVar6 + 4) = 0x9932bc;
        FUN_00408ed0();
        *(undefined **)((int)&uStack_18c + iVar6) = &DAT_00e6fc00;
        local_8 = CONCAT31(local_8._1_3_,2);
        *(undefined ****)((int)&local_190 + iVar6) = &local_c0;
        local_c0 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
        *(undefined4 *)((int)&local_194 + iVar6) = 0x9932d7;
        __CxxThrowException_8();
      }
      *(uint *)((int)&uStack_18c + iVar6) = local_40[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)((int)&local_190 + iVar6) = &UNK_00993244;
      FUN_00aae91b();
    }
  }
  else {
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    apuStack_19c[1] = *(undefined4 **)(in_ECX + 0x30);
    local_190 = (undefined ***)0x1;
    apuStack_19c[0] = (undefined4 *)0x9932ec;
    ExceptionList = &local_10;
    local_194 = (int)param_1;
    uStack_18c = uVar2;
    lVar10 = PHYSFS_write();
    if (lVar10 != (int)uVar2) {
      uStack_18c = 0x15;
      local_190 = (undefined ***)0xe37ccc;
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = 0;
      local_194 = 0x99332b;
      FUN_00409350();
      local_8 = 4;
      apcStack_1ac[1] = (char *)0x18;
      local_190 = (undefined ***)0xf;
      local_194 = 0;
      apcStack_1ac[0] = "Error while writing long";
      local_1a4[0] = 0;
      aiStack_1b4[1] = 0x99334e;
      FUN_00409350();
      apcStack_1ac[1] = local_dc;
      apcStack_1ac[0] = (char *)0x2d5;
      aiStack_1b4[1] = 0x993365;
      iVar6 = FUN_009d77e0();
      local_8._0_1_ = 5;
      uStack_18c = 0xffffffff;
      local_190 = (undefined ***)0x0;
      local_194 = iVar6 + 8;
      local_80 = &PTR_FUN_00e37db4;
      local_7c = *(undefined4 *)(iVar6 + 4);
      local_64 = 0xf;
      local_68 = 0;
      local_78 = 0;
      apuStack_19c[1] = (undefined4 *)0x993390;
      FUN_00408ed0();
      uStack_18c = 0xffffffff;
      local_8._0_1_ = 6;
      local_190 = (undefined ***)0x0;
      local_194 = iVar6 + 0x24;
      local_48 = 0xf;
      local_4c = 0;
      local_5c = 0;
      apuStack_19c[1] = (undefined4 *)0x9933ac;
      FUN_00408ed0();
      uStack_18c = (uint)&DAT_00e6fc00;
      local_190 = &local_80;
      local_8 = CONCAT31(local_8._1_3_,5);
      local_80 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
      local_194 = 0x9933c5;
      __CxxThrowException_8();
    }
  }
  ExceptionList = local_10;
  return;
}

