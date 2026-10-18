// FUN_00a279a0 @ 00a279a0 body=[[00a279a0, 00a279d9] [00a279e0, 00a27af9] [00a27b00, 00a27c16]]


void FUN_00a279a0(undefined4 *param_1,uint param_2,undefined4 param_3,int *param_4,short *param_5)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *in_ECX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int local_1c;
  int local_10;
  short local_c;
  uint local_8;
  
  uVar10 = 0;
  uVar8 = 0;
  local_8 = 0;
  if (param_2 == 0) {
    param_2 = 0x140;
  }
  local_1c = param_1[4];
  local_c = 0;
  local_10 = 0;
  sVar3 = 0;
  if (0 < local_1c) {
    do {
      local_c = sVar3;
      uVar2 = param_1[5];
      puVar7 = param_1;
      if (0xf < uVar2) {
        puVar7 = (undefined4 *)*param_1;
      }
      if (*(char *)((int)puVar7 + local_10) == -0x59) {
        local_10 = local_10 + 1;
      }
      else {
        puVar7 = param_1;
        if (0xf < uVar2) {
          puVar7 = (undefined4 *)*param_1;
        }
        if (*(char *)((int)puVar7 + local_10) == '{') {
          local_10 = local_10 + 3;
          uVar8 = uVar8 + 8;
          uVar10 = uVar10 + 8;
        }
        else {
          puVar7 = param_1;
          if (0xf < uVar2) {
            puVar7 = (undefined4 *)*param_1;
          }
          if (*(char *)((int)puVar7 + local_10) == '@') {
            local_10 = local_10 + 3;
            iVar4 = (**(code **)(*in_ECX + 0x68))();
            iVar5 = (**(code **)(*in_ECX + 0x68))();
            uVar8 = uVar8 + iVar5;
            uVar10 = uVar10 + iVar4;
          }
          else {
            puVar7 = param_1;
            if (0xf < uVar2) {
              puVar7 = (undefined4 *)*param_1;
            }
            if (*(char *)((int)puVar7 + local_10) == -0x5d) {
              while( true ) {
                puVar7 = param_1;
                if (0xf < uVar2) {
                  puVar7 = (undefined4 *)*param_1;
                }
                cVar1 = *(char *)((int)puVar7 + local_10 + 1);
                if (((((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
                    (cVar1 != '_')) || (local_1c < local_10 + 2)) break;
                local_10 = local_10 + 1;
              }
              iVar4 = (**(code **)(*in_ECX + 100))();
              iVar5 = (**(code **)(*in_ECX + 100))();
              uVar8 = uVar8 + iVar5;
              uVar10 = uVar10 + iVar4;
            }
            else {
              puVar7 = param_1;
              if (0xf < uVar2) {
                puVar7 = (undefined4 *)*param_1;
              }
              iVar4 = in_ECX[*(byte *)((int)puVar7 + local_10) + 0x25];
              if (iVar4 == 0) {
                puVar7 = param_1;
                if (0xf < uVar2) {
                  puVar7 = (undefined4 *)*param_1;
                }
                if (*(char *)((int)puVar7 + local_10) != '\n') {
                  puVar7 = param_1;
                  if (0xf < uVar2) {
                    puVar7 = (undefined4 *)*param_1;
                  }
                  if (*(char *)((int)puVar7 + local_10) != '\r') goto LAB_00a27b55;
                }
                if ((int)local_8 < (int)uVar10) {
                  local_8 = uVar10;
                }
                local_c = local_c + 1;
                uVar8 = 0;
                uVar10 = 0;
              }
              else {
                iVar5 = *(int *)(iVar4 + 0x81c);
                uVar10 = uVar10 + *(int *)(iVar4 + 0x18);
                uVar9 = uVar8 + *(int *)(iVar4 + 0x18);
                if (((iVar5 != 0) && (local_10 + 1 < local_1c)) && (iVar6 = 0, 0 < iVar5)) {
                  puVar11 = (uint *)(iVar4 + 0x1c);
                  do {
                    puVar7 = param_1;
                    if (0xf < uVar2) {
                      puVar7 = (undefined4 *)*param_1;
                    }
                    if (*puVar11 == (uint)*(byte *)((int)puVar7 + local_10 + 1)) {
                      iVar5 = *(int *)(iVar4 + 0x20 + iVar6 * 8);
                      uVar10 = uVar10 + iVar5;
                      uVar9 = uVar9 + iVar5;
                      break;
                    }
                    iVar6 = iVar6 + 1;
                    puVar11 = puVar11 + 2;
                  } while (iVar6 < iVar5);
                }
                if (*(int *)(iVar4 + 0xc) == 0) {
                  if ((int)param_2 < (int)uVar10) {
                    local_c = local_c + 1;
                    uVar10 = uVar9;
                  }
                  uVar8 = 0;
                  if ((int)local_8 < (int)uVar10) {
                    local_8 = uVar10;
                  }
                }
                else {
                  uVar8 = uVar9;
                  if ((param_2 + *param_4 * -2 <= uVar10) && (0x32 < (int)uVar9)) {
                    local_c = local_c + 1;
                    uVar8 = 0;
                    local_8 = param_2 + *param_4 * -2;
                    uVar10 = uVar9;
                  }
                }
              }
            }
          }
        }
      }
LAB_00a27b55:
      local_1c = param_1[4];
      local_10 = local_10 + 1;
      sVar3 = local_c;
    } while (local_10 < local_1c);
    if ((int)local_8 < (int)uVar10) {
      local_8 = uVar10;
    }
  }
  if ((int)param_2 < (int)local_8) {
    local_c = local_c + 1;
    local_8 = param_2;
  }
  iVar4 = in_ECX[0x125];
  iVar5 = param_4[1];
  *param_5 = (short)*param_4 * 2 + (short)local_8;
  param_5[1] = (local_c + 1) * (short)iVar4 + (short)iVar5 * 2;
  return;
}

