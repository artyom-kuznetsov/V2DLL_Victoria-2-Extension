// FUN_00543e80 @ 00543e80 body=[[00543e80, 005440c2] [005440c6, 005440ea] [005440ee, 00544109] [0054410d, 0054412e] [00544132, 0054415a] [0054415e, 00544193]]


undefined1 * FUN_00543e80(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uStack_d0;
  uint *puStack_c8;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 local_28;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_00b8f097;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_20 = 1;
  iVar4 = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  if (0 < iVar4) {
    piVar8 = *(int **)(param_1 + 0x1590);
    iVar7 = 0;
    do {
      if (*(int *)(*piVar8 + 0xc) == in_ECX) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1590) + iVar7 * 4);
        goto LAB_00543ef5;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar7 < iVar4);
  }
  iVar4 = 0;
LAB_00543ef5:
  param_1 = 1;
  if (iVar4 != 0) {
    param_1 = *(int *)(iVar4 + 0x28) + 1;
  }
  iVar4 = *(int *)(iVar2 + 0x1594) - *(int *)(iVar2 + 0x1590) >> 2;
  local_14 = 0;
  local_18 = iVar4;
  if (0 < iVar4) {
    do {
      iVar7 = local_14 * 4;
      piVar8 = *(int **)(*(int *)(iVar7 + *(int *)(iVar2 + 0x1590)) + 0xc);
      if (piVar8 != (int *)0x0) {
        puStack_c8 = (uint *)0x543f48;
        cVar3 = (**(code **)(*piVar8 + 0x34))();
        if ((cVar3 != '\0') &&
           (local_1c = *(undefined1 **)(*(int *)(iVar7 + *(int *)(iVar2 + 0x1590)) + 0x28),
           (int)param_1 < (int)local_1c)) {
          uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0xb8);
          uStack_d0._0_4_ =
               (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2;
          puStack_c8 = (uint *)0x0;
          uStack_d0._4_4_ = (char *)0x1f40000;
          uVar9 = __alldiv(uVar1 << 0x1e);
          local_28 = (undefined4)((ulonglong)uVar9 >> 0x20);
          puStack_c8 = (uint *)(((int)param_1 >> 0x1f) << 0xf | param_1 >> 0x11);
          uStack_d0._0_4_ =
               (((int)local_1c >> 0x1f) << 0xf | (uint)local_1c >> 0x11) << 0xf |
               ((uint)local_1c & 0x1ffff) >> 2;
          uStack_d0._4_4_ = (char *)(param_1 << 0xf);
          uVar10 = __alldiv((int)local_1c << 0x1e);
          iVar4 = (int)((ulonglong)uVar10 >> 0x20);
          uVar5 = (uint)uVar10 - 0x8000;
          uVar1 = (uint)((uint)uVar10 < 0x8000);
          uStack_d0._0_4_ = iVar4 - uVar1;
          if ((-1 < (int)(uint)uStack_d0) &&
             (((uint)uStack_d0 != 0 && (int)uVar1 <= iVar4 || (0x18000 < uVar5)))) {
            uVar5 = 0x18000;
            uStack_d0._0_4_ = 0;
          }
          puStack_c8 = (uint *)local_28;
          uStack_d0._4_4_ = (char *)(int)uVar9;
          lVar11 = __allmul(uVar5);
          puStack_c8 = (uint *)0x1;
          uStack_d0._4_4_ = (char *)&DAT_00dee2cc;
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          uStack_d0._0_4_ = 0x544014;
          FUN_00409350();
          puStack_c8 = (uint *)0x0;
          local_1c = (undefined1 *)&uStack_d0;
          local_8 = 1;
          uStack_d0 = lVar11 >> 0xf;
          uVar6 = FUN_009c8700(local_b8);
          local_8._0_1_ = 2;
          puStack_c8 = (uint *)(iVar2 + 0x1c);
          uStack_d0._4_4_ = (char *)local_80;
          uStack_d0._0_4_ = 0x544062;
          uStack_d0._0_4_ = FUN_00471d20();
          uStack_d0._4_4_ = "AMOUNT";
          local_8._0_1_ = 3;
          puStack_c8 = (uint *)uVar6;
          FUN_0043ec10(local_64,"MOVEMENT");
          puStack_c8 = local_48;
          local_8._0_1_ = 4;
          uStack_d0._4_4_ = (char *)0x544098;
          uStack_d0._0_4_ = FUN_00988f20();
          puStack_c8 = (uint *)0xffffffff;
          uStack_d0._4_4_ = (char *)0x0;
          local_8._0_1_ = 5;
          FUN_00448aa0();
          if (0xf < local_88) {
            puStack_c8 = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
            uStack_d0._4_4_ = &UNK_005440c3;
            FUN_00aae91b();
          }
          local_88 = 0xf;
          local_8c = 0;
          local_9c = local_9c & 0xffffff00;
          if (0xf < local_50) {
            puStack_c8 = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
            uStack_d0._4_4_ = &UNK_005440eb;
            FUN_00aae91b();
          }
          local_50 = 0xf;
          local_54 = 0;
          local_64[0] = local_64[0] & 0xffffff00;
          if (0xf < local_6c) {
            puStack_c8 = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
            uStack_d0._4_4_ = &UNK_0054410a;
            FUN_00aae91b();
          }
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          if (0xf < local_a4) {
            puStack_c8 = (uint *)local_b8[0];
                    /* WARNING: Subroutine does not return */
            uStack_d0._4_4_ = &UNK_0054412f;
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_a4 = 0xf;
          local_a8 = 0;
          local_b8[0] = local_b8[0] & 0xffffff00;
          iVar4 = local_18;
          if (0xf < local_34) {
            puStack_c8 = (uint *)local_48[0];
                    /* WARNING: Subroutine does not return */
            uStack_d0._4_4_ = &UNK_0054415b;
            FUN_00aae91b();
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  ExceptionList = local_10;
  return param_2;
}

