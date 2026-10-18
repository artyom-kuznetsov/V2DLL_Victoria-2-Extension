// FUN_005047c0 @ 005047c0 body=[[005047c0, 005047ea] [005047f0, 00504c00]]


void FUN_005047c0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int local_10;
  undefined4 local_c;
  undefined1 local_6 [2];
  
  piVar7 = DAT_012587e4;
  local_10 = 0;
  if (0 < *DAT_012587e4) {
    local_6[1] = 0;
    do {
      iVar8 = FUN_00aae9af(0xac);
      if (iVar8 == 0) {
        uVar9 = 0;
      }
      else {
        iVar8 = *(int *)(piVar7[1] + local_10 * 4);
        uVar9 = FUN_0092d490(*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar8 + 0x20),
                             *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      }
      puVar2 = *(undefined4 **)(param_1 + 0xbec);
      local_c = uVar9;
      if ((&local_c < puVar2) && (puVar3 = *(undefined4 **)(param_1 + 0xbe8), puVar3 <= &local_c)) {
        if (puVar2 == *(undefined4 **)(param_1 + 0xbf0)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0xbec) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0xbec) =
               *(undefined4 *)(*(int *)(param_1 + 0xbe8) + ((int)&local_c - (int)puVar3 >> 2) * 4);
        }
      }
      else {
        if (puVar2 == *(undefined4 **)(param_1 + 0xbf0)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0xbec) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0xbec) = uVar9;
        }
      }
      *(int *)(param_1 + 0xbec) = *(int *)(param_1 + 0xbec) + 4;
      puVar4 = *(undefined1 **)(param_1 + 0xd0c);
      puVar1 = (uint *)(param_1 + 0xd08);
      puVar6 = local_6 + 1;
      if ((puVar6 < puVar4) && (puVar5 = (undefined1 *)*puVar1, puVar5 <= puVar6)) {
        if (puVar4 == *(undefined1 **)(param_1 + 0xd10)) {
          if ((int)puVar4 - (int)puVar5 == -1) goto LAB_00504bf7;
          uVar10 = ((int)puVar4 - (int)puVar5) + 1;
          uVar11 = (int)*(undefined1 **)(param_1 + 0xd10) - (int)puVar5;
          if (uVar11 < uVar10) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_009d7290(uVar11);
          }
        }
        if (*(undefined1 **)(param_1 + 0xd0c) != (undefined1 *)0x0) {
          **(undefined1 **)(param_1 + 0xd0c) = puVar6[*puVar1 - (int)puVar5];
        }
      }
      else {
        if (puVar4 == *(undefined1 **)(param_1 + 0xd10)) {
          iVar8 = (int)puVar4 - *puVar1;
          if (iVar8 == -1) goto LAB_00504bf7;
          uVar10 = iVar8 + 1;
          uVar11 = (int)*(undefined1 **)(param_1 + 0xd10) - *puVar1;
          if (uVar11 < uVar10) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_009d7290(uVar11);
          }
        }
        if (*(undefined1 **)(param_1 + 0xd0c) != (undefined1 *)0x0) {
          **(undefined1 **)(param_1 + 0xd0c) = 0;
        }
      }
      *(int *)(param_1 + 0xd0c) = *(int *)(param_1 + 0xd0c) + 1;
      puVar6 = *(undefined1 **)(param_1 + 0xd1c);
      puVar1 = (uint *)(param_1 + 0xd18);
      local_6[0] = 0;
      if (local_6 < puVar6) {
        puVar4 = (undefined1 *)*puVar1;
        if (local_6 < puVar4) goto LAB_005049b3;
        if (puVar6 == *(undefined1 **)(param_1 + 0xd20)) {
          if ((int)puVar6 - (int)puVar4 == -1) goto LAB_00504bf7;
          uVar10 = ((int)puVar6 - (int)puVar4) + 1;
          uVar11 = (int)*(undefined1 **)(param_1 + 0xd20) - (int)puVar4;
          if (uVar11 < uVar10) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_009d7290(uVar11);
          }
        }
        if (*(undefined1 **)(param_1 + 0xd1c) != (undefined1 *)0x0) {
          **(undefined1 **)(param_1 + 0xd1c) = local_6[*puVar1 - (int)puVar4];
        }
      }
      else {
LAB_005049b3:
        if (puVar6 == *(undefined1 **)(param_1 + 0xd20)) {
          iVar8 = (int)puVar6 - *puVar1;
          if (iVar8 == -1) goto LAB_00504bf7;
          uVar10 = iVar8 + 1;
          uVar11 = (int)*(undefined1 **)(param_1 + 0xd20) - *puVar1;
          if (uVar11 < uVar10) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_009d7290(uVar11);
          }
        }
        if (*(undefined1 **)(param_1 + 0xd1c) != (undefined1 *)0x0) {
          **(undefined1 **)(param_1 + 0xd1c) = 0;
        }
      }
      *(int *)(param_1 + 0xd1c) = *(int *)(param_1 + 0xd1c) + 1;
      FUN_00401000(0x3f000000);
      uVar9 = FUN_00b31c00();
      puVar2 = *(undefined4 **)(param_1 + 0xdbc);
      local_c = uVar9;
      if ((&local_c < puVar2) && (puVar3 = *(undefined4 **)(param_1 + 0xdb8), puVar3 <= &local_c)) {
        if (puVar2 == *(undefined4 **)(param_1 + 0xdc0)) {
          FUN_00435b20();
        }
        if (*(undefined4 **)(param_1 + 0xdbc) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0xdbc) =
               *(undefined4 *)(*(int *)(param_1 + 0xdb8) + ((int)&local_c - (int)puVar3 >> 2) * 4);
        }
      }
      else {
        if (puVar2 == *(undefined4 **)(param_1 + 0xdc0)) {
          FUN_00435b20();
        }
        if (*(undefined4 **)(param_1 + 0xdbc) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0xdbc) = uVar9;
        }
      }
      *(int *)(param_1 + 0xdbc) = *(int *)(param_1 + 0xdbc) + 4;
      puVar6 = *(undefined1 **)(param_1 + 0xd2c);
      puVar1 = (uint *)(param_1 + 0xd28);
      local_6[0] = 0;
      if ((local_6 < puVar6) && (puVar4 = (undefined1 *)*puVar1, puVar4 <= local_6)) {
        if (puVar6 == *(undefined1 **)(param_1 + 0xd30)) {
          if ((int)puVar6 - (int)puVar4 == -1) {
LAB_00504bf7:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar10 = ((int)puVar6 - (int)puVar4) + 1;
          uVar11 = (int)*(undefined1 **)(param_1 + 0xd30) - (int)puVar4;
          if (uVar11 < uVar10) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_009d7290(uVar11);
          }
        }
        if (*(undefined1 **)(param_1 + 0xd2c) != (undefined1 *)0x0) {
          **(undefined1 **)(param_1 + 0xd2c) = local_6[*puVar1 - (int)puVar4];
        }
      }
      else {
        if (puVar6 == *(undefined1 **)(param_1 + 0xd30)) {
          iVar8 = (int)puVar6 - *puVar1;
          if (iVar8 == -1) goto LAB_00504bf7;
          uVar10 = iVar8 + 1;
          uVar11 = (int)*(undefined1 **)(param_1 + 0xd30) - *puVar1;
          if (uVar11 < uVar10) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_009d7290(uVar11);
          }
        }
        if (*(undefined1 **)(param_1 + 0xd2c) != (undefined1 *)0x0) {
          **(undefined1 **)(param_1 + 0xd2c) = 0;
        }
      }
      *(int *)(param_1 + 0xd2c) = *(int *)(param_1 + 0xd2c) + 1;
      puVar2 = *(undefined4 **)(param_1 + 0x13f4);
      local_c = 0;
      if ((&local_c < puVar2) && (puVar3 = *(undefined4 **)(param_1 + 0x13f0), puVar3 <= &local_c))
      {
        if (puVar2 == *(undefined4 **)(param_1 + 0x13f8)) {
          FUN_007b94a0();
        }
        if (*(undefined4 **)(param_1 + 0x13f4) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x13f4) =
               *(undefined4 *)(*(int *)(param_1 + 0x13f0) + ((int)&local_c - (int)puVar3 >> 2) * 4);
        }
      }
      else {
        if (puVar2 == *(undefined4 **)(param_1 + 0x13f8)) {
          FUN_007b94a0();
        }
        if (*(undefined4 **)(param_1 + 0x13f4) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x13f4) = 0;
        }
      }
      *(int *)(param_1 + 0x13f4) = *(int *)(param_1 + 0x13f4) + 4;
      local_10 = local_10 + 1;
    } while (local_10 < *piVar7);
  }
  return;
}

