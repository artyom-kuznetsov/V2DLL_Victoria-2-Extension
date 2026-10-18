// FUN_00952850 @ 00952850 body=[[00952850, 00952a2c] [00952a30, 00952aa0] [00952aa4, 00952c7b] [00952c98, 00952d33]]


bool FUN_00952850(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bStack_c5;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined1 *local_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bab386;
  local_14 = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_14;
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_58 = *(undefined4 *)(in_ECX + 0x18);
  local_54 = *(undefined4 *)(in_ECX + 0x1c);
  local_84 = local_60;
  local_c4 = 0;
  if (param_2 != '\0') {
    local_c4 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  }
  iVar7 = local_c4;
  if (((*(int *)(in_ECX + 0xc) == 0) ||
      (cVar2 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))(), cVar2 == '\0')) ||
     (uStack_b0 = *(undefined4 *)(in_ECX + 0x20),
     iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x24) * 4),
     (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1)) {
    ExceptionList = local_14;
    return false;
  }
  iVar1 = *(int *)(in_ECX + 0xc);
  if ((*(int *)(iVar1 + 0xe4) - *(int *)(iVar1 + 0xe0) & 0xfffffffcU) == 0) {
    if ((*(int *)(iVar1 + 0xac) - *(int *)(iVar1 + 0xa8) & 0xfffffffcU) == 0) {
      if (param_1 == 0) {
        if (iVar7 == 0) {
          ExceptionList = local_14;
          return true;
        }
        uVar3 = FUN_00425840(iVar7,param_3);
        ExceptionList = local_14;
        return (bool)uVar3;
      }
      puVar5 = (undefined4 *)
               FUN_009387c0(param_1,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
      uVar8 = *puVar5;
      iVar6 = puVar5[1];
      goto LAB_00952b2e;
    }
    iStack_c0 = 0;
    iStack_bc = 0;
    uStack_b8 = 0;
    uStack_c = 1;
    FUN_0094e4d0(in_ECX);
    bStack_c5 = false;
    iVar7 = iStack_bc - iStack_c0 >> 2;
    if (0 < iVar7) {
      do {
        iVar1 = *(int *)(iStack_c0 + iVar6 * 4);
        if ((*(int *)(iVar1 + 0x4c) - (int)*(undefined4 **)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
          uStack_90 = 0;
        }
        else {
          uStack_90 = **(undefined4 **)(iVar1 + 0x48);
        }
        if ((*(int *)(iVar1 + 0x5c) == *(int *)(in_ECX + 0x24)) &&
           (cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0xc) + 0xa0) + 0x18))(local_a8),
           cVar2 != '\0')) {
          bStack_c5 = true;
          if (param_1 != 0) {
            uStack_b0 = *(undefined4 *)(in_ECX + 0x18);
            local_c4 = *(int *)(in_ECX + 0x1c);
            piVar4 = (int *)FUN_0093d080(&local_c4);
            iVar6 = *(int *)(*piVar4 + 0x14);
            iVar7 = FUN_0042ca20(*(undefined4 *)(*piVar4 + 0x10));
            if (iStack_c0 == 0) {
              ExceptionList = local_14;
              return iVar7 == iVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iStack_c0);
          }
          if (local_c4 != 0) {
            uVar3 = FUN_00425840(local_c4,param_3);
            FUN_00461f90();
            ExceptionList = local_14;
            return (bool)uVar3;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
  }
  else {
    uStack_a0 = *(undefined4 *)(in_ECX + 0x20);
    uStack_9c = *(undefined4 *)(in_ECX + 0x24);
    if (*(int *)(in_ECX + 0x14) != 0) {
      uStack_7c = *(undefined4 *)(in_ECX + 0x10);
      uStack_78 = *(undefined4 *)(in_ECX + 0x14);
      *(undefined4 *)(local_84 + 0x2c) = uStack_7c;
      *(undefined4 *)(local_84 + 0x30) = uStack_78;
    }
    iVar1 = *(int *)(in_ECX + 0xc);
    if ((*(int *)(iVar1 + 0xac) - *(int *)(iVar1 + 0xa8) & 0xfffffffcU) == 0) {
      cVar2 = (**(code **)(*(int *)(iVar1 + 0xd8) + 0x18))(local_a8);
      if (cVar2 == '\0') {
        ExceptionList = local_14;
        return false;
      }
      if (param_1 == 0) {
        if (iVar7 == 0) {
          ExceptionList = local_14;
          return true;
        }
        uVar3 = FUN_00425840(iVar7,param_3);
        ExceptionList = local_14;
        return (bool)uVar3;
      }
      puVar5 = (undefined4 *)
               FUN_009387c0(param_1,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
      iVar6 = puVar5[1];
      uVar8 = *puVar5;
LAB_00952b2e:
      iVar7 = FUN_0042ca20(uVar8);
      ExceptionList = local_14;
      return iVar7 == iVar6;
    }
    iStack_c0 = 0;
    iStack_bc = 0;
    uStack_b8 = 0;
    uStack_c = 0;
    FUN_0094e4d0(in_ECX);
    bStack_c5 = false;
    iVar7 = iStack_bc - iStack_c0 >> 2;
    if (0 < iVar7) {
      do {
        iVar1 = *(int *)(iStack_c0 + iVar6 * 4);
        if ((*(int *)(iVar1 + 0x4c) - (int)*(undefined4 **)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
          uStack_90 = 0;
        }
        else {
          uStack_90 = **(undefined4 **)(iVar1 + 0x48);
        }
        if (((*(int *)(iVar1 + 0x5c) == *(int *)(in_ECX + 0x24)) &&
            (cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0xc) + 0xd8) + 0x18))(local_a8),
            cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0xc) + 0xa0) + 0x18))(local_a8),
           cVar2 != '\0')) {
          bStack_c5 = true;
          if (param_1 != 0) {
            local_c4 = *(int *)(in_ECX + 0x1c);
            uStack_b0 = *(undefined4 *)(in_ECX + 0x18);
            piVar4 = (int *)FUN_0093d080(&local_c4);
            iVar6 = *(int *)(*piVar4 + 0x14);
            iVar7 = FUN_0042ca20(*(undefined4 *)(*piVar4 + 0x10));
            if (iStack_c0 == 0) {
              ExceptionList = local_14;
              return iVar7 == iVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iStack_c0);
          }
          if (local_c4 != 0) {
            uVar3 = FUN_00425840(local_c4,param_3);
            FUN_00461f90();
            ExceptionList = local_14;
            return (bool)uVar3;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
  }
  if (iStack_c0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_c0);
  }
  ExceptionList = local_14;
  return bStack_c5;
}

