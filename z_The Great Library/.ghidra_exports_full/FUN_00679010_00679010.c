// FUN_00679010 @ 00679010 body=[[00679010, 00679118] [0067911c, 0067918a] [0067918e, 0067922e] [00679232, 00679258] [0067925c, 00679279] [0067927d, 00679297] [0067929b, 006792b9] [006792c2, 00679368]]


undefined1 * FUN_00679010(undefined1 *param_1,int *param_2,int param_3,int *param_4)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 local_a8;
  uint local_94;
  undefined4 local_8c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar2 = param_2;
  puStack_c = &LAB_00b44f17;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_38 = 1;
  if (*(int *)(*(int *)(param_3 + 0x20) + 0x30) == 3) {
    pbVar4 = (byte *)(**(code **)(*param_2 + 0x44))();
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    pcVar8 = "result_chart";
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_006790b6:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_006790bb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_006790b6;
      pbVar4 = pbVar4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_006790bb:
    if (iVar5 == 0) {
      (**(code **)(**(int **)(local_30 + 0x58) + 0x4c))(&local_34);
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("result_chart",0xc);
      local_8 = 1;
      (**(code **)(*param_4 + 0x44))(local_2c);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      cVar3 = FUN_009e0c90(local_34,local_30,&param_2,&param_3);
      if (cVar3 != '\0') {
        uVar6 = (**(code **)(**(int **)(*(int *)(DAT_01258a3c + 0xc) + 4 + (int)param_2 * 4) + 0x18)
                )(local_54);
        local_8 = 2;
        FUN_00408ed0(uVar6,0,0xffffffff);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8544,3);
        local_8 = 3;
        uVar6 = FUN_009888f0(local_54);
        local_8._0_1_ = 4;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfc99c,5);
        local_8._0_1_ = 5;
        FUN_00988f20(uVar6);
        local_8._0_1_ = 6;
        uVar6 = FUN_00988f20(local_70);
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_00448aa0(uVar6,0,0xffffffff);
        if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a8);
        }
        if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_8c);
        }
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70[0]);
        }
      }
    }
  }
  else if (*(int *)(*(int *)(param_3 + 0x20) + 0x30) == 1) {
    (**(code **)(*param_2 + 0x44))();
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      iVar5 = (**(code **)(*piVar2 + 0x80))();
      if (-1 < iVar5) {
        iVar7 = FUN_005c1a10();
        piVar2 = *(int **)(*(int *)(iVar7 + 0xc) + iVar5 * 4);
        uVar6 = (**(code **)(*piVar2 + 0x18))(local_54);
        local_8 = 8;
        FUN_00408ed0(uVar6,0,0xffffffff);
        local_8 = local_8 & 0xffffff00;
        FUN_00408ad0();
        uVar6 = (**(code **)(*piVar2 + 0x1c))(local_54);
        local_8 = 9;
        FUN_00408ed0(uVar6,0,0xffffffff);
        FUN_00408ad0();
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

