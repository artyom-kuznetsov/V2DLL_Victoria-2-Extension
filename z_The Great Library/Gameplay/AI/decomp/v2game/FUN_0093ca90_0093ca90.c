// FUN_0093ca90 @ 0093ca90 body=[[0093ca90, 0093cc65] [0093cc69, 0093cc8c] [0093cc90, 0093ce2b] [0093ce2f, 0093ce5a] [0093ce5e, 0093ce84] [0093ce88, 0093cea8] [0093ceac, 0093cec3] [0093cec7, 0093cede] [0093cee4, 0093cefc] [0093cf00, 0093cf15]]


int FUN_0093ca90(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  char local_114 [32];
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined1 local_a0 [4];
  uint local_9c [4];
  int local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_17;
  char local_16;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b650ac;
  local_10 = ExceptionList;
  local_1c = 0;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar12 = *(int *)(param_1 + 0x30);
  bVar13 = iVar5 == iVar12;
  if (!bVar13) {
    iVar4 = iVar5;
    do {
      if (*(int *)(iVar4 + 4) == *(int *)(param_2 + 4)) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar12);
    bVar13 = iVar4 == iVar12;
  }
  local_17 = !bVar13;
  if ((*(int *)(iVar5 + 4) == *(int *)(param_2 + 4)) ||
     (local_16 = '\0', *(int *)(*(int *)(param_1 + 0x3c) + 4) == *(int *)(param_2 + 4))) {
    local_16 = '\x01';
  }
  if ((*(int *)(iVar5 + 4) == *(int *)(param_3 + 4)) ||
     (local_15 = '\0', *(int *)(*(int *)(param_1 + 0x3c) + 4) == *(int *)(param_3 + 4))) {
    local_15 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0xe0);
  piVar11 = (int *)*piVar6;
  local_2c = piVar6;
  if (piVar11 != piVar6) {
    do {
      iVar5 = piVar11[5] - piVar11[4] >> 6;
      if (0 < iVar5) {
        local_20 = 0;
        local_28 = iVar5;
        do {
          iVar12 = piVar11[4] + local_20;
          piVar6 = (int *)FUN_00953480(local_a0,0,0);
          iVar5 = *piVar6 / 1000;
          if (iVar5 != 0) {
            if (local_16 != local_15) {
              if (((*(int *)(iVar12 + 0x1c) != *(int *)(param_2 + 4)) ||
                  (*(int *)(iVar12 + 0x24) != *(int *)(param_3 + 4))) &&
                 ((*(int *)(iVar12 + 0x1c) != *(int *)(param_3 + 4) ||
                  (*(int *)(iVar12 + 0x24) != *(int *)(param_2 + 4))))) goto LAB_0093cc90;
            }
            if (local_17 == '\0') {
              iVar4 = *(int *)(param_1 + 0x40);
              iVar7 = *(int *)(param_1 + 0x3c);
              if (iVar7 != iVar4) {
                do {
                  if (*(int *)(iVar7 + 4) == *(int *)(iVar12 + 0x1c)) break;
                  iVar7 = iVar7 + 8;
                } while (iVar7 != iVar4);
                if (iVar7 != iVar4) goto LAB_0093ccea;
              }
LAB_0093cc04:
              local_24 = CONCAT31(local_24._1_3_,1);
              iVar5 = -iVar5;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x30);
              iVar7 = *(int *)(param_1 + 0x2c);
              if (iVar7 == iVar4) goto LAB_0093cc04;
              do {
                if (*(int *)(iVar7 + 4) == *(int *)(iVar12 + 0x1c)) break;
                iVar7 = iVar7 + 8;
              } while (iVar7 != iVar4);
              if (iVar7 == iVar4) goto LAB_0093cc04;
LAB_0093ccea:
              local_24 = (uint)local_24._1_3_ << 8;
            }
            local_1c = local_1c + iVar5;
            if (param_4 != 0) {
              uVar8 = FUN_00953560(local_80,param_1,local_24,param_5);
              local_8._0_1_ = 1;
              uVar8 = FUN_00988fa0(uVar8);
              local_8._0_1_ = 2;
              FUN_00448aa0(uVar8,0,0xffffffff);
              if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_48[0]);
              }
              local_8 = (uint)local_8._1_3_ << 8;
              local_34 = 0xf;
              local_38 = 0;
              local_48[0] = local_48[0] & 0xffffff00;
              if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_80[0]);
              }
            }
          }
LAB_0093cc90:
          local_20 = local_20 + 0x40;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
        local_28 = 0;
        piVar6 = local_2c;
      }
      if (*(char *)((int)piVar11 + 0x21) == '\0') {
        piVar2 = (int *)piVar11[2];
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          piVar11 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar11 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar11[1] + 0x21);
          piVar3 = (int *)piVar11[1];
          piVar2 = piVar11;
          while ((piVar11 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar11[2]))) {
            cVar1 = *(char *)(piVar11[1] + 0x21);
            piVar3 = (int *)piVar11[1];
            piVar2 = piVar11;
          }
        }
      }
    } while (piVar11 != piVar6);
  }
  if ((param_4 != 0) && (local_8c != 0)) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9644,1);
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8._0_1_ = 4;
    pcVar9 = __itoa(local_1c,local_114,10);
    pcVar10 = pcVar9;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar9,(int)pcVar10 - (int)(pcVar9 + 1));
    local_8._0_1_ = 5;
    FUN_00988fa0(local_64);
    local_8._0_1_ = 6;
    uVar8 = FUN_00988f20(local_48);
    local_8._0_1_ = 7;
    FUN_0042c180(local_f4,uVar8);
    local_8._0_1_ = 8;
    uVar8 = FUN_00988f20(local_9c);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_00448aa0(uVar8,0,0xffffffff);
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d8);
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
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
  }
  if (local_88 < 0x10) {
    ExceptionList = local_10;
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_9c[0]);
}

