// FUN_006321a0 @ 006321a0 body=[[006321a0, 00632423] [00632427, 00632474] [00632478, 00632517] [0063251b, 00632535] [00632539, 00632557] [0063255b, 006325a8] [006325ac, 006325f9] [006325fd, 0063264b] [0063264f, 006326ca] [006326ce, 006326e2]]


int * FUN_006321a0(int *param_1,int *param_2,int param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 local_68;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c839;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = (int)param_2;
  param_1[3] = *param_4;
  param_1[4] = param_4[1];
  FUN_00615d20();
  param_1[0xc] = param_3;
  param_1[0xd] = 43800000;
  param_1[0xd] = DAT_01259abc;
  param_1[0xe] = 43800000;
  param_1[0xe] = DAT_01259abc;
  param_1[0xf] = 43800000;
  param_1[0xf] = DAT_01259abc;
  param_1[0x10] = (int)CButtonObserverGlue<CDiploIcon>::vftable;
  param_1[0x11] = (int)param_1;
  param_1[0x12] = (int)&LAB_00632820;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = (int)CButtonObserverGlue<CDiploIcon>::vftable;
  param_1[0x1c] = (int)param_1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = (int)FUN_00632870;
  param_1[0x25] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pbVar3 = (byte *)(param_1 + 5);
  *(undefined2 *)(param_1 + 0x26) = 0;
  if (0xf < (uint)param_1[10]) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar8 = "ASKMILITARYACCESS";
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_006322b5:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_006322ba;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_006322b5;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006322ba:
  if (iVar4 == 0) {
    param_1[2] = 1;
  }
  else {
    pbVar3 = (byte *)(param_1 + 5);
    if (0xf < (uint)param_1[10]) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar8 = "GIVEMILITARYACCESS";
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_00632300:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00632305;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_00632300;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00632305:
    if (iVar4 == 0) {
      param_1[2] = 2;
    }
    else {
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') {
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') {
            cVar2 = FUN_0040b360();
            if (cVar2 == '\0') {
              cVar2 = FUN_0040b360();
              if (cVar2 == '\0') {
                cVar2 = FUN_0040b360();
                if (cVar2 == '\0') {
                  param_1[2] = 0;
                }
                else {
                  param_1[2] = 6;
                }
              }
              else {
                param_1[2] = 6;
              }
            }
            else {
              param_1[2] = 6;
            }
          }
          else {
            param_1[2] = 5;
          }
        }
        else {
          param_1[2] = 4;
        }
      }
      else {
        param_1[2] = 3;
      }
    }
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("diplomessageicon_entry_window",0x1d);
  local_8._0_1_ = 3;
  piVar7 = *(int **)(DAT_012588e8 + 0xb24);
  piVar5 = (int *)(**(code **)(*piVar7 + 0x34))();
  local_14 = (undefined4 *)(*piVar5 + 0x2c);
  uVar6 = (**(code **)(*piVar7 + 0x3c))();
  iVar4 = (*(code *)*local_14)(local_30,uVar6);
  local_8._0_1_ = 2;
  *param_1 = iVar4;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("diplomessageicon_button",0x17);
  local_8._0_1_ = 4;
  piVar7 = (int *)(**(code **)(*(int *)*param_1 + 0x34))(local_30);
  (**(code **)(*piVar7 + 0x48))(param_1[2]);
  local_8._0_1_ = 2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dedbb4,4);
  local_8._0_1_ = 5;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  piVar7 = param_4;
  do {
    iVar4 = *piVar7;
    piVar7 = (int *)((int)piVar7 + 1);
  } while ((char)iVar4 != '\0');
  FUN_00409350(param_4,(int)piVar7 - (int)((int)param_4 + 1));
  local_8._0_1_ = 6;
  uVar6 = FUN_00988fa0(local_30);
  local_8._0_1_ = 7;
  (**(code **)(*(int *)*param_1 + 0x3c))(local_4c);
  FUN_00408ed0(uVar6,0,0xffffffff);
  FUN_00a5ecc0(uVar6,0);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8._0_1_ = 2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("diplomessageicon_button",0x17);
  local_8._0_1_ = 8;
  iVar4 = (**(code **)(*(int *)*param_1 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(param_1 + 0x10);
  local_8._0_1_ = 2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("diplomessageicon_button",0x17);
  local_8._0_1_ = 9;
  iVar4 = (**(code **)(*(int *)*param_1 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(param_1 + 0x1b);
  local_8._0_1_ = 2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("messageicon_bg_overlay",0x16);
  local_8._0_1_ = 10;
  iVar4 = (**(code **)(*(int *)*param_1 + 0x44))(local_4c);
  (**(code **)(**(int **)(iVar4 + 0x94) + 0x130))();
  local_8._0_1_ = 2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x38))();
  (**(code **)(*param_2 + 0x38))();
  iVar4 = *(int *)(DAT_012588e8 + 0xb0c);
  param_1[0xd] = iVar4;
  param_1[0xe] = iVar4;
  param_1[0xe] = param_1[0xe] + 0x2a0;
  param_1[0xf] = param_1[0xd];
  param_1[0xf] = param_1[0xf] + 0x2d0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("diplo_message",0xd);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x78))(local_4c);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

