// FUN_00a391c0 @ 00a391c0 body=[[00a391c0, 00a3922b] [00a3922f, 00a39288] [00a3928c, 00a393b3] [00a393b7, 00a393f7] [00a393fb, 00a39467] [00a3946b, 00a39486] [00a3948a, 00a3949e]]


/* WARNING: Removing unreachable block (ram,0x00a39354) */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00a391c0(undefined4 *param_1,int param_2,undefined4 *param_3,byte *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *******pppppppuVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  uint in_stack_00000020;
  uint in_stack_00000024;
  undefined1 local_1a4 [36];
  char local_180 [260];
  undefined4 local_7c;
  uint local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 *******local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e321;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e40748,2);
  local_8._0_1_ = 1;
  FUN_00988f20(local_30);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  pppppppuVar4 = local_4c[0];
  if (local_38 < 0x10) {
    pppppppuVar4 = local_4c;
  }
  local_60 = FUN_00ab003e(pppppppuVar4,local_1a4);
  if (local_60 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_004097a0(&local_5c);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  else {
    do {
      if (((byte)local_1a4._0_4_ & 0x10) != 0x10) {
        pcVar5 = local_180;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(local_180,(int)pcVar5 - (int)(local_180 + 1));
        local_8 = CONCAT31(local_8._1_3_,5);
        pbVar6 = param_4;
        if (in_stack_00000024 < 0x10) {
          pbVar6 = (byte *)&param_4;
        }
        pbVar10 = &DAT_00ded94d;
        do {
          bVar2 = *pbVar6;
          bVar12 = bVar2 < *pbVar10;
          if (bVar2 != *pbVar10) {
LAB_00a39320:
            iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00a39325;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar12 = bVar2 < pbVar10[1];
          if (bVar2 != pbVar10[1]) goto LAB_00a39320;
          pbVar6 = pbVar6 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_00a39325:
        if (iVar7 == 0) {
LAB_00a39392:
          bVar12 = true;
        }
        else {
          iVar7 = FUN_009895f0(local_20);
          uVar3 = in_stack_00000020;
          local_14 = local_14 | 2;
          uVar8 = *(uint *)(iVar7 + 0x10);
          uVar11 = uVar8;
          if (in_stack_00000020 <= uVar8) {
            uVar11 = in_stack_00000020;
          }
          iVar7 = FUN_00414bd0(uVar11);
          bVar12 = false;
          if (iVar7 == 0) {
            if (uVar8 < uVar3) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)(uVar8 != uVar3);
            }
            bVar12 = uVar8 == 0;
          }
          if (bVar12) goto LAB_00a39392;
          bVar12 = false;
        }
        local_8 = 5;
        if (((local_14 & 2) != 0) && (local_14 = local_14 & 0xfffffffd, 0xf < local_68)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_7c);
        }
        if ((bVar12) && (FUN_005498a0(&param_2,*param_3,local_30), param_2 == 0)) {
          FUN_00a3a190(&local_5c,local_30);
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
      }
      iVar7 = local_60;
      iVar9 = FUN_00ab0165(local_60,local_1a4);
    } while (iVar9 == 0);
    FUN_00ab0293(iVar7);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    iVar7 = local_5c;
    while (iVar7 != 0) {
      iVar9 = *(int *)(iVar7 + 0x20);
      FUN_00408db0(iVar7);
      iVar7 = iVar9;
    }
    FUN_004097a0(&local_5c);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  if (in_stack_00000024 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_3c = 0;
  local_38 = 0xf;
  local_4c[0] = (undefined4 *******)((uint)local_4c[0] & 0xffffff00);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_4);
}

