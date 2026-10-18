// FUN_0092f0a0 @ 0092f0a0 body=[[0092f0a0, 0092f414]]


void FUN_0092f0a0(int param_1,char param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_EDI;
  undefined1 **ppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [112];
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined1 local_9c [56];
  undefined1 local_64 [56];
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9689c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != '\0') {
    ExceptionList = &local_10;
    piVar3 = (int *)FUN_0092d400();
    cVar2 = (**(code **)(*piVar3 + 0x1c))();
    if ((((cVar2 != '\0') &&
         (local_1c = *(undefined4 *)(unaff_EDI + 8),
         *(int *)(unaff_EDI + 0xc) == *(int *)(DAT_012588e8 + 0xb60))) &&
        (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) &&
       (local_1c = *(undefined4 *)(unaff_EDI + 0x10),
       iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x14) * 4),
       0 < (int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU))) {
      local_1c = *(undefined4 *)(unaff_EDI + 8);
      FUN_005061e0();
      FUN_004e9500();
      local_8 = 0;
      FUN_009885d0();
      local_8._0_1_ = 1;
      local_1c = *(undefined4 *)(unaff_EDI + 0x10);
      local_18 = *(undefined1 **)(unaff_EDI + 0x14);
      FUN_0055dd40();
      puStack_b0 = local_9c;
      local_8._0_1_ = 2;
      uStack_b4 = 0x92f190;
      iVar4 = FUN_00424aa0();
      local_8._0_1_ = 3;
      local_14 = local_28;
      local_28 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 4;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 4;
      local_18 = local_28;
      if (local_28 == (undefined1 *)0x0) {
        local_28 = (undefined1 *)0x0;
        local_8._0_1_ = uVar1;
      }
      else {
        *(undefined4 *)(local_28 + 0x14) = 0xf;
        *(undefined4 *)(local_28 + 0x10) = 0;
        *local_28 = 0;
        uStack_b4 = 0x92f1ce;
        puStack_b0 = (undefined1 *)iVar4;
        FUN_00408ed0();
        local_8._0_1_ = 5;
        puStack_b0 = (undefined1 *)(iVar4 + 0x1c);
        *(undefined4 *)(local_28 + 0x30) = 0xf;
        *(undefined4 *)(local_28 + 0x2c) = 0;
        local_28[0x1c] = 0;
        uStack_b4 = 0x92f1f0;
        FUN_00408ed0();
        *(undefined1 **)(local_28 + 0x38) = local_14;
        *(undefined4 *)(local_28 + 0x3c) = 0;
        local_28[0x40] = 0;
      }
      puVar5 = local_28;
      if (local_24 != 0) {
        *(undefined1 **)(local_14 + 0x3c) = local_28;
        puVar5 = local_2c;
      }
      local_2c = puVar5;
      local_24 = local_24 + 1;
      FUN_00a39a80();
      FUN_00408ad0();
      local_8._0_1_ = 0;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 6;
      puStack_b0 = (undefined1 *)0x92f254;
      FUN_0092d400();
      puStack_b0 = (undefined1 *)0x92f25a;
      FUN_0090a830();
      puStack_b0 = local_9c;
      local_8._0_1_ = 7;
      uStack_b4 = 0x92f26e;
      iVar4 = FUN_00424aa0();
      local_8._0_1_ = 8;
      local_14 = local_28;
      puVar5 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 9;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 9;
      local_18 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        local_28 = (undefined1 *)0x0;
        local_8._0_1_ = uVar1;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        uStack_b4 = 0x92f2ac;
        puStack_b0 = (undefined1 *)iVar4;
        FUN_00408ed0();
        local_8._0_1_ = 10;
        puStack_b0 = (undefined1 *)(iVar4 + 0x1c);
        *(undefined4 *)(puVar5 + 0x30) = 0xf;
        *(undefined4 *)(puVar5 + 0x2c) = 0;
        puVar5[0x1c] = 0;
        uStack_b4 = 0x92f2ce;
        FUN_00408ed0();
        *(undefined1 **)(puVar5 + 0x38) = local_14;
        *(undefined4 *)(puVar5 + 0x3c) = 0;
        puVar5[0x40] = 0;
        local_28 = puVar5;
      }
      puVar5 = local_28;
      if (local_24 != 0) {
        *(undefined1 **)(local_14 + 0x3c) = local_28;
        puVar5 = local_2c;
      }
      local_2c = puVar5;
      local_24 = local_24 + 1;
      FUN_00a39a80();
      FUN_00408ad0();
      local_8._0_1_ = 0;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0xb;
      FUN_009885d0();
      local_8._0_1_ = 0xc;
      local_18 = (undefined1 *)&uStack_12c;
      uStack_12c = 0;
      uStack_128 = 0;
      local_1c = *(undefined4 *)(unaff_EDI + 0x10);
      uVar7 = *(undefined4 *)
               (*(int *)(DAT_012588e8 + 0xacc) +
               *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x14) * 4) +
                       0xbe4) * 4);
      uVar13 = *(undefined4 *)(unaff_EDI + 0x14);
      uVar12 = *(undefined4 *)(unaff_EDI + 0x10);
      uVar11 = *(undefined4 *)(unaff_EDI + 0xc);
      uVar10 = *(undefined4 *)(unaff_EDI + 8);
      uVar9 = 0;
      puVar5 = local_64;
      ppuVar8 = &local_2c;
      FUN_006a4f40(ppuVar8,uVar7,puVar5,0,uVar10,uVar11,uVar12,uVar13);
      uVar6 = FUN_006a55b0();
      FUN_006a7ed0(auStack_124,uVar6,ppuVar8,uVar7,puVar5,uVar9,uVar10,uVar11,uVar12,uVar13);
      uStack_128 = 0;
      local_8._0_1_ = 0xd;
      uStack_12c = 0x92f3b5;
      uStack_12c = FUN_006a4f40();
      uVar7 = FUN_006a4f40();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_004e9540(uVar7);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_0042b9f0();
    }
  }
  *(undefined1 *)(param_1 + 0x71) = 1;
  for (piVar3 = *(int **)(param_1 + 0x50); (piVar3 != (int *)0x0 && (*piVar3 != unaff_EDI));
      piVar3 = (int *)piVar3[2]) {
  }
  FUN_005f2ae0();
  ExceptionList = local_10;
  return;
}

