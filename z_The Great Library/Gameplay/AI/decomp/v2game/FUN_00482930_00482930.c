// FUN_00482930 @ 00482930 body=[[00482930, 00482ec8] [00482ed0, 00482f11] [00482f15, 00482f25] [00482f2b, 00482fd1] [00482fd5, 00482fe7]]


/* WARNING: Removing unreachable block (ram,0x00482e1e) */
/* WARNING: Removing unreachable block (ram,0x00482e20) */
/* WARNING: Removing unreachable block (ram,0x00482cec) */
/* WARNING: Removing unreachable block (ram,0x00482bc3) */
/* WARNING: Removing unreachable block (ram,0x00482c06) */

void FUN_00482930(int param_1,char param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  longlong lVar14;
  byte abStack_c4 [64];
  int local_84;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  int local_48;
  int *local_44;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46946;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0047dbb0();
  FUN_0047db00();
  iVar8 = DAT_012587f0;
  local_8 = 0;
  iVar10 = 1;
  iVar5 = *(int *)(param_1 + 0x21c) - *(int *)(param_1 + 0x218) >> 3;
  if (1 < iVar5) {
    piVar13 = *(int **)(param_1 + 0x218);
    do {
      if (piVar13[2] != 0 || piVar13[3] != 0) {
        if (param_2 == '\0') {
          cVar4 = FUN_00561fe0();
          if (cVar4 == '\0') {
            FUN_0047dca0();
          }
          local_30 = (uint *)(DAT_012587f0 + 0xc);
          piVar13 = *(int **)(DAT_012587f0 + 0xc);
          goto LAB_00482a50;
        }
        break;
      }
      iVar10 = iVar10 + 1;
      piVar13 = piVar13 + 2;
    } while (iVar10 < iVar5);
  }
  piVar13 = *(int **)(DAT_012587f0 + 0xc);
  puVar6 = (uint *)(DAT_012587f0 + 0xc);
  while (((int *)*puVar6 <= piVar13 && (piVar13 < *(int **)(iVar8 + 0x10)))) {
    iVar5 = *piVar13;
    local_2c = *(uint *)(iVar5 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x288 + *(int *)(iVar5 + 8));
    local_28 = *(int *)(iVar5 + 0x34);
    piVar13 = piVar13 + 1;
    if (bVar1 == 0) {
      *(char *)(param_1 + 0x288 + *(int *)(iVar5 + 8)) =
           (char)(*(int *)(param_1 + 0x2cc) - *(int *)(param_1 + 0x2c8) >> 3);
      FUN_00423920();
    }
    else {
      iVar5 = *(int *)(param_1 + 0x2c8);
      *(int *)(iVar5 + 4 + (uint)bVar1 * 8) = local_28;
      *(uint *)(iVar5 + (uint)bVar1 * 8) = local_2c;
    }
  }
LAB_00482da2:
  FUN_0047dbb0();
  FUN_00561c40();
  FUN_0047dbb0();
  FUN_00561c40();
  iVar8 = (**(code **)(*DAT_012588e8 + 0x1c))();
  if (0 < iVar8) {
    param_1 = 0;
    local_18 = iVar8;
    do {
      iVar8 = *(int *)(iVar3 + 0x4e4) + param_1;
      _memset((void *)(iVar8 + 8),0,0x40);
      if (*(int *)(iVar8 + 0x48) != *(int *)(iVar8 + 0x4c)) {
        *(int *)(iVar8 + 0x4c) = *(int *)(iVar8 + 0x48);
      }
      uVar11 = *(uint *)(iVar8 + 0x4c);
      if ((uVar11 < 0x125e449) || (puVar2 = *(undefined4 **)(iVar8 + 0x48), &DAT_0125e448 < puVar2))
      {
        if (uVar11 == *(uint *)(iVar8 + 0x50)) {
          FUN_00423780();
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x4c);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = DAT_0125e448;
          uVar12 = DAT_0125e44c;
          goto LAB_00482ea5;
        }
      }
      else {
        if (uVar11 == *(uint *)(iVar8 + 0x50)) {
          FUN_00423780();
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x4c);
        puVar2 = (undefined4 *)
                 (*(int *)(iVar8 + 0x48) + ((int)&DAT_0125e448 - (int)puVar2 >> 3) * 8);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = *puVar2;
          uVar12 = puVar2[1];
LAB_00482ea5:
          puVar9[1] = uVar12;
        }
      }
      *(int *)(iVar8 + 0x4c) = *(int *)(iVar8 + 0x4c) + 8;
      param_1 = param_1 + 0x58;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar8 = *(int *)(iVar3 + 0x338);
  while (0x24 < iVar8) {
    iVar8 = *(int *)(iVar3 + 0x330);
    if (iVar8 != 0) {
      if (*(char *)(iVar3 + 0x33c) == '\0') {
        iVar5 = *(int *)(iVar8 + 0x5c);
        *(int *)(iVar3 + 0x330) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(iVar3 + 0x334) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x58) = 0;
        }
        if (iVar8 != 0) {
          if (*(int *)(iVar8 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          *(undefined4 *)(iVar8 + 0x48) = 0;
          *(undefined4 *)(iVar8 + 0x4c) = 0;
          *(undefined4 *)(iVar8 + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(int *)(iVar3 + 0x338) = *(int *)(iVar3 + 0x338) + -1;
      }
      else {
        *(undefined1 *)(iVar8 + 0x60) = 1;
      }
    }
    iVar8 = *(int *)(iVar3 + 0x338);
  }
  if ((param_2 == '\0') && (*(int *)(iVar3 + 0x340) + 0x2d0 <= DAT_012588e8[0x2c3])) {
    *(int *)(iVar3 + 0x340) = DAT_012588e8[0x2c3];
    iVar8 = *(int *)(iVar3 + 0x334);
    iVar5 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_0047db00();
      *(int *)(iVar5 + 0x58) = iVar8;
      *(undefined4 *)(iVar5 + 0x5c) = 0;
      *(undefined1 *)(iVar5 + 0x60) = 0;
    }
    iVar10 = *(int *)(iVar3 + 0x338);
    *(int *)(iVar3 + 0x334) = iVar5;
    *(int *)(iVar3 + 0x338) = iVar10 + 1;
    if (iVar10 == 0) {
      *(int *)(iVar3 + 0x330) = iVar5;
    }
    else {
      *(int *)(iVar8 + 0x5c) = iVar5;
    }
  }
  if (local_84 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
LAB_00482a50:
  if ((piVar13 < (int *)*local_30) || ((int *)local_30[1] <= piVar13)) goto LAB_00482da2;
  local_18 = *piVar13;
  local_44 = piVar13 + 1;
  piVar13 = local_44;
  if (*(char *)(local_18 + 0x3c) == '\0') {
    iVar5 = *(int *)(local_18 + 8);
    iVar8 = *(int *)(local_84 + 4 + (uint)abStack_c4[iVar5] * 8);
    if ((DAT_0125ba14 <= iVar8) &&
       ((DAT_0125ba14 < iVar8 || (DAT_0125ba10 < *(uint *)(local_84 + (uint)abStack_c4[iVar5] * 8)))
       )) {
      uVar11 = (uint)*(byte *)(param_1 + 0x10 + iVar5);
      local_4c = *(uint *)(*(int *)(param_1 + 0x50) + uVar11 * 8);
      local_48 = *(int *)(*(int *)(param_1 + 0x50) + 4 + uVar11 * 8);
      if ((DAT_0125ba14 <= local_48) && ((DAT_0125ba14 < local_48 || (DAT_0125ba10 < local_4c)))) {
        uVar7 = (uint)*(byte *)(param_1 + 0x1d8 + iVar5);
        uVar11 = *(uint *)(*(int *)(param_1 + 0x218) + uVar7 * 8);
        local_14 = &stack0xffffff1c;
        __alldiv(uVar11 << 0xf,
                 *(int *)(*(int *)(param_1 + 0x218) + 4 + uVar7 * 8) << 0xf | uVar11 >> 0x11,
                 local_4c,local_48);
        FUN_00482610();
        lVar14 = __allmul(*(undefined4 *)(local_18 + 0x30),*(undefined4 *)(local_18 + 0x34));
        local_64 = (undefined4)(lVar14 >> 0xf);
        local_1c = (int *)(param_1 + 0x2c8);
        local_58 = *(undefined4 *)
                    (*(int *)(param_1 + 0x2c8) + 4 + (uint)*(byte *)(param_1 + 0x288 + iVar5) * 8);
        local_14 = &stack0xffffff1c;
        FUN_0047da50();
        uVar7 = (uint)*(byte *)(param_1 + 0x34c + iVar5);
        local_14 = (undefined1 *)(uint)*(byte *)(param_1 + 0x288 + iVar5);
        uVar11 = *(uint *)(*(int *)(param_1 + 0x38c) + uVar7 * 8);
        puVar6 = (uint *)(*local_1c + (int)local_14 * 8);
        local_24 = uVar11 + *puVar6;
        iVar10 = *(int *)(*(int *)(param_1 + 0x38c) + 4 + uVar7 * 8) +
                 *(int *)(*local_1c + 4 + (int)local_14 * 8) + (uint)CARRY4(uVar11,*puVar6);
        uVar12 = *(undefined4 *)(local_18 + 0x30);
        local_38 = *(undefined4 *)(local_18 + 0x34);
        local_3c = uVar12;
        FUN_00b31c36();
        lVar14 = __allmul(uVar12,local_38);
        local_54 = (uint)(lVar14 >> 0xf);
        iVar8 = (int)((ulonglong)(lVar14 >> 0xf) >> 0x20);
        FUN_00b31c36();
        lVar14 = __allmul(local_3c,local_38);
        lVar14 = lVar14 >> 0xf;
        if ((iVar8 < iVar10) || ((iVar8 <= iVar10 && (local_54 <= local_24)))) {
          if (lVar14 < CONCAT44(iVar10,local_24)) goto LAB_00482cf6;
        }
        else {
          lVar14 = CONCAT44(iVar8,local_54);
LAB_00482cf6:
          iVar10 = (int)((ulonglong)lVar14 >> 0x20);
          local_24 = (uint)lVar14;
          local_14 = &stack0xffffff1c;
          FUN_0047da50();
        }
        local_2c = local_24;
        bVar1 = *(byte *)(param_1 + 0x288 + iVar5);
        local_28 = iVar10;
        if (bVar1 == 0) {
          *(char *)(param_1 + 0x288 + iVar5) = (char)(local_1c[1] - *local_1c >> 3);
          FUN_00423920();
          piVar13 = local_44;
        }
        else {
          iVar8 = *local_1c;
          *(int *)(iVar8 + 4 + (uint)bVar1 * 8) = iVar10;
          *(uint *)(iVar8 + (uint)bVar1 * 8) = local_24;
          piVar13 = local_44;
        }
      }
    }
  }
  else {
    local_68 = *(undefined4 *)(local_18 + 0x34);
    bVar1 = *(byte *)(param_1 + 0x288 + *(int *)(local_18 + 8));
    local_6c = *(undefined4 *)(local_18 + 0x30);
    if (bVar1 == 0) {
      *(char *)(param_1 + 0x288 + *(int *)(local_18 + 8)) =
           (char)(*(int *)(param_1 + 0x2cc) - *(int *)(param_1 + 0x2c8) >> 3);
      FUN_00423920();
      piVar13 = local_44;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x2c8);
      *(undefined4 *)(iVar8 + (uint)bVar1 * 8) = *(undefined4 *)(local_18 + 0x30);
      *(undefined4 *)(iVar8 + 4 + (uint)bVar1 * 8) = local_68;
    }
  }
  goto LAB_00482a50;
}

