// FUN_005edf10 @ 005edf10 body=[[005edf10, 005ee057] [005ee05b, 005ee07f] [005ee083, 005ee0b2] [005ee0b6, 005ee1d6] [005ee1dd, 005ee279] [005ee280, 005ee316] [005ee31d, 005ee378] [005ee382, 005ee398]]


void FUN_005edf10(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  int *in_EDX;
  int iVar9;
  bool bVar10;
  int *local_12c;
  int *piStack_128;
  int iStack_124;
  undefined1 uStack_120;
  undefined4 local_11c;
  uint local_118;
  uint local_110 [4];
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f4 [4];
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5a467;
  local_14 = ExceptionList;
  if (*in_ECX != *param_1) {
    local_118 = 0xf;
    local_11c = 0;
    local_12c = (int *)((uint)local_12c & 0xffffff00);
    ExceptionList = &local_14;
    FUN_00409350("history.cpp",0xb);
    local_c = 0;
    puVar5 = (undefined4 *)FUN_0043acd0(param_1,local_110);
    local_c._0_1_ = 1;
    puVar6 = (undefined4 *)FUN_0043acd0(in_ECX,local_f4);
    local_c._0_1_ = 2;
    uVar7 = FUN_004015b0(&local_12c,0x10c,0x10002);
    local_c._0_1_ = 3;
    FUN_00987d50(uVar7,"Executing History from ",0x17,0);
    if (0xf < (uint)puVar6[5]) {
      puVar6 = (undefined4 *)*puVar6;
    }
    uVar7 = FUN_00418e30(uVar7,puVar6);
    uVar7 = FUN_00418e30(uVar7," to  ");
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    uVar7 = FUN_00418e30(uVar7,puVar5);
    FUN_00401280(uVar7);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110[0]);
    }
    local_c = 0xffffffff;
    uStack_fc = 0xf;
    uStack_100 = 0;
    local_110[0] = local_110[0] & 0xffffff00;
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c);
    }
    iVar9 = 0;
    if (0 < (int)(in_EDX[1] - *in_EDX & 0xfffffffcU)) {
      do {
        FUN_005edc50(param_1);
        iVar9 = iVar9 + 1;
      } while (iVar9 < in_EDX[1] - *in_EDX >> 2);
    }
    iVar9 = 0;
    if (0 < (int)(in_EDX[5] - in_EDX[4] & 0xfffffffcU)) {
      do {
        FUN_005edc50(param_1);
        iVar9 = iVar9 + 1;
      } while (iVar9 < in_EDX[5] - in_EDX[4] >> 2);
    }
    FUN_005edc50(param_1);
    FUN_005edc50(param_1);
    local_12c = (int *)0x0;
    piStack_128 = (int *)0x0;
    iStack_124 = 0;
    uStack_120 = 0;
    local_c = 4;
    piVar4 = (int *)in_EDX[0xe];
    piVar8 = local_12c;
    while (local_12c = piVar8, piVar4 != (int *)0x0) {
      piVar8 = (int *)piVar4[2];
      iVar9 = *piVar4;
      piVar4 = piVar8;
      piVar8 = local_12c;
      if ((7 < (int)(*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) & 0xfffffff8U)) &&
         (7 < (int)(*(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x3c) & 0xfffffff8U))) {
        for (piVar8 = (int *)in_EDX[0xe]; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
          if (*piVar8 == iVar9) {
            if (piVar8 != (int *)0x0) {
              if ((char)in_EDX[0x11] == '\0') {
                iVar9 = piVar8[1];
                iVar1 = piVar8[2];
                if (iVar9 != 0) {
                  *(int *)(iVar9 + 8) = iVar1;
                }
                if (iVar1 != 0) {
                  *(int *)(iVar1 + 4) = iVar9;
                }
                if (piVar8 == (int *)in_EDX[0xe]) {
                  in_EDX[0xe] = iVar1;
                }
                if (piVar8 == (int *)in_EDX[0xf]) {
                  in_EDX[0xf] = iVar9;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(piVar8);
              }
              *(undefined1 *)(piVar8 + 3) = 1;
            }
            break;
          }
        }
        iVar1 = in_EDX[0xb];
        piVar8 = (int *)FUN_00aae9af(0x10);
        piVar3 = piStack_128;
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = iVar9;
          piVar8[1] = iVar1;
          piVar8[2] = 0;
          *(undefined1 *)(piVar8 + 3) = 0;
        }
        iVar2 = in_EDX[0xc];
        in_EDX[0xb] = (int)piVar8;
        in_EDX[0xc] = iVar2 + 1;
        if (iVar2 == 0) {
          in_EDX[10] = (int)piVar8;
        }
        else {
          *(int **)(iVar1 + 8) = piVar8;
        }
        piStack_128 = (int *)FUN_00aae9af(0x10);
        if (piStack_128 == (int *)0x0) {
          piStack_128 = (int *)0x0;
        }
        else {
          *piStack_128 = iVar9;
          piStack_128[1] = (int)piVar3;
          piStack_128[2] = 0;
          *(undefined1 *)(piStack_128 + 3) = 0;
        }
        iVar9 = iStack_124 + 1;
        bVar10 = iStack_124 != 0;
        piVar8 = piStack_128;
        iStack_124 = iVar9;
        if (bVar10) {
          piVar3[2] = (int)piStack_128;
          piVar8 = local_12c;
        }
      }
    }
    piVar4 = (int *)in_EDX[10];
joined_r0x005ee272:
    if (piVar4 != (int *)0x0) {
      piVar8 = (int *)piVar4[2];
      iVar9 = *piVar4;
      for (piVar3 = local_12c; piVar4 = piVar8, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (*piVar3 == iVar9) goto joined_r0x005ee272;
      }
      if (((int)(*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) & 0xfffffff8U) < 8) ||
         ((int)(*(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x3c) & 0xfffffff8U) < 8)) {
        for (piVar8 = (int *)in_EDX[10]; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
          if (*piVar8 == iVar9) {
            if (piVar8 != (int *)0x0) {
              if ((char)in_EDX[0xd] == '\0') {
                iVar9 = piVar8[1];
                iVar1 = piVar8[2];
                if (iVar9 != 0) {
                  *(int *)(iVar9 + 8) = iVar1;
                }
                if (iVar1 != 0) {
                  *(int *)(iVar1 + 4) = iVar9;
                }
                if (piVar8 == (int *)in_EDX[10]) {
                  in_EDX[10] = iVar1;
                }
                if (piVar8 == (int *)in_EDX[0xb]) {
                  in_EDX[0xb] = iVar9;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(piVar8);
              }
              *(undefined1 *)(piVar8 + 3) = 1;
            }
            break;
          }
        }
        iVar1 = in_EDX[0xf];
        piVar8 = (int *)FUN_00aae9af(0x10);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = iVar9;
          piVar8[1] = iVar1;
          piVar8[2] = 0;
          *(undefined1 *)(piVar8 + 3) = 0;
        }
        iVar9 = in_EDX[0x10];
        in_EDX[0xf] = (int)piVar8;
        in_EDX[0x10] = iVar9 + 1;
        if (iVar9 == 0) {
          in_EDX[0xe] = (int)piVar8;
        }
        else {
          *(int **)(iVar1 + 8) = piVar8;
        }
      }
      goto joined_r0x005ee272;
    }
    if (local_12c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c);
    }
  }
  ExceptionList = local_14;
  return;
}

