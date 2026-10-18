// FUN_00750a30 @ 00750a30 body=[[00750a30, 00750b7a] [00750b7e, 00750c03] [00750c07, 00750c22] [00750c26, 00750d43] [00750d47, 00750d76] [00750d7a, 00750d8c]]


void FUN_00750a30(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b91cfb;
  local_10 = ExceptionList;
  iVar4 = *(int *)(param_1 + 0xdc);
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xdc) = param_2;
  if (iVar4 != param_2) {
    FUN_007504e0();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xdc) + 0x58);
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0xdc);
  iVar4 = *(int *)(iVar4 * 0xb0 + *DAT_01258728 + 8);
  if (((iVar4 == 0) || (DAT_01258734 == 0)) || (iVar4 == DAT_01258734 + 0x10)) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (uint)local_48[0]._1_3_ << 8;
    FUN_00409350("goods_type",10);
    local_8 = 1;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x44))(local_48);
    (**(code **)(*piVar1 + 0x48))(0);
  }
  else {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (uint)local_48[0]._1_3_ << 8;
    FUN_00409350("goods_type",10);
    local_8 = 0;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x44))(local_48);
    (**(code **)(*piVar1 + 0x48))(*(int *)(*(int *)(iVar4 + 0x80) + 8) + 2);
  }
  if (0xf < local_34) {
    local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8 = 0xffffffff;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("total_population",0x10);
  local_8 = 2;
  uVar2 = FUN_009c9b50(local_84,&DAT_00e05104,&DAT_00e05104);
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x3c))(local_48);
  FUN_00408ed0(uVar2,0,0xffffffff);
  FUN_00a5ecc0(uVar2,0);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 4;
  iVar5 = *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2;
  local_14 = 0;
  iVar4 = DAT_012587e8;
  if (0 < iVar5) {
    do {
      local_18 = *(int *)(*(int *)(iVar3 + 0x1f0) + local_14 * 4);
      if (local_18 != 0) {
        if ((*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2 <= local_14) && (DAT_012587ec == 0)
           ) {
          local_1c = FUN_00aae9af(0x98);
          local_8._0_1_ = 5;
          if (local_1c == 0) {
            DAT_012587ec = 0;
          }
          else {
            DAT_012587ec = FUN_00561080(local_1c);
          }
          local_8 = CONCAT31(local_8._1_3_,4);
        }
        FUN_00549af0(&local_18);
        FUN_0054a870();
        iVar4 = DAT_012587e8;
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar5);
  }
  iVar4 = local_2c;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("culture_chart",0xd);
  local_8._0_1_ = 6;
  iVar3 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x44))(local_64);
  FUN_009e11f0(*(undefined4 *)(iVar3 + 0x94),&local_2c,1);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  if (iVar4 != local_28) {
    local_28 = FUN_006a2070(param_1);
    iVar4 = local_2c;
  }
  FUN_00751210(param_1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar4);
  }
  ExceptionList = local_10;
  return;
}

