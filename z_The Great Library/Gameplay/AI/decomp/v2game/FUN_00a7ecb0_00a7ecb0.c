// FUN_00a7ecb0 @ 00a7ecb0 body=[[00a7ecb0, 00a7f12f]]


undefined4
FUN_00a7ecb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,uint *param_5,
            int param_6,int *param_7,int *param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_6c [28];
  undefined1 local_50 [28];
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53f49;
  local_10 = ExceptionList;
  iVar5 = 0;
  local_34 = 0;
  if (param_6 != 0) {
    uVar1 = *param_5;
    ExceptionList = &local_10;
    if ((uVar1 | 1) != 0) {
      ExceptionList = &local_10;
      iVar5 = FUN_00a7cc10(&DAT_00dee320);
    }
    if ((uVar1 | 2) == 0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_00a7cc10(&DAT_00dee334);
    }
    if ((uVar1 | 4) == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_00a7cc10(&DAT_00dee338);
    }
    if ((uVar1 | 8) == 0) {
      local_1c = 0;
    }
    else {
      local_1c = FUN_00a7cc10(&DAT_00dee324);
    }
    if ((uVar1 | 0x10) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_00a7cc10(&DAT_00dee328);
    }
    if ((uVar1 | 0x20) == 0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00a7cc10(&DAT_00dee32c);
    }
    if ((uVar1 | 0x40) == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00a7cc10(&DAT_00dee330);
    }
    local_18 = FUN_00a7cc10(&DAT_00dee33c);
    if (local_2c == 0) {
      *param_5 = uVar1 & 0xfffffffd;
    }
    if (local_30 == 0) {
      *param_5 = *param_5 & 0xfffffffb;
    }
    if (local_1c == 0) {
      *param_5 = *param_5 & 0xfffffff7;
    }
    if (local_28 == 0) {
      *param_5 = *param_5 & 0xffffffef;
    }
    if (local_24 == 0) {
      *param_5 = *param_5 & 0xffffffdf;
    }
    if (local_20 == 0) {
      *param_5 = *param_5 & 0xffffffbf;
    }
    if ((*(int *)(iVar5 + 0x14) != 0) &&
       ((*(int *)(iVar5 + 0x10) == 0 || (*(int *)(iVar5 + 0x10) == 1)))) {
      iVar4 = iVar5 + 0x18;
      if (*(int *)(iVar5 + 0x14) != 1) {
        iVar4 = *(int *)(iVar5 + 0x18);
      }
      if (((iVar4 != 0) && (*(int *)(local_18 + 0x14) != 0)) &&
         ((*(int *)(local_18 + 0x10) == 2 || (*(int *)(local_18 + 0x10) == 3)))) {
        iVar4 = local_18 + 0x18;
        if (*(int *)(local_18 + 0x14) != 1) {
          iVar4 = *(int *)(local_18 + 0x18);
        }
        if (iVar4 != 0) {
          if (local_1c != 0) {
            if ((local_28 != 0) && (*(int *)(local_28 + 0x14) != *(int *)(local_1c + 0x14))) {
              FUN_009885d0();
              local_8 = 0;
              FUN_004015b0(local_50,0x1a2,0x1000);
              local_8._0_1_ = 1;
              uVar3 = FUN_00987d20(PTR_DAT_00f077fc);
              uVar3 = FUN_00418e30(uVar3);
              FUN_00401280(uVar3);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00401650();
              local_8 = 0xffffffff;
              FUN_00408ad0();
            }
            if ((local_24 != 0) && (*(int *)(local_24 + 0x14) != *(int *)(local_1c + 0x14))) {
              FUN_009885d0();
              local_8 = 2;
              FUN_004015b0(local_50,0x1a7,0x1000);
              local_8._0_1_ = 3;
              uVar3 = FUN_00987d20(PTR_DAT_00f077fc);
              uVar3 = FUN_00418e30(uVar3);
              FUN_00401280(uVar3);
              local_8 = CONCAT31(local_8._1_3_,2);
              FUN_00401650();
              local_8 = 0xffffffff;
              FUN_00408ad0();
            }
            if ((local_20 != 0) && (*(int *)(local_20 + 0x14) != *(int *)(local_1c + 0x14))) {
              FUN_009885d0();
              local_8 = 4;
              FUN_004015b0(local_6c,0x1ac,0x1000);
              local_8._0_1_ = 5;
              uVar3 = FUN_00987d20(PTR_DAT_00f077fc);
              uVar3 = FUN_00418e30(uVar3);
              FUN_00401280(uVar3);
              local_8 = CONCAT31(local_8._1_3_,4);
              FUN_00401650();
              local_8 = 0xffffffff;
              FUN_00408ad0();
            }
          }
          iVar4 = local_18;
          uVar3 = FUN_00a7e750(param_1,*(int *)(iVar5 + 0x14) / 3,local_2c,local_1c,local_28,
                               local_24,local_20,param_9);
          iVar2 = local_18;
          *param_2 = uVar3;
          *param_7 = *(int *)(iVar5 + 0x14) / 3;
          if ((*(int *)(iVar4 + 0x14) == 0) ||
             ((*(int *)(local_18 + 0x10) != 2 && (*(int *)(local_18 + 0x10) != 3)))) {
            iVar5 = 0;
          }
          else if (*(int *)(iVar4 + 0x14) == 1) {
            iVar5 = local_18 + 0x18;
          }
          else {
            iVar5 = *(int *)(local_18 + 0x18);
          }
          uVar3 = FUN_00a7ec10(param_1,iVar5);
          *param_3 = uVar3;
          *param_8 = *(int *)(iVar2 + 0x14) / 3;
          local_34 = 1;
          if (param_4 < 2) {
            ExceptionList = local_10;
            return 1;
          }
          iVar5 = FUN_00a7cca0(&DAT_00dee2d8);
          if (iVar5 != 0) {
            iVar5 = FUN_00a7cc10(&DAT_00dee34c);
            iVar4 = FUN_00a7cc10(&DAT_00dee354);
            if ((iVar5 != 0) && (iVar4 != 0)) {
              uVar3 = FUN_00a7c400();
              uVar3 = FUN_00a7c3d0(uVar3);
              uVar3 = FUN_00a7eb30(param_1,uVar3);
              param_2[1] = uVar3;
              param_3[1] = 0;
              local_34 = 2;
              if (param_4 < 3) {
                ExceptionList = local_10;
                return 2;
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_34;
}

