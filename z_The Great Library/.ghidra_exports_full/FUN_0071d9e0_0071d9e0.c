// FUN_0071d9e0 @ 0071d9e0 body=[[0071d9e0, 0071dcb8] [0071dcbc, 0071e129] [0071e130, 0071e1af] [0071e1b3, 0071e1d6] [0071e1e0, 0071e58d] [0071e591, 0071e642] [0071e646, 0071e6f5] [0071e6f9, 0071e761] [0071e765, 0071e7cd] [0071e7d1, 0071e805] [0071e809, 0071e818] [0071e81c, 0071e82b] [0071e82f, 0071e841]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071d9e0(int param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 local_180 [64];
  undefined4 *local_140;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined **local_130;
  undefined4 local_12c;
  undefined1 local_128 [64];
  undefined4 *local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined **local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [64];
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  int *local_28;
  undefined1 *local_24;
  int local_20;
  int *local_1c;
  uint *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5e9b6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_013f2a50 & 1) == 0) {
    DAT_013f2a50 = DAT_013f2a50 | 1;
    _DAT_013f29fc = 0x18d;
    _DAT_013f29f8 = CGoodsPool::vftable;
    DAT_013f2a40 = 0;
    DAT_013f2a44 = 0;
    _DAT_013f2a48 = 0;
    local_8 = 1;
    ExceptionList = &local_10;
    _memset(&DAT_013f2a00,0,0x40);
    FUN_00423920();
    _atexit((_func_4879 *)&LAB_00c82480);
  }
  local_8 = 0xffffffff;
  if ((DAT_013f2a50 & 2) == 0) {
    DAT_013f2a50 = DAT_013f2a50 | 2;
    DAT_013f29e8 = 0;
    _DAT_013f29ec = 0;
    _DAT_013f29f0 = 0;
    _atexit((_func_4879 *)&LAB_00c82470);
  }
  local_58._0_4_ = *(int *)(DAT_012588e8 + 0xb5c);
  local_20 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  if (DAT_0131bb34 == 0) {
    local_24 = (undefined1 *)FUN_00aae9af();
    local_8 = 2;
    if (local_24 != (undefined1 *)0x0) {
      FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700();
  }
  iVar5 = DAT_0131bb34;
  piVar8 = (int *)(DAT_0131bb34 + 0xc);
  local_28 = piVar8;
  FUN_0048b650();
  uVar10 = *(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x48);
  iVar9 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x4c);
  uVar11 = __alldiv();
  local_50._4_4_ = (int)((ulonglong)uVar11 >> 0x20) + iVar9 + (uint)CARRY4((uint)uVar11,uVar10);
  iVar9 = *(int *)(iVar5 + 0x10) - *piVar8 >> 2;
  local_18 = (uint *)0x0;
  if (0 < iVar9) {
    do {
      if (local_28[1] - *local_28 >> 2 < (int)local_18) {
        local_1c = (int *)FUN_0096bb70();
      }
      else {
        local_1c = *(int **)(*local_28 + (int)local_18 * 4);
      }
      FUN_0047dbb0();
      local_24 = &stack0xfffffe60;
      FUN_0047de60();
      FUN_0047dbb0();
      local_24 = &stack0xfffffe60;
      FUN_0047de60();
      FUN_0047dbb0();
      local_24 = &stack0xfffffe60;
      FUN_0047de60();
      local_18 = (uint *)((int)local_18 + 1);
    } while ((int)local_18 < iVar9);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_00409350();
  local_8 = 3;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  local_8 = 0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  (**(code **)(*piVar8 + 0x24))();
  local_18 = (uint *)(param_1 + 300);
  uVar10 = *local_18;
  while ((*local_18 <= uVar10 && (uVar10 < local_18[1]))) {
    uVar10 = uVar10 + 4;
    FUN_00539760();
    if ((-1 < local_58._4_4_) && ((0 < local_58._4_4_ || ((int)local_58 != 0)))) {
      local_24 = &stack0xfffffe5c;
      FUN_00719ff0();
    }
  }
  local_12c = 0x18d;
  local_130 = CGoodsPool::vftable;
  local_e8 = (undefined4 *)0x0;
  local_e4 = (undefined4 *)0x0;
  local_e0 = (undefined4 *)0x0;
  local_8 = 4;
  _memset(local_128,0,0x40);
  if ((local_e4 < (undefined4 *)((int)&DAT_0125e448 + 1)) || (&DAT_0125e448 < local_e8)) {
    if (local_e4 == local_e0) {
      FUN_00423780();
    }
    if (local_e4 != (undefined4 *)0x0) {
      *local_e4 = DAT_0125e448;
      uVar4 = DAT_0125e44c;
      goto LAB_0071ddf1;
    }
  }
  else {
    iVar9 = (int)&DAT_0125e448 - (int)local_e8 >> 3;
    if (local_e4 == local_e0) {
      FUN_00423780();
    }
    if (local_e4 != (undefined4 *)0x0) {
      *local_e4 = local_e8[iVar9 * 2];
      uVar4 = local_e8[iVar9 * 2 + 1];
LAB_0071ddf1:
      local_e4[1] = uVar4;
    }
  }
  local_e4 = local_e4 + 2;
  local_d4 = 0x18d;
  local_d8 = CGoodsPool::vftable;
  local_90 = (undefined4 *)0x0;
  local_8c = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  local_8 = 6;
  _memset(local_d0,0,0x40);
  if ((local_8c < (undefined4 *)((int)&DAT_0125e448 + 1)) || (&DAT_0125e448 < local_90)) {
    if (local_8c == local_88) {
      FUN_00423780();
    }
    if (local_8c != (undefined4 *)0x0) {
      *local_8c = DAT_0125e448;
      uVar4 = DAT_0125e44c;
      goto LAB_0071dec4;
    }
  }
  else {
    iVar9 = (int)&DAT_0125e448 - (int)local_90 >> 3;
    if (local_8c == local_88) {
      FUN_00423780();
    }
    if (local_8c != (undefined4 *)0x0) {
      *local_8c = local_90[iVar9 * 2];
      uVar4 = local_90[iVar9 * 2 + 1];
LAB_0071dec4:
      local_8c[1] = uVar4;
    }
  }
  local_8c = local_8c + 2;
  local_1c = *(int **)(local_20 + 0xe44);
  uVar11 = __alldiv();
  local_58._4_4_ = (int)((ulonglong)uVar11 >> 0x20) + (uint)(0xffff7fff < (uint)uVar11);
  local_140 = (undefined4 *)0x0;
  local_13c = (undefined4 *)0x0;
  local_138 = (undefined4 *)0x0;
  local_8 = CONCAT31(local_8._1_3_,8);
  _memset(local_180,0,0x40);
  if ((local_13c < (undefined4 *)((int)&DAT_0125e448 + 1)) || (&DAT_0125e448 < local_140)) {
    if (local_13c == local_138) {
      FUN_00423780();
    }
    if (local_13c == (undefined4 *)0x0) goto LAB_0071dfd7;
    *local_13c = DAT_0125e448;
    uVar4 = DAT_0125e44c;
  }
  else {
    iVar9 = (int)&DAT_0125e448 - (int)local_140 >> 3;
    if (local_13c == local_138) {
      FUN_00423780();
    }
    if (local_13c == (undefined4 *)0x0) goto LAB_0071dfd7;
    *local_13c = local_140[iVar9 * 2];
    uVar4 = local_140[iVar9 * 2 + 1];
  }
  local_13c[1] = uVar4;
LAB_0071dfd7:
  local_13c = local_13c + 2;
  local_8._0_1_ = 9;
  piVar8 = local_1c;
  while (piVar8 != (int *)0x0) {
    local_1c = (int *)piVar8[2];
    iVar9 = *(int *)(*piVar8 + 0x60);
    while (piVar8 = local_1c, iVar9 != 0) {
      local_24 = &stack0xfffffe5c;
      iVar5 = *(int *)(iVar9 + 0x224);
      FUN_004dd470(*(undefined4 *)(*(int *)(iVar9 + 0x18) + 300),&DAT_013f29f8);
      FUN_0047dc20();
      iVar9 = iVar5;
    }
  }
  local_50._0_4_ = *(int **)(local_20 + 0x9d8);
  local_1c = (int *)DAT_012588e8;
  if ((DAT_013f2a50 & 4) == 0) {
    DAT_013f2a50 = DAT_013f2a50 | 4;
    local_8._0_1_ = 10;
    iVar9 = local_28[1] - *local_28 >> 2;
    DAT_013f1c8c = 0;
    DAT_013f1c90 = (undefined4 *)0x0;
    _DAT_013f1c94 = 0;
    if (iVar9 != 0) {
      FUN_007b94a0();
      iVar5 = iVar9 - ((int)DAT_013f1c90 - DAT_013f1c8c >> 2);
      puVar7 = DAT_013f1c90;
      if (iVar5 != 0) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      DAT_013f1c90 = DAT_013f1c90 + (iVar9 - ((int)DAT_013f1c90 - DAT_013f1c8c >> 2));
    }
    _atexit((_func_4879 *)&LAB_00c82430);
    local_8._0_1_ = 9;
  }
  iVar6 = 0;
  iVar5 = local_28[1] - *local_28 >> 2;
  iVar9 = DAT_0131bb34;
  if (0 < iVar5) {
    do {
      *(undefined4 *)(DAT_013f1c8c + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
      iVar9 = DAT_0131bb34;
    } while (iVar6 < iVar5);
  }
  while( true ) {
    if (((int *)local_50 < *(int **)(local_20 + 0x9d8)) ||
       (*(int **)(local_20 + 0x9dc) <= (int *)local_50)) break;
    iVar5 = *(int *)local_50;
    local_50._0_4_ = (int *)local_50 + 1;
    local_24 = *(undefined1 **)(*(int *)((int)local_1c + 0xacc) + iVar5 * 4);
    if (iVar9 == 0) {
      local_18 = (uint *)FUN_00aae9af();
      local_8._0_1_ = 0xb;
      if (local_18 == (uint *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_0041a160();
      }
      local_8 = CONCAT31(local_8._1_3_,0xc);
      local_18 = (uint *)0x0;
      if ((iVar9 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 9;
      DAT_0131bb34 = iVar9;
    }
    iVar5 = *(int *)(iVar9 + 0x10) - *(int *)(iVar9 + 0xc) >> 2;
    if (0 < iVar5) {
      iVar6 = 0;
      local_18 = (uint *)iVar5;
      do {
        iVar5 = *(int *)(iVar6 + *(int *)((int)local_24 + 0x194));
        iVar9 = DAT_0131bb34;
        while (iVar2 = iVar5, DAT_0131bb34 = iVar9, iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + 0x27c);
          if ((-1 < *(int *)(iVar2 + 0x184)) &&
             ((0 < *(int *)(iVar2 + 0x184) || (*(int *)(iVar2 + 0x180) != 0)))) {
            piVar8 = (int *)(DAT_013f1c8c + *(int *)(*(int *)(iVar2 + 0x68) + 0x28) * 4);
            *piVar8 = *piVar8 + *(int *)(iVar2 + 0x58);
            iVar9 = DAT_0131bb34;
          }
        }
        iVar6 = iVar6 + 0x10;
        local_18 = (uint *)((int)local_18 + -1);
      } while (local_18 != (uint *)0x0);
      local_18 = (uint *)0x0;
    }
  }
  local_1c = *(int **)(local_20 + 0x1338);
  local_20 = 0;
  local_24 = (undefined1 *)(local_28[1] - *local_28 >> 2);
  if (0 < (int)local_24) {
    local_18 = (uint *)0x0;
    local_28 = (int *)0x0;
    do {
      piVar8 = local_28;
      iVar9 = DAT_013f29e8;
      FID_conflict__memcpy(&DAT_013f2a00,(void *)((int)local_28 + DAT_013f29e8 + 8),DAT_012587f4);
      piVar8 = (int *)((int)piVar8 + iVar9 + 0x48);
      iVar5 = piVar8[1] - *piVar8 >> 3;
      FUN_0043a880();
      iVar9 = 1;
      if (1 < iVar5) {
        do {
          iVar2 = *piVar8;
          iVar6 = iVar9 * 8;
          puVar7 = (undefined4 *)(iVar6 + DAT_013f2a40);
          iVar9 = iVar9 + 1;
          *puVar7 = *(undefined4 *)(iVar2 + iVar6);
          puVar7[1] = *(undefined4 *)(iVar2 + iVar6 + 4);
        } while (iVar9 < iVar5);
      }
      uVar11 = __alldiv();
      iVar9 = 1;
      iVar5 = DAT_013f2a44 - DAT_013f2a40 >> 3;
      local_50 = uVar11;
      if (1 < iVar5) {
        do {
          plVar1 = (longlong *)(DAT_013f2a40 + iVar9 * 8);
          lVar12 = __allmul();
          iVar9 = iVar9 + 1;
          *plVar1 = lVar12 >> 0xf;
        } while (iVar9 < iVar5);
      }
      FUN_0047dc20();
      iVar6 = ((int)local_18 + 1) * 0x58 + DAT_013f29e8;
      FID_conflict__memcpy(&DAT_013f2a00,(void *)(iVar6 + 8),DAT_012587f4);
      iVar5 = *(int *)(iVar6 + 0x4c) - *(int *)(iVar6 + 0x48) >> 3;
      FUN_0043a880();
      iVar9 = 1;
      if (1 < iVar5) {
        do {
          iVar3 = *(int *)(iVar6 + 0x48);
          iVar2 = iVar9 * 8;
          puVar7 = (undefined4 *)(iVar2 + DAT_013f2a40);
          iVar9 = iVar9 + 1;
          *puVar7 = *(undefined4 *)(iVar3 + iVar2);
          puVar7[1] = *(undefined4 *)(iVar3 + iVar2 + 4);
        } while (iVar9 < iVar5);
      }
      uVar11 = __alldiv();
      iVar9 = 1;
      iVar5 = DAT_013f2a44 - DAT_013f2a40 >> 3;
      local_60 = uVar11;
      if (1 < iVar5) {
        do {
          plVar1 = (longlong *)(DAT_013f2a40 + iVar9 * 8);
          lVar12 = __allmul();
          iVar9 = iVar9 + 1;
          *plVar1 = lVar12 >> 0xf;
        } while (iVar9 < iVar5);
      }
      FUN_0047dc20();
      piVar8 = local_28;
      iVar9 = DAT_013f29e8;
      FID_conflict__memcpy(&DAT_013f2a00,(void *)((int)local_28 + DAT_013f29e8 + 0xb8),DAT_012587f4)
      ;
      piVar8 = (int *)((int)piVar8 + iVar9 + 0xf8);
      iVar5 = piVar8[1] - *piVar8 >> 3;
      FUN_0043a880();
      iVar9 = 1;
      if (1 < iVar5) {
        do {
          iVar2 = *piVar8;
          iVar6 = iVar9 * 8;
          puVar7 = (undefined4 *)(iVar6 + DAT_013f2a40);
          iVar9 = iVar9 + 1;
          *puVar7 = *(undefined4 *)(iVar2 + iVar6);
          puVar7[1] = *(undefined4 *)(iVar2 + iVar6 + 4);
        } while (iVar9 < iVar5);
      }
      uVar11 = __alldiv();
      iVar9 = 1;
      iVar5 = DAT_013f2a44 - DAT_013f2a40 >> 3;
      local_58 = uVar11;
      if (1 < iVar5) {
        do {
          plVar1 = (longlong *)(DAT_013f2a40 + iVar9 * 8);
          lVar12 = __allmul();
          iVar9 = iVar9 + 1;
          *plVar1 = lVar12 >> 0xf;
        } while (iVar9 < iVar5);
      }
      FUN_0047dc20();
      local_18 = (uint *)((int)local_18 + 3);
      local_28 = local_28 + 0x42;
      local_20 = local_20 + 1;
    } while (local_20 < (int)local_24);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xd;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  local_8 = CONCAT31(local_8._1_3_,9);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  (**(code **)(*piVar8 + 0x24))();
  for (uVar10 = *(uint *)(param_1 + 0x13c);
      (*(uint *)(param_1 + 0x13c) <= uVar10 && (uVar10 < *(uint *)(param_1 + 0x140)));
      uVar10 = uVar10 + 4) {
    FUN_00719ff0();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xe;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  local_8 = CONCAT31(local_8._1_3_,9);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  (**(code **)(*piVar8 + 0x24))();
  for (uVar10 = *(uint *)(param_1 + 0x14c);
      (*(uint *)(param_1 + 0x14c) <= uVar10 && (uVar10 < *(uint *)(param_1 + 0x150)));
      uVar10 = uVar10 + 4) {
    FUN_00719ff0();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xf;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  local_8._0_1_ = 9;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_007238b0(*(undefined4 *)(param_1 + 0x15c),uVar4);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_00409350("factory_needs_list");
  local_8._0_1_ = 0x10;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  local_8._0_1_ = 9;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_007238b0(*(undefined4 *)(param_1 + 0x1b8),uVar4,param_1 + 0x13c);
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  FUN_00409350("pop_needs_list",0xe);
  local_8._0_1_ = 0x11;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))(local_7c);
  local_8 = CONCAT31(local_8._1_3_,9);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  FUN_007238b0(*(undefined4 *)(param_1 + 0x214),uVar4,param_1 + 0x14c);
  if (local_140 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_140);
  }
  if (local_90 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90);
  }
  if (local_e8 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e8);
  }
  ExceptionList = local_10;
  return;
}

