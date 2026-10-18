// FUN_00978130 @ 00978130 body=[[00978130, 0097836a] [0097836e, 00978389] [0097838d, 009783a7] [009783ab, 00978407] [0097840b, 00978426] [0097842a, 00978444] [00978448, 009784a4] [009784a8, 009784c3] [009784c7, 009784e1] [009784e5, 00978541] [00978545, 00978560] [00978564, 0097857e] [00978582, 009785de] [009785e2, 009785fd] [00978601, 0097861b] [0097861f, 0097867b] [0097867f, 0097869a] [0097869e, 009786b8] [009786bc, 00978718] [0097871c, 00978737] [0097873b, 00978755] [00978759, 009787b5] [009787b9, 009787d4] [009787d8, 009787f2] [009787f6, 00978852] [00978856, 00978871] [00978875, 0097888f] [00978893, 009788ef] [009788f3, 0097890e] [00978912, 0097892c] [00978930, 0097898c] [00978990, 009789ab] [009789af, 009789c9] [009789cd, 00978a29] [00978a2d, 00978a48] [00978a4c, 00978a66] [00978a6a, 00978ac6] [00978aca, 00978ae5] [00978ae9, 00978b03] [00978b07, 00978b63] [00978b67, 00978b82] [00978b86, 00978ba0] [00978ba4, 00978c00] [00978c04, 00978c1f] [00978c23, 00978c3d] [00978c41, 00978c9d] [00978ca1, 00978cbc] [00978cc0, 00978cda] [00978cde, 00978d3a] [00978d3e, 00978d59] [00978d5d, 00978d77] [00978d7b, 00978dd7] [00978ddb, 00978df6] [00978dfa, 00978e14] [00978e18, 00978e74] [00978e78, 00978e93] [00978e97, 00978eb1] [00978eb5, 00978f10] [00978f14, 00978f2f] [00978f33, 00978f4d] [00978f51, 0097904a] [0097904e, 00979069] [0097906d, 00979083] [00979087, 009790a7]]


