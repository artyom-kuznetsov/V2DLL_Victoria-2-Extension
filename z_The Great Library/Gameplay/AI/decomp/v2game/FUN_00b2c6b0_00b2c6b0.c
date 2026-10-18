// FUN_00b2c6b0 @ 00b2c6b0 body=[[00b2c6b0, 00b2c87c] [00b2c880, 00b2ca09] [00b2ca10, 00b2cac7]]


int FUN_00b2c6b0(int *param_1,uint param_2,int *param_3,uint *param_4,int *param_5,int *param_6,
                int *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  longlong lVar11;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  puVar9 = param_4;
  iVar7 = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 0;
  if (param_2 != 0) {
    piVar3 = param_3 + 9;
    uVar6 = param_2;
    do {
      *piVar3 = 1;
      piVar3 = piVar3 + 10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *param_4 = param_2;
  iVar2 = FUN_00b2b7e0(param_1,&local_28);
  puVar1 = param_8;
  do {
    if (iVar2 != 0) {
      return iVar2;
    }
    param_8 = puVar1;
    if ((local_28 == 0xd) && (local_24 == 0)) {
      uVar6 = 0;
      *param_4 = 0;
      if (param_2 != 0) {
        puVar9 = (uint *)(param_3 + 9);
        do {
          iVar2 = FUN_00b2b7e0(param_1,&local_20);
          if (iVar2 != 0) {
            return iVar2;
          }
          if (((local_1c != 0) || (0x7fffffff < local_20)) || (0x3ffffff < local_20)) {
            return -0x7fffbfff;
          }
          *puVar9 = local_20;
          *param_4 = *param_4 + local_20;
          uVar6 = uVar6 + 1;
          puVar9 = puVar9 + 10;
        } while (uVar6 < param_2);
      }
    }
    else {
      if (((local_28 == 10) && (local_24 == 0)) ||
         (((local_28 == 9 && (local_24 == 0)) || (local_28 == 0 && local_24 == 0)))) {
        if (*puVar9 == 0) {
          *param_5 = 0;
          *param_6 = 0;
          *param_7 = 0;
        }
        else {
          iVar2 = (*(code *)*puVar1)(*puVar9 * 8);
          *param_5 = iVar2;
          if (iVar2 == 0) {
            return -0x7ff8fff2;
          }
          iVar2 = (*(code *)*puVar1)(*puVar9);
          *param_6 = iVar2;
          if (iVar2 == 0) {
            return -0x7ff8fff2;
          }
          iVar2 = (*(code *)*puVar1)(*puVar9 * 4);
          *param_7 = iVar2;
          if (iVar2 == 0) {
            return -0x7ff8fff2;
          }
        }
        local_c = 0;
        piVar3 = param_3;
        if (param_2 != 0) {
          do {
            uVar6 = piVar3[9];
            local_20 = 0;
            local_1c = 0;
            if (uVar6 != 0) {
              local_10 = piVar3;
              if (((local_28 == 9) && (local_24 == 0)) && (1 < uVar6)) {
                uVar8 = 1;
                do {
                  iVar2 = FUN_00b2b7e0(param_1,&local_18);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  iVar2 = *param_5;
                  *(uint *)(iVar2 + iVar7 * 8) = local_18;
                  *(uint *)(iVar2 + 4 + iVar7 * 8) = local_14;
                  iVar7 = iVar7 + 1;
                  uVar8 = uVar8 + 1;
                  bVar10 = CARRY4(local_20,local_18);
                  local_20 = local_20 + local_18;
                  local_1c = local_1c + local_14 + (uint)bVar10;
                } while (uVar8 < uVar6);
              }
              piVar3 = local_10;
              lVar11 = FUN_00b2f800(local_10);
              iVar2 = *param_5;
              lVar11 = lVar11 - CONCAT44(local_1c,local_20);
              *(int *)(iVar2 + iVar7 * 8) = (int)lVar11;
              *(int *)(iVar2 + 4 + iVar7 * 8) = (int)((ulonglong)lVar11 >> 0x20);
              iVar7 = iVar7 + 1;
            }
            local_c = local_c + 1;
            local_10 = piVar3 + 10;
            piVar3 = local_10;
          } while (local_c < param_2);
        }
        if (((local_28 == 9) && (local_24 == 0)) &&
           (iVar7 = FUN_00b2b7e0(param_1,&local_28), iVar7 != 0)) {
          return iVar7;
        }
        uVar6 = 0;
        if (*param_4 != 0) {
          do {
            *(undefined1 *)(uVar6 + *param_6) = 0;
            *(undefined4 *)(*param_7 + uVar6 * 4) = 0;
            uVar6 = uVar6 + 1;
          } while (uVar6 < *param_4);
        }
        if (param_2 != 0) {
          piVar3 = param_3 + 7;
          uVar6 = param_2;
          do {
            if ((piVar3[2] != 1) || (*piVar3 == 0)) {
              local_8 = local_8 + piVar3[2];
            }
            piVar3 = piVar3 + 10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        iVar7 = 0;
        do {
          if ((local_28 == 10) && (local_24 == 0)) {
            iVar2 = 0;
            param_4 = (uint *)0x0;
            local_c = 0;
            iVar4 = FUN_00b2bb30(param_1,local_8,&param_4,&local_c,*param_8);
            puVar1 = param_8;
            if ((iVar4 == 0) && (param_2 != 0)) {
              local_10 = param_3 + 7;
              local_14 = param_2;
              do {
                iVar5 = local_10[2];
                if (iVar5 != 1) goto joined_r0x00b2ca06;
                if (*local_10 == 0) {
                  do {
                    *(undefined1 *)(iVar7 + *param_6) = *(undefined1 *)((int)param_4 + iVar2);
                    *(undefined4 *)(*param_7 + iVar7 * 4) = *(undefined4 *)(local_c + iVar2 * 4);
                    iVar7 = iVar7 + 1;
                    iVar2 = iVar2 + 1;
                    iVar5 = iVar5 + -1;
joined_r0x00b2ca06:
                  } while (iVar5 != 0);
                }
                else {
                  *(undefined1 *)(iVar7 + *param_6) = 1;
                  *(int *)(*param_7 + iVar7 * 4) = local_10[1];
                  iVar7 = iVar7 + 1;
                }
                local_10 = local_10 + 10;
                local_14 = local_14 - 1;
              } while (local_14 != 0);
              local_14 = 0;
            }
            local_1c = iVar4;
            (*(code *)param_8[1])(param_4);
            (*(code *)puVar1[1])(local_c);
            if (iVar4 != 0) {
              return iVar4;
            }
          }
          else {
            if (local_28 == 0 && local_24 == 0) {
              return 0;
            }
            iVar2 = FUN_00b2b7e0(param_1,&local_30);
            if (iVar2 != 0) {
              return iVar2;
            }
            if ((local_2c == 0) && (local_30 <= (uint)param_1[1])) {
              *param_1 = *param_1 + local_30;
              param_1[1] = param_1[1] - local_30;
              iVar2 = 0;
            }
            else {
              iVar2 = 6;
            }
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          iVar2 = FUN_00b2b7e0(param_1,&local_28);
          if (iVar2 != 0) {
            return iVar2;
          }
        } while( true );
      }
      iVar2 = FUN_00b2b7e0(param_1,&local_18);
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((local_14 == 0) && (local_18 <= (uint)param_1[1])) {
        *param_1 = *param_1 + local_18;
        param_1[1] = param_1[1] - local_18;
        iVar2 = 0;
      }
      else {
        iVar2 = 6;
      }
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = FUN_00b2b7e0(param_1,&local_28);
    puVar1 = param_8;
    puVar9 = param_4;
  } while( true );
}

