// FUN_004f3900 @ 004f3900 body=[[004f3900, 004f3c7e] [004f3c82, 004f3ca1] [004f3ca5, 004f3d7a] [004f3d7e, 004f3d9b] [004f3d9f, 004f3e61] [004f3e65, 004f3e83] [004f3e87, 004f3ec2] [004f3ec6, 004f3ee1]]


void FUN_004f3900(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 **ppuVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_140 [120];
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined8 local_c0;
  uint *local_b8;
  uint *local_b4;
  undefined1 local_a4 [56];
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined1 local_60;
  int local_5c;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb4284;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)param_3 == '\0') {
    local_b4 = (uint *)0x4f3930;
    ExceptionList = &local_10;
    FUN_004f5860();
  }
  local_b4 = (uint *)0x4f3935;
  FUN_004f56b0();
  iVar3 = *(int *)(param_1 + 0x20);
  if (((iVar3 < 1) || (10 < *(int *)(param_1 + 0x184))) || (*(char *)(param_1 + 0x188) != '\0')) {
    local_b4 = (uint *)0x4f3a5d;
    FUN_004ef470();
    goto LAB_004f3a5d;
  }
  iVar11 = *(int *)(param_1 + 0x15c);
  if (((iVar11 < *(int *)(param_1 + 0x164)) ||
      ((iVar11 <= *(int *)(param_1 + 0x164) &&
       (*(uint *)(param_1 + 0x158) < *(uint *)(param_1 + 0x160))))) ||
     (*(char *)(param_1 + 0x180) != '\0')) {
LAB_004f39a4:
    param_3 = (undefined1 *)CONCAT31(param_3._1_3_,1);
  }
  else {
    if (*(uint *)(param_1 + 0x158) == 0 && iVar11 == 0) {
      local_20 = 0x320000;
      local_1c = (undefined1 *)0x0;
      local_b4 = (uint *)0x4f399b;
      cVar2 = FUN_0043e920();
      if (cVar2 != '\0') goto LAB_004f39a4;
    }
    param_3 = (undefined1 *)((uint)param_3 & 0xffffff00);
  }
  local_b4 = (uint *)(((float)iVar3 + 0.0005) * 1000.0);
  local_b8 = (uint *)0x4f39d9;
  FUN_00401000();
  local_b4 = (uint *)0x4f39e1;
  iVar3 = FUN_00b31c00();
  local_c0 = (longlong)iVar3 * (longlong)param_2;
  local_b4 = (uint *)0x0;
  local_b8 = (uint *)0x3e8;
  puStack_c4 = (undefined1 *)0x4f39f1;
  uVar4 = __alldiv();
  local_b4 = (uint *)0x0;
  local_b8 = (uint *)0x1f40000;
  local_c0 = CONCAT44((((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2,
                      uVar4 << 0x1e);
  puStack_c4 = (undefined1 *)0x4f3a0d;
  local_c0 = __alldiv();
  local_1c = *(undefined1 **)(*(int *)(param_1 + 0x18) + 300);
  local_b8 = (uint *)DAT_0125d730;
  local_b4 = (uint *)DAT_0125d734;
  puStack_c4 = param_3;
  uStack_c8 = 0x4f3a4d;
  FUN_004ef140();
LAB_004f3a5d:
  if (*(int *)(param_1 + 0x17c) != 0) {
    *(undefined4 *)(param_1 + 0x184) = 0;
    if (*(int *)(param_1 + 0x1d0) == 0) {
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + -1;
    }
    if (*(int *)(param_1 + 0x17c) < 1) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      if (*(int *)(param_1 + 0x20) == 1) {
        iVar3 = *(int *)(param_1 + 0x1c);
        local_20 = *(undefined4 *)(iVar3 + 0x58);
        cVar2 = *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0x5c) * 4) + 0xaf8)
        ;
        *(char *)(param_1 + 0x180) = cVar2;
        if (cVar2 == '\0') {
          param_3 = (undefined1 *)0x3e8;
          puVar6 = (undefined1 *)*(int *)(iVar3 + 0x60);
          while ((puVar6 != (undefined1 *)0x0 && (0 < (int)param_3))) {
            local_1c = *(undefined1 **)((int)puVar6 + 0x224);
            if (puVar6 != (undefined1 *)param_1) {
              uVar4 = *(uint *)((int)puVar6 + 0xf0);
              while (((*(uint *)((int)puVar6 + 0xf0) <= uVar4 &&
                      (uVar4 < *(uint *)((int)puVar6 + 0xf4))) && (0 < (int)param_3))) {
                local_5c = *(int *)(uVar4 + 0xc) / 10;
                uVar4 = uVar4 + 0x10;
                if ((int)param_3 <= local_5c) {
                  local_5c = (int)param_3;
                }
                if (0 < local_5c) {
                  param_3 = (undefined1 *)((int)param_3 - local_5c);
                  local_b4 = (uint *)&local_5c;
                  local_b8 = (uint *)((int)puVar6 + 0xe0);
                  local_c0 = CONCAT44(0x4f3b5a,(undefined4)local_c0);
                  FUN_004ee550();
                }
              }
            }
            puVar6 = local_1c;
          }
        }
      }
      iVar3 = *(int *)(param_1 + 0x1c);
      if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(iVar3 + 0x5c)) {
        if ((*(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x48) & 0xfffffffcU) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = **(int **)(iVar3 + 0x48);
        }
        piVar7 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4);
        local_6c = (undefined1 *)0x0;
        local_68 = (undefined1 *)0x0;
        local_64 = 0;
        local_60 = 0;
        local_8 = 0;
        local_b4 = (uint *)0x4;
        local_b8 = (uint *)&DAT_00dfbf14;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        local_c0 = CONCAT44(0x4f3bc4,(undefined4)local_c0);
        FUN_00409350();
        local_8._0_1_ = 1;
        local_b4 = local_3c;
        local_b8 = (uint *)0x4f3bd6;
        local_b8 = (uint *)(**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
        local_c0 = CONCAT44(local_58,local_a4);
        local_8._0_1_ = 2;
        puStack_c4 = (undefined1 *)0x4f3beb;
        uVar4 = FUN_00424aa0();
        local_b8 = (uint *)0x44;
        local_8._0_1_ = 3;
        local_c0 = CONCAT44(0x4f3bf9,(undefined4)local_c0);
        param_3 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 4;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 4;
        if (param_3 == (undefined1 *)0x0) {
          param_3 = (undefined1 *)0x0;
          local_8._0_1_ = uVar1;
        }
        else {
          local_b8 = (uint *)0xffffffff;
          *(undefined4 *)(param_3 + 0x14) = 0xf;
          *(undefined4 *)(param_3 + 0x10) = 0;
          local_c0 = (ulonglong)uVar4;
          *param_3 = 0;
          puStack_c4 = (undefined1 *)0x4f3c23;
          FUN_00408ed0();
          local_8._0_1_ = 5;
          local_b8 = (uint *)0xffffffff;
          *(undefined4 *)(param_3 + 0x30) = 0xf;
          *(undefined4 *)(param_3 + 0x2c) = 0;
          local_c0 = (ulonglong)(uVar4 + 0x1c);
          param_3[0x1c] = 0;
          puStack_c4 = (undefined1 *)0x4f3c45;
          FUN_00408ed0();
          *(undefined4 *)(param_3 + 0x38) = 0;
          *(undefined4 *)(param_3 + 0x3c) = 0;
          param_3[0x40] = 0;
        }
        local_64 = 1;
        local_b8 = (uint *)0x4f3c70;
        local_6c = param_3;
        local_68 = param_3;
        FUN_00a39a80();
        if (0xf < local_28) {
          local_b8 = (uint *)local_3c[0];
          local_c0 = CONCAT44(&UNK_004f3c7f,(undefined4)local_c0);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        if (0xf < local_44) {
          local_b8 = (uint *)local_58[0];
          local_c0 = CONCAT44(&UNK_004f3ca2,(undefined4)local_c0);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b8 = (uint *)0x4;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        local_c0 = 0xdf85c0004f3cbd;
        FUN_00409350();
        local_8._0_1_ = 6;
        local_b8 = local_3c;
        local_c0 = CONCAT44(0x4f3cce,(undefined4)local_c0);
        uVar5 = (**(code **)(*piVar7 + 0x1c))();
        local_c0 = CONCAT44(uVar5,local_58);
        puStack_c4 = local_a4;
        local_8._0_1_ = 7;
        uStack_c8 = 0x4f3ce3;
        iVar3 = FUN_00424aa0();
        local_8._0_1_ = 8;
        local_c0 = 0x44004f3cf1;
        puVar6 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 9;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 9;
        local_1c = puVar6;
        if (puVar6 == (undefined1 *)0x0) {
          local_68 = (undefined1 *)0x0;
          local_8._0_1_ = uVar1;
        }
        else {
          local_c0 = 0xffffffff00000000;
          *(undefined4 *)(puVar6 + 0x14) = 0xf;
          *(undefined4 *)(puVar6 + 0x10) = 0;
          *puVar6 = 0;
          uStack_c8 = 0x4f3d1b;
          puStack_c4 = (undefined1 *)iVar3;
          FUN_00408ed0();
          local_8._0_1_ = 10;
          local_c0 = 0xffffffff00000000;
          puStack_c4 = (undefined1 *)(iVar3 + 0x1c);
          *(undefined4 *)(puVar6 + 0x30) = 0xf;
          *(undefined4 *)(puVar6 + 0x2c) = 0;
          puVar6[0x1c] = 0;
          uStack_c8 = 0x4f3d3d;
          FUN_00408ed0();
          *(undefined1 **)(puVar6 + 0x38) = param_3;
          *(undefined4 *)(puVar6 + 0x3c) = 0;
          puVar6[0x40] = 0;
          local_68 = puVar6;
        }
        *(undefined1 **)(param_3 + 0x3c) = local_68;
        local_64 = 2;
        local_c0 = CONCAT44(0x4f3d68,(undefined4)local_c0);
        FUN_00a39a80();
        if (0xf < local_28) {
          local_c0 = CONCAT44(local_3c[0],&UNK_004f3d7b);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_28 = 0xf;
        local_2c = 0;
        uVar4 = local_3c[0] >> 8;
        local_3c[0] = uVar4 << 8;
        if (0xf < local_44) {
          local_c0 = CONCAT44(local_58[0],&UNK_004f3d9c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c0 = 0xded94d;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = uVar4 << 8;
        puStack_c4 = (undefined1 *)0x4f3dbf;
        FUN_00409350();
        local_8._0_1_ = 0xb;
        local_c0 = 0xd00dfbf58;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        puStack_c4 = (undefined1 *)0x4f3ddf;
        FUN_00409350();
        local_c0 = 0x55a780;
        local_8._0_1_ = 0xc;
        iVar3 = piVar7[0x4b];
        iVar11 = piVar7[0x4a];
        uVar10 = 0;
        puVar9 = local_3c;
        ppuVar8 = &local_6c;
        iVar12 = iVar11;
        iVar13 = iVar3;
        FUN_006a4f40(ppuVar8,piVar7,puVar9,0,iVar11,iVar3,iVar11,iVar3);
        uVar5 = FUN_006a55b0();
        FUN_006a7ed0(auStack_140,uVar5,ppuVar8,piVar7,puVar9,uVar10,iVar11,iVar3,iVar12,iVar13);
        local_8._0_1_ = 0xd;
        FUN_006a4f40();
        local_8._0_1_ = 0xc;
        FUN_004933c0();
        if (0xf < local_44) {
          local_c0 = CONCAT44(local_58[0],&UNK_004f3e62);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (0xf < local_28) {
          local_c0 = CONCAT44(local_3c[0],&UNK_004f3e84);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c0 = 0xb00dfbf98;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        puStack_c4 = (undefined1 *)0x4f3e9f;
        FUN_00409350();
        local_8 = CONCAT31(local_8._1_3_,0xe);
        local_c0 = CONCAT44(0x4f3ea8,(undefined4)local_c0);
        piVar7 = (int *)FUN_009c7290();
        local_c0._4_4_ = local_3c;
        local_c0._0_4_ = 0x4f3eb5;
        (**(code **)(*piVar7 + 0x60))();
        if (0xf < local_28) {
          local_c0 = CONCAT44(local_c0._4_4_,local_3c[0]);
                    /* WARNING: Subroutine does not return */
          puStack_c4 = &UNK_004f3ec3;
          FUN_00aae91b();
        }
        local_c0 = CONCAT44(local_c0._4_4_,&local_6c);
        puStack_c4 = (undefined1 *)0x4f3ecf;
        FUN_0042b9f0();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

