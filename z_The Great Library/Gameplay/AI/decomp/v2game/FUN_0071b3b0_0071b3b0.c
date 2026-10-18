// FUN_0071b3b0 @ 0071b3b0 body=[[0071b3b0, 0071b55a] [0071b55e, 0071b5d3] [0071b5d7, 0071b630] [0071b637, 0071b6b7] [0071b6bb, 0071b7bf] [0071b7c3, 0071b81c] [0071b820, 0071b832]]


/* WARNING: Removing unreachable block (ram,0x0071b7e1) */
/* WARNING: Removing unreachable block (ram,0x0071b4de) */
/* WARNING: Removing unreachable block (ram,0x0071b50a) */
/* WARNING: Removing unreachable block (ram,0x0071b7fa) */

void FUN_0071b3b0(int *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint **ppuVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  code *pcVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  uint **local_78;
  uint **local_74;
  char **local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  char **local_2c;
  int local_28;
  char **local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44550;
  local_10 = ExceptionList;
  iVar3 = *param_1;
  iVar4 = *(int *)(DAT_012588e8 + 0xbcc);
  piVar11 = (int *)(*(int *)(iVar4 + 0x3e4) +
                   (uint)*(byte *)(*(int *)(iVar3 + 8) + 0x3a4 + iVar4) * 8);
  local_2c = (char **)*piVar11;
  iVar5 = piVar11[1];
  if ((iVar5 < 1) && ((iVar5 < 0 || (local_2c == (char **)0x0)))) {
    local_74 = (uint **)0x71b416;
    ExceptionList = &local_10;
    (**(code **)(*(int *)(param_1[1] + 0x18) + 0x38))();
    ExceptionList = local_10;
    return;
  }
  local_1c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_18 = *(int *)(iVar3 + 8);
  uVar12 = (uint)*(byte *)(iVar4 + 0x288 + local_18);
  iVar5 = *(int *)(*(int *)(iVar4 + 0x2c8) + 4 + uVar12 * 8);
  local_2c = *(char ***)(*(int *)(iVar4 + 0x2c8) + uVar12 * 8);
  local_24 = *(char ***)(iVar3 + 0x30);
  local_20 = *(int *)(iVar3 + 0x34);
  if ((iVar5 < local_20) || ((iVar5 <= local_20 && (local_2c <= local_24)))) {
    local_78 = (uint **)&DAT_00df8510;
  }
  else {
    local_78 = (uint **)&DAT_00df8518;
  }
  local_14 = (int *)((int)local_78 + 1);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ppuVar8 = local_78;
  do {
    cVar2 = *(char *)ppuVar8;
    ppuVar8 = (uint **)((int)ppuVar8 + 1);
  } while (cVar2 != '\0');
  local_74 = (uint **)((int)ppuVar8 - (int)local_14);
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  local_74 = (uint **)0x71b4c2;
  uVar14 = FUN_00b31c36();
  local_74 = (uint **)local_20;
  local_78 = (uint **)local_24;
  lVar15 = __allmul(uVar14);
  if (lVar15 >> 0xf < CONCAT44(iVar5,local_2c)) {
    local_74 = (uint **)0x71b4ee;
    uVar14 = FUN_00b31c36();
    local_74 = (uint **)local_20;
    local_78 = (uint **)local_24;
    lVar15 = __allmul(uVar14);
    if (CONCAT44(iVar5,local_2c) < lVar15 >> 0xf) {
      local_74 = (uint **)0x2;
      local_78 = (uint **)&DAT_00e05104;
      FUN_00409350();
    }
  }
  local_14 = (int *)&local_78;
  local_78 = (uint **)local_2c;
  local_74 = (uint **)iVar5;
  uVar9 = FUN_00988bb0(local_64,1);
  local_74 = (uint **)0xffffffff;
  local_78 = (uint **)0x0;
  local_8._0_1_ = 1;
  FUN_00448aa0(uVar9);
  local_8._0_1_ = 0;
  if (0xf < local_50) {
    local_74 = (uint **)local_64[0];
                    /* WARNING: Subroutine does not return */
    local_78 = (uint **)&UNK_0071b55b;
    FUN_00aae91b();
  }
  local_74 = (uint **)0x1;
  local_78 = (uint **)&DAT_00df830c;
  FUN_00448740();
  local_74 = (uint **)0x5;
  local_78 = (uint **)0xe114e0;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (char **)((uint)local_64[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 2;
  local_74 = (uint **)local_64;
  local_78 = (uint **)0x71b59e;
  (**(code **)(*(int *)param_1[1] + 0x3c))();
  local_78 = (uint **)0xffffffff;
  FUN_00408ed0(local_48,0);
  local_78 = (uint **)0x0;
  FUN_00a5ecc0(local_48);
  local_8._0_1_ = 0;
  if (0xf < local_50) {
    local_78 = (uint **)local_64[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = (uint **)0x14;
  iVar3 = *(int *)(local_1c + 0x12a0) + local_18 * 0x18;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (char **)((uint)local_64[0] & 0xffffff00);
  FUN_00409350("automation_indicator");
  local_8._0_1_ = 3;
  local_78 = (uint **)local_64;
  local_14 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (char **)((uint)local_64[0] & 0xffffff00);
  if (*(char *)(iVar3 + 0x11) == '\0') {
    pcVar13 = *(code **)(*local_14 + 0x104);
LAB_0071b670:
    (*pcVar13)();
  }
  else {
    (**(code **)(*local_14 + 0x108))();
    if (*(char *)(param_1[1] + 0x67) != '\0') {
      pcVar13 = *(code **)(*local_14 + 0x34);
      goto LAB_0071b670;
    }
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (char **)((uint)local_64[0] & 0xffffff00);
  FUN_00409350("selling_indicator",0x11);
  local_8._0_1_ = 4;
  local_14 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))(local_64);
  local_8._0_1_ = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (char **)((uint)local_64[0] & 0xffffff00);
  if (*(char *)(iVar3 + 0x10) == '\0') {
    puVar1 = (uint *)(*(int *)(local_1c + 0x11cc) +
                     (uint)*(byte *)(local_1c + 0x118c + local_18) * 8);
    uVar12 = *puVar1;
    uVar6 = puVar1[1];
    uVar10 = (uint)(uVar12 < *(uint *)(iVar3 + 8));
    iVar5 = uVar6 - *(int *)(iVar3 + 0xc);
    local_28 = iVar5 - uVar10;
    if ((-1 < local_28) &&
       ((local_28 != 0 && SBORROW4(uVar6,*(int *)(iVar3 + 0xc)) == SBORROW4(iVar5,uVar10) ||
        (uVar12 != *(uint *)(iVar3 + 8))))) {
      uVar9 = 3;
      goto LAB_0071b737;
    }
  }
  else {
    uVar12 = (uint)*(byte *)(local_1c + 0x118c + local_18);
    iVar5 = *(int *)(*(int *)(local_1c + 0x11cc) + 4 + uVar12 * 8);
    uVar12 = *(uint *)(*(int *)(local_1c + 0x11cc) + uVar12 * 8);
    uVar6 = (uint)(*(uint *)(iVar3 + 8) < uVar12);
    iVar7 = *(int *)(iVar3 + 0xc) - iVar5;
    local_28 = iVar7 - uVar6;
    if ((-1 < local_28) &&
       ((local_28 != 0 && SBORROW4(*(int *)(iVar3 + 0xc),iVar5) == SBORROW4(iVar7,uVar6) ||
        (*(uint *)(iVar3 + 8) != uVar12)))) {
      uVar9 = 2;
      goto LAB_0071b737;
    }
  }
  uVar9 = 1;
LAB_0071b737:
  (**(code **)(*local_14 + 0x48))(uVar9);
  uVar10 = (uint)*(byte *)(iVar4 + 0x288 + *(int *)(*param_1 + 8));
  puVar1 = (uint *)(*(int *)(iVar4 + 800) +
                   (uint)*(byte *)(iVar4 + 0x2e0 + *(int *)(*param_1 + 8)) * 8);
  uVar12 = *puVar1;
  uVar6 = *(uint *)(*(int *)(iVar4 + 0x2c8) + uVar10 * 8);
  lVar15 = CONCAT44((*(int *)(*(int *)(iVar4 + 0x2c8) + 4 + uVar10 * 8) - puVar1[1]) -
                    (uint)(uVar6 < uVar12),uVar6 - uVar12);
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (char **)((uint)local_64[0] & 0xffffff00);
  FUN_00409350("trend_indicator",0xf);
  local_8._0_1_ = 5;
  piVar11 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))(local_64);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (char **)((uint)local_64[0] & 0xffffff00);
  lVar16 = FUN_00b31c36();
  if (lVar16 < lVar15) {
    uVar9 = 1;
  }
  else {
    lVar16 = FUN_00b31c36();
    if (lVar15 < lVar16) {
      uVar9 = 3;
    }
    else {
      uVar9 = 2;
    }
  }
  (**(code **)(*piVar11 + 0x48))(uVar9);
  if (local_34 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

