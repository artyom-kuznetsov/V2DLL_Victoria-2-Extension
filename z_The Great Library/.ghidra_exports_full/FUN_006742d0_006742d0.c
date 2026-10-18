// FUN_006742d0 @ 006742d0 body=[[006742d0, 006743a6] [006743aa, 006743e0] [006743e4, 00674475] [00674479, 006744e6] [006744ea, 00674556] [0067455a, 0067484b] [0067484f, 00674875] [00674879, 006748ad] [006748b1, 0067496d] [00674971, 006749b8] [006749bc, 00674a30] [00674a34, 00674a48] [00674a52, 00674a68]]


/* WARNING: Removing unreachable block (ram,0x0067454d) */
/* WARNING: Removing unreachable block (ram,0x006744dd) */

void FUN_006742d0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  uint uStack_104;
  uint uStack_ec;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [20];
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_90;
  int *piStack_8c;
  int *piStack_88;
  uint uStack_84;
  undefined1 local_7c [8];
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 auStack_64 [4];
  undefined1 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 uStack_40;
  uint uStack_3c;
  int *piStack_34;
  int iStack_30;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6f5fd;
  pvStack_14 = ExceptionList;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("settings",8);
  local_c = 0;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = 0;
  FUN_00409350("menu_message_settings",0x15);
  local_c = CONCAT31(local_c._1_3_,1);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1d24) + 0x6c))(local_7c);
  piStack_88 = (int *)(**(code **)(*piVar2 + 0x7c))(auStack_64);
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_84);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_70 = 0xf;
  uStack_74 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  uStack_54 = 0xf;
  uStack_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (*(char *)(*(int *)(param_1 + 0x1d24) + 0x67) != '\0') {
    (**(code **)(*piStack_88 + 0x5c))();
    uStack_c8 = 0xf;
    uStack_cc = 0;
    uStack_dc = uStack_dc & 0xffffff00;
    FUN_00409350();
    pvStack_14 = (void *)0x2;
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1d24) + 0x6c))(&uStack_dc);
    uStack_18 = 0xffffffff;
    if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_cc = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    if (piVar2 != (int *)0x0) {
      uStack_ec = 0xf;
      FUN_00409350("messagecat_combat",0x11);
      uStack_18 = 3;
      iVar3 = (**(code **)(*piVar2 + 0x48))();
      uStack_18 = 0xffffffff;
      if (*(int *)(iVar3 + 0x6c) == 1) {
        unaff_ESI = 0;
      }
      else {
        uStack_ec = 0xf;
        FUN_00409350("messagecat_diplomacy",0x14);
        uStack_18 = 4;
        iVar3 = (**(code **)(*piVar2 + 0x48))();
        uStack_18 = 0xffffffff;
        if (*(int *)(iVar3 + 0x6c) == 1) {
          unaff_ESI = 1;
        }
        else {
          FUN_009885d0();
          uStack_18 = 5;
          iVar3 = (**(code **)(*piVar2 + 0x48))();
          iVar3 = *(int *)(iVar3 + 0x6c);
          uStack_18 = 0xffffffff;
          FUN_00408ad0();
          if (iVar3 == 1) {
            unaff_ESI = 2;
          }
          else {
            FUN_009885d0();
            uStack_18 = 6;
            iVar3 = (**(code **)(*piVar2 + 0x48))();
            iVar3 = *(int *)(iVar3 + 0x6c);
            uStack_18 = 0xffffffff;
            FUN_00408ad0();
            if (iVar3 == 1) {
              unaff_ESI = 3;
            }
            else {
              FUN_009885d0();
              uStack_18 = 7;
              iVar3 = (**(code **)(*piVar2 + 0x48))();
              iVar3 = *(int *)(iVar3 + 0x6c);
              uStack_18 = 0xffffffff;
              FUN_00408ad0();
              if (iVar3 == 1) {
                unaff_ESI = 4;
              }
              else {
                FUN_009885d0();
                uStack_18 = 8;
                iVar3 = (**(code **)(*piVar2 + 0x48))();
                iVar3 = *(int *)(iVar3 + 0x6c);
                uStack_18 = 0xffffffff;
                FUN_00408ad0();
                if (iVar3 == 1) {
                  unaff_ESI = 5;
                }
              }
            }
          }
        }
      }
    }
    if (DAT_01262ef4 == 0) {
      iVar3 = FUN_00aae9af();
      uStack_18 = 9;
      if (iVar3 != 0) {
        FUN_006a4e30();
      }
      uStack_18 = 0xffffffff;
      FUN_006a59b0();
    }
    FUN_006a56f0();
    uStack_18 = 10;
    for (piVar2 = piStack_34; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if ((unaff_ESI == 6) || (*(int *)(*piVar2 + 8) == unaff_ESI)) {
        uStack_94 = 0xf;
        uStack_98 = 0;
        uStack_a8 = uStack_a8 & 0xffffff00;
        FUN_00409350("_SETUP",6);
        uStack_18._0_1_ = 0xb;
        uVar4 = FUN_00988f20();
        uStack_18._0_1_ = 0xc;
        FUN_009a8ee0(&uStack_e0,uVar4);
        uStack_18._0_1_ = 0xd;
        puVar5 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          iVar3 = FUN_00aae9af();
          uStack_18._0_1_ = 0xe;
          if (iVar3 == 0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)FUN_00475150();
          }
          uStack_18._0_1_ = 0xf;
          if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar5;
        uStack_18._0_1_ = 0xd;
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
        uStack_18._0_1_ = 0x12;
        FUN_009adb70();
        if (uStack_dc != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        local_50 = local_50 & 0xffffff00;
        uStack_18._0_1_ = 0x14;
        if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_94 = 0xf;
        uStack_98 = 0;
        uStack_a8 = uStack_a8 & 0xffffff00;
        cVar1 = FUN_006741e0(param_1,auStack_c4);
        if (cVar1 != '\0') {
          iVar3 = FUN_00aae9af();
          uStack_18._0_1_ = 0x15;
          if (iVar3 != 0) {
            uStack_ec = 0xf;
            FUN_00409350("message_entry",0xd);
            uStack_18 = CONCAT31(uStack_18._1_3_,0x16);
            uStack_104 = uStack_104 | 1;
            FUN_0066ff10();
          }
          uStack_18._0_1_ = 0x14;
          uStack_18._1_3_ = 0;
          if ((uStack_104 & 1) != 0) {
            uStack_104 = 0;
            if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_ec = 0xf;
          }
          FUN_006706c0();
          (**(code **)(*piStack_8c + 0x10))();
        }
        uStack_18 = CONCAT31(uStack_18._1_3_,10);
        if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    uStack_94 = 0xf;
    uStack_98 = 0;
    uStack_a8 = uStack_a8 & 0xffffff00;
    FUN_00409350("menu_message_settings",0x15);
    uStack_18 = CONCAT31(uStack_18._1_3_,0x18);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x1d24) + 0x6c))();
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
    if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_a4);
    }
    if (iStack_30 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_30);
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

