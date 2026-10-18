// FUN_0089e340 @ 0089e340 body=[[0089e340, 0089e56d] [0089e571, 0089e654] [0089e660, 0089e790]]


void FUN_0089e340(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined1 local_60 [20];
  int local_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b42525;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
        piVar9 = *(int **)(iVar1 + 0x9d8);
        ExceptionList = &local_14;
        while ((*(int **)(iVar1 + 0x9d8) <= piVar9 && (piVar9 < *(int **)(iVar1 + 0x9dc)))) {
          iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
          piVar9 = piVar9 + 1;
          FUN_008a88d0();
          if (DAT_0131bb34 == 0) {
            iVar8 = FUN_00aae9af(0x188);
            local_c = 3;
            if (iVar8 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_0041a160();
            }
            local_c = 0xffffffff;
            FUN_00423700(uVar7);
          }
          local_c0 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
          if (0 < local_c0) {
            local_c8 = 0;
            do {
              iVar8 = *(int *)(local_c8 + *(int *)(iVar6 + 0x194));
              iVar4 = local_4c;
              while (local_4c = iVar8, local_4c != 0) {
                iVar8 = *(int *)(local_4c + 0x27c);
                if ((*(int *)(*(int *)(local_4c + 0x68) + 0x3c) == *(int *)(in_ECX + 0x3c)) &&
                   (cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_60),
                   iVar4 = local_4c, cVar5 == '\x01')) {
                  puVar2 = *(undefined4 **)(in_ECX + 8);
                  while (iVar4 = local_4c, puVar2 != (undefined4 *)0x0) {
                    piVar3 = (int *)*puVar2;
                    puVar2 = (undefined4 *)puVar2[2];
                    (**(code **)(*piVar3 + 0x2c))(local_60,param_2);
                  }
                }
              }
              local_c8 = local_c8 + 0x10;
              local_c0 = local_c0 + -1;
              local_4c = iVar4;
            } while (local_c0 != 0);
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                      0x188);
      piVar9 = *(int **)(iVar1 + 0x48);
      ExceptionList = &local_14;
      while ((*(int **)(iVar1 + 0x48) <= piVar9 && (piVar9 < *(int **)(iVar1 + 0x4c)))) {
        iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
        piVar9 = piVar9 + 1;
        FUN_008a88d0();
        if (DAT_0131bb34 == 0) {
          iVar8 = FUN_00aae9af(0x188);
          local_c = 1;
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = FUN_0041a160();
          }
          iVar4 = DAT_0131bb34;
          local_c = 2;
          if ((iVar8 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar4);
          }
          local_c = 0xffffffff;
          DAT_0131bb34 = iVar8;
        }
        local_c4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        if (0 < local_c4) {
          local_c8 = 0;
          do {
            iVar8 = *(int *)(local_c8 + *(int *)(iVar6 + 0x194));
            iVar4 = local_94;
            while (local_94 = iVar8, local_94 != 0) {
              iVar8 = *(int *)(local_94 + 0x27c);
              if ((*(int *)(*(int *)(local_94 + 0x68) + 0x3c) == *(int *)(in_ECX + 0x3c)) &&
                 (cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_a8), iVar4 = local_94,
                 cVar5 == '\x01')) {
                puVar2 = *(undefined4 **)(in_ECX + 8);
                while (iVar4 = local_94, puVar2 != (undefined4 *)0x0) {
                  piVar3 = (int *)*puVar2;
                  puVar2 = (undefined4 *)puVar2[2];
                  (**(code **)(*piVar3 + 0x2c))(local_a8,param_2);
                }
              }
            }
            local_c8 = local_c8 + 0x10;
            local_c4 = local_c4 + -1;
            local_94 = iVar4;
          } while (local_c4 != 0);
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    ExceptionList = &local_14;
    FUN_008a88d0();
    local_a0 = 0x2d2d2d;
    local_90 = 0;
    local_9c = 0;
    local_98 = 0;
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
    local_c4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < local_c4) {
      local_c8 = 0;
      do {
        iVar6 = *(int *)(local_c8 + *(int *)(iVar1 + 0x194));
        while (local_94 = iVar6, local_94 != 0) {
          iVar6 = *(int *)(local_94 + 0x27c);
          if ((*(int *)(*(int *)(local_94 + 0x68) + 0x3c) == *(int *)(in_ECX + 0x3c)) &&
             (cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_a8), cVar5 == '\x01')) {
            puVar2 = *(undefined4 **)(in_ECX + 8);
            while (puVar2 != (undefined4 *)0x0) {
              piVar9 = (int *)*puVar2;
              puVar2 = (undefined4 *)puVar2[2];
              (**(code **)(*piVar9 + 0x2c))(local_a8,param_2);
            }
          }
        }
        local_c8 = local_c8 + 0x10;
        local_c4 = local_c4 + -1;
      } while (local_c4 != 0);
    }
  }
  ExceptionList = local_14;
  return;
}

