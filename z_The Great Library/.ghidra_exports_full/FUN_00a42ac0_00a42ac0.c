// FUN_00a42ac0 @ 00a42ac0 body=[[00a42ac0, 00a42ba7] [00a42bab, 00a42c78] [00a42c7c, 00a42c9f] [00a42ca3, 00a42cc7] [00a42ccb, 00a42cf0] [00a42cf4, 00a42d7c] [00a42d80, 00a42dbe] [00a42dc2, 00a42e1d] [00a42e21, 00a42e98] [00a42e9c, 00a42f5b] [00a42f5f, 00a42f8d] [00a42f91, 00a42fb2] [00a42fb6, 00a42fd2] [00a42fd6, 00a43039] [00a4303d, 00a430a2] [00a430a6, 00a4320e] [00a43212, 00a43226]]


int * FUN_00a42ac0(int *param_1,int *param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  char *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  int in_EDX;
  int *piVar9;
  int *piVar10;
  uint in_stack_0000002c;
  uint local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  int local_54;
  uint local_50;
  uint local_48 [4];
  int local_38;
  uint local_34;
  uint local_2c [3];
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b63362;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[1] = in_ECX;
  param_1[2] = in_EDX;
  piVar9 = param_2;
  piVar10 = param_1 + 3;
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  param_1[0x17] = 0;
  param_1[0x14] = param_3;
  param_1[0x18] = param_5;
  param_1[0x15] = param_4;
  param_1[0x19] = -1;
  param_1[0x1a] = -1;
  param_1[0x1b] = -1;
  param_1[0x1c] = -1;
  pcVar1 = (char *)param_2[0x11];
  if (pcVar1 != (char *)0x0) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    pcVar5 = pcVar1;
    do {
      cVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar4 != '\0');
    FUN_00409350(pcVar1,(int)pcVar5 - (int)(pcVar1 + 1));
    local_8._0_1_ = 1;
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    cVar4 = (**(code **)(*DAT_00f20c18 + 0x24))(local_48);
    local_8._0_1_ = 0;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (cVar4 == '\0') {
      pcVar1 = (char *)param_2[0x11];
      pcVar5 = pcVar1;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      local_8._0_1_ = uVar3;
      FUN_00409350(pcVar1,(int)pcVar5 - (int)(pcVar1 + 1));
      local_8._0_1_ = 0xd;
      FUN_00988f20(local_64);
      local_8._0_1_ = 0xf;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64[0]);
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,&DAT_00e19384);
      if (iVar8 != 0) {
        uVar6 = FUN_009895f0(local_38);
        local_8._0_1_ = 0x10;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("normal",6);
        local_8._0_1_ = 0x11;
        FUN_009895f0(local_38 + -9);
        local_8._0_1_ = 0x12;
        FUN_00988f20(local_2c);
        local_8._0_1_ = 0x13;
        FUN_00988f20(uVar6);
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_9c);
        }
        local_88 = 0xf;
        local_8c = 0;
        local_9c = local_9c & 0xffffff00;
        if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b8);
        }
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8 = local_b8 & 0xffffff00;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        local_8._0_1_ = 0x18;
        if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_80);
        }
        local_6c = 0xf;
        local_70 = 0;
        local_80 = local_80 & 0xffffff00;
        uVar7 = FUN_009bcbf0(local_d4,1);
        param_1[0x1a] = uVar7;
        if ((uVar7 == 0xffffffff) || (9999 < uVar7)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(uVar7 * 0x2c + 4 + param_3);
        }
        (**(code **)(*(int *)param_1[0x15] + 0xd0))((int *)param_1[0x15],iVar8,uVar6);
        local_8._0_1_ = 0xf;
        if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_d4[0]);
        }
      }
      iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,&DAT_00e0bce4);
      if (iVar8 != 0) {
        uVar7 = FUN_009bcbf0(local_48,1);
        param_1[0x19] = uVar7;
        if ((uVar7 == 0xffffffff) || (9999 < uVar7)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(uVar7 * 0x2c + 4 + param_3);
        }
        (**(code **)(*(int *)param_1[0x15] + 0xd0))((int *)param_1[0x15],iVar8,uVar6);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      uVar7 = local_48[0];
      uVar2 = local_34;
    }
    else {
      pcVar1 = (char *)param_2[0x11];
      pcVar5 = pcVar1;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar1,(int)pcVar5 - (int)(pcVar1 + 1));
      local_8._0_1_ = 2;
      uVar6 = FUN_009895f0(local_54);
      local_8._0_1_ = 3;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("normal",6);
      local_8._0_1_ = 4;
      FUN_009895f0(local_54 + -9);
      local_8._0_1_ = 5;
      FUN_00988f20(local_2c);
      local_8._0_1_ = 6;
      FUN_00988f20(uVar6);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_b8);
      }
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8 = local_b8 & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0xb);
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_9c);
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c = local_9c & 0xffffff00;
      iVar8 = FUN_009bcbf0(local_d4,1);
      param_1[0x1a] = iVar8;
      iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,&DAT_00e19384);
      if (iVar8 != 0) {
        uVar7 = param_1[0x1a];
        if ((uVar7 == 0xffffffff) || (9999 < uVar7)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(uVar7 * 0x2c + 4 + param_3);
        }
        (**(code **)(*(int *)param_1[0x15] + 0xd0))((int *)param_1[0x15],iVar8,uVar6);
      }
      pcVar1 = (char *)param_2[0x11];
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      pcVar5 = pcVar1;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar1,(int)pcVar5 - (int)(pcVar1 + 1));
      local_8._0_1_ = 0xc;
      iVar8 = FUN_009bcbf0(local_48,1);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      param_1[0x19] = iVar8;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,&DAT_00e0bce4);
      if (iVar8 != 0) {
        uVar7 = param_1[0x19];
        if ((uVar7 == 0xffffffff) || (9999 < uVar7)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(uVar7 * 0x2c + 4 + param_3);
        }
        (**(code **)(*(int *)param_1[0x15] + 0xd0))((int *)param_1[0x15],iVar8,uVar6);
      }
      if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_d4[0]);
      }
      local_8 = local_8 & 0xffffff00;
      local_c0 = 0xf;
      local_c4 = 0;
      local_d4[0] = local_d4[0] & 0xffffff00;
      uVar7 = local_64[0];
      uVar2 = local_50;
    }
    if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar7);
    }
  }
  iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,"Ambient");
  if (iVar8 != 0) {
    local_20 = param_2[4];
    local_1c = param_2[5];
    local_18 = param_2[6];
    local_14 = param_2[7];
    (**(code **)(*(int *)param_1[0x15] + 0x88))((int *)param_1[0x15],iVar8,&local_20);
  }
  iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,"Specular");
  if (iVar8 != 0) {
    local_20 = param_2[8];
    local_1c = param_2[9];
    local_18 = param_2[10];
    local_14 = param_2[0xb];
    (**(code **)(*(int *)param_1[0x15] + 0x88))((int *)param_1[0x15],iVar8,&local_20);
  }
  iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,"Diffuse");
  if (iVar8 != 0) {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
    (**(code **)(*(int *)param_1[0x15] + 0x88))((int *)param_1[0x15],iVar8,&local_20);
  }
  iVar8 = (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],0,"Emissive");
  if (iVar8 != 0) {
    local_20 = param_2[0xc];
    local_1c = param_2[0xd];
    local_18 = param_2[0xe];
    local_14 = param_2[0xf];
    (**(code **)(*(int *)param_1[0x15] + 0x88))((int *)param_1[0x15],iVar8,&local_20);
  }
  DAT_00f077f8 = DAT_00f077f8 + 1;
  *param_1 = DAT_00f077f8;
  FUN_00a438f0();
  if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_6);
  }
  ExceptionList = local_10;
  return param_1;
}

