// FUN_00562570 @ 00562570 body=[[00562570, 005625f5] [005625f9, 0056266c] [00562670, 00562690] [00562694, 005628ca] [005628ce, 005628f8] [005628fc, 00562921] [00562925, 0056294a] [0056294e, 00562973] [00562977, 005629ac] [005629b0, 005629ce] [005629d2, 005629f6] [005629fa, 00562a19] [00562a1d, 00562a39] [00562a3d, 00562a5c] [00562a60, 00562a77] [00562a7b, 00562a8f]]


/* WARNING: Removing unreachable block (ram,0x00562a2e) */
/* WARNING: Removing unreachable block (ram,0x005629c3) */
/* WARNING: Removing unreachable block (ram,0x00562a11) */
/* WARNING: Removing unreachable block (ram,0x00562a54) */
/* WARNING: Removing unreachable block (ram,0x00562688) */

undefined1 * FUN_00562570(int *param_1,undefined1 *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  int local_158;
  uint local_154;
  uint local_138;
  uint local_11c;
  uint local_100;
  uint local_e4;
  uint local_c8;
  uint local_ac;
  uint local_3c;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b8eee9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  FUN_0056aef0();
  local_8 = 1;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(*param_1 + 0x1c))();
  local_8 = 2;
  if (1 < local_158) {
    FUN_00409350();
    local_8._0_1_ = 3;
    FUN_00988f20();
    local_8._0_1_ = 4;
    FUN_00448aa0();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
  }
  iVar2 = param_1[0xf7];
  if (iVar2 != 0) {
    if (param_1[0x14] < *(int *)(DAT_012588e8 + 0xc04) - *(int *)(DAT_012588e8 + 0xc00) >> 2) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xc00) + param_1[0x14] * 4);
    }
    else {
      iVar3 = 0;
    }
    iVar3 = ((uint)(param_4 == '\0') + iVar3) * 1000;
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else if (iVar2 + 0x189373U < 0x39580e) {
      iVar3 = (iVar2 * 1000) / iVar3;
    }
    else {
      uVar5 = __allmul(iVar2,iVar2 >> 0x1f);
      iVar3 = __alldiv(uVar5);
    }
    if (iVar3 < 1000) {
      iVar3 = 1000;
    }
    FUN_00409350();
    local_8._0_1_ = 5;
    pcVar4 = &DAT_00dfd24c;
    if (iVar3 < 0) {
      pcVar4 = &DAT_00df8510;
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 6;
    FUN_00409350();
    local_8._0_1_ = 7;
    FUN_00988a50();
    local_8._0_1_ = 8;
    FUN_00409350();
    local_8._0_1_ = 9;
    FUN_009a8ee0();
    local_8._0_1_ = 10;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    FUN_00988f20();
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    FUN_00448aa0();
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

