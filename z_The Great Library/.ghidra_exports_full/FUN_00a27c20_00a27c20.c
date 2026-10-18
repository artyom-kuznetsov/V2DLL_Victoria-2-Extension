// FUN_00a27c20 @ 00a27c20 body=[[00a27c20, 00a27fa1]]


void FUN_00a27c20(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *in_ECX;
  uint *puVar10;
  int iVar11;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e610;
  local_10 = ExceptionList;
  iVar11 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_1c = 0;
  local_14 = 0;
  local_18 = 0;
  if (param_3 == 0) {
    param_3 = 0x140;
  }
  iVar2 = *param_5;
  iVar3 = in_ECX[0x125];
  param_4 = param_4 + iVar2 * -2;
  local_20 = param_1[4];
  param_5 = (int *)iVar3;
  if (local_20 < 1) {
    ExceptionList = local_10;
    return;
  }
  do {
    uVar4 = param_1[5];
    puVar9 = param_1;
    if (0xf < uVar4) {
      puVar9 = (undefined4 *)*param_1;
    }
    if (*(char *)((int)puVar9 + iVar11) == -0x59) {
      iVar11 = iVar11 + 1;
    }
    else {
      puVar9 = param_1;
      if (0xf < uVar4) {
        puVar9 = (undefined4 *)*param_1;
      }
      if (*(char *)((int)puVar9 + iVar11) == '{') {
        local_14 = local_14 + 8;
        iVar11 = iVar11 + 3;
        local_18 = local_18 + 8;
      }
      else {
        puVar9 = param_1;
        if (0xf < uVar4) {
          puVar9 = (undefined4 *)*param_1;
        }
        if (*(char *)((int)puVar9 + iVar11) == '@') {
          iVar11 = iVar11 + 3;
          iVar6 = (**(code **)(*in_ECX + 0x68))();
          local_14 = local_14 + iVar6;
          iVar6 = (**(code **)(*in_ECX + 0x68))();
          local_18 = local_18 + iVar6;
        }
        else {
          puVar9 = param_1;
          if (0xf < uVar4) {
            puVar9 = (undefined4 *)*param_1;
          }
          if (*(char *)((int)puVar9 + iVar11) == -0x5d) {
            while( true ) {
              puVar9 = param_1;
              if (0xf < uVar4) {
                puVar9 = (undefined4 *)*param_1;
              }
              cVar1 = *(char *)((int)puVar9 + iVar11 + 1);
              if (((((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
                  (cVar1 != '_')) || (local_20 < iVar11 + 2)) break;
              iVar11 = iVar11 + 1;
            }
            iVar6 = (**(code **)(*in_ECX + 100))();
            local_14 = local_14 + iVar6;
            iVar6 = (**(code **)(*in_ECX + 100))();
            local_18 = local_18 + iVar6;
          }
          else {
            puVar9 = param_1;
            if (0xf < uVar4) {
              puVar9 = (undefined4 *)*param_1;
            }
            iVar6 = in_ECX[*(byte *)((int)puVar9 + iVar11) + 0x25];
            if (iVar6 == 0) {
              puVar9 = param_1;
              if (0xf < uVar4) {
                puVar9 = (undefined4 *)*param_1;
              }
              if (*(char *)((int)puVar9 + iVar11) != '\n') {
                puVar9 = param_1;
                if (0xf < uVar4) {
                  puVar9 = (undefined4 *)*param_1;
                }
                if (*(char *)((int)puVar9 + iVar11) != '\r') goto LAB_00a27e4d;
              }
              if (local_1c < local_14) {
                local_1c = local_14;
              }
              local_18 = 0;
              local_14 = 0;
              param_5 = (int *)((int)param_5 + iVar3);
              if (param_4 < (int)param_5) {
                uVar8 = FUN_009895f0(iVar11);
                local_8 = 1;
                FUN_00408ed0(uVar8,0,0xffffffff);
                FUN_00408ad0();
                if ((int)param_2[4] < 5) {
                  ExceptionList = local_10;
                  return;
                }
                puVar9 = param_2;
                if (0xf < (uint)param_2[5]) {
                  puVar9 = (undefined4 *)*param_2;
                }
                *(undefined1 *)((int)puVar9 + iVar11 + -4) = 0x20;
                puVar9 = param_2;
                if (0xf < (uint)param_2[5]) {
                  puVar9 = (undefined4 *)*param_2;
                }
                *(undefined1 *)((int)puVar9 + iVar11 + -3) = 0x2e;
                puVar9 = param_2;
                if (0xf < (uint)param_2[5]) {
                  puVar9 = (undefined4 *)*param_2;
                }
                *(undefined1 *)((int)puVar9 + iVar11 + -2) = 0x2e;
                if (0xf < (uint)param_2[5]) {
                  param_2 = (undefined4 *)*param_2;
                }
                *(undefined1 *)((int)param_2 + iVar11 + -1) = 0x2e;
                ExceptionList = local_10;
                return;
              }
            }
            else {
              iVar5 = *(int *)(iVar6 + 0x81c);
              local_14 = local_14 + *(int *)(iVar6 + 0x18);
              local_18 = local_18 + *(int *)(iVar6 + 0x18);
              if (((iVar5 != 0) && (iVar11 + 1 < local_20)) && (iVar7 = 0, 0 < iVar5)) {
                puVar10 = (uint *)(iVar6 + 0x1c);
                do {
                  puVar9 = param_1;
                  if (0xf < uVar4) {
                    puVar9 = (undefined4 *)*param_1;
                  }
                  if (*puVar10 == (uint)*(byte *)((int)puVar9 + iVar11 + 1)) {
                    iVar6 = *(int *)(iVar6 + 0x20 + iVar7 * 8);
                    local_14 = local_14 + iVar6;
                    local_18 = local_18 + iVar6;
                    break;
                  }
                  iVar7 = iVar7 + 1;
                  puVar10 = puVar10 + 2;
                } while (iVar7 < iVar5);
              }
              iVar6 = local_18;
              if (param_3 + iVar2 * -2 <= local_14) {
                param_5 = (int *)((int)param_5 + iVar3);
                local_14 = local_18;
                if (param_4 < (int)param_5) {
                  if (3 < iVar11) {
                    uVar8 = FUN_009895f0(iVar11);
                    local_8 = 0;
                    FUN_00408ed0(uVar8,0,0xffffffff);
                    FUN_00408ad0();
                    puVar9 = param_2;
                    if (0xf < (uint)param_2[5]) {
                      puVar9 = (undefined4 *)*param_2;
                    }
                    *(undefined1 *)((int)puVar9 + iVar11 + -4) = 0x20;
                    puVar9 = param_2;
                    if (0xf < (uint)param_2[5]) {
                      puVar9 = (undefined4 *)*param_2;
                    }
                    *(undefined1 *)((int)puVar9 + iVar11 + -3) = 0x2e;
                    puVar9 = param_2;
                    if (0xf < (uint)param_2[5]) {
                      puVar9 = (undefined4 *)*param_2;
                    }
                    *(undefined1 *)((int)puVar9 + iVar11 + -2) = 0x2e;
                    if (0xf < (uint)param_2[5]) {
                      param_2 = (undefined4 *)*param_2;
                    }
                    *(undefined1 *)((int)param_2 + iVar11 + -1) = 0x2e;
                    ExceptionList = local_10;
                    return;
                  }
                  FUN_004012f0(param_2);
                  ExceptionList = local_10;
                  return;
                }
                local_18 = 0;
                if (local_1c < iVar6) {
                  local_1c = iVar6;
                }
              }
            }
          }
        }
      }
    }
LAB_00a27e4d:
    local_20 = param_1[4];
    iVar11 = iVar11 + 1;
    if (local_20 <= iVar11) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

