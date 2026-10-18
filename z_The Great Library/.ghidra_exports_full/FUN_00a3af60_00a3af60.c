// FUN_00a3af60 @ 00a3af60 body=[[00a3af60, 00a3afdc] [00a3afe0, 00a3b082] [00a3b086, 00a3b174] [00a3b178, 00a3b19c] [00a3b1a0, 00a3b1d8] [00a3b1dc, 00a3b292] [00a3b296, 00a3b376] [00a3b37a, 00a3b39e] [00a3b3a2, 00a3b3dd]]


void FUN_00a3af60(uint param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint *puVar5;
  LPCSTR ****pppppCVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_ESI;
  undefined1 local_1dc [4];
  uint *local_1d8;
  uint local_1d4;
  uint uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  uint local_1c0;
  uint local_1b8;
  uint uStack_1b4;
  LPCSTR ***ppppCStack_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  undefined4 uStack_19c;
  uint uStack_198;
  LPCSTR ***appppCStack_190 [4];
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 auStack_174 [5];
  uint uStack_160;
  undefined1 local_148 [152];
  undefined1 local_b0 [140];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5259c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_00f20c10 == 0) {
    ExceptionList = &pvStack_14;
    local_1d8 = (uint *)FUN_00aae9af(0xc);
    local_c = 0;
    if (local_1d8 == (uint *)0x0) {
      DAT_00f20c10 = 0;
    }
    else {
      DAT_00f20c10 = FUN_009880e0();
    }
  }
  local_c = 0xffffffff;
  piVar2 = *(int **)(*(int *)(DAT_00f20c10 + 8) + (param_1 % *(uint *)(DAT_00f20c10 + 4)) * 4);
  do {
    if (piVar2 == (int *)0x0) {
LAB_00a3aff1:
      if (0xf < *(uint *)(param_2 + 0x14)) {
        param_2 = *(char **)param_2;
      }
      local_1c0 = 0xf;
      local_1c4 = 0;
      local_1d4 = local_1d4 & 0xffffff00;
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(param_2,(int)pcVar3 - (int)(param_2 + 1));
      local_c = 6;
      local_1dc[0] = 0x5c;
      FUN_0098a0d0(local_1dc);
      uVar4 = FUN_00989b50(0xffffffff);
      local_c._0_1_ = 7;
      FUN_00447470(uVar4);
      local_c._0_1_ = 6;
      if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1b8);
      }
      FUN_00987ea0(local_b0,2,1);
      local_c = CONCAT31(local_c._1_3_,8);
      uVar4 = FUN_00418e30(local_b0,"UNKNOWN CATEGORY: ",param_3,param_1,param_3,&DAT_00e407b4,
                           param_3,&local_1d4,param_3,&DAT_00e004e4,param_3,param_3,extraout_ECX,
                           &DAT_00e40720);
      uVar4 = FUN_00455470(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      uVar4 = FUN_0054a180(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      uVar4 = FUN_00455470(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      if (0xf < (uint)param_4[5]) {
        param_4 = (undefined4 *)*param_4;
      }
      FUN_00418e30(uVar4,param_4);
      FUN_00988010();
      uStack_1c = 9;
      uVar4 = FUN_00a3b3e0(auStack_174,appppCStack_190);
      uStack_1c = 10;
      FUN_00447470(uVar4);
      if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_174[0]);
      }
      pppppCVar6 = (LPCSTR ****)appppCStack_190[0];
      if (uStack_17c < 0x10) {
        pppppCVar6 = appppCStack_190;
      }
      OutputDebugStringA((LPCSTR)pppppCVar6);
      if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(appppCStack_190[0]);
      }
      uStack_17c = 0xf;
      uStack_180 = 0;
      appppCStack_190[0] = (LPCSTR ***)((uint)appppCStack_190[0] & 0xffffff00);
      uStack_1c = 6;
      FUN_00988060();
      uStack_1c8 = unaff_ESI;
      uStack_1b4 = uStack_1d0;
joined_r0x00a3b3cf:
      if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_1c8);
      }
      ExceptionList = pvStack_24;
      return;
    }
    puVar5 = (uint *)*piVar2;
    if (*puVar5 == param_1) {
      local_1d8 = puVar5;
      if (puVar5 != (uint *)0x0) {
        if (0xf < *(uint *)(param_2 + 0x14)) {
          param_2 = *(char **)param_2;
        }
        local_1a4 = 0xf;
        local_1a8 = 0;
        local_1b8 = local_1b8 & 0xffffff00;
        pcVar3 = param_2;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(param_2,(int)pcVar3 - (int)(param_2 + 1));
        local_c = 1;
        local_1dc[0] = 0x5c;
        FUN_0098a0d0(local_1dc);
        uVar4 = FUN_00989b50(0xffffffff);
        local_c._0_1_ = 2;
        FUN_00447470(uVar4);
        local_c._0_1_ = 1;
        if (0xf < local_1c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1d4);
        }
        FUN_00987ea0(local_148,2,1);
        local_c = CONCAT31(local_c._1_3_,3);
        puVar5 = local_1d8 + 1;
        if (0xf < local_1d8[6]) {
          puVar5 = (uint *)*puVar5;
        }
        uVar4 = FUN_00418e30(local_148,puVar5);
        uVar4 = FUN_00418e30(uVar4,&DAT_00e40724,&local_1b8,&local_1b8,extraout_ECX_00,&DAT_00e004e4
                             ,extraout_ECX_00,param_3,extraout_ECX_00,&DAT_00e40720);
        uVar4 = FUN_0054a180(uVar4);
        uVar4 = FUN_00418e30(uVar4);
        uVar4 = FUN_00455470(uVar4);
        uVar4 = FUN_00418e30(uVar4);
        if (0xf < (uint)param_4[5]) {
          param_4 = (undefined4 *)*param_4;
        }
        FUN_00418e30(uVar4,param_4);
        FUN_00988010();
        uStack_1c = 4;
        uVar4 = FUN_00a3b3e0(&stack0xfffffe1c,&ppppCStack_1ac);
        uStack_1c = 5;
        FUN_00447470(uVar4);
        if (0xf < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(unaff_ESI);
        }
        pppppCVar6 = (LPCSTR ****)ppppCStack_1ac;
        if (uStack_198 < 0x10) {
          pppppCVar6 = &ppppCStack_1ac;
        }
        OutputDebugStringA((LPCSTR)pppppCVar6);
        if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(ppppCStack_1ac);
        }
        uStack_198 = 0xf;
        uStack_19c = 0;
        ppppCStack_1ac = (LPCSTR ***)((uint)ppppCStack_1ac & 0xffffff00);
        uStack_1c = 1;
        FUN_00988060();
        goto joined_r0x00a3b3cf;
      }
      goto LAB_00a3aff1;
    }
    piVar2 = (int *)piVar2[1];
  } while( true );
}

