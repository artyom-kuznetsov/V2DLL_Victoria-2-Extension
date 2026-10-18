// FUN_00814260 @ 00814260 body=[[00814260, 00814300] [00814340, 00814583]]


void FUN_00814260(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char **ppcVar3;
  char **ppcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *local_7c;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  undefined **local_64 [3];
  undefined **local_58 [3];
  undefined **local_4c [3];
  int local_40;
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  char *local_18 [2];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c781;
  pvStack_10 = ExceptionList;
  local_3c = 0;
  ExceptionList = &pvStack_10;
  iVar5 = FUN_00aae9af(0x10);
  if (iVar5 == 0) {
    local_24 = (char *)0x0;
    std::exception::exception((exception *)local_58,&local_24);
    local_58[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_58,&DAT_00e6fb20);
  }
  *(int *)iVar5 = iVar5;
  *(int *)(iVar5 + 4) = iVar5;
  local_8 = 0;
  local_7c = (int *)0x0;
  local_40 = iVar5;
  piVar6 = (int *)FUN_00aae9af(8);
  if (piVar6 == (int *)0x0) {
    local_28 = (char *)0x0;
    std::exception::exception((exception *)local_64,&local_28);
    local_64[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_64,&DAT_00e6fb20);
  }
  *piVar6 = 0;
  piVar6[1] = 0;
  *piVar6 = (int)&local_7c;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_1c = *(undefined4 **)(DAT_01258708 + 0x10);
  local_20 = *(undefined4 **)(DAT_01258708 + 0x14);
  local_7c = piVar6;
  if (local_1c != local_20) {
    do {
      uVar1 = *local_1c;
      local_30 = local_1c[1];
      local_34 = uVar1;
      iVar7 = FUN_00815e40(iVar5,*(undefined4 *)(iVar5 + 4));
      if (local_3c == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("list<T> too long");
      }
      local_3c = local_3c + 1;
      *(int *)(iVar5 + 4) = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      if (local_74 <= local_6c + 1U) {
        FUN_00815c90(&local_7c);
      }
      uVar8 = local_6c + local_70;
      if (local_74 <= uVar8) {
        uVar8 = uVar8 - local_74;
      }
      if (*(int *)(local_78 + uVar8 * 4) == 0) {
        iVar5 = FUN_00aae9af(0x10);
        if (iVar5 == 0) {
          local_18[0] = (char *)0x0;
          std::exception::exception((exception *)local_4c,local_18);
          local_4c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_4c,&DAT_00e6fb20);
        }
        *(int *)(local_78 + uVar8 * 4) = iVar5;
      }
      puVar2 = *(undefined4 **)(local_78 + uVar8 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = uVar1;
        puVar2[1] = local_30;
        puVar2[2] = 1;
        puVar2[3] = 1;
      }
      local_6c = local_6c + 1;
      local_18[0] = (char *)0xffffffff;
      FUN_00814590(&local_7c,&local_40,local_18);
      if (*(uint *)(param_1 + 0xc) <= *(int *)(param_1 + 0x14) + 1U) {
        FUN_00815ab0(param_1 + 4);
      }
      uVar8 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14);
      if (*(uint *)(param_1 + 0xc) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(param_1 + 0xc);
      }
      if (*(int *)(*(int *)(param_1 + 8) + uVar8 * 4) == 0) {
        iVar5 = FUN_00aae9af(0x18);
        if (iVar5 == 0) {
          local_24 = (char *)0x0;
          std::exception::exception((exception *)local_58,&local_24);
          local_58[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_58,&DAT_00e6fb20);
        }
        *(int *)(*(int *)(param_1 + 8) + uVar8 * 4) = iVar5;
      }
      local_2c = *(char **)(*(int *)(param_1 + 8) + uVar8 * 4);
      local_8._0_1_ = 2;
      local_24 = local_2c;
      if (local_2c != (char *)0x0) {
        FUN_00815f10(local_2c,&local_7c);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      ppcVar3 = *(char ***)(param_1 + 0x20);
      if (local_18 < ppcVar3) {
        ppcVar4 = *(char ***)(param_1 + 0x1c);
        if (local_18 < ppcVar4) goto LAB_0081449c;
        if (ppcVar3 == *(char ***)(param_1 + 0x24)) {
          FUN_007b94a0();
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) =
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + ((int)local_18 - (int)ppcVar4 >> 2) * 4);
        }
      }
      else {
LAB_0081449c:
        if (ppcVar3 == *(char ***)(param_1 + 0x24)) {
          FUN_007b94a0();
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) = local_18[0];
        }
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
      FUN_0098bf40();
      local_1c = local_1c + 2;
      iVar5 = local_40;
    } while (local_1c != local_20);
  }
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_7c);
}

