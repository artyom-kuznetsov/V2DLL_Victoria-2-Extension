// FUN_0095b740 @ 0095b740 body=[[0095b740, 0095b839] [0095b840, 0095bb69] [0095bb6d, 0095bc0b]]


int * FUN_0095b740(int param_1,int param_2)

{
  uint uVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  int local_68;
  int local_64;
  int *local_58;
  int local_54;
  int *local_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar4 = DAT_00f20c04;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5e26e;
  pvStack_14 = ExceptionList;
  if ((DAT_0131b954 - DAT_0131b950 & 0xfffffffcU) == 0) {
    ExceptionList = &pvStack_14;
    FUN_0057aa50(0);
    iVar4 = DAT_00f20c04;
  }
  else {
    iVar11 = 0;
    iVar5 = *(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2;
    ExceptionList = &pvStack_14;
    ppvVar2 = &pvStack_14;
    if (0 < iVar5) {
      do {
        ExceptionList = ppvVar2;
        *(undefined4 *)(DAT_0131b950 + iVar11 * 4) = 0;
        iVar11 = iVar11 + 1;
        ppvVar2 = ExceptionList;
      } while (iVar11 < iVar5);
    }
  }
  iVar11 = *(int *)(param_1 + 100);
  local_68 = 0;
  if (DAT_01258a2c == (int *)0x0) {
    iVar4 = FUN_00aae9af(0x3f0);
    local_c = 0;
    if (iVar4 == 0) {
      DAT_01258a2c = (int *)0x0;
    }
    else {
      DAT_01258a2c = (int *)FUN_0096bbf0();
    }
    local_c = 0xffffffff;
    iVar4 = DAT_00f20c04;
  }
  iVar4 = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2;
  local_54 = 0;
  local_58 = DAT_01258a2c;
  if (0 < iVar4) {
    local_64 = 0;
    do {
      if ((*(int *)(DAT_0131b950 + local_54 * 4) == 0) &&
         ((iVar5 = *(int *)(*(int *)(param_1 + 0x68) + 0xd8) + local_64,
          (*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20) & 0xfffffffcU) != 0 ||
          ((*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8) & 0xfffffff0U) != 0)))) {
        uVar12 = *(uint *)(*(int *)(iVar11 + 0x1f8) + local_54 * 4);
        if (uVar12 == 0) {
          local_48 = 0;
          local_48._4_4_ = 0;
          local_48._0_4_ = 0;
          iVar5 = local_48._4_4_;
          uVar12 = (uint)local_48;
        }
        else {
          uVar9 = *(uint *)(*(int *)(iVar11 + 0x200) + local_54 * 4);
          uVar13 = __alldiv(uVar9 << 0x1e,uVar9 >> 2,uVar12 << 0xf,uVar12 >> 0x11);
          uVar12 = 0x8000 - (uint)uVar13;
          iVar5 = -(uint)(0x8000 < (uint)uVar13) - (int)((ulonglong)uVar13 >> 0x20);
        }
        iVar7 = *(int *)(*(int *)(param_1 + 0x68) + 0x28);
        uVar9 = *(uint *)(*(int *)(iVar11 + 0x1f8) + iVar7 * 4);
        if (uVar9 == 0) {
          local_40 = 0;
          local_40._4_4_ = 0;
          local_40._0_4_ = 0;
          iVar7 = local_40._4_4_;
          uVar9 = (uint)local_40;
        }
        else {
          uVar1 = *(uint *)(*(int *)(iVar11 + 0x200) + iVar7 * 4);
          uVar13 = __alldiv(uVar1 << 0x1e,uVar1 >> 2,uVar9 << 0xf,uVar9 >> 0x11);
          uVar9 = 0x8000 - (uint)uVar13;
          iVar7 = -(uint)(0x8000 < (uint)uVar13) - (int)((ulonglong)uVar13 >> 0x20);
        }
        if ((iVar5 <= iVar7) && ((iVar5 < iVar7 || (uVar12 <= uVar9)))) {
          *(int *)(param_2 + 0x14) = param_1;
          piVar6 = (int *)(**(code **)(*(int *)(local_64 + *(int *)(*(int *)(param_1 + 0x68) + 0xd8)
                                               ) + 0x18))(&local_4c,param_2);
          iVar5 = *piVar6;
          FUN_00401000();
          iVar7 = FUN_00b31c00();
          uVar8 = __alldiv((longlong)iVar7 * (longlong)iVar5,1000,0);
          *(undefined4 *)(DAT_0131b950 + local_54 * 4) = uVar8;
          iVar5 = *(int *)(param_1 + 100);
          if (*(int *)(iVar5 + 0x164) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = **(int **)(iVar5 + 0x15c);
          }
          piVar6 = *(int **)(*(int *)(*(int *)(DAT_00f20c0c + 0xbf0) + *(int *)(iVar5 + 300) * 0x10)
                            + *(int *)(iVar10 + 0x6c) * 4);
          cVar3 = (**(code **)(*piVar6 + 0x34))();
          if ((cVar3 != '\0') && (iVar5 = piVar6[0x1f], *(int *)(iVar5 + local_54 * 4) != 0)) {
            iVar5 = __alldiv((longlong)iVar7 * (longlong)*(int *)(iVar5 + local_54 * 4),1000,0);
            piVar6 = (int *)(DAT_0131b950 + local_54 * 4);
            *piVar6 = *piVar6 + iVar5;
            if (0 < *(int *)(DAT_0131b950 + local_54 * 4)) {
              if (*(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2 < local_54) {
                local_58 = (int *)FUN_0096bb70();
              }
              else {
                local_58 = *(int **)(*(int *)(DAT_00f20c04 + 0xc) + local_54 * 4);
              }
            }
          }
          if (0 < *(int *)(DAT_0131b950 + local_54 * 4)) {
            local_68 = local_68 + *(int *)(DAT_0131b950 + local_54 * 4);
          }
        }
      }
      local_64 = local_64 + 0x30;
      local_54 = local_54 + 1;
    } while (local_54 < iVar4);
  }
  cVar3 = (**(code **)(*local_58 + 0x18))();
  if (cVar3 != '\0') {
    ExceptionList = pvStack_14;
    return local_58;
  }
  iVar4 = *(int *)(param_1 + 600) * 1000;
  uVar13 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
  iVar4 = __alldiv(uVar13,1000000,0);
  iVar4 = __alldiv((longlong)iVar4 * (longlong)local_68,1000,0);
  if (DAT_01258a2c == (int *)0x0) {
    piVar6 = (int *)FUN_00aae9af(0x3f0);
    local_c = 1;
    local_4c = piVar6;
    if (piVar6 == (int *)0x0) {
      DAT_01258a2c = (int *)0x0;
    }
    else {
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_00409350("null_pop",8);
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_0096be90();
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_34);
      }
      uStack_24 = 0;
      uStack_20 = 0xf;
      uStack_34 = uStack_34 & 0xffffff00;
      *piVar6 = (int)CNullPopType::vftable;
      DAT_01258a2c = piVar6;
    }
    local_c = 0xffffffff;
  }
  iVar7 = 0;
  iVar5 = 0;
  iVar11 = *(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2;
  piVar6 = DAT_01258a2c;
  if (0 < iVar11) {
    do {
      iVar10 = *(int *)(DAT_0131b950 + iVar5 * 4);
      if (-1 < iVar10) {
        if (0 < iVar10) {
          iVar7 = iVar7 + iVar10;
        }
        if (iVar4 < iVar7) {
          if (*(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2 < iVar5) {
            piVar6 = (int *)FUN_0096bb70();
          }
          else {
            piVar6 = *(int **)(*(int *)(DAT_00f20c04 + 0xc) + iVar5 * 4);
          }
          break;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar11);
  }
  piVar6 = (int *)FUN_004b8c80(piVar6,*(undefined4 *)(param_1 + 100));
  ExceptionList = pvStack_14;
  return piVar6;
}

