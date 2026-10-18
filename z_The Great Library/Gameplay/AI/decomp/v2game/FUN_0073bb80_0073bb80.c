// FUN_0073bb80 @ 0073bb80 body=[[0073bb80, 0073bcb9] [0073bcbd, 0073bce0] [0073bce4, 0073bd0a] [0073bd0e, 0073bdfe] [0073be02, 0073be28] [0073be2c, 0073be4f] [0073be53, 0073be76] [0073be7a, 0073be94] [0073be98, 0073beb6] [0073bebf, 0073c036] [0073c03a, 0073c055] [0073c059, 0073c07d] [0073c081, 0073c13b]]


undefined1 * FUN_0073bb80(int param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined4 local_70;
  char local_6c [4];
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar3 = param_2;
  puStack_c = &LAB_00b8a163;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_70 = 1;
  pbVar5 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  pcVar9 = "progress_button";
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0073bc12:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0073bc17;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0073bc12;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0073bc17:
  if (iVar6 == 0) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_8 = 1;
    pcVar7 = __itoa(*(int *)(param_1 + 0x28) + 1,local_6c,10);
    pcVar9 = pcVar7;
    do {
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
    local_8 = 2;
    uVar8 = FUN_00988fa0(local_4c);
    local_8._0_1_ = 3;
    uVar8 = FUN_00475e40(local_8c,uVar8);
    local_8._0_1_ = 4;
    FUN_00408ed0(uVar8,0,0xffffffff);
    iVar6 = DAT_012588e8;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    iVar10 = DAT_012588e8 + 0xb5c;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    cVar4 = FUN_004bbd60(*(undefined4 *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8 = 5;
      param_1 = FUN_004bc0f0(*(undefined4 *)(param_1 + 0x30),local_68,DAT_012588e8 + 0xb5c);
      local_8._0_1_ = 6;
      uVar8 = FUN_00475d50(local_30);
      local_8._0_1_ = 7;
      FUN_00988fa0(uVar8);
      local_8._0_1_ = 8;
      FUN_00988f20(local_4c);
      local_8._0_1_ = 9;
      uVar8 = FUN_00988f20(param_1);
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00448aa0(uVar8,0,0xffffffff);
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a8);
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4[0]);
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      if (local_1c < 0x10) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_68[0]);
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (local_38 < 0x10) {
          ExceptionList = local_10;
          return puVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if (*(int *)(*(int *)(param_1 + 0x30) + 0x164) == 0) {
      ExceptionList = local_10;
      return puVar3;
    }
    param_3 = (int *)**(undefined4 **)(*(int *)(param_1 + 0x30) + 0x15c);
    if (param_3 == (int *)0x0) {
      ExceptionList = local_10;
      return puVar3;
    }
    param_1 = FUN_004cd300(iVar10);
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
    iVar2 = *(int *)(iVar6 + 0x15c4);
    iVar6 = *(int *)(iVar6 + 0x15c0);
    iVar10 = FUN_004cd300(iVar10);
    if (iVar2 - iVar6 < iVar10) {
      uVar8 = FUN_0054a540(local_30,&param_1);
      local_8 = 0xd;
      uVar8 = FUN_00988fa0(uVar8);
      local_8 = CONCAT31(local_8._1_3_,0xe);
    }
    else {
      uVar8 = FUN_0054a540(local_30,&param_1);
      local_8 = 0xb;
      uVar8 = FUN_00988fa0(uVar8);
      local_8 = CONCAT31(local_8._1_3_,0xc);
    }
  }
  else {
    pbVar5 = (byte *)(**(code **)(*param_3 + 0x44))();
    iVar6 = param_1;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pcVar9 = "progress_icon";
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_0073bfd0:
        iVar10 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_0073bfd5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_0073bfd0;
      pbVar5 = pbVar5 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar10 = 0;
LAB_0073bfd5:
    if (iVar10 != 0) {
      ExceptionList = local_10;
      return puVar3;
    }
    uVar8 = FUN_009888f0(local_c4);
    local_8 = 0xf;
    uVar8 = FUN_00988fa0(uVar8);
    local_8._0_1_ = 0x10;
    uVar8 = FUN_00475e40(local_68,uVar8);
    local_8._0_1_ = 0x11;
    FUN_00408ed0(uVar8,0,0xffffffff);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c4[0]);
    }
    param_1 = *(int *)(iVar6 + 0x30);
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (*(int *)(param_1 + 0x164) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = **(int **)(param_1 + 0x15c);
    }
    if (*(int *)(iVar6 + 0x80) != 0) {
      ExceptionList = local_10;
      return puVar3;
    }
    iVar6 = DAT_012588e8 + 0xb5c;
    cVar4 = FUN_004cb420();
    if (cVar4 == '\0') {
      ExceptionList = local_10;
      return puVar3;
    }
    uVar8 = FUN_004bc0f0(param_1,local_30,iVar6);
    local_8 = 0x12;
    uVar8 = FUN_00988fa0(uVar8);
    local_8 = CONCAT31(local_8._1_3_,0x13);
  }
  FUN_00448aa0(uVar8,0,0xffffffff);
  FUN_00408ad0();
  FUN_00408ad0();
  ExceptionList = local_10;
  return puVar3;
}

