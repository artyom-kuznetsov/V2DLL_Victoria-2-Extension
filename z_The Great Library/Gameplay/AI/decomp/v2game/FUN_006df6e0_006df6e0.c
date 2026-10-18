// FUN_006df6e0 @ 006df6e0 body=[[006df6e0, 006df7f9] [006df7fd, 006df813] [006df817, 006df834] [006df838, 006dfadb]]


void FUN_006df6e0(int *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 local_bc [28];
  undefined1 local_a0 [28];
  undefined1 local_84 [28];
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4bf76;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar5 = "release_nations_tab";
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_006df743:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_006df748;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_006df743;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006df748:
  if (iVar4 == 0) {
    if ((*(char *)(DAT_012588e8 + 0xd11) != '\0') && (local_14[0xb5] != 1)) {
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 0;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 1;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("politicsview_tab_release",0x18);
      local_8 = CONCAT31(local_8._1_3_,2);
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_30,local_4c,local_68,0);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_8 = 0xffffffff;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
    }
    local_14[0xb5] = 1;
  }
  else {
    pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar5 = "reforms_tab";
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_006df880:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_006df885;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_006df880;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006df885:
    if (iVar4 == 0) {
      if ((*(char *)(DAT_012588e8 + 0xd11) != '\0') && (local_14[0xb5] != 0)) {
        FUN_009885d0();
        local_8 = 3;
        FUN_009885d0();
        local_8._0_1_ = 4;
        FUN_009885d0();
        local_8 = CONCAT31(local_8._1_3_,5);
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_68,local_4c,local_30,0);
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = 0xffffffff;
        FUN_00408ad0();
      }
      local_14[0xb5] = 0;
    }
    else {
      (**(code **)(*param_1 + 0x44))();
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x44))();
        cVar2 = FUN_0040b360();
        if (cVar2 != '\0') {
          if ((*(char *)(DAT_012588e8 + 0xd11) != '\0') && (local_14[0xb5] != 3)) {
            FUN_009885d0();
            local_8 = 9;
            FUN_009885d0();
            local_8._0_1_ = 10;
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,0xb);
            (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_a0,local_84,local_bc,0);
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = 0xffffffff;
            FUN_00408ad0();
          }
          local_14[0xb5] = 3;
        }
      }
      else {
        if ((*(char *)(DAT_012588e8 + 0xd11) != '\0') && (local_14[0xb5] != 2)) {
          FUN_009885d0();
          local_8 = 6;
          FUN_009885d0();
          local_8._0_1_ = 7;
          FUN_009885d0();
          local_8 = CONCAT31(local_8._1_3_,8);
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_68,local_4c,local_30,0);
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = 0xffffffff;
          FUN_00408ad0();
        }
        local_14[0xb5] = 2;
      }
    }
  }
  FUN_006df530();
  (**(code **)(*local_14 + 0x2c))();
  ExceptionList = local_10;
  return;
}

