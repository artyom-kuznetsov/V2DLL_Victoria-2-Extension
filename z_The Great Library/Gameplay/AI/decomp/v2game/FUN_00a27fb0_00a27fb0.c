// FUN_00a27fb0 @ 00a27fb0 body=[[00a27fb0, 00a2804e] [00a28050, 00a284cd] [00a284d1, 00a284e3]]


void FUN_00a27fb0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,
                 char param_6,char param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  uint *puVar8;
  int iVar9;
  undefined4 local_98;
  uint local_84;
  undefined1 local_60 [56];
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e5f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  FUN_00409350(&DAT_00ded94d,0);
  local_14 = 0;
  local_18 = 0;
  local_20 = 0;
  local_1c = 0;
  if (param_3 == 0) {
    param_3 = 0x140;
  }
  iVar2 = *param_5;
  iVar5 = param_1[4];
  param_4 = param_4 + iVar2 * -2;
  param_5 = (int *)in_ECX[0x125];
  iVar9 = 0;
  local_28 = (int)param_5;
  if (0 < iVar5) {
    do {
      uVar3 = param_1[5];
      puVar6 = param_1;
      if (0xf < uVar3) {
        puVar6 = (undefined4 *)*param_1;
      }
      if (*(char *)((int)puVar6 + iVar9) == -0x59) {
        iVar9 = iVar9 + 1;
      }
      else {
        puVar6 = param_1;
        if (0xf < uVar3) {
          puVar6 = (undefined4 *)*param_1;
        }
        if (*(char *)((int)puVar6 + iVar9) == '{') {
          local_14 = local_14 + 8;
          iVar9 = iVar9 + 3;
          local_18 = local_18 + 8;
        }
        else {
          puVar6 = param_1;
          if (0xf < uVar3) {
            puVar6 = (undefined4 *)*param_1;
          }
          if (*(char *)((int)puVar6 + iVar9) == '@') {
            iVar9 = iVar9 + 3;
            iVar5 = (**(code **)(*in_ECX + 0x68))();
            local_14 = local_14 + iVar5;
            iVar5 = (**(code **)(*in_ECX + 0x68))();
            local_18 = local_18 + iVar5;
          }
          else {
            puVar6 = param_1;
            if (0xf < uVar3) {
              puVar6 = (undefined4 *)*param_1;
            }
            if (*(char *)((int)puVar6 + iVar9) == -0x5d) {
              while( true ) {
                puVar6 = param_1;
                if (0xf < uVar3) {
                  puVar6 = (undefined4 *)*param_1;
                }
                cVar1 = *(char *)((int)puVar6 + iVar9 + 1);
                if (((((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
                    (cVar1 != '_')) || (iVar5 < iVar9 + 2)) break;
                iVar9 = iVar9 + 1;
              }
              iVar5 = (**(code **)(*in_ECX + 100))();
              local_14 = local_14 + iVar5;
              iVar5 = (**(code **)(*in_ECX + 100))();
              local_18 = local_18 + iVar5;
            }
            else {
              puVar6 = param_1;
              if (0xf < uVar3) {
                puVar6 = (undefined4 *)*param_1;
              }
              if (*(char *)((int)puVar6 + iVar9) == ' ') {
                local_18 = 0;
                local_20 = iVar9;
              }
              puVar6 = param_1;
              if (0xf < uVar3) {
                puVar6 = (undefined4 *)*param_1;
              }
              iVar4 = local_24[*(byte *)((int)puVar6 + iVar9) + 0x25];
              if (iVar4 == 0) {
                puVar6 = param_1;
                if (0xf < (uint)param_1[5]) {
                  puVar6 = (undefined4 *)*param_1;
                }
                if (*(char *)((int)puVar6 + iVar9) != '\n') {
                  puVar6 = param_1;
                  if (0xf < (uint)param_1[5]) {
                    puVar6 = (undefined4 *)*param_1;
                  }
                  if (*(char *)((int)puVar6 + iVar9) != '\r') goto LAB_00a2837e;
                }
                param_5 = (int *)((int)param_5 + local_28);
                local_18 = 0;
                local_14 = 0;
                local_20 = iVar9;
                if (param_7 != '\0') {
                  FUN_009885d0();
                  local_8 = 8;
                  FUN_009895f0(iVar9);
                  local_8._0_1_ = 9;
                  uVar7 = FUN_00988f20(local_60);
                  local_8 = CONCAT31(local_8._1_3_,10);
                  FUN_00448aa0(uVar7,0,0xffffffff);
                  FUN_00408ad0();
                  FUN_00408ad0();
                  local_8 = 0xffffffff;
                  FUN_00408ad0();
                  local_1c = iVar9 + 1;
                }
                if (param_4 < (int)param_5) {
                  if (param_7 != '\0') {
                    ExceptionList = local_10;
                    return;
                  }
                  uVar7 = FUN_009895f0(iVar9);
                  if (param_6 != '\0') {
                    local_8 = 0xb;
LAB_00a283b5:
                    FUN_00448aa0(uVar7,0,0xffffffff);
                    FUN_00408ad0();
                    ExceptionList = local_10;
                    return;
                  }
                  local_8 = 0xc;
LAB_00a283ec:
                  FUN_00448aa0(uVar7,0,0xffffffff);
                  FUN_00408ad0();
                  if ((int)param_2[4] < 5) {
                    ExceptionList = local_10;
                    return;
                  }
                  puVar6 = param_2;
                  if (0xf < (uint)param_2[5]) {
                    puVar6 = (undefined4 *)*param_2;
                  }
                  *(undefined1 *)((int)puVar6 + iVar9 + -4) = 0x20;
                  puVar6 = param_2;
                  if (0xf < (uint)param_2[5]) {
                    puVar6 = (undefined4 *)*param_2;
                  }
                  *(undefined1 *)((int)puVar6 + iVar9 + -3) = 0x2e;
                  puVar6 = param_2;
                  if (0xf < (uint)param_2[5]) {
                    puVar6 = (undefined4 *)*param_2;
                  }
                  *(undefined1 *)((int)puVar6 + iVar9 + -2) = 0x2e;
                  if (0xf < (uint)param_2[5]) {
                    param_2 = (undefined4 *)*param_2;
                  }
                  *(undefined1 *)((int)param_2 + iVar9 + -1) = 0x2e;
                  ExceptionList = local_10;
                  return;
                }
              }
              else {
                local_14 = local_14 + *(int *)(iVar4 + 0x18);
                local_18 = local_18 + *(int *)(iVar4 + 0x18);
                if (((*(int *)(iVar4 + 0x81c) != 0) && (iVar9 + 1 < iVar5)) &&
                   (iVar5 = 0, 0 < *(int *)(iVar4 + 0x81c))) {
                  puVar8 = (uint *)(iVar4 + 0x1c);
                  do {
                    puVar6 = param_1;
                    if (0xf < (uint)param_1[5]) {
                      puVar6 = (undefined4 *)*param_1;
                    }
                    if (*puVar8 == (uint)*(byte *)((int)puVar6 + iVar9 + 1)) {
                      iVar5 = *(int *)(iVar4 + 0x20 + iVar5 * 8);
                      local_14 = local_14 + iVar5;
                      local_18 = local_18 + iVar5;
                      break;
                    }
                    iVar5 = iVar5 + 1;
                    puVar8 = puVar8 + 2;
                  } while (iVar5 < *(int *)(iVar4 + 0x81c));
                }
                if (param_3 + iVar2 * -2 <= local_14) {
                  param_5 = (int *)((int)param_5 + local_28);
                  local_14 = local_18;
                  if (param_7 != '\0') {
                    if (local_1c < local_20) {
                      FUN_009885d0();
                      local_8 = 3;
                      FUN_009895f0(local_20);
                      local_8._0_1_ = 4;
                      uVar7 = FUN_00988f20(local_60);
                      local_8 = CONCAT31(local_8._1_3_,5);
                      FUN_00448aa0(uVar7,0,0xffffffff);
                      FUN_00408ad0();
                      FUN_00408ad0();
                      local_8 = 0xffffffff;
                      FUN_00408ad0();
                      local_1c = local_20 + 1;
                    }
                    else {
                      FUN_009885d0();
                      local_8 = 0;
                      FUN_009895f0(iVar9);
                      local_8._0_1_ = 1;
                      uVar7 = FUN_00988f20(local_60);
                      local_8 = CONCAT31(local_8._1_3_,2);
                      FUN_00448aa0(uVar7,0,0xffffffff);
                      FUN_00408ad0();
                      FUN_00408ad0();
                      local_8 = 0xffffffff;
                      FUN_00408ad0();
                      local_14 = 0;
                      local_20 = iVar9;
                      local_1c = iVar9;
                    }
                  }
                  if (param_4 < (int)param_5) {
                    if (param_7 != '\0') {
                      ExceptionList = local_10;
                      return;
                    }
                    if (param_6 != '\0') {
                      uVar7 = FUN_009895f0(local_20);
                      local_8 = 6;
                      goto LAB_00a283b5;
                    }
                    uVar7 = FUN_009895f0(iVar9);
                    local_8 = 7;
                    goto LAB_00a283ec;
                  }
                  local_18 = 0;
                }
              }
            }
          }
        }
      }
LAB_00a2837e:
      iVar5 = param_1[4];
      iVar9 = iVar9 + 1;
      in_ECX = local_24;
    } while (iVar9 < iVar5);
  }
  if (param_7 == '\0') {
    FUN_00408ed0(param_1,0,0xffffffff);
    ExceptionList = local_10;
    return;
  }
  uVar7 = FUN_009895f0(param_1[4]);
  local_8 = 0xd;
  FUN_00448aa0(uVar7,0,0xffffffff);
  if (local_84 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_98);
}

