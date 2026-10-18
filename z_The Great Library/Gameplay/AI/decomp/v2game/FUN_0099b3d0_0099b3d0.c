// FUN_0099b3d0 @ 0099b3d0 body=[[0099b3d0, 0099b4a0] [0099b4a4, 0099b778] [0099b780, 0099b8dc] [0099b8e0, 0099bce6] [0099bcea, 0099bd0c] [0099bd10, 0099bd24]]


undefined4 FUN_0099b3d0(int param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *in_ECX;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  undefined1 *in_stack_0000004c;
  byte *in_stack_00000050;
  undefined4 in_stack_00000060;
  uint in_stack_00000064;
  byte *in_stack_0000006c;
  uint in_stack_00000080;
  int *in_stack_00000088;
  undefined4 auStack_f0 [12];
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [16];
  undefined4 uStack_84;
  undefined *puStack_80;
  byte *pbStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int **ppiStack_4c;
  uint uStack_48;
  uint local_38;
  uint local_24;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f7ce;
  local_10 = ExceptionList;
  bVar14 = false;
  local_8 = 1;
  pbVar3 = in_stack_00000050;
  if (in_stack_00000064 < 0x10) {
    pbVar3 = (byte *)&stack0x00000050;
  }
  pbVar7 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar3;
    bVar13 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0099b430:
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_0099b435;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar13 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0099b430;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0099b435:
  ExceptionList = &local_10;
  if (iVar4 == 0) {
    uStack_48 = 0;
    ppiStack_4c = (int **)&DAT_00ded94d;
    local_24 = 0xf;
    local_38 = local_38 & 0xffffff00;
    uStack_50 = 0x99b455;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,2);
    bVar14 = true;
    uStack_48 = 0x99b467;
    cVar2 = FUN_00416db0();
    if (((cVar2 != '\0') || (in_stack_0000004c == (undefined1 *)0x0)) ||
       ((in_stack_00000088[1] - *in_stack_00000088 & 0xfffffff0U) == 0)) goto LAB_0099b487;
    bVar13 = true;
  }
  else {
LAB_0099b487:
    bVar13 = false;
  }
  local_8 = 1;
  if ((bVar14) && (0xf < local_24)) {
    uStack_48 = local_38;
                    /* WARNING: Subroutine does not return */
    ppiStack_4c = (int **)&UNK_0099b4a1;
    FUN_00aae91b();
  }
  if (bVar13) {
    piStack_60 = *(int **)(param_1 + 100);
    uStack_48 = 0;
    ppiStack_4c = &local_14;
    local_14 = (int *)0x0;
    param_2 = (int *)*piStack_60;
    uStack_50 = 1;
    uStack_54 = 0x152;
    uStack_58 = 8;
    iStack_5c = ((in_ECX[1] - *in_ECX) / 0xc) * 0x24;
    uStack_64 = 0x99b4f0;
    (*(code *)param_2[0x1a])();
    uStack_64 = 0x800;
    puStack_68 = &param_2;
    uStack_6c = 0;
    uStack_70 = 0;
    piStack_74 = local_14;
    piStack_78 = (int *)0x99b506;
    (**(code **)(*local_14 + 0x2c))();
    uVar5 = DAT_00f092fc;
    local_18 = 0;
    iVar4 = *in_ECX;
    if (0 < (in_ECX[1] - iVar4) / 0xc) {
      iVar11 = 0;
      iVar8 = 0;
      local_1c = 0;
      do {
        *(undefined4 *)(iVar8 + (int)param_2) = *(undefined4 *)(iVar11 + iVar4);
        *(undefined4 *)(iVar8 + 4 + (int)param_2) = *(undefined4 *)(iVar11 + 4 + *in_ECX);
        *(undefined4 *)(iVar8 + 8 + (int)param_2) = *(undefined4 *)(iVar11 + 8 + *in_ECX);
        *(undefined4 *)(iVar8 + 0xc + (int)param_2) = 0;
        *(undefined4 *)(iVar8 + 0x10 + (int)param_2) = uVar5;
        *(undefined4 *)(iVar8 + 0x14 + (int)param_2) = 0;
        *(undefined4 *)(iVar8 + 0x1c + (int)param_2) =
             **(undefined4 **)(local_1c + *in_stack_00000088);
        *(undefined4 *)(iVar8 + 0x20 + (int)param_2) =
             *(undefined4 *)(*(int *)(local_1c + *in_stack_00000088) + 4);
        local_18 = local_18 + 1;
        local_1c = local_1c + 0x10;
        *(undefined1 **)(iVar8 + 0x18 + (int)param_2) = in_stack_0000004c;
        iVar4 = *in_ECX;
        iVar11 = iVar11 + 0xc;
        iVar8 = iVar8 + 0x24;
      } while (local_18 < (in_ECX[1] - iVar4) / 0xc);
    }
    piStack_78 = local_14;
    pbStack_7c = (byte *)0x99b5e8;
    (**(code **)(*local_14 + 0x30))();
    pbStack_7c = (byte *)0x5c;
    puStack_80 = (undefined *)0x99b5ef;
    iVar4 = FUN_00aae9af();
    local_8._0_1_ = 3;
    in_stack_00000088 = (int *)iVar4;
    if (iVar4 != 0) {
      in_stack_0000004c = auStack_94;
      uStack_98 = 0xffffffff;
      uStack_9c = 0;
      puStack_a0 = &stack0x00000050;
      puStack_80 = (undefined *)0xf;
      uStack_84 = 0;
      auStack_94[0] = 0;
      uStack_a4 = 0x99b62d;
      FUN_00408ed0();
      local_8 = CONCAT31(local_8._1_3_,4);
      uStack_b4 = 0xffffffff;
      uStack_b8 = 0;
      puStack_bc = &stack0x0000006c;
      uStack_9c = 0xf;
      puStack_a0 = (undefined4 *)0x0;
      uStack_b0 = 0;
      uStack_c0 = 0x99b653;
      FUN_00408ed0();
      iVar8 = in_ECX[1];
      iVar11 = *in_ECX;
      uVar5 = *(undefined4 *)(param_1 + 100);
      puVar10 = (undefined4 *)&stack0x0000000c;
      puVar12 = auStack_f0;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      local_8._0_1_ = 3;
      uVar5 = FUN_00994070(iVar4,uVar5,param_1 + 0x158,(iVar8 - iVar11) / 0xc,0x152);
      goto LAB_0099bcd4;
    }
  }
  else {
    pbVar3 = in_stack_00000050;
    if (in_stack_00000064 < 0x10) {
      pbVar3 = (byte *)&stack0x00000050;
    }
    pbVar7 = &DAT_00ded94d;
    do {
      bVar1 = *pbVar3;
      bVar14 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0099b6d5:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_0099b6da;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar14 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0099b6d5;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0099b6da:
    if (iVar4 == 0) {
      piStack_60 = *(int **)(param_1 + 100);
      iVar8 = 0;
      uStack_48 = 0;
      ppiStack_4c = &param_2;
      param_2 = (int *)0x0;
      in_stack_00000088 = (int *)*piStack_60;
      uStack_50 = 1;
      uStack_54 = 0x52;
      uStack_58 = 8;
      iStack_5c = ((in_ECX[1] - *in_ECX) / 0xc) * 0x1c;
      uStack_64 = 0x99b72f;
      (**(code **)((int)in_stack_00000088 + 0x68))();
      uStack_64 = 0x800;
      puStack_68 = &stack0x00000088;
      uStack_6c = 0;
      uStack_70 = 0;
      piStack_74 = param_2;
      piStack_78 = (int *)0x99b748;
      (**(code **)(*param_2 + 0x2c))();
      uVar5 = DAT_00f092fc;
      iVar4 = *in_ECX;
      local_18 = 0;
      if (0 < (in_ECX[1] - iVar4) / 0xc) {
        iVar11 = 0;
        do {
          *(undefined4 *)(iVar11 + (int)in_stack_00000088) = *(undefined4 *)(iVar8 + iVar4);
          *(undefined4 *)(iVar11 + 4 + (int)in_stack_00000088) =
               *(undefined4 *)(iVar8 + 4 + *in_ECX);
          *(undefined4 *)(iVar11 + 8 + (int)in_stack_00000088) =
               *(undefined4 *)(iVar8 + 8 + *in_ECX);
          *(undefined4 *)(iVar11 + 0xc + (int)in_stack_00000088) = 0;
          *(undefined4 *)(iVar11 + 0x10 + (int)in_stack_00000088) = uVar5;
          *(undefined4 *)(iVar11 + 0x14 + (int)in_stack_00000088) = 0;
          *(undefined1 **)(iVar11 + 0x18 + (int)in_stack_00000088) = in_stack_0000004c;
          iVar4 = *in_ECX;
          local_18 = local_18 + 1;
          iVar8 = iVar8 + 0xc;
          iVar11 = iVar11 + 0x1c;
        } while (local_18 < (in_ECX[1] - iVar4) / 0xc);
      }
      piStack_78 = param_2;
      pbStack_7c = (byte *)0x99b811;
      (**(code **)(*param_2 + 0x30))();
      pbStack_7c = (byte *)0x5c;
      puStack_80 = (undefined *)0x99b818;
      puVar6 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 5;
      in_stack_0000004c = puVar6;
      if (puVar6 != (undefined1 *)0x0) {
        uStack_98 = 0xffffffff;
        uStack_9c = 0;
        puStack_a0 = &stack0x0000006c;
        puStack_80 = (undefined *)0xf;
        uStack_84 = 0;
        auStack_94[0] = 0;
        uStack_a4 = 0x99b853;
        FUN_00408ed0();
        local_8 = CONCAT31(local_8._1_3_,6);
        uStack_b4 = 0xffffffff;
        uStack_b8 = 0;
        puStack_bc = &stack0x00000050;
        uStack_9c = 0xf;
        puStack_a0 = (undefined4 *)0x0;
        uStack_b0 = 0;
        uStack_c0 = 0x99b879;
        FUN_00408ed0();
        iVar4 = in_ECX[1];
        iVar8 = *in_ECX;
        uVar5 = *(undefined4 *)(param_1 + 100);
        puVar10 = (undefined4 *)&stack0x0000000c;
        puVar12 = auStack_f0;
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        local_8._0_1_ = 5;
        uVar5 = FUN_00994070(puVar6,uVar5,param_1 + 0x158,(iVar4 - iVar8) / 0xc,0x52);
        goto LAB_0099bcd4;
      }
    }
    else {
      pbVar3 = in_stack_0000006c;
      if (in_stack_00000080 < 0x10) {
        pbVar3 = (byte *)&stack0x0000006c;
      }
      pbVar7 = &DAT_00ded94d;
      do {
        bVar1 = *pbVar3;
        bVar14 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0099b900:
          iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_0099b905;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar14 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0099b900;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0099b905:
      piStack_60 = *(int **)(param_1 + 100);
      uStack_48 = 0;
      ppiStack_4c = &local_14;
      uStack_50 = 1;
      uStack_54 = 0x112;
      local_14 = (int *)0x0;
      in_stack_0000004c = (undefined1 *)*piStack_60;
      uStack_58 = 8;
      if (iVar4 == 0) {
        iStack_5c = ((in_ECX[1] - *in_ECX) / 0xc) * 0x20;
        uStack_64 = 0x99b94d;
        (**(code **)(in_stack_0000004c + 0x68))();
        uStack_64 = 0x800;
        puStack_68 = &stack0x0000004c;
        uStack_6c = 0;
        uStack_70 = 0;
        piStack_74 = local_14;
        piStack_78 = (int *)0x99b963;
        (**(code **)(*local_14 + 0x2c))();
        local_18 = 0;
        iVar4 = *in_ECX;
        if (0 < (in_ECX[1] - iVar4) / 0xc) {
          iVar11 = 0;
          iVar8 = 0;
          local_1c = 0;
          do {
            *(undefined4 *)(in_stack_0000004c + iVar8) = *(undefined4 *)(iVar11 + iVar4);
            *(undefined4 *)(in_stack_0000004c + iVar8 + 4) = *(undefined4 *)(iVar11 + 4 + *in_ECX);
            *(undefined4 *)(in_stack_0000004c + iVar8 + 8) = *(undefined4 *)(iVar11 + 8 + *in_ECX);
            *(undefined4 *)(in_stack_0000004c + iVar8 + 0xc) = *(undefined4 *)(iVar11 + *param_2);
            *(undefined4 *)(in_stack_0000004c + iVar8 + 0x10) =
                 *(undefined4 *)(*param_2 + 4 + iVar11);
            *(undefined4 *)(in_stack_0000004c + iVar8 + 0x14) =
                 *(undefined4 *)(*param_2 + 8 + iVar11);
            *(undefined4 *)(in_stack_0000004c + iVar8 + 0x18) =
                 **(undefined4 **)(local_1c + *in_stack_00000088);
            local_18 = local_18 + 1;
            *(undefined4 *)(in_stack_0000004c + iVar8 + 0x1c) =
                 *(undefined4 *)(*(int *)(local_1c + *in_stack_00000088) + 4);
            iVar4 = *in_ECX;
            local_1c = local_1c + 0x10;
            iVar11 = iVar11 + 0xc;
            iVar8 = iVar8 + 0x20;
          } while (local_18 < (in_ECX[1] - iVar4) / 0xc);
        }
        piStack_78 = local_14;
        pbStack_7c = (byte *)0x99ba3c;
        (**(code **)(*local_14 + 0x30))();
        pbStack_7c = (byte *)0x5c;
        puStack_80 = (undefined *)0x99ba43;
        iVar4 = FUN_00aae9af();
        local_8._0_1_ = 7;
        in_stack_00000088 = (int *)iVar4;
        if (iVar4 != 0) {
          param_2 = (int *)auStack_94;
          uStack_98 = 0xffffffff;
          uStack_9c = 0;
          puStack_a0 = &stack0x0000006c;
          puStack_80 = (undefined *)0xf;
          uStack_84 = 0;
          auStack_94[0] = 0;
          uStack_a4 = 0x99ba7d;
          FUN_00408ed0();
          local_8 = CONCAT31(local_8._1_3_,8);
          uStack_b4 = 0xffffffff;
          uStack_b8 = 0;
          puStack_bc = &stack0x00000050;
          uStack_9c = 0xf;
          puStack_a0 = (undefined4 *)0x0;
          uStack_b0 = 0;
          uStack_c0 = 0x99baa2;
          FUN_00408ed0();
          iVar8 = in_ECX[1];
          iVar11 = *in_ECX;
          uVar5 = *(undefined4 *)(param_1 + 100);
          puVar10 = (undefined4 *)&stack0x0000000c;
          puVar12 = auStack_f0;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          local_8._0_1_ = 7;
          uVar5 = FUN_00994070(iVar4,uVar5,param_1 + 0x158,(iVar8 - iVar11) / 0xc,0x112);
          goto LAB_0099bcd4;
        }
      }
      else {
        iStack_5c = ((in_ECX[1] - *in_ECX) / 0xc) * 0x28;
        uStack_64 = 0x99bb19;
        (**(code **)(in_stack_0000004c + 0x68))();
        uStack_64 = 0x800;
        puStack_68 = &stack0x0000004c;
        uStack_6c = 0;
        uStack_70 = 0;
        piStack_74 = local_14;
        piStack_78 = (int *)0x99bb2f;
        (**(code **)(*local_14 + 0x2c))();
        local_18 = 0;
        if (0 < (in_ECX[1] - *in_ECX) / 0xc) {
          iVar4 = 0;
          iVar8 = 0;
          iVar11 = 0;
          do {
            *(undefined4 *)(in_stack_0000004c + iVar4) = *(undefined4 *)(iVar11 + *in_ECX);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 4) = *(undefined4 *)(iVar11 + 4 + *in_ECX);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 8) = *(undefined4 *)(iVar11 + 8 + *in_ECX);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 0xc) = *(undefined4 *)(iVar11 + *param_2);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 0x10) =
                 *(undefined4 *)(*param_2 + 4 + iVar11);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 0x14) =
                 *(undefined4 *)(*param_2 + 8 + iVar11);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 0x18) =
                 **(undefined4 **)(iVar8 + *in_stack_00000088);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 0x1c) =
                 *(undefined4 *)(*(int *)(iVar8 + *in_stack_00000088) + 4);
            *(undefined4 *)(in_stack_0000004c + iVar4 + 0x20) =
                 *(undefined4 *)(*(int *)(iVar8 + *in_stack_00000088) + 8);
            local_18 = local_18 + 1;
            *(undefined4 *)(in_stack_0000004c + iVar4 + 0x24) =
                 *(undefined4 *)(*(int *)(iVar8 + *in_stack_00000088) + 0xc);
            iVar11 = iVar11 + 0xc;
            iVar8 = iVar8 + 0x10;
            iVar4 = iVar4 + 0x28;
          } while (local_18 < (in_ECX[1] - *in_ECX) / 0xc);
        }
        piStack_78 = local_14;
        pbStack_7c = (byte *)0x99bc19;
        (**(code **)(*local_14 + 0x30))();
        pbStack_7c = (byte *)0x5c;
        puStack_80 = (undefined *)0x99bc20;
        iVar4 = FUN_00aae9af();
        local_8._0_1_ = 9;
        in_stack_00000088 = (int *)iVar4;
        if (iVar4 != 0) {
          param_2 = (int *)auStack_94;
          uStack_98 = 0xffffffff;
          uStack_9c = 0;
          puStack_a0 = &stack0x0000006c;
          puStack_80 = (undefined *)0xf;
          uStack_84 = 0;
          auStack_94[0] = 0;
          uStack_a4 = 0x99bc5e;
          FUN_00408ed0();
          local_8 = CONCAT31(local_8._1_3_,10);
          uStack_b4 = 0xffffffff;
          uStack_b8 = 0;
          puStack_bc = &stack0x00000050;
          uStack_9c = 0xf;
          puStack_a0 = (undefined4 *)0x0;
          uStack_b0 = 0;
          uStack_c0 = 0x99bc84;
          FUN_00408ed0();
          iVar8 = in_ECX[1];
          iVar11 = *in_ECX;
          uVar5 = *(undefined4 *)(param_1 + 100);
          puVar10 = (undefined4 *)&stack0x0000000c;
          puVar12 = auStack_f0;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          local_8._0_1_ = 9;
          uVar5 = FUN_00994070(iVar4,uVar5,param_1 + 0x158,(iVar8 - iVar11) / 0xc,0x112);
          goto LAB_0099bcd4;
        }
      }
    }
  }
  uVar5 = 0;
LAB_0099bcd4:
  if (0xf < in_stack_00000064) {
    pbStack_7c = in_stack_00000050;
                    /* WARNING: Subroutine does not return */
    puStack_80 = &UNK_0099bce7;
    FUN_00aae91b();
  }
  in_stack_00000050 = (byte *)((uint)in_stack_00000050 & 0xffffff00);
  in_stack_00000060 = 0;
  in_stack_00000064 = 0xf;
  if (0xf < in_stack_00000080) {
    pbStack_7c = in_stack_0000006c;
                    /* WARNING: Subroutine does not return */
    puStack_80 = &UNK_0099bd0d;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return uVar5;
}

