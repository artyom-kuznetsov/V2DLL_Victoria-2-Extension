// FUN_008991a0 @ 008991a0 body=[[008991a0, 008993b8] [008993c0, 008995b1]]


void FUN_008991a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  int local_d0;
  int local_cc;
  int local_c4;
  int local_bc;
  undefined1 local_a8 [16];
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar1 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4259a;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
        piVar11 = *(int **)(iVar1 + 0x9d8);
        ExceptionList = &local_14;
        while ((*(int **)(iVar1 + 0x9d8) <= piVar11 && (piVar11 < *(int **)(iVar1 + 0x9dc)))) {
          iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar11 * 4);
          piVar11 = piVar11 + 1;
          FUN_008a88d0();
          local_58 = 0x2d2d2d;
          local_54 = 0;
          if (DAT_0131bb34 == 0) {
            iVar10 = FUN_00aae9af(0x188);
            local_c = 2;
            if (iVar10 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_0041a160();
            }
            local_c = 0xffffffff;
            FUN_00423700(uVar9);
          }
          local_cc = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
          if (0 < local_cc) {
            local_d0 = 0;
            do {
              iVar10 = *(int *)(local_d0 + *(int *)(iVar8 + 0x194));
              iVar3 = local_4c;
              while (local_4c = iVar10, local_4c != 0) {
                iVar10 = *(int *)(local_4c + 0x27c);
                cVar7 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_60);
                iVar3 = local_4c;
                if (cVar7 == '\x01') {
                  puVar2 = *(undefined4 **)(in_ECX + 8);
                  while (iVar3 = local_4c, puVar2 != (undefined4 *)0x0) {
                    piVar5 = (int *)*puVar2;
                    puVar2 = (undefined4 *)puVar2[2];
                    (**(code **)(*piVar5 + 0x2c))(local_60,param_2);
                  }
                }
              }
              local_d0 = local_d0 + 0x10;
              local_cc = local_cc + -1;
              local_4c = iVar3;
            } while (local_cc != 0);
          }
        }
      }
    }
    else {
      iVar8 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                      0x188);
      piVar11 = *(int **)(iVar8 + 0x48);
      ExceptionList = &local_14;
      if (DAT_0131bb34 == 0) {
        ExceptionList = &local_14;
        iVar10 = FUN_00aae9af(0x188);
        local_c = 1;
        if (iVar10 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_0041a160();
        }
        local_c = 0xffffffff;
        FUN_00423700(uVar9);
      }
      iVar10 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
      while ((*(int **)(iVar8 + 0x48) <= piVar11 && (piVar11 < *(int **)(iVar8 + 0x4c)))) {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xacc) + *piVar11 * 4);
        piVar11 = piVar11 + 1;
        FUN_008a88d0();
        local_90 = 0;
        if (0 < iVar10) {
          local_d0 = 0;
          local_c4 = iVar10;
          do {
            iVar4 = *(int *)(local_d0 + *(int *)(iVar3 + 0x194));
            iVar6 = local_94;
            while (local_94 = iVar4, local_94 != 0) {
              iVar4 = *(int *)(local_94 + 0x27c);
              cVar7 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_a8);
              iVar6 = local_94;
              if (cVar7 == '\x01') {
                puVar2 = *(undefined4 **)(in_ECX + 8);
                while (iVar6 = local_94, puVar2 != (undefined4 *)0x0) {
                  piVar5 = (int *)*puVar2;
                  puVar2 = (undefined4 *)puVar2[2];
                  (**(code **)(*piVar5 + 0x2c))(local_a8,param_2);
                }
              }
            }
            local_d0 = local_d0 + 0x10;
            local_c4 = local_c4 + -1;
            local_94 = iVar6;
          } while (local_c4 != 0);
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    ExceptionList = &local_14;
    FUN_008a88d0();
    local_98 = 0xffffffff;
    if (DAT_0131bb34 == 0) {
      iVar8 = FUN_00aae9af(0x188);
      local_c = 0;
      if (iVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_0041a160();
      }
      local_c = 0xffffffff;
      FUN_00423700(uVar9);
    }
    local_bc = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < local_bc) {
      local_d0 = 0;
      do {
        iVar8 = *(int *)(local_d0 + *(int *)(iVar1 + 0x194));
        while (local_94 = iVar8, local_94 != 0) {
          iVar8 = *(int *)(local_94 + 0x27c);
          cVar7 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_a8);
          if (cVar7 == '\x01') {
            puVar2 = *(undefined4 **)(in_ECX + 8);
            while (puVar2 != (undefined4 *)0x0) {
              piVar11 = (int *)*puVar2;
              puVar2 = (undefined4 *)puVar2[2];
              (**(code **)(*piVar11 + 0x2c))(local_a8,param_2);
            }
          }
        }
        local_d0 = local_d0 + 0x10;
        local_bc = local_bc + -1;
      } while (local_bc != 0);
    }
  }
  ExceptionList = local_14;
  return;
}

