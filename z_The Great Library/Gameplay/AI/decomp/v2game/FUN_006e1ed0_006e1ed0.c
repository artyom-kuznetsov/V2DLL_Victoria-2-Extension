// FUN_006e1ed0 @ 006e1ed0 body=[[006e1ed0, 006e1f91] [006e1f95, 006e1fbb] [006e1fbf, 006e2018] [006e201c, 006e2042] [006e2050, 006e20fb]]


void FUN_006e1ed0(int param_1,int param_2,int param_3,undefined4 *param_4,char param_5,int param_6)

{
  void **ppvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 local_84 [5];
  uint local_70;
  undefined4 local_68 [5];
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92250;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar1;
    if (param_2 <= param_3) {
LAB_006e2078:
      *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
      ExceptionList = local_10;
      return;
    }
    iVar5 = (param_2 + -1) / 2;
    local_14 = iVar5;
    if (param_6 == 0) {
      iVar3 = FUN_006d06b0();
      iVar4 = FUN_006d06b0();
      if (param_5 == '\0') {
        cVar2 = *(uint *)(iVar4 + 0x28) < *(uint *)(iVar3 + 0x28);
      }
      else {
        cVar2 = *(uint *)(iVar3 + 0x28) < *(uint *)(iVar4 + 0x28);
      }
LAB_006e20d2:
      if (cVar2 == '\0') goto LAB_006e2078;
    }
    else {
      if (param_6 != 1) {
        if (param_6 == 2) {
          iVar5 = DAT_012588e8 + 0xb5c;
          if (param_5 == '\0') {
            puVar6 = local_84;
            iVar3 = iVar5;
            FUN_006d06b0(puVar6,iVar5);
            FUN_00471d20(puVar6,iVar3);
            puVar7 = local_4c;
            local_8 = 2;
            FUN_006d06b0(puVar7,iVar5);
            FUN_00471d20(puVar7,iVar5);
            local_8 = CONCAT31(local_8._1_3_,3);
            cVar2 = FUN_0098ab20();
            if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_4c[0]);
            }
            local_8 = 0xffffffff;
            local_38 = 0xf;
            local_3c = 0;
            local_4c[0] = local_4c[0] & 0xffffff00;
            if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_84[0]);
            }
          }
          else {
            puVar6 = local_68;
            iVar3 = iVar5;
            FUN_006d06b0(puVar6);
            FUN_00471d20(puVar6,iVar3);
            puVar7 = local_30;
            local_8 = 0;
            FUN_006d06b0(puVar7,iVar5);
            FUN_00471d20(puVar7,iVar5);
            local_8 = CONCAT31(local_8._1_3_,1);
            cVar2 = FUN_0098ab20();
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_8 = 0xffffffff;
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_68[0]);
            }
          }
          local_8 = 0xffffffff;
          iVar5 = local_14;
          goto LAB_006e20d2;
        }
        goto LAB_006e2078;
      }
      iVar3 = FUN_006d06b0();
      iVar4 = FUN_006d06b0();
      if (param_5 == '\0') {
        if ((*(int *)(iVar3 + 0x24) < *(int *)(iVar4 + 0x24)) ||
           ((*(int *)(iVar3 + 0x24) <= *(int *)(iVar4 + 0x24) &&
            (*(uint *)(iVar3 + 0x20) <= *(uint *)(iVar4 + 0x20))))) goto LAB_006e2078;
      }
      else if ((*(int *)(iVar4 + 0x24) < *(int *)(iVar3 + 0x24)) ||
              ((*(int *)(iVar4 + 0x24) <= *(int *)(iVar3 + 0x24) &&
               (*(uint *)(iVar4 + 0x20) <= *(uint *)(iVar3 + 0x20))))) goto LAB_006e2078;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
    ppvVar1 = ExceptionList;
    param_2 = iVar5;
  } while( true );
}

