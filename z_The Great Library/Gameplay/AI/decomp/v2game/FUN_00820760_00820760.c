// FUN_00820760 @ 00820760  (requested 00820760, first bytes: 55 8B EC 6A FF 68 96 8D)


/* WARNING: Removing unreachable block (ram,0x00820ac5) */
/* WARNING: Removing unreachable block (ram,0x00820a37) */
/* WARNING: Removing unreachable block (ram,0x00820b0d) */

void FUN_00820760(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int local_140 [18];
  int local_f8;
  int local_e8;
  int local_d8;
  undefined1 local_d0 [72];
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_74;
  int aiStack_6c [4];
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  int *local_20;
  int local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58d96;
  local_10 = ExceptionList;
  local_40 = *(int **)(param_1 + 0x30);
  iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4);
  ExceptionList = &local_10;
  FUN_0051f8c0();
  if (*(int *)(*(int *)(DAT_012586dc + 0x60) + 0x30) <= (int)local_18) {
    ExceptionList = local_10;
    return;
  }
  _eh_vector_constructor_iterator_(local_140,0x10,7,FUN_0084a380,FUN_00849e90);
  local_8 = 0;
  uVar13 = FUN_00b31c36();
  local_44 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FUN_0047e3e0();
  local_38 = __allmul((int)uVar13,local_44);
  local_38 = local_38 >> 0xf;
  uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x20) + 0xbc);
  uVar12 = (undefined4)((ulonglong)local_38 >> 0x20);
  local_30 = local_38;
  uVar13 = __alldiv(uVar1 << 0x1e,
                    (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2);
  local_28 = __allmul(uVar13);
  local_28 = local_28 >> 0xf;
  iVar5 = FUN_008205c0();
  if (iVar5 == 0) goto LAB_00820d7e;
  local_40 = *(int **)(param_1 + 0x30);
  uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4) +
                            0xa60) + 0x48);
  local_50 = __alldiv(uVar1 << 0x1e,
                      (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2)
  ;
  local_5c = FUN_005dc0a0();
  local_58 = FUN_005dc0a0();
  local_54 = FUN_005dc0a0();
  piVar8 = *(int **)(iVar9 + 0x9d8);
  local_1c = 0;
  while ((*(int **)(iVar9 + 0x9d8) <= piVar8 && (piVar8 < *(int **)(iVar9 + 0x9dc)))) {
    piVar3 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4) + 0xd8);
    piVar8 = piVar8 + 1;
    while (local_40 = piVar8, piVar3 != (int *)0x0) {
      piVar2 = (int *)*piVar3;
      local_20 = (int *)piVar3[2];
      cVar4 = (**(code **)(*piVar2 + 0x34))();
      piVar3 = local_20;
      piVar8 = local_40;
      if ((cVar4 != '\0') && (*(char *)(piVar2[0x22] + 0x3a) != '\0')) {
        local_1c = local_1c + 1;
        if (piVar2[0x15] != 0) goto LAB_00820d7e;
        aiStack_6c[*(int *)(piVar2[0x22] + 0x34)] = aiStack_6c[*(int *)(piVar2[0x22] + 0x34)] + 1;
        FUN_0047db00();
        local_74 = *(undefined4 *)(iVar9 + 0xe74);
        local_18 = &stack0xfffffea8;
        FUN_0047de60(local_d0);
        uVar1 = *(uint *)(piVar2[0x22] + 0xc4);
        __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
        FUN_00b31c36();
        local_18 = &stack0xfffffea8;
        FUN_0047de60(local_d0);
        FUN_0047e3e0();
        lVar14 = local_30 + CONCAT44(local_44,local_48);
        local_30 = local_30 + CONCAT44(local_44,local_48);
        if (local_88 != 0) {
          local_30 = lVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        piVar3 = local_20;
        piVar8 = local_40;
        uVar12 = local_38._4_4_;
      }
    }
  }
  if (local_28 < local_30) {
    if (*(char *)(iVar9 + 0x67c) == '\0') {
      puVar6 = (undefined4 *)FUN_00408d50();
      lVar14 = __allmul(*puVar6,puVar6[1]);
      if (lVar14 >> 0xf < CONCAT44(uVar12,(undefined4)local_38)) {
        FUN_0081e040();
      }
    }
    goto LAB_00820d7e;
  }
  iVar5 = FUN_005c1a10();
  iVar5 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2;
  local_18 = (undefined1 *)0x0;
  local_1c = iVar5;
  if (0 < iVar5) {
    do {
      iVar10 = *(int *)(*(int *)(*(int *)(iVar9 + 0xbcc) + 0x310) + (int)local_18 * 4);
      if (((*(char *)(iVar10 + 0x3a) != '\0') && (iVar11 = *(int *)(iVar10 + 0x24), 2 < iVar11)) &&
         (*(char *)(iVar11 + *(int *)(*(int *)(iVar9 + 0xbcc) + 0x2dc)) != '\0')) {
        if (*(int *)(iVar9 + 0x154) - *(int *)(iVar9 + 0x150) >> 2 < iVar11) {
          iVar11 = 0;
LAB_00820baa:
          iVar7 = FUN_00539130();
          iVar5 = local_1c;
          if (iVar11 <= iVar7) goto LAB_00820c0b;
        }
        else {
          iVar11 = *(int *)(*(int *)(iVar9 + 0x150) + iVar11 * 4);
          if (-1 < iVar11) goto LAB_00820baa;
        }
        iVar5 = *(int *)(iVar10 + 0x34);
        local_20 = (int *)local_140[iVar5 * 4 + 1];
        piVar8 = (int *)FUN_00aae9af();
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = iVar10;
          piVar8[1] = (int)local_20;
          piVar8[2] = 0;
          *(undefined1 *)(piVar8 + 3) = 0;
        }
        iVar10 = local_140[iVar5 * 4 + 2];
        local_140[iVar5 * 4 + 1] = (int)piVar8;
        local_140[iVar5 * 4 + 2] = iVar10 + 1;
        if (iVar10 == 0) {
          local_140[iVar5 * 4] = (int)piVar8;
          iVar5 = local_1c;
        }
        else {
          local_20[2] = (int)piVar8;
          iVar5 = local_1c;
        }
      }
LAB_00820c0b:
      local_18 = (undefined1 *)((int)local_18 + 1);
    } while ((int)local_18 < iVar5);
  }
  iVar9 = FUN_00820370();
  local_28._0_4_ = (undefined1 *)(iVar9 * 1000);
  iVar9 = *(int *)(DAT_012586dc + 0x20);
  local_28._4_4_ = (int)(undefined1 *)local_28 >> 0x1f;
  local_18 = (undefined1 *)local_28;
  uVar13 = __allmul(*(int *)(iVar9 + 0xa4),*(int *)(iVar9 + 0xa4) >> 0x1f);
  iVar5 = __alldiv(uVar13);
  iVar5 = iVar5 / 1000;
  uVar13 = __allmul(*(int *)(iVar9 + 0x9c),*(int *)(iVar9 + 0x9c) >> 0x1f);
  iVar10 = __alldiv(uVar13);
  iVar10 = iVar10 / 1000;
  uVar13 = __allmul(*(int *)(iVar9 + 0xa0),*(int *)(iVar9 + 0xa0) >> 0x1f);
  iVar11 = __alldiv(uVar13);
  iVar9 = iVar10;
  if ((int)local_18 / 1000 < 10) {
    iVar9 = (((int)local_18 / 1000) * iVar10) / 10;
    iVar5 = iVar5 + (iVar10 - iVar9);
  }
  iVar10 = FUN_009b7610();
  iVar10 = iVar10 % 3;
  if (iVar10 == 0) {
    if ((iVar5 <= local_54) || (local_d8 < 1)) {
LAB_00820d3f:
      if ((iVar9 <= local_5c) || (local_f8 < 1)) goto LAB_00820d56;
    }
  }
  else {
    if (iVar10 == 1) goto LAB_00820d3f;
    if (iVar10 != 2) goto LAB_00820d7e;
LAB_00820d56:
    local_28 = CONCAT44(local_28._4_4_,(undefined1 *)local_28);
    if ((iVar11 / 1000 <= local_58) ||
       (local_28 = CONCAT44(local_28._4_4_,(undefined1 *)local_28), local_e8 < 1))
    goto LAB_00820d7e;
  }
  FUN_0081ec90();
  local_28 = CONCAT44(local_28._4_4_,(undefined1 *)local_28);
LAB_00820d7e:
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_140,0x10,7,FUN_00849e90);
  ExceptionList = local_10;
  return;
}

