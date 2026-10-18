// FUN_00803210 @ 00803210 body=[[00803210, 0080337d] [00803381, 008033ad] [008033b1, 008033d1] [008033d5, 00803558] [0080355e, 00803777] [0080377b, 00803898] [0080389c, 00803a43] [00803a47, 00803af8] [00803afc, 00803b68] [00803b6c, 00803bb2]]


void FUN_00803210(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined **local_e0 [5];
  uint local_cc;
  char local_c4 [8];
  undefined4 local_bc;
  uint local_b8;
  int local_b0;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_54;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  int local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5e878;
  local_10 = ExceptionList;
  local_20 = *(int *)(DAT_0125870c + 0x2ac4);
  iVar5 = param_3 * 0x3c0;
  local_18 = *(uint *)(iVar5 + 0x3b8 + *(int *)(param_1 + 0x19c));
  local_30 = *(uint *)(iVar5 + *(int *)(param_1 + 0x19c) + 0x3bc);
  uVar8 = 1;
  if (1 < local_30) {
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 * 2;
    } while (uVar8 < local_30);
  }
  uVar8 = 1;
  if (1 < local_18) {
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 * 2;
    } while (uVar8 < local_18);
  }
  local_64 = *(int *)(iVar5 + 0x3b0 + *(int *)(param_1 + 0x19c));
  local_60 = *(int *)(iVar5 + 0x3b4 + *(int *)(param_1 + 0x19c));
  DAT_013f08b8 = DAT_013f08b8 + 1;
  local_28 = (int *)0x0;
  ExceptionList = &local_10;
  if (DAT_013f08b8 % 100 == 1) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    pcVar6 = __itoa(param_3,local_c4,10);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8 = 1;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_007e1210();
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = 0xffffffff;
  iVar5 = local_30 * local_18;
  local_58 = iVar5;
  local_24 = (void *)FUN_00aad56b();
  _memset(local_24,0xff,iVar5 * 4);
  local_54 = (int)(0x100 / (longlong)local_20);
  local_34 = DAT_0125870c;
  local_1c = 0;
  local_20 = local_54 * 0x34;
  if (0 < iVar5) {
    do {
      iVar5 = local_64 + local_1c % (int)local_18;
      local_2c = local_60 + local_1c / (int)local_18;
      if ((iVar5 < 0) || (local_2c < 0)) {
        *(undefined1 *)((int)local_24 + local_1c * 4) = (undefined1)local_20;
      }
      else {
        iVar2 = *(int *)(local_34 + 0x2130);
        if (iVar5 < *(int *)(iVar2 + 4)) {
          if (local_2c < *(int *)(iVar2 + 8)) {
            uVar8 = (uint)*(byte *)(*(int *)(iVar2 + 0x18) * local_2c +
                                    *(int *)(iVar2 + 0xc) * iVar5 + *(int *)(iVar2 + 0x20));
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          uVar8 = 0;
        }
        iVar5 = *(int *)(local_34 + 0x2268 + uVar8 * 4);
        if (iVar5 == 0) {
          local_3c = 0xf;
          local_40 = 0;
          local_50 = local_50 & 0xffffff00;
          FUN_00409350();
          local_8 = 4;
          FUN_004015b0();
          local_8._0_1_ = 5;
          FUN_00987d20();
          FUN_00455470();
          FUN_00418e30();
          FUN_00455470();
          FUN_00401280();
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_00987ac0();
          FUN_00aad52d();
          local_8 = 0xffffffff;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        else if (*(char *)(*(int *)(iVar5 + 0xc) + 0x90) == '\0') {
          iVar5 = *(int *)(iVar5 + 100);
          if (iVar5 < 0) {
            iVar5 = 2;
          }
          *(char *)((int)local_24 + local_1c * 4) = (char)local_54 * (char)iVar5;
        }
        else {
          *(undefined1 *)((int)local_24 + local_1c * 4) = (undefined1)local_20;
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_58);
  }
  iVar5 = 0;
  if (0 < local_58) {
    local_34 = local_30 - 1;
    puVar9 = (undefined1 *)((int)local_24 + 3);
    local_1c = (int)local_24 - (int)puVar9;
    local_20 = (int)local_24 + (2 - (int)puVar9);
    local_2c = (int)local_24 + (1 - (int)puVar9);
    do {
      local_54 = iVar5 / (int)local_18;
      local_60 = iVar5 % (int)local_18;
      if (local_60 == 0) {
        uVar4 = puVar9[local_1c];
      }
      else {
        uVar4 = *(undefined1 *)((int)local_24 + iVar5 * 4 + -4);
      }
      puVar9[local_20] = uVar4;
      if (local_54 == local_34) {
        uVar4 = puVar9[local_1c];
      }
      else {
        uVar4 = *(undefined1 *)((int)local_24 + (local_18 + iVar5) * 4);
      }
      *puVar9 = uVar4;
      if ((local_54 == local_34) || (local_60 == 0)) {
        puVar9[local_2c] = puVar9[local_1c];
      }
      else {
        puVar9[local_2c] = *(undefined1 *)((int)local_24 + (iVar5 + local_18) * 4 + -4);
      }
      iVar5 = iVar5 + 1;
      puVar9 = puVar9 + 4;
    } while (iVar5 < local_58);
  }
  iVar5 = D3DXCreateTexture();
  if (iVar5 < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350();
    local_8 = 6;
    FUN_004015b0();
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_00987d20();
    FUN_00455470();
    FUN_00418e30();
    piVar7 = (int *)FUN_004931f0();
    FUN_00408be0();
    bVar3 = false;
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar5 == -1)) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_00401120();
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00987ac0();
    FUN_00aad52d();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar5 = (**(code **)(*local_28 + 0x4c))();
  if (iVar5 < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350();
    local_8 = 8;
    FUN_004015b0();
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_00987d20();
    FUN_00455470();
    FUN_00418e30();
    piVar7 = (int *)FUN_004931f0();
    FUN_00408be0();
    bVar3 = false;
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar5 == -1)) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_00401120();
    }
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00987ac0();
    FUN_00aad52d();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  (**(code **)(*local_28 + 0x44))();
  param_1 = 0;
  if (0 < (int)local_18) {
    do {
      iVar5 = 0;
      if (0 < (int)local_30) {
        iVar2 = param_1 * 4;
        puVar9 = (undefined1 *)(iVar2 + 2 + (int)local_24);
        do {
          *(undefined1 *)(local_6c * iVar5 + iVar2 + local_68) = puVar9[-2];
          *(undefined1 *)(local_6c * iVar5 + iVar2 + 1 + local_68) = puVar9[-1];
          *(undefined1 *)(local_6c * iVar5 + iVar2 + 2 + local_68) = *puVar9;
          *(undefined1 *)(local_6c * iVar5 + iVar2 + 3 + local_68) = puVar9[1];
          iVar5 = iVar5 + 1;
          puVar9 = puVar9 + local_18 * 4;
        } while (iVar5 < (int)local_30);
      }
      param_1 = param_1 + 1;
    } while (param_1 < (int)local_18);
  }
  iVar5 = (**(code **)(*local_28 + 0x50))();
  if (iVar5 < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350();
    local_8 = 10;
    FUN_004015b0();
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_00987d20();
    FUN_00455470();
    FUN_00418e30();
    piVar7 = (int *)FUN_004931f0();
    FUN_00408be0();
    bVar3 = false;
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar5 == -1)) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_00401120();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_00987ac0();
    FUN_00aad52d();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  D3DXSaveTextureToFileInMemory();
  (**(code **)(*local_5c + 0xc))();
  (**(code **)(*local_5c + 0x10))();
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8 = 0xc;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_e0,local_88,1);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00993720();
  local_8 = 0xffffffff;
  local_e0[0] = &PTR_FUN_00e37dc0;
  if (local_b0 != 0) {
    PHYSFS_close();
    local_b0 = 0;
  }
  local_e0[0] = &PTR_FUN_00e3b540;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  (**(code **)(*local_5c + 8))();
  FUN_00aaea59();
  (**(code **)(*local_28 + 8))();
  ExceptionList = local_10;
  return;
}

