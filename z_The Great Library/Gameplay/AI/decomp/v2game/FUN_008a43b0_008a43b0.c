// FUN_008a43b0 @ 008a43b0 body=[[008a43b0, 008a4449] [008a444d, 008a4463] [008a4467, 008a4592] [008a4596, 008a4612] [008a4616, 008a46be] [008a46c2, 008a46e1] [008a46e5, 008a476c] [008a4770, 008a4795] [008a4799, 008a47b8] [008a47bc, 008a47d5] [008a47d9, 008a47f2] [008a47f6, 008a480b]]


/* WARNING: Removing unreachable block (ram,0x008a4519) */

undefined4 FUN_008a43b0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  uint in_stack_00000020;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  char *local_24 [2];
  uint local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b792ab;
  local_10 = ExceptionList;
  local_18 = (char *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  cVar1 = FUN_008a42c0();
  iVar2 = local_14;
  if (cVar1 == '\0') {
    local_1c = 0xf;
    local_24[1] = (char *)0x0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 1;
    FUN_00988fa0();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00988f20();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_24[1] = (char *)0x0;
    local_30 = local_30 & 0xffffff00;
    goto joined_r0x008a4473;
  }
  iVar5 = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_2 + 0x30) != 0) {
      local_1c = *(undefined4 *)(param_2 + 0x2c);
      iVar5 = *(int *)(param_2 + 0x30);
      goto LAB_008a449c;
    }
  }
  else {
    local_1c = *(undefined4 *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0xc);
LAB_008a449c:
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  piVar6 = *(int **)(iVar5 + 0x83c);
  if (piVar6 != (int *)0x0) {
    local_50 = *(uint *)(iVar2 + 0x34);
    local_54 = *(undefined4 *)(iVar2 + 0x38);
    do {
      local_18 = (char *)*piVar6;
      piVar6 = (int *)piVar6[2];
      uVar3 = *(uint *)(*(int *)(local_18 + 0x54) + 0x1c);
      iVar2 = FUN_00414bd0();
      bVar7 = false;
      if (iVar2 == 0) {
        if (uVar3 < local_50) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(uVar3 != local_50);
        }
        bVar7 = uVar3 == 0;
      }
      if (bVar7) {
        FUN_009790b0();
        local_8._0_1_ = 4;
        FUN_00408ed0();
        local_8._0_1_ = 3;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        break;
      }
    } while (piVar6 != (int *)0x0);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  iVar2 = *(int *)(local_14 + 0x20);
  if ((((iVar2 != 0) || (iVar2 = *(int *)(param_2 + 0x10), 0 < iVar2)) ||
      (iVar2 = *(int *)(param_2 + 0x34), 0 < iVar2)) &&
     (piVar6 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4), piVar6 != (int *)0x0)) {
    (**(code **)(*piVar6 + 0x1c))();
    local_8._0_1_ = 6;
    FUN_00408ed0();
    local_8._0_1_ = 5;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 5;
  local_24[0] = "PARTY_LOYALTY_EFFECT_OPERATOR_ADD";
  local_24[1] = "PARTY_LOYALTY_EFFECT_OPERATOR_REM";
  local_1c = 0xe2a770;
  local_18 = "PARTY_LOYALTY_EFFECT_OPERATOR_SET";
  pcVar4 = local_24[*(int *)(local_14 + 0x48)];
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 7;
  FUN_009a8ee0();
  local_8._0_1_ = 8;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
  local_8._0_1_ = 0xb;
  FUN_009adb70();
  if (local_24[0] != (char *)0x0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24[0] = (char *)0x0;
  local_24[1] = (char *)0x0;
  local_1c = 0;
  local_8._0_1_ = 0xc;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00988bb0(local_a8,4);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  FUN_0047b810(param_1,"PARTY",local_8c,&DAT_00df85c0,local_70,"OPERATOR",local_c4);
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
joined_r0x008a4473:
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

