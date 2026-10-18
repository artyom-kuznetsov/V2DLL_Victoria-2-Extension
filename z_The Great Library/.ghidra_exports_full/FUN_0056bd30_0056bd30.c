// FUN_0056bd30 @ 0056bd30 body=[[0056bd30, 0056bd68] [0056bd70, 0056bdf7] [0056bdfb, 0056bf7c] [0056bf80, 0056bfab] [0056bfaf, 0056bfcf]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0056bd30(int param_1)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *******pppppppuVar7;
  uint uVar8;
  uint local_110 [3];
  undefined4 *******pppppppuStack_104;
  undefined4 local_100;
  uint local_fc;
  uint local_f4;
  uint uStack_f0;
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b5ab6a;
  ppvVar3 = &local_14;
  iVar4 = *(int *)(param_1 + 0xa8);
  local_14 = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (iVar4 == 0) {
      ExceptionList = local_14;
      return;
    }
    local_c = 0xffffffff;
    iVar1 = *(int *)(iVar4 + 0x20);
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = local_f4 & 0xffffff00;
    FUN_00408ed0(iVar4,0,0xffffffff);
    local_c._0_1_ = 0;
    local_c._1_3_ = 0;
    iVar4 = DAT_0125eadc;
    if (DAT_0125eadc == 0) {
      iVar4 = FUN_00aae9af(0x9c);
      local_c._0_1_ = 1;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00576fe0(iVar4);
      }
      iVar2 = DAT_0125eadc;
      local_c = CONCAT31(local_c._1_3_,2);
      if ((iVar4 != DAT_0125eadc) && (DAT_0125eadc != 0)) {
        FUN_00576d10(DAT_0125eadc);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
    }
    DAT_0125eadc = iVar4;
    local_c._0_1_ = 0;
    iVar4 = FUN_005661b0(&local_f4);
    if (iVar4 == 0) {
      local_fc = 0xf;
      local_100 = 0;
      local_110[0] = local_110[0] & 0xffffff00;
      FUN_00409350("technology.cpp",0xe);
      local_c._0_1_ = 3;
      uVar6 = FUN_004015b0(local_110,0x368,0x10004);
      local_c = CONCAT31(local_c._1_3_,4);
      FUN_00987d50(uVar6,"Unknown invention \'",0x13,0);
      pppppppuVar7 = pppppppuStack_104;
      if (uStack_f0 < 0x10) {
        pppppppuVar7 = &pppppppuStack_104;
      }
      uVar6 = FUN_00418e30(uVar6,pppppppuVar7);
      piVar5 = (int *)FUN_00418e30(uVar6,"\' to remove.");
      FUN_00408be0(piVar5);
      uVar8 = 0;
      if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
         (iVar4 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))(),
         iVar4 == -1)) {
        uVar8 = 4;
      }
      if (uVar8 != 0) {
        uVar8 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar8;
        if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
          uVar8 = uVar8 | 4;
        }
        FUN_00401120(uVar8,0);
      }
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_110[0]);
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110[0] = local_110[0] & 0xffffff00;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xbc);
      piVar5 = (int *)FUN_00aae9af(0x10);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar4;
        piVar5[1] = iVar2;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar4 = *(int *)(param_1 + 0xc0);
      *(int **)(param_1 + 0xbc) = piVar5;
      *(int *)(param_1 + 0xc0) = iVar4 + 1;
      if (iVar4 == 0) {
        *(int **)(param_1 + 0xb8) = piVar5;
      }
      else {
        *(int **)(iVar2 + 8) = piVar5;
      }
    }
    local_c = 0xffffffff;
    ppvVar3 = ExceptionList;
    iVar4 = iVar1;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4);
    }
  } while( true );
}

