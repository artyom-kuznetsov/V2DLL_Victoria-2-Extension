// FUN_00859180 @ 00859180 body=[[00859180, 00859529] [0085952d, 0085953f]]


/* WARNING: Removing unreachable block (ram,0x00859524) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00859180(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_90;
  undefined1 **local_74;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined1 local_48 [8];
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  undefined1 *local_20;
  int *local_1c;
  undefined1 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4ac03;
  ppuVar3 = (undefined1 **)0x0;
  local_74 = (undefined1 **)0x0;
  local_8 = 0;
  local_40 = *(uint *)(param_1 + 0x34);
  local_1c = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xe44);
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (local_1c != (int *)0x0) {
    iVar8 = *local_1c;
    local_1c = (int *)local_1c[2];
    puVar6 = (undefined1 *)(iVar8 + 0x1c8);
    local_18[0] = puVar6;
    if ((*(int *)(iVar8 + 0x244) != 4) &&
       ((((*(int *)(iVar8 + 0x244) != 1 || (*(int *)(iVar8 + 0x238) == 0)) ||
         (*(int *)(*(int *)(iVar8 + 0x238) + 0x10) != 2)) && (*(char *)(iVar8 + 0x248) != '\0')))) {
      local_40 = *(uint *)(iVar8 + 0x228);
      iVar8 = *(int *)(iVar8 + 0x22c);
      local_90._4_4_ = (uint *)local_48;
      local_90._0_4_ = 0x85922b;
      puVar1 = (uint *)FUN_004a5020();
      if ((iVar8 <= (int)puVar1[1]) && ((iVar8 < (int)puVar1[1] || (local_40 < *puVar1)))) {
        if (local_18 < ppuVar3) {
          if (ppuVar3 == (undefined1 **)0x0) {
            local_90._4_4_ = (uint *)0x85925d;
            FUN_00a513f0();
            ppuVar3 = local_74;
          }
          if (ppuVar3 != (undefined1 **)0x0) {
            *ppuVar3 = *(undefined1 **)(((int)local_18 >> 2) * 4);
          }
        }
        else {
          if (ppuVar3 == (undefined1 **)0x0) {
            local_90._4_4_ = (uint *)0x85927b;
            FUN_00a513f0();
            ppuVar3 = local_74;
          }
          if (ppuVar3 != (undefined1 **)0x0) {
            *ppuVar3 = puVar6;
          }
        }
        ppuVar3 = ppuVar3 + 1;
        local_74 = ppuVar3;
      }
    }
  }
  local_24 = (int)ppuVar3 >> 2;
  if (0 < local_24) {
    puVar6 = _DAT_00000000;
    if (1 < local_24) {
      local_38 = 0;
      local_20 = (undefined1 *)0x0;
      local_1c = (int *)0x0;
      puVar6 = local_20;
      if (0 < local_24) {
        do {
          puVar6 = *(undefined1 **)((int)local_1c * 4);
          local_90._4_4_ = &local_40;
          local_30 = 0;
          local_90._0_4_ = 0x8592f2;
          local_18[0] = puVar6;
          FUN_004a5020();
          lVar9 = local_30;
          if ((-1 < local_3c) && ((0 < local_3c || (local_40 != 0)))) {
            local_90._4_4_ = (uint *)local_3c;
            local_90._0_4_ = local_40;
            lVar9 = __alldiv(*(uint *)(puVar6 + 0x60) << 0xf,
                             *(int *)(puVar6 + 100) << 0xf | *(uint *)(puVar6 + 0x60) >> 0x11);
          }
          switch(*(undefined4 *)(puVar6 + 0x7c)) {
          case 0:
          case 1:
            local_90._4_4_ = (uint *)0x859342;
            lVar10 = FUN_00b31c36();
            lVar11 = lVar9 + lVar10;
            uVar4 = (uint)lVar11;
            lVar9 = lVar10 + lVar9;
            local_30 = CONCAT44((int)((ulonglong)lVar11 >> 0x20),(undefined4)local_30);
            if (*(int *)(puVar6 + 0x70) != 0) {
              local_90._4_4_ = (uint *)DAT_00f092fc;
              if (*(int *)(*(int *)(puVar6 + 0x70) + 0x10) == 0) {
                local_50 = *(undefined4 *)(param_1 + 0x34);
                local_90._4_4_ = (uint *)0x85937d;
                iVar8 = FUN_0053ec70();
                local_90._4_4_ = (uint *)DAT_00f17898;
                if (iVar8 == 0) {
                  local_90._4_4_ = (uint *)DAT_00f17b54;
                }
              }
              local_90._0_4_ = 0x8593b2;
              puVar1 = (uint *)FUN_00408d50();
              iVar8 = local_30._4_4_ + puVar1[1] + (uint)CARRY4(uVar4,*puVar1);
              lVar9 = CONCAT44(iVar8,uVar4 + *puVar1);
              local_30 = CONCAT44(iVar8,(undefined4)local_30);
              puVar6 = local_18[0];
            }
            break;
          case 2:
            goto LAB_008593d0;
          case 3:
LAB_008593d0:
            local_90._4_4_ = (uint *)0x8593d5;
            lVar11 = FUN_00b31c36();
            lVar9 = lVar11 + lVar9;
          }
          iVar8 = (int)((ulonglong)lVar9 >> 0x20);
          lVar11 = local_38;
          if ((local_38._4_4_ <= iVar8) &&
             ((local_38._4_4_ < iVar8 || ((uint)local_38 < (uint)lVar9)))) {
            lVar11 = lVar9;
            local_20 = puVar6;
          }
          local_38 = lVar11;
          local_1c = (int *)((int)local_1c + 1);
          puVar6 = local_20;
        } while ((int)local_1c < local_24);
      }
    }
    if (puVar6 != (undefined1 *)0x0) {
      uVar4 = *(uint *)(*(int *)(DAT_012586dc + 0x60) + 0x28);
      local_90._4_4_ = (uint *)0x0;
      local_90._0_4_ = 0x1f40000;
      local_1c = (int *)puVar6;
      local_90 = __alldiv(uVar4 << 0x1e,
                          (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf |
                          (uVar4 & 0x1ffff) >> 2);
      local_50 = *(undefined4 *)(param_1 + 0x34);
      iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
      lVar9 = __allmul(*(undefined4 *)(iVar8 + 0xe78),*(undefined4 *)(iVar8 + 0xe7c));
      uVar4 = *(uint *)(puVar6 + 0x60);
      local_40 = (uint)(lVar9 >> 0xf);
      local_90._4_4_ = (uint *)local_68;
      iVar7 = (int)((ulonglong)(lVar9 >> 0xf) >> 0x20);
      local_90._0_4_ = 0x859484;
      local_38._4_4_ = *(int *)(puVar6 + 100);
      puVar1 = (uint *)FUN_004a5020();
      uVar5 = *puVar1 - uVar4;
      iVar8 = (puVar1[1] - local_38._4_4_) - (uint)(*puVar1 < uVar4);
      if ((iVar7 <= iVar8) && ((iVar7 < iVar8 || (local_40 < uVar5)))) {
        uVar5 = local_40;
        iVar8 = iVar7;
      }
      local_90._4_4_ = (uint *)0x50;
      local_90._0_4_ = 0x8594a5;
      local_24 = FUN_00aae9af();
      local_8._0_1_ = 1;
      if (local_24 == 0) {
        uVar2 = 0;
      }
      else {
        local_20 = (undefined1 *)&local_90;
        iVar7 = *(int *)((int)local_1c + 0x6c);
        if ((*(int *)(iVar7 + 0x4c) - *(int *)(iVar7 + 0x48) & 0xfffffffcU) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = **(undefined4 **)(iVar7 + 0x48);
        }
        local_40 = *(uint *)(param_1 + 0x34);
        local_3c = *(int *)(param_1 + 0x38);
        local_90._0_4_ = uVar5;
        local_90._4_4_ = (uint *)iVar8;
        uVar2 = FUN_00588650(local_24,uVar2);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_90._4_4_ = (uint *)0x859512;
      iVar8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      local_90._0_4_ = 0x85951d;
      local_90._4_4_ = (uint *)uVar2;
      (**(code **)(**(int **)(iVar8 + 0x38) + 0x18))();
    }
  }
  ExceptionList = local_10;
  return;
}

