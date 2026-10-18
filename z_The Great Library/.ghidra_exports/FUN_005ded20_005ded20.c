// FUN_005ded20 @ 005ded20  (requested 005DED20, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_005ded20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined ***pppuVar6;
  undefined **local_a8;
  undefined **local_a4;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb7bfb;
  local_14 = ExceptionList;
  if (DAT_0125882c == 0) {
    iVar4 = DAT_01258a94;
    if (*(uint *)(param_1 + 0x40) < 0x1269) {
      iVar4 = DAT_01258a98;
    }
    ExceptionList = &local_14;
    if ((iVar4 == 0) || (ExceptionList = &local_14, iVar4 = FUN_009c1d40(), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + -8;
    }
    *(int *)(param_1 + 0x3c) = iVar4;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    local_c = 0;
    local_a0 = CPathFind::vftable;
    local_a4 = CSafePathFind::vftable;
    local_a8 = CVerySafePathFind::vftable;
    if ((((char)param_3 == '\0') && (iVar1 = *(int *)(iVar4 + 0xec), 0 < iVar1)) &&
       (*(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar4 + 0xe8) * 4) != 0)) {
      if (*(char *)(param_1 + 0x8a) == '\0') {
        uVar5 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4);
        if (*(char *)(param_1 + 0x89) == '\0') {
          if (iVar1 < 1) {
            pppuVar6 = &local_a0;
          }
          else {
            pppuVar6 = &local_a0;
          }
        }
        else if (iVar1 < 1) {
          pppuVar6 = &local_a4;
        }
        else {
          pppuVar6 = &local_a4;
        }
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4);
        if (iVar1 < 1) {
          pppuVar6 = &local_a8;
        }
        else {
          pppuVar6 = &local_a8;
        }
      }
    }
    else if (*(char *)(param_1 + 0x8a) == '\0') {
      uVar5 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4);
      pppuVar6 = &local_a4;
      if (*(char *)(param_1 + 0x89) == '\0') {
        pppuVar6 = &local_a0;
      }
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4);
      pppuVar6 = &local_a8;
    }
    cVar3 = FUN_005b8500(pppuVar6,iVar4,uVar5,&local_9c);
    if (cVar3 != '\0') {
      FUN_005d1bb0(&local_9c,param_3);
      uVar5 = DAT_01259abc;
      iVar1 = DAT_012588e8;
      *(undefined4 *)(iVar4 + 0xa8) = DAT_01259abc;
      *(undefined4 *)(iVar4 + 0xac) = uVar5;
      cVar3 = (**(code **)(**(int **)(iVar1 + 0xb24) + 0x144))();
      if (cVar3 != '\0') {
        uStack_58 = 0xf;
        uStack_5c = 0;
        auStack_6c[0] = auStack_6c[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_c._0_1_ = 1;
        uStack_74 = 0xf;
        uStack_78 = 0;
        auStack_88[0] = auStack_88[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_c._0_1_ = 2;
        piVar2 = *(int **)(DAT_012588e8 + 0xb24);
        uVar5 = FUN_009888f0(auStack_34);
        local_c._0_1_ = 3;
        uVar5 = FUN_00988fa0(uVar5);
        local_c = CONCAT31(local_c._1_3_,4);
        (**(code **)(*piVar2 + 0x120))(uVar5,auStack_88,auStack_6c,0);
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_50);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        uStack_50 = uStack_50 & 0xffffff00;
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_34[0]);
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        auStack_34[0] = auStack_34[0] & 0xffffff00;
        if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_88[0]);
        }
        uStack_74 = 0xf;
        uStack_78 = 0;
        auStack_88[0] = auStack_88[0] & 0xffffff00;
        if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_6c[0]);
        }
      }
    }
    FUN_00849e90();
  }
  ExceptionList = local_14;
  return;
}

