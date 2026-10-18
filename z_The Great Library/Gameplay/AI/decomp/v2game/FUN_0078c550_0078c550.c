// FUN_0078c550 @ 0078c550 body=[[0078c550, 0078c5fd] [0078c601, 0078c6af] [0078c6b3, 0078c6d0] [0078c6d4, 0078c6f1] [0078c6f5, 0078c716] [0078c71a, 0078c77a] [0078c77e, 0078c7cc] [0078c7d0, 0078c81e] [0078c822, 0078c874] [0078c87d, 0078ca54] [0078ca58, 0078ca77] [0078ca7b, 0078ca92] [0078ca96, 0078cab4] [0078cab8, 0078cb88] [0078cb8c, 0078cbaa] [0078cbae, 0078cbc4] [0078cbc8, 0078cbe5] [0078cbe9, 0078cc93] [0078cc97, 0078cca7]]


void FUN_0078c550(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int in_ECX;
  char *pcVar9;
  undefined8 uVar10;
  char local_a8 [4];
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b644;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_34 = in_ECX;
  FUN_00409350("supply_status",0xd);
  local_8 = 0;
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))(local_30);
  iVar5 = *(int *)(*(int *)(in_ECX + 0xc) + 0xb0);
  uVar10 = __allmul(iVar5,iVar5 >> 0x1f,100000,0);
  iVar5 = __alldiv(uVar10,1000,0);
  (**(code **)(*piVar4 + 0x48))(iVar5 / 1000);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00e15f30,3);
  local_8 = 1;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("speed",5);
  local_8._0_1_ = 2;
  FUN_005bba70();
  local_8._0_1_ = 3;
  uVar6 = FUN_00988f20(local_30);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_14 = (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_50);
  FUN_00408ed0();
  FUN_00a5ecc0(uVar6,0);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_8 = 0xffffffff;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  cVar3 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x3c))();
  if (cVar3 == '\0') {
    iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xc4);
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = (int)(1000000 / (longlong)iVar5);
    }
    piVar4 = (int *)FUN_005ccd20();
    uVar10 = __allmul(*piVar4,*piVar4 >> 0x1f,100000,0);
    iVar7 = __alldiv(uVar10,1000,0);
    iVar5 = __alldiv((longlong)iVar7 * (longlong)iVar5,1000,0);
    iVar5 = iVar5 / 1000;
    if (100 < iVar5) {
      iVar5 = 100;
    }
    iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 200);
    if (iVar7 == 0) {
      local_14 = -1;
    }
    else {
      local_14 = (int)(1000000 / (longlong)iVar7);
    }
    piVar4 = (int *)FUN_005ccdf0();
    uVar10 = __allmul(*piVar4,*piVar4 >> 0x1f,100000,0);
    iVar7 = __alldiv(uVar10,1000,0);
    iVar7 = __alldiv((longlong)iVar7 * (longlong)local_14,1000,0);
    iVar7 = iVar7 / 1000;
    if (100 < iVar7) {
      iVar7 = 100;
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9644,1);
    local_8 = 9;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("recon",5);
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_8._0_1_ = 0xb;
    pcVar8 = __itoa(iVar5,local_a8,10);
    pcVar9 = pcVar8;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(pcVar8,(int)pcVar9 - (int)(pcVar8 + 1));
    local_8._0_1_ = 0xc;
    uVar6 = FUN_00988f20(local_6c);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_14 = (**(code **)(**(int **)(local_34 + 4) + 0x3c))(local_30);
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0xe;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350();
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_8._0_1_ = 0x10;
    pcVar9 = __itoa(iVar7,local_a8,10);
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_00409350();
    local_8._0_1_ = 0x11;
    uVar6 = FUN_00988f20(local_6c);
    local_8 = CONCAT31(local_8._1_3_,0x12);
    (**(code **)(**(int **)(local_34 + 4) + 0x3c))(local_50);
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0(uVar6,0);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    in_ECX = local_34;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("recon",5);
    local_8 = 5;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_30);
    (**(code **)(*piVar4 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 6;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))(local_30);
    (**(code **)(*piVar4 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("engineer",8);
    local_8 = 7;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x3c))();
    (**(code **)(*piVar4 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("icon_engineer",0xd);
    local_8 = 8;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))(local_30);
    (**(code **)(*piVar4 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  local_8 = 0xffffffff;
  if (*(int *)(*(int *)(in_ECX + 0xc) + 0x184) < 1) {
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    FUN_00409350("unitstatus_dugin",0x10);
    local_8 = 0x14;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))(local_a4);
    (**(code **)(*piVar4 + 0x38))();
    uVar1 = local_a4[0];
    uVar2 = local_90;
  }
  else {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("unitstatus_dugin",0x10);
    local_8 = 0x13;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))(local_6c);
    (**(code **)(*piVar4 + 0x34))();
    uVar1 = local_6c[0];
    uVar2 = local_58;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar1);
  }
  ExceptionList = local_10;
  return;
}

