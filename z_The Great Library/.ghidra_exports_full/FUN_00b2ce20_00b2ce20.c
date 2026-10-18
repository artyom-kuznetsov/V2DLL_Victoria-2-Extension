// FUN_00b2ce20 @ 00b2ce20 body=[[00b2ce20, 00b2d201]]


int FUN_00b2ce20(int *param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                int *param_7,int *param_8,undefined4 *param_9,undefined4 *param_10)

{
  uint *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  iVar4 = FUN_00b2b7e0(param_1,&local_18);
  if (iVar4 != 0) {
    return iVar4;
  }
  if ((local_18 == 2) && (local_14 == 0)) {
    iVar4 = FUN_00b2b910(param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_00b2b7e0(param_1,&local_18);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if ((local_18 == 4) && (local_14 == 0)) {
    puVar1 = (uint *)(param_2 + 0x28);
    iVar4 = FUN_00b2cad0(param_1,puVar1,param_2,&local_c,param_3,param_4,param_5,*param_9,param_10);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar10 = *puVar1;
    *puVar1 = *puVar1 + *(uint *)(param_2 + 0x20);
    *(int *)(param_2 + 0x2c) =
         *(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x24) +
         (uint)CARRY4(uVar10,*(uint *)(param_2 + 0x20));
    iVar4 = FUN_00b2b7e0(param_1,&local_18);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if (local_18 == 0 && local_14 == 0) {
    return 0;
  }
  if ((local_18 == 5) && (local_14 == 0)) {
    iVar4 = FUN_00b2b890(param_1,&local_8);
    uVar10 = local_8;
    if (iVar4 == 0) {
      *(uint *)(param_2 + 0x18) = local_8;
      if (local_8 == 0) {
        local_c = 0;
      }
      else {
        local_c = (*(code *)*param_9)(local_8 << 5);
        if (local_c == 0) {
          return -0x7ff8fff2;
        }
      }
      *(int *)(param_2 + 0x1c) = local_c;
      iVar4 = local_c;
      uVar7 = local_8;
      while (uVar10 != 0) {
        FUN_00b2f860(iVar4);
        iVar4 = iVar4 + 0x20;
        uVar7 = uVar7 - 1;
        uVar10 = uVar7;
      }
      iVar4 = FUN_00b2b7e0(param_1,&local_20);
      if (iVar4 == 0) {
        while (iVar9 = local_1c, iVar4 = local_20, local_20 != 0 || local_1c != 0) {
          iVar5 = FUN_00b2b7e0(param_1,&local_18);
          uVar10 = local_8;
          if (iVar5 != 0) {
            return iVar5;
          }
          if (iVar4 >> 0x1f != iVar9) {
            if ((local_14 == 0) && (local_18 <= (uint)param_1[1])) {
              *param_1 = *param_1 + local_18;
              param_1[1] = param_1[1] - local_18;
              goto LAB_00b2d127;
            }
            goto LAB_00b2d1f6;
          }
          switch(iVar4) {
          case 0xe:
            iVar4 = FUN_00b2ba20(param_1,local_8,param_6,*param_10);
            if (iVar4 != 0) {
              return iVar4;
            }
            local_10 = 0;
            if (uVar10 != 0) {
              uVar7 = 0;
              do {
                if (*(char *)(*param_6 + uVar7) != '\0') {
                  local_10 = local_10 + 1;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar10);
            }
            goto LAB_00b2d127;
          case 0xf:
            iVar4 = FUN_00b2ba20(param_1,local_10,param_7,*param_10);
            break;
          default:
            iVar4 = FUN_00b2b8e0(param_1,local_18,local_14);
            break;
          case 0x11:
            iVar4 = FUN_00b2bdd0(param_1);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar4 = FUN_00b2cbe0(param_1,local_8,local_c,*param_9);
            break;
          case 0x14:
            iVar4 = FUN_00b2bab0(param_1,local_8,param_8,*param_10);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar4 = FUN_00b2bdd0(param_1);
            if (iVar4 != 0) {
              return iVar4;
            }
            uVar7 = 0;
            if (uVar10 != 0) {
              puVar8 = (undefined4 *)(local_c + 4);
              do {
                cVar3 = *(char *)(uVar7 + *param_8);
                *(char *)(puVar8 + 6) = cVar3;
                *puVar8 = 0;
                puVar8[-1] = 0;
                if (cVar3 != '\0') {
                  iVar4 = FUN_00b2b790(param_1,puVar8 + -1);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = FUN_00b2b790(param_1,puVar8);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                }
                uVar7 = uVar7 + 1;
                puVar8 = puVar8 + 8;
              } while (uVar7 < local_8);
            }
            goto LAB_00b2d127;
          }
          if (iVar4 != 0) {
            return iVar4;
          }
LAB_00b2d127:
          iVar4 = FUN_00b2b7e0(param_1,&local_20);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = 0;
        iVar9 = 0;
        uVar10 = 0;
        if (local_8 != 0) {
          puVar6 = (undefined1 *)(local_c + 0x19);
          do {
            puVar6[2] = 0;
            if (*param_6 == 0) {
              *puVar6 = 1;
LAB_00b2d17f:
              puVar6[1] = 0;
              iVar5 = *param_3;
              *(undefined4 *)(puVar6 + -0x11) = *(undefined4 *)(iVar5 + iVar4 * 8);
              *(undefined4 *)(puVar6 + -0xd) = *(undefined4 *)(iVar5 + 4 + iVar4 * 8);
              *(undefined4 *)(puVar6 + -9) = *(undefined4 *)(*param_5 + iVar4 * 4);
              puVar2 = (undefined1 *)(iVar4 + *param_4);
              iVar4 = iVar4 + 1;
              puVar6[-1] = *puVar2;
            }
            else {
              bVar11 = *(char *)(*param_6 + uVar10) == '\0';
              *puVar6 = bVar11;
              if (bVar11) goto LAB_00b2d17f;
              if (*param_7 == 0) {
                puVar6[1] = 1;
              }
              else {
                puVar6[1] = *(char *)(*param_7 + iVar9) == '\0';
              }
              iVar9 = iVar9 + 1;
              *(undefined4 *)(puVar6 + -0x11) = 0;
              *(undefined4 *)(puVar6 + -0xd) = 0;
              puVar6[-1] = 0;
            }
            uVar10 = uVar10 + 1;
            puVar6 = puVar6 + 0x20;
          } while (uVar10 < local_8);
        }
        iVar4 = FUN_00b2b370(param_2,*param_9);
        return iVar4;
      }
    }
  }
  else {
LAB_00b2d1f6:
    iVar4 = 6;
  }
  return iVar4;
}

