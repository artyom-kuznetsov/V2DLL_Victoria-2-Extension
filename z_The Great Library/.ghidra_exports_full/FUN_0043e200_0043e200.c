// FUN_0043e200 @ 0043e200 body=[[0043e200, 0043e2f7] [0043e2fb, 0043e324] [0043e328, 0043e357] [0043e35b, 0043e607] [0043e60b, 0043e707] [0043e70b, 0043e732] [0043e736, 0043e763] [0043e767, 0043e79a] [0043e79e, 0043e7d6] [0043e7da, 0043e84e] [0043e852, 0043e917]]


void FUN_0043e200(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  int in_ECX;
  int iVar9;
  int unaff_ESI;
  float10 fVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uStack_dc;
  int iStack_d8;
  uint auStack_d0 [3];
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  uint auStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b77652;
  local_14 = ExceptionList;
  iVar7 = *(int *)(in_ECX + 0x14);
  if ((iVar7 != 0) && (*(int *)(in_ECX + 0x10) != 0)) {
    if (*(int *)(iVar7 + 0x244) == 4) {
      ExceptionList = &local_14;
      FUN_0043e090();
      ExceptionList = local_14;
      return;
    }
    ExceptionList = &local_14;
    (**(code **)(**(int **)(in_ECX + 0x14) + 0x20))();
    puStack_10 = (undefined1 *)0x0;
    FUN_004a7140();
    puStack_10._0_1_ = 1;
    FUN_0043ec10(auStack_d0,&DAT_00df8314);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    auStack_d0[0] = auStack_d0[0] & 0xffffff00;
    if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    uStack_84 = 0xf;
    uStack_88 = 0;
    uStack_98 = uStack_98 & 0xffffff00;
    if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_7c = *(undefined4 *)(in_ECX + 0xc);
    uStack_a0 = 0xf;
    uStack_a4 = 0;
    uStack_b4 = uStack_b4 & 0xffffff00;
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x10) * 4);
    uVar2 = *(uint *)(iVar1 + 0xe78);
    iVar1 = *(int *)(iVar1 + 0xe7c);
    uVar3 = *(uint *)(iVar7 + 0x228);
    iVar7 = *(int *)(iVar7 + 0x22c);
    FUN_004a5020();
    uVar4 = (uint)(uStack_dc < uVar3);
    uVar5 = iStack_d8 - iVar7;
    iVar9 = uVar5 - uVar4;
    if ((iVar9 < 0) ||
       ((uVar5 == uVar4 || SBORROW4(iStack_d8,iVar7) != SBORROW4(uVar5,uVar4) &&
        (uStack_dc == uVar3)))) {
      iVar7 = *(int *)(in_ECX + 0xac);
      *(undefined1 *)(iVar7 + 0x25b) = 1;
      (**(code **)(**(int **)(iVar7 + 0xac) + 0xbc))();
    }
    else {
      iVar7 = *(int *)(in_ECX + 0xac);
      if (*(char *)(iVar7 + 0x25b) != '\0') {
        (**(code **)(**(int **)(iVar7 + 0xac) + 0xb8))();
      }
      *(undefined1 *)(iVar7 + 0x25b) = 0;
      if ((iVar1 <= iVar9) && ((iVar1 < iVar9 || (uVar2 < uStack_dc - uVar3)))) {
        __alldiv(uVar2 << 0xf);
        FUN_00401000();
        FUN_00b31c00();
      }
      (**(code **)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 0x34))();
      fVar10 = (float10)(**(code **)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 0x10))();
      if ((float10)((float)unaff_ESI / 1000.0) < fVar10) {
        FUN_009cc710();
      }
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 0x10))();
    uVar11 = FUN_00b31c36();
    lVar12 = __allmul(uVar11);
    uStack_80 = (undefined4)(lVar12 >> 0xf);
    uVar6 = FUN_0043e0d0(auStack_74);
    local_14 = (void *)0x3;
    FUN_00408ed0(uVar6);
    FUN_00a5ecc0();
    local_14 = (void *)0xffffffff;
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    FUN_00409350();
    local_14 = (void *)0x4;
    FUN_0043e0d0(auStack_74);
    local_14._0_1_ = 5;
    FUN_0043e0d0(auStack_58);
    local_14._0_1_ = 6;
    FUN_00988f20();
    local_14._0_1_ = 7;
    uVar6 = FUN_00988f20();
    local_14 = (void *)CONCAT31(local_14._1_3_,8);
    FUN_00408ed0(uVar6);
    FUN_00a5ecc0();
    if (0xf < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_a4 = 0xf;
    uStack_a8 = 0;
    uStack_b8 = uStack_b8 & 0xffffff00;
    if (0xf < uStack_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_88 = 0xf;
    uStack_8c = 0;
    uStack_9c = uStack_9c & 0xffffff00;
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    auStack_58[0] = auStack_58[0] & 0xffffff00;
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_14 = (void *)0xffffffff;
    uStack_60 = 0xf;
    uStack_64 = 0;
    auStack_74[0] = auStack_74[0] & 0xffffff00;
    if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uVar6 = FUN_0043e0d0(auStack_3c);
    local_14 = (void *)0x9;
    FUN_00408ed0(uVar6);
    FUN_00a5ecc0();
    local_14 = (void *)0xffffffff;
    if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_28 = 0xf;
    uStack_2c = 0;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    iVar7 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xac) + 0xac) + 0xb0))();
    if ((iVar7 == 3) ||
       (fVar10 = (float10)(**(code **)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 0x10))(),
       fVar10 <= (float10)0)) {
      pcVar8 = *(code **)(**(int **)(in_ECX + 0x20) + 0xbc);
    }
    else {
      pcVar8 = *(code **)(**(int **)(in_ECX + 0x20) + 0xb8);
    }
    (*pcVar8)();
    iVar7 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xac) + 0xac) + 0xb0))();
    if (iVar7 == 3) {
      (**(code **)(**(int **)(in_ECX + 0x24) + 0xbc))();
      ExceptionList = pvStack_1c;
      return;
    }
    (**(code **)(**(int **)(in_ECX + 0x24) + 0xb8))();
  }
  ExceptionList = local_14;
  return;
}

