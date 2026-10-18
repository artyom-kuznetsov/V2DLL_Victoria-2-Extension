// FUN_00b2c3b0 @ 00b2c3b0 body=[[00b2c3b0, 00b2c6a1]]


uint FUN_00b2c3b0(int *param_1,uint *param_2,int *param_3,code *param_4,undefined4 *param_5)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = FUN_00b2b980(param_1,0xb,0);
  if ((uVar3 == 0) && (uVar3 = FUN_00b2b7e0(param_1,&local_18), uVar3 == 0)) {
    if ((local_14 != 0) || ((0x7fffffff < local_18 || (0x3ffffff < local_18)))) {
      return 0x80004001;
    }
    *param_2 = local_18;
    if (param_1[1] == 0) {
      return 6;
    }
    param_1[1] = param_1[1] + -1;
    cVar2 = *(char *)*param_1;
    *param_1 = (int)((char *)*param_1 + 1);
    uVar3 = -(uint)(cVar2 != '\0') & 6;
    if (uVar3 == 0) {
      if (*param_2 == 0) {
        *param_3 = 0;
      }
      else {
        iVar7 = (*param_4)(*param_2 * 0x28);
        *param_3 = iVar7;
        if (iVar7 == 0) {
          return 0x8007000e;
        }
      }
      uVar3 = 0;
      if (*param_2 != 0) {
        iVar7 = 0;
        do {
          FUN_00b2f6c0(*param_3 + iVar7);
          uVar3 = uVar3 + 1;
          iVar7 = iVar7 + 0x28;
        } while (uVar3 < *param_2);
      }
      uVar3 = 0;
      if (*param_2 != 0) {
        iVar7 = 0;
        do {
          uVar4 = FUN_00b2be00(param_1,*param_3 + iVar7,param_4);
          if (uVar4 != 0) {
            return uVar4;
          }
          uVar3 = uVar3 + 1;
          iVar7 = iVar7 + 0x28;
        } while (uVar3 < *param_2);
      }
      uVar3 = FUN_00b2b980(param_1,0xc,0);
      if (uVar3 == 0) {
        local_10 = 0;
        if (*param_2 != 0) {
          local_8 = 0;
          do {
            uVar3 = 0;
            iVar7 = *param_3 + local_8;
            local_c = FUN_00b2f770(iVar7);
            if (local_c == 0) {
              *(undefined4 *)(iVar7 + 0x18) = 0;
            }
            else {
              iVar5 = (*param_4)(local_c * 8);
              *(int *)(iVar7 + 0x18) = iVar5;
              if (iVar5 == 0) {
                return 0x8007000e;
              }
            }
            if (local_c != 0) {
              do {
                puVar1 = (uint *)(*(int *)(iVar7 + 0x18) + uVar3 * 8);
                uVar4 = FUN_00b2b7e0(param_1,&local_18);
                if (uVar4 != 0) {
                  return uVar4;
                }
                uVar3 = uVar3 + 1;
                *puVar1 = local_18;
                puVar1[1] = local_14;
              } while (uVar3 < local_c);
            }
            local_8 = local_8 + 0x28;
            local_10 = local_10 + 1;
          } while (local_10 < *param_2);
        }
        uVar3 = FUN_00b2b7e0(param_1,&local_18);
        if (uVar3 == 0) {
          while( true ) {
            if (local_18 == 0 && local_14 == 0) {
              return 0;
            }
            if ((local_18 == 10) && (local_14 == 0)) {
              local_10 = 0;
              local_c = 0;
              uVar3 = FUN_00b2bb30(param_1,*param_2,&local_10,&local_c,*param_5);
              uVar4 = local_10;
              if ((uVar3 == 0) && (uVar6 = 0, *param_2 != 0)) {
                iVar7 = 0;
                do {
                  iVar5 = *param_3;
                  *(uint *)(iVar5 + 0x1c + iVar7) = (uint)*(byte *)(local_10 + uVar6);
                  *(undefined4 *)(iVar5 + 0x20 + iVar7) = *(undefined4 *)(local_c + uVar6 * 4);
                  uVar6 = uVar6 + 1;
                  iVar7 = iVar7 + 0x28;
                } while (uVar6 < *param_2);
              }
              local_8 = uVar3;
              (*(code *)param_5[1])(local_c);
              (*(code *)param_5[1])(uVar4);
            }
            else {
              uVar3 = FUN_00b2b7e0(param_1,&local_20);
              if (uVar3 != 0) {
                return uVar3;
              }
              if ((local_1c == 0) && (local_20 <= (uint)param_1[1])) {
                *param_1 = *param_1 + local_20;
                param_1[1] = param_1[1] - local_20;
                uVar3 = 0;
              }
              else {
                uVar3 = 6;
              }
            }
            if (uVar3 != 0) break;
            uVar3 = FUN_00b2b7e0(param_1,&local_18);
            if (uVar3 != 0) {
              return uVar3;
            }
          }
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

