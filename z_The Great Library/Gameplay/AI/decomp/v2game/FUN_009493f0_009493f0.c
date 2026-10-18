// FUN_009493f0 @ 009493f0 body=[[009493f0, 009495d9] [009495e0, 0094988d] [00949891, 009498cf] [009498d5, 009498fc] [00949900, 00949957]]


void FUN_009493f0(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void **ppvVar5;
  void **ppvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  bool bVar11;
  void *local_7c;
  int local_78;
  uint local_74;
  uint *local_70;
  int local_6c;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bab552;
  local_14 = ExceptionList;
  iVar9 = *(int *)(in_ECX + 0x6c);
  ExceptionList = &local_14;
  *(undefined1 *)(iVar9 + 0x30) = 1;
  iVar3 = *(int *)(in_ECX + 0x6c);
  local_78 = iVar9 + 0x28;
  local_6c = in_ECX;
  FUN_0092a7c0(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10)
               ,*(undefined4 *)(iVar3 + 0x14));
  iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar3 != 0) {
    puVar1 = (uint *)(iVar9 + 100);
    *(undefined1 *)(iVar9 + 0x94) = 1;
    FUN_0042b980(puVar1,&local_74,*puVar1,*(undefined4 *)(iVar9 + 0x68));
    FUN_0042b980(iVar9 + 0x54,&local_74,*(undefined4 *)(iVar9 + 0x54),*(undefined4 *)(iVar9 + 0x58))
    ;
    local_7c = *(void **)(iVar9 + 0x44);
    if (local_7c != *(void **)(iVar9 + 0x48)) {
      local_74 = 0;
      FID_conflict__memcpy(local_7c,*(void **)(iVar9 + 0x48),0);
      *(uint *)(iVar9 + 0x48) = (int)local_7c + local_74;
    }
    local_7c = *(void **)(iVar9 + 0x34);
    if (local_7c != *(void **)(iVar9 + 0x38)) {
      local_74 = 0;
      FID_conflict__memcpy(local_7c,*(void **)(iVar9 + 0x38),0);
      *(uint *)(iVar9 + 0x38) = local_74 + (int)local_7c;
    }
    local_7c = *(void **)(iVar9 + 0x84);
    bVar11 = false;
    iVar8 = FUN_00425a40();
    if ((*(int *)((int)local_7c + 4) == *(int *)(iVar8 + 4)) ||
       (iVar8 = FUN_00425ac0(), *(int *)((int)local_7c + 4) == *(int *)(iVar8 + 4))) {
      bVar11 = true;
    }
    iVar8 = FUN_00425a40();
    if ((*(int *)(*(int *)(iVar9 + 0x74) + 4) == *(int *)(iVar8 + 4)) ||
       (iVar8 = FUN_00425ac0(), *(int *)(*(int *)(iVar9 + 0x74) + 4) == *(int *)(iVar8 + 4))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((bVar11) || (bVar7)) {
      iVar8 = FUN_00425a40();
      bVar11 = *(int *)((int)local_7c + 4) != *(int *)(iVar8 + 4);
      if (bVar11) {
        local_74 = *(uint *)(iVar3 + 0x98);
        local_70 = (uint *)(iVar3 + 0x98);
      }
      else {
        local_74 = *(uint *)(iVar3 + 0x88);
        local_70 = (uint *)(iVar3 + 0x88);
      }
      while ((*local_70 <= local_74 && (local_74 < local_70[1]))) {
        uVar4 = *(uint *)(iVar9 + 0x68);
        uVar10 = local_74 + 0x40;
        if ((local_74 < uVar4) && (*puVar1 <= local_74)) {
          local_74 = uVar10;
          if (uVar4 == *(uint *)(iVar9 + 0x6c)) {
            FUN_0042c4b0();
          }
          iVar8 = *(int *)(iVar9 + 0x68);
        }
        else {
          local_74 = uVar10;
          if (uVar4 == *(uint *)(iVar9 + 0x6c)) {
            FUN_0042c4b0();
          }
          iVar8 = *(int *)(iVar9 + 0x68);
        }
        if (iVar8 != 0) {
          FUN_0094be20();
        }
        *(int *)(iVar9 + 0x68) = *(int *)(iVar9 + 0x68) + 0x40;
        ppvVar5 = *(void ***)(iVar9 + 0x48);
        local_7c = (void *)0x0;
        if (&local_7c < ppvVar5) {
          ppvVar6 = *(void ***)(iVar9 + 0x44);
          if (&local_7c < ppvVar6) goto LAB_0094969a;
          if (ppvVar5 == *(void ***)(iVar9 + 0x4c)) {
            FUN_007b94a0();
          }
          if (*(undefined4 **)(iVar9 + 0x48) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0x48) =
                 *(undefined4 *)(*(uint *)(iVar9 + 0x44) + ((int)&local_7c - (int)ppvVar6 >> 2) * 4)
            ;
          }
          *(int *)(iVar9 + 0x48) = *(int *)(iVar9 + 0x48) + 4;
        }
        else {
LAB_0094969a:
          if (ppvVar5 == *(void ***)(iVar9 + 0x4c)) {
            FUN_007b94a0();
          }
          if (*(undefined4 **)(iVar9 + 0x48) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0x48) = 0;
          }
          *(int *)(iVar9 + 0x48) = *(int *)(iVar9 + 0x48) + 4;
        }
      }
      if (bVar11) {
        local_74 = *(uint *)(iVar3 + 0x88);
        local_70 = (uint *)(iVar3 + 0x88);
      }
      else {
        local_74 = *(uint *)(iVar3 + 0x98);
        local_70 = (uint *)(iVar3 + 0x98);
      }
      while ((iVar9 = local_78, *local_70 <= local_74 && (local_74 < local_70[1]))) {
        uVar4 = *(uint *)(local_78 + 0x30);
        uVar10 = local_74 + 0x40;
        if ((local_74 < uVar4) && (*(uint *)(local_78 + 0x2c) <= local_74)) {
          local_74 = uVar10;
          if (uVar4 == *(uint *)(local_78 + 0x34)) {
            FUN_0042c4b0();
          }
          iVar3 = *(int *)(iVar9 + 0x30);
        }
        else {
          local_74 = uVar10;
          if (uVar4 == *(uint *)(local_78 + 0x34)) {
            FUN_0042c4b0();
          }
          iVar3 = *(int *)(iVar9 + 0x30);
        }
        if (iVar3 != 0) {
          FUN_0094be20();
        }
        *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + 0x40;
        ppvVar5 = *(void ***)(iVar9 + 0x10);
        local_7c = (void *)0x0;
        if (&local_7c < ppvVar5) {
          ppvVar6 = *(void ***)(iVar9 + 0xc);
          if (&local_7c < ppvVar6) goto LAB_009497cb;
          if (ppvVar5 == *(void ***)(iVar9 + 0x14)) {
            FUN_007b94a0();
          }
          if (*(undefined4 **)(iVar9 + 0x10) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0x10) =
                 *(undefined4 *)(*(int *)(iVar9 + 0xc) + ((int)&local_7c - (int)ppvVar6 >> 2) * 4);
          }
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 4;
        }
        else {
LAB_009497cb:
          if (ppvVar5 == *(void ***)(iVar9 + 0x14)) {
            FUN_007b94a0();
          }
          if (*(undefined4 **)(iVar9 + 0x10) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0x10) = 0;
          }
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 4;
        }
      }
      goto LAB_009497fb;
    }
  }
  *(undefined1 *)(iVar9 + 0x94) = 0;
LAB_009497fb:
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("DEMAND_CRISIS_PEACE",0x13);
  local_c = 0;
  FUN_009a8ee0(local_64,local_50);
  local_c._0_1_ = 1;
  iVar9 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar9 + 0x6c),*(undefined8 *)(iVar9 + 0x74));
  local_c._0_1_ = 2;
  FUN_00641710();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_009adb70();
  if (local_60 == 0) {
    local_c = 0xffffffff;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    if (local_3c < 0x10) {
      piVar2 = (int *)(local_6c + 0x6c);
      local_6c = *(undefined4 *)(*piVar2 + 8);
      local_40 = 0;
      iVar9 = *(int *)(local_78 + 0x4c);
      local_3c = 0xf;
      local_50[0] = local_50[0] & 0xffffff00;
      for (; (iVar9 != *(int *)(local_78 + 0x50) && (*(int *)(iVar9 + 4) != *(int *)(*piVar2 + 0xc))
             ); iVar9 = iVar9 + 8) {
      }
      FUN_00949960();
      ExceptionList = local_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

