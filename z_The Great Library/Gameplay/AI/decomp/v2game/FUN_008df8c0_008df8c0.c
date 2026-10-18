// FUN_008df8c0 @ 008df8c0 body=[[008df8c0, 008df97c] [008df980, 008dfb95]]


undefined4 FUN_008df8c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_d0;
  int local_cc;
  undefined1 local_a8 [20];
  int local_94;
  undefined1 local_60 [20];
  int local_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar1 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4247c;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      ExceptionList = &local_14;
      if (DAT_0131bb34 == 0) {
        ExceptionList = &local_14;
        iVar6 = FUN_00aae9af(0x188);
        local_c = 1;
        if (iVar6 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_0041a160();
        }
        local_c = 0xffffffff;
        FUN_00423700(uVar7);
      }
      iVar2 = DAT_0131bb34;
      iVar6 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                      0x188);
      piVar9 = *(int **)(iVar6 + 0x48);
      while ((*(int **)(iVar6 + 0x48) <= piVar9 && (piVar9 < *(int **)(iVar6 + 0x4c)))) {
        iVar8 = *(int *)(*(int *)(iVar1 + 0xacc) + *piVar9 * 4);
        piVar9 = piVar9 + 1;
        FUN_008a88d0();
        local_cc = 0;
        iVar11 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2;
        if (0 < iVar11) {
          local_d0 = 0;
          do {
            iVar3 = *(int *)(local_d0 + *(int *)(iVar8 + 0x194));
            iVar4 = local_4c;
            while (local_4c = iVar3, local_4c != 0) {
              iVar3 = *(int *)(local_4c + 0x27c);
              iVar12 = 0;
              iVar10 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
              if (iVar10 < 1) {
                ExceptionList = local_14;
                return 1;
              }
              while (cVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar12 * 4) + 0x18))
                                       (local_60), iVar4 = local_4c, cVar5 != '\0') {
                iVar12 = iVar12 + 1;
                if (iVar10 <= iVar12) {
                  ExceptionList = local_14;
                  return 1;
                }
              }
            }
            local_d0 = local_d0 + 0x10;
            local_cc = local_cc + 1;
            local_4c = iVar4;
          } while (local_cc < iVar11);
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    ExceptionList = &local_14;
    FUN_008a88d0();
    if (DAT_0131bb34 == 0) {
      iVar6 = FUN_00aae9af(0x188);
      local_c = 0;
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0041a160();
      }
      local_c = 0xffffffff;
      FUN_00423700(uVar7);
    }
    local_cc = 0;
    iVar6 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < iVar6) {
      local_d0 = 0;
      do {
        iVar2 = *(int *)(local_d0 + *(int *)(iVar1 + 0x194));
        while (local_94 = iVar2, local_94 != 0) {
          iVar2 = *(int *)(local_94 + 0x27c);
          iVar11 = 0;
          iVar8 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
          if (iVar8 < 1) {
            ExceptionList = local_14;
            return 1;
          }
          while (cVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar11 * 4) + 0x18))
                                   (local_a8), cVar5 != '\0') {
            iVar11 = iVar11 + 1;
            if (iVar8 <= iVar11) {
              ExceptionList = local_14;
              return 1;
            }
          }
        }
        local_d0 = local_d0 + 0x10;
        local_cc = local_cc + 1;
      } while (local_cc < iVar6);
    }
  }
  ExceptionList = local_14;
  return 0;
}