undefined1 * FUN_00978130(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_1a4 [192];
  char local_e4;
  char local_dc;
  char local_d4;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b78818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_74 = 1;
  FUN_00473f70(local_1a4);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_78 = DAT_01258a48;
  local_6c = 1;
  iVar6 = DAT_01258a48;
  if (4 < (int)(*(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) & 0xfffffffcU)) {
    do {
      iVar5 = *(int *)(*(int *)(iVar6 + 0x28) + local_6c * 4);
      local_70 = iVar5;
      if (*(int *)(iVar5 + 0x5c) == 1) {
        cVar2 = (**(code **)(*param_1 + 0x20))();
        if (cVar2 == '\0') {
          piVar3 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            local_68 = FUN_00aae9af(0x1d8);
            local_8._0_1_ = 3;
            goto LAB_009781d0;
          }
        }
        else {
          piVar3 = *(int **)(param_1[0x16] + *(int *)(iVar5 + 0x50) * 4);
        }
      }
      else {
        piVar3 = DAT_01258a40;
        if (DAT_01258a40 == (int *)0x0) {
          local_68 = FUN_00aae9af(0x1d8);
          local_8._0_1_ = 2;
LAB_009781d0:
          if (local_68 == 0) {
            local_8._0_1_ = 1;
            DAT_01258a40 = (int *)0x0;
            piVar3 = (int *)0x0;
          }
          else {
            DAT_01258a40 = (int *)FUN_009747a0();
            local_8._0_1_ = 1;
            piVar3 = DAT_01258a40;
            iVar5 = local_70;
          }
        }
      }
      cVar2 = (**(code **)(*piVar3 + 0x34))();
      if (cVar2 != '\0') {
        if (*(int *)(iVar5 + 0x5c) == 1) {
          cVar2 = (**(code **)(*param_1 + 0x20))();
          if (cVar2 == '\0') {
            piVar3 = DAT_01258a40;
            if (DAT_01258a40 == (int *)0x0) {
              local_68 = FUN_00aae9af(0x1d8);
              local_8._0_1_ = 5;
              if (local_68 == 0) goto LAB_00978282;
              piVar3 = (int *)FUN_009747a0();
              local_8._0_1_ = 1;
              DAT_01258a40 = piVar3;
            }
          }
          else {
            piVar3 = *(int **)(param_1[0x16] + *(int *)(iVar5 + 0x50) * 4);
          }
        }
        else {
          piVar3 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            local_68 = FUN_00aae9af(0x1d8);
            local_8._0_1_ = 4;
            if (local_68 == 0) {
LAB_00978282:
              local_8._0_1_ = 1;
              DAT_01258a40 = (int *)0x0;
              piVar3 = (int *)0x0;
            }
            else {
              piVar3 = (int *)FUN_009747a0();
              local_8._0_1_ = 1;
              DAT_01258a40 = piVar3;
            }
          }
        }
        FUN_00474b20(piVar3 + 0x1d);
        iVar6 = local_78;
      }
      local_6c = local_6c + 1;
    } while (local_6c < *(int *)(iVar6 + 0x2c) - *(int *)(iVar6 + 0x28) >> 2);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 6;
  FUN_00474340(local_48,1);
  local_8._0_1_ = 7;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 8;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8._0_1_ = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 9;
  FUN_00474340(local_64,2);
  local_8._0_1_ = 10;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0xb;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0xc;
  FUN_00474340(local_64,3);
  local_8._0_1_ = 0xd;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0xe;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0xf;
  FUN_00474340(local_64,4);
  local_8._0_1_ = 0x10;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x11;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x12;
  FUN_00474340(local_64,5);
  local_8._0_1_ = 0x13;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x14;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x15;
  FUN_00474340(local_64,6);
  local_8._0_1_ = 0x16;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x17;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x18;
  FUN_00474340(local_64,7);
  local_8._0_1_ = 0x19;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x1a;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x1b;
  FUN_00474340(local_64,8);
  local_8._0_1_ = 0x1c;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x1d;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x1e;
  FUN_00474340(local_64,9);
  local_8._0_1_ = 0x1f;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x20;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x21;
  FUN_00474340(local_64,10);
  local_8._0_1_ = 0x22;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x23;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x24;
  FUN_00474340(local_64,0xb);
  local_8._0_1_ = 0x25;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x26;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x27;
  FUN_00474340(local_64,0xc);
  local_8._0_1_ = 0x28;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x29;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x2a;
  FUN_00474340(local_64,0xd);
  local_8._0_1_ = 0x2b;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x2c;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x2d;
  FUN_00474340(local_64,0xe);
  local_8._0_1_ = 0x2e;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x2f;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x30;
  FUN_00474340(local_64,0xf);
  local_8._0_1_ = 0x31;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x32;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x33;
  FUN_00474340(local_64,0x11);
  local_8._0_1_ = 0x34;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x35;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x36;
  FUN_00474340(local_64,0x12);
  local_8._0_1_ = 0x37;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x38;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x39;
  FUN_00474340(local_64,0x13);
  local_8._0_1_ = 0x3a;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x3b;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x3c;
  FUN_00474340(local_64,0x14);
  local_8._0_1_ = 0x3d;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x3e;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x3f;
  FUN_00474340(local_64,0x10);
  local_8._0_1_ = 0x40;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x41;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_8._0_1_ = 1;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (local_e4 == '\0') {
    local_8._0_1_ = uVar1;
    if (local_dc == '\0') {
      if (local_d4 == '\0') goto LAB_00979087;
      FUN_009885d0();
      local_8._0_1_ = 0x48;
      FUN_00474340(local_64,0x17);
      local_8._0_1_ = 0x49;
      uVar4 = FUN_00988f20(local_2c);
      local_8._0_1_ = 0x4a;
    }
    else {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8._0_1_ = 0x45;
      FUN_00474340(local_64,0x16);
      local_8._0_1_ = 0x46;
      uVar4 = FUN_00988f20(local_2c);
      local_8._0_1_ = 0x47;
    }
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 0x42;
    FUN_00474340(local_64,0x15);
    local_8._0_1_ = 0x43;
    uVar4 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0x44;
  }
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
LAB_00979087:
  local_34 = 0xf;
  local_38 = 0;
  local_50 = 0xf;
  local_54 = 0;
  FUN_0048d070();
  ExceptionList = local_10;
  return param_2;
}

