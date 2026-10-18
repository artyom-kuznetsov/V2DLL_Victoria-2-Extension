// FUN_004bba40 @ 004bba40 body=[[004bba40, 004bbb5b] [004bbb60, 004bbd0e] [004bbd10, 004bbd2d] [004bbd31, 004bbd44]]


void FUN_004bba40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_3c [4];
  int local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5fd5e;
  local_14 = ExceptionList;
  piVar5 = (int *)0x0;
  ExceptionList = &local_14;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_14;
    local_2c = FUN_00aae9af(0x188);
    local_c = 0;
    if (local_2c == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0041a160();
    }
    local_c = 0xffffffff;
    FUN_00423700(uVar1);
  }
  local_3c[3] = DAT_0131bb34;
  if (DAT_0131bb34 == 0) {
    local_2c = FUN_00aae9af(0x188);
    local_c = 1;
    if (local_2c == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0041a160();
    }
    FUN_00423700(uVar1);
  }
  iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  piVar6 = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = (int *)0x0;
  local_c = 2;
  local_3c[2] = 0;
  local_2c = iVar8;
  if (0 < iVar8) {
    local_3c[1] = 0;
    do {
      if (*(int *)(local_3c[3] + 0x10) - *(int *)(local_3c[3] + 0xc) >> 2 < local_3c[2]) {
        iVar2 = FUN_0096bb70();
      }
      else {
        iVar2 = *(int *)(*(int *)(local_3c[3] + 0xc) + local_3c[2] * 4);
      }
      piVar7 = local_24;
      if (*(char *)(iVar2 + 0x3d9) != '\0') {
        for (iVar2 = *(int *)(local_3c[1] + *(int *)(param_1 + 0x194)); local_24 = piVar6,
            piVar6 = local_24, iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x27c)) {
          local_3c[0] = iVar2;
          if ((local_3c < local_24) && (piVar5 <= local_3c)) {
            iVar9 = (int)local_3c - (int)piVar5;
            if (local_24 == local_20) {
              uVar3 = (int)local_24 - (int)piVar5 >> 2;
              if (0x3ffffffe < uVar3) {
LAB_004bbca6:
                local_24 = piVar7;
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar3 = uVar3 + 1;
              uVar4 = (int)local_20 - (int)piVar5 >> 2;
              if (uVar4 < uVar3) {
                if (0x3fffffff - (uVar4 >> 1) < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar3) {
                  uVar4 = uVar3;
                }
                local_24 = piVar7;
                FUN_004bf300(uVar4);
                piVar5 = local_28;
              }
            }
            iVar8 = local_2c;
            if (local_24 != (int *)0x0) {
              *local_24 = piVar5[iVar9 >> 2];
            }
          }
          else {
            if (local_24 == local_20) {
              uVar3 = (int)local_24 - (int)piVar5 >> 2;
              if (0x3ffffffe < uVar3) goto LAB_004bbca6;
              uVar3 = uVar3 + 1;
              uVar4 = (int)local_20 - (int)piVar5 >> 2;
              if (uVar4 < uVar3) {
                if (0x3fffffff - (uVar4 >> 1) < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar3) {
                  uVar4 = uVar3;
                }
                local_24 = piVar7;
                FUN_004bf300(uVar4);
                piVar5 = local_28;
              }
            }
            if (local_24 != (int *)0x0) {
              *local_24 = iVar2;
            }
          }
          piVar7 = local_24 + 1;
          piVar6 = piVar7;
        }
      }
      local_24 = piVar7;
      local_3c[1] = local_3c[1] + 0x10;
      local_3c[2] = local_3c[2] + 1;
    } while (local_3c[2] < iVar8);
  }
  local_3c[2] = (int)piVar6 - (int)piVar5 >> 2;
  if (local_3c[2] != 0) {
    iVar8 = *(int *)(param_1 + 0x58);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)FUN_00aae9af(0x14);
      if (DAT_01258728 == (int *)0x0) {
        DAT_01258728 = (int *)0x0;
      }
      else {
        *DAT_01258728 = 0;
        DAT_01258728[1] = 0;
        DAT_01258728[2] = 0;
        *(undefined1 *)(DAT_01258728 + 4) = 0;
      }
    }
    iVar8 = *(int *)(iVar8 * 0xb0 + 8 + *DAT_01258728);
    iVar9 = 0;
    iVar2 = *(int *)(iVar8 + 0x10c) - *(int *)(iVar8 + 0x108) >> 5;
    if (0 < iVar2) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x108) + 8);
      do {
        if (*(char *)(*piVar6 + 0x3d9) == '\0') {
          local_2c = *(int *)(iVar9 * 0x20 + 8 + *(int *)(iVar8 + 0x108));
          if ((local_2c != 0) && (iVar8 = 0, 0 < local_3c[2])) {
            do {
              FUN_00955d90(local_2c);
              iVar8 = iVar8 + 1;
            } while (iVar8 < local_3c[2]);
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar6 = piVar6 + 8;
      } while (iVar9 < iVar2);
    }
  }
  if (piVar5 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar5);
  }
  ExceptionList = local_14;
  return;
}

