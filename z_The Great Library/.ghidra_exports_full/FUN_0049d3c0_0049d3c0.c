// FUN_0049d3c0 @ 0049d3c0 body=[[0049d3c0, 0049d4ea] [0049d4ee, 0049d6db] [0049d6e4, 0049d803] [0049d807, 0049da01] [0049da05, 0049da3b]]


void FUN_0049d3c0(int param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  undefined1 local_1b0 [16];
  undefined4 local_1a0;
  uint *local_19c;
  int *piStack_198;
  int *piStack_194;
  int local_180 [65];
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 *local_28;
  uint local_24;
  int *local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b76a2a;
  local_10 = ExceptionList;
  local_24 = 0;
  piStack_194 = (int *)0x360;
  local_28 = (undefined4 *)0x0;
  piStack_198 = (int *)0x49d3f3;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_00aae9af();
  local_8 = 0;
  local_20[2] = piVar3;
  if (piVar3 == (int *)0x0) {
    local_20[1] = (int *)0x0;
  }
  else {
    piStack_194 = (int *)0xf;
    piStack_198 = (int *)0xded978;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    local_19c = (uint *)0x49d422;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,1);
    piStack_194 = (int *)0x114;
    local_24 = 1;
    piStack_198 = (int *)0x49d437;
    piVar4 = (int *)FUN_00aae9af();
    local_8 = 2;
    local_20[0] = piVar4;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piStack_194 = (int *)(param_1 + 0x218c);
      piStack_198 = (int *)0x49d45a;
      FUN_0098ffc0();
      *piVar4 = (int)&PTR_FUN_00e37c3c;
    }
    *piVar3 = (int)&PTR_FUN_00e38524;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    *(undefined1 *)(piVar3 + 4) = 0;
    local_8 = 3;
    piStack_194 = (int *)0xffffffff;
    *(undefined1 *)(piVar3 + 5) = 0;
    piVar3[7] = (int)piVar4;
    piStack_198 = (int *)0x0;
    local_19c = local_44;
    piVar3[0xd0] = 0xf;
    piVar3[0xcf] = 0;
    *(undefined1 *)(piVar3 + 0xcb) = 0;
    local_1a0 = 0x49d4a4;
    FUN_00408ed0();
    piVar3[0xd2] = 0;
    piVar3[0xd3] = 0;
    piVar3[0xd4] = 0;
    *(undefined1 *)(piVar3 + 0xd6) = 1;
    piVar3[0xd7] = 0;
    local_20[1] = piVar3;
  }
  local_8 = 0xffffffff;
  if ((local_24 & 1) != 0) {
    local_24 = local_24 & 0xfffffffe;
    if (0xf < local_30) {
      piStack_194 = (int *)local_44[0];
                    /* WARNING: Subroutine does not return */
      piStack_198 = (int *)&UNK_0049d4eb;
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
  }
  while( true ) {
    piVar4 = local_20[1];
    local_8 = 0xffffffff;
    piVar3 = (int *)local_20[1][7];
    if ((char)piVar3[0x44] == '\0') {
      piStack_194 = (int *)0x49d514;
      iVar5 = (**(code **)(*piVar3 + 4))();
      piVar3[2] = iVar5;
      if (iVar5 == 0) {
        piVar3[3] = 0x13;
      }
      *(undefined1 *)(piVar3 + 0x44) = 1;
    }
    piVar3 = piVar3 + 3;
    piVar10 = local_180;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar10 = piVar10 + 1;
    }
    if (local_180[0] == 0x13) break;
    piStack_194 = piVar4;
    piStack_198 = (int *)0x49d54c;
    FUN_009a1440();
    piStack_198 = piVar4 + 9;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    piVar3 = piStack_198;
    do {
      iVar5 = *piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)iVar5 != '\0');
    piStack_194 = (int *)((int)piVar3 - ((int)piVar4 + 0x25));
    local_19c = (uint *)0x49d579;
    FUN_00409350();
    piStack_194 = (int *)0xfc;
    local_8 = 5;
    piStack_198 = (int *)0x49d58a;
    iVar5 = FUN_00aae9af();
    puVar7 = local_28;
    local_8._0_1_ = 6;
    if (iVar5 == 0) {
      local_20[2] = (int *)0x0;
    }
    else {
      piStack_194 = local_28;
      local_28 = (undefined4 *)local_1b0;
      local_19c = (uint *)0xf;
      local_1a0 = 0;
      local_1b0[0] = 0;
      local_20[2] = (int *)iVar5;
      FUN_00408ed0(local_7c,0,0xffffffff);
      local_20[2] = (int *)FUN_004caaa0(iVar5);
      local_28 = (undefined4 *)((int)puVar7 + 1);
    }
    piVar3 = local_20[2];
    local_8 = CONCAT31(local_8._1_3_,5);
    piStack_194 = local_20[1];
    piStack_198 = (int *)0x49d5ee;
    local_20[0] = local_20[2];
    (**(code **)(*local_20[2] + 0xc))();
    ppiVar1 = *(int ***)(param_1 + 0x2a8c);
    puVar9 = (uint *)(param_1 + 0x2a88);
    if ((local_20 < ppiVar1) && (ppiVar2 = (int **)*puVar9, ppiVar2 <= local_20)) {
      if (ppiVar1 == *(int ***)(param_1 + 0x2a90)) {
        uVar6 = (int)ppiVar1 - (int)ppiVar2 >> 2;
        if (0x3ffffffe < uVar6) goto LAB_0049d6e4;
        uVar6 = uVar6 + 1;
        uVar8 = (int)*(int ***)(param_1 + 0x2a90) - (int)ppiVar2 >> 2;
        if (uVar8 < uVar6) {
          if (0x3fffffff - (uVar8 >> 1) < uVar8) {
            piStack_194 = (int *)0x0;
          }
          else {
            piStack_194 = (int *)(uVar8 + (uVar8 >> 1));
          }
          if (piStack_194 < uVar6) {
            piStack_194 = (int *)uVar6;
          }
          piStack_198 = (int *)0x49d652;
          FUN_004bf300();
          piVar3 = local_20[2];
        }
      }
      if (*(undefined4 **)(param_1 + 0x2a8c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2a8c) =
             *(undefined4 *)(*puVar9 + ((int)local_20 - (int)ppiVar2 >> 2) * 4);
      }
    }
    else {
      if (ppiVar1 == *(int ***)(param_1 + 0x2a90)) {
        uVar6 = (int)((int)ppiVar1 - *puVar9) >> 2;
        if (0x3ffffffe < uVar6) goto LAB_0049d6e4;
        uVar6 = uVar6 + 1;
        uVar8 = (int)((int)*(int ***)(param_1 + 0x2a90) - *puVar9) >> 2;
        if (uVar8 < uVar6) {
          if (0x3fffffff - (uVar8 >> 1) < uVar8) {
            piStack_194 = (int *)0x0;
          }
          else {
            piStack_194 = (int *)(uVar8 + (uVar8 >> 1));
          }
          if (piStack_194 < uVar6) {
            piStack_194 = (int *)uVar6;
          }
          piStack_198 = (int *)0x49d6a6;
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x2a8c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2a8c) = piVar3;
      }
    }
    *(int *)(param_1 + 0x2a8c) = *(int *)(param_1 + 0x2a8c) + 4;
    piStack_198 = (int *)0x49d6c2;
    piStack_194 = piVar3;
    FUN_005611f0();
    local_8 = 0xffffffff;
    if (0xf < local_68) {
      piStack_194 = (int *)local_7c[0];
                    /* WARNING: Subroutine does not return */
      piStack_198 = (int *)&UNK_0049d6dc;
      FUN_00aae91b();
    }
  }
  piStack_194 = (int *)0x1;
  piStack_198 = (int *)0x49d6f8;
  (**(code **)*piVar4)();
  piStack_194 = (int *)0x360;
  piStack_198 = (int *)0x49d702;
  piVar3 = (int *)FUN_00aae9af();
  local_8 = 7;
  local_20[2] = piVar3;
  if (piVar3 == (int *)0x0) {
    local_20[1] = (int *)0x0;
  }
  else {
    piStack_194 = (int *)0xf;
    piStack_198 = (int *)0xded978;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    local_19c = (uint *)0x49d73a;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,8);
    local_24 = local_24 | 2;
    piStack_194 = (int *)0x114;
    piStack_198 = (int *)0x49d74c;
    puVar7 = (undefined4 *)FUN_00aae9af();
    local_8 = 9;
    local_28 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      piStack_194 = (int *)(param_1 + 0x21a8);
      piStack_198 = (int *)0x49d76f;
      FUN_0098ffc0();
      *puVar7 = &PTR_FUN_00e37c3c;
    }
    *piVar3 = (int)&PTR_FUN_00e38524;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    *(undefined1 *)(piVar3 + 4) = 0;
    local_8 = 10;
    piStack_194 = (int *)0xffffffff;
    *(undefined1 *)(piVar3 + 5) = 0;
    piVar3[7] = (int)puVar7;
    piStack_198 = (int *)0x0;
    local_19c = local_44;
    piVar3[0xd0] = 0xf;
    piVar3[0xcf] = 0;
    *(undefined1 *)(piVar3 + 0xcb) = 0;
    local_1a0 = 0x49d7b8;
    FUN_00408ed0();
    piVar3[0xd2] = 0;
    piVar3[0xd3] = 0;
    piVar3[0xd4] = 0;
    piVar3[0xd7] = 0;
    *(undefined1 *)(piVar3 + 0xd6) = 1;
    local_20[1] = piVar3;
  }
  local_8 = 0xffffffff;
  if ((local_24 & 2) != 0) {
    if (0xf < local_30) {
      piStack_194 = (int *)local_44[0];
                    /* WARNING: Subroutine does not return */
      piStack_198 = (int *)&UNK_0049d804;
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
  }
  do {
    piVar4 = local_20[1];
    local_8 = 0xffffffff;
    piVar3 = (int *)local_20[1][7];
    if ((char)piVar3[0x44] == '\0') {
      piStack_194 = (int *)0x49d835;
      iVar5 = (**(code **)(*piVar3 + 4))();
      piVar3[2] = iVar5;
      if (iVar5 == 0) {
        piVar3[3] = 0x13;
      }
      *(undefined1 *)(piVar3 + 0x44) = 1;
    }
    piVar3 = piVar3 + 3;
    piVar10 = local_180;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar10 = piVar10 + 1;
    }
    if (local_180[0] == 0x13) {
      piStack_194 = (int *)0x1;
      piStack_198 = (int *)0x49da29;
      (**(code **)*piVar4)();
      ExceptionList = local_10;
      return;
    }
    piStack_198 = (int *)0x49d86d;
    piStack_194 = piVar4;
    FUN_009a1440();
    piStack_198 = piVar4 + 9;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    piVar3 = piStack_198;
    do {
      iVar5 = *piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)iVar5 != '\0');
    piStack_194 = (int *)((int)piVar3 - ((int)piVar4 + 0x25));
    local_19c = (uint *)0x49d89a;
    FUN_00409350();
    piStack_194 = (int *)0xfc;
    local_8 = 0xc;
    piStack_198 = (int *)0x49d8ab;
    iVar5 = FUN_00aae9af();
    local_8._0_1_ = 0xd;
    if (iVar5 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piStack_194 = (int *)(*(int *)(param_1 + 0x2a8c) - *(int *)(param_1 + 0x2a88) >> 2);
      local_28 = (undefined4 *)local_1b0;
      local_19c = (uint *)0xf;
      local_1a0 = 0;
      local_1b0[0] = 0;
      local_20[2] = (int *)iVar5;
      FUN_00408ed0(local_60,0,0xffffffff);
      piVar3 = (int *)FUN_004caaa0(iVar5);
    }
    local_8 = CONCAT31(local_8._1_3_,0xc);
    piStack_194 = local_20[1];
    piStack_198 = (int *)0x49d917;
    local_20[0] = piVar3;
    local_20[2] = piVar3;
    (**(code **)(*piVar3 + 0xc))();
    ppiVar1 = *(int ***)(param_1 + 0x2a8c);
    puVar9 = (uint *)(param_1 + 0x2a88);
    if ((local_20 < ppiVar1) && (ppiVar2 = (int **)*puVar9, ppiVar2 <= local_20)) {
      if (ppiVar1 == *(int ***)(param_1 + 0x2a90)) {
        uVar6 = (int)ppiVar1 - (int)ppiVar2 >> 2;
        if (0x3ffffffe < uVar6) goto LAB_0049d6e4;
        uVar6 = uVar6 + 1;
        uVar8 = (int)*(int ***)(param_1 + 0x2a90) - (int)ppiVar2 >> 2;
        if (uVar8 < uVar6) {
          if (0x3fffffff - (uVar8 >> 1) < uVar8) {
            piStack_194 = (int *)0x0;
          }
          else {
            piStack_194 = (int *)(uVar8 + (uVar8 >> 1));
          }
          if (piStack_194 < uVar6) {
            piStack_194 = (int *)uVar6;
          }
          piStack_198 = (int *)0x49d978;
          FUN_004bf300();
          piVar3 = local_20[2];
        }
      }
      if (*(undefined4 **)(param_1 + 0x2a8c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2a8c) =
             *(undefined4 *)(*puVar9 + ((int)local_20 - (int)ppiVar2 >> 2) * 4);
      }
    }
    else {
      if (ppiVar1 == *(int ***)(param_1 + 0x2a90)) {
        uVar6 = (int)((int)ppiVar1 - *puVar9) >> 2;
        if (0x3ffffffe < uVar6) {
LAB_0049d6e4:
          piStack_194 = (int *)0xdeda30;
                    /* WARNING: Subroutine does not return */
          piStack_198 = (int *)0x49d6ee;
          FUN_00aad3ad();
        }
        uVar6 = uVar6 + 1;
        uVar8 = (int)((int)*(int ***)(param_1 + 0x2a90) - *puVar9) >> 2;
        if (uVar8 < uVar6) {
          if (0x3fffffff - (uVar8 >> 1) < uVar8) {
            piStack_194 = (int *)0x0;
          }
          else {
            piStack_194 = (int *)(uVar8 + (uVar8 >> 1));
          }
          if (piStack_194 < uVar6) {
            piStack_194 = (int *)uVar6;
          }
          piStack_198 = (int *)0x49d9d0;
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x2a8c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2a8c) = piVar3;
      }
    }
    *(int *)(param_1 + 0x2a8c) = *(int *)(param_1 + 0x2a8c) + 4;
    piStack_198 = (int *)0x49d9ec;
    piStack_194 = piVar3;
    FUN_005611f0();
    local_8 = 0xffffffff;
    if (0xf < local_4c) {
      piStack_194 = (int *)local_60[0];
                    /* WARNING: Subroutine does not return */
      piStack_198 = (int *)&UNK_0049da02;
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
  } while( true );
}

