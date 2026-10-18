// FUN_006e6530 @ 006e6530 body=[[006e6530, 006e65d3] [006e65d7, 006e6709] [006e670d, 006e6766] [006e676a, 006e67ac] [006e67b0, 006e67f2] [006e67f6, 006e6840] [006e6844, 006e6858]]


undefined4 *
FUN_006e6530(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9221c;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar3 = (**(code **)(*param_3 + 0x2c))(local_30,param_4);
  param_1[8] = uVar3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  param_1[10] = CButtonObserver::vftable;
  local_8._0_1_ = 7;
  *param_1 = CStateFactoryInfoItem::vftable;
  param_1[7] = CStateFactoryInfoItem::vftable;
  param_1[10] = CStateFactoryInfoItem::vftable;
  param_1[0xb] = param_2;
  _eh_vector_constructor_iterator_(param_1 + 0xc,0x21c,8,FUN_006e2a30,FUN_006e2c90);
  param_1[0x446] = 0;
  param_1[0x447] = 0;
  FUN_00704eb0(&LAB_006a4de0,0x28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00704eb0(0,0,0,0,0,0,0,0,0,0,0,0,FUN_006e69a0,0,0,0,0,0);
  param_1[0x470] = param_5;
  param_1[0x471] = 0;
  param_1[0x472] = 0;
  param_1[0x473] = 0;
  local_8._0_1_ = 0xb;
  local_14 = (int *)param_1[8];
  (**(code **)(*(int *)local_14[0x125] + 0xb0))();
  param_2 = 0;
  do {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("factory_info_bounds",0x13);
    local_8._0_1_ = 0xc;
    iVar5 = param_2;
    uVar3 = param_5;
    uVar4 = (**(code **)(*local_14 + 0x6c))(local_30,param_2,param_5);
    FUN_006e2d40(param_3,param_4,uVar4,iVar5,uVar3);
    local_8._0_1_ = 0xb;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    param_2 = param_2 + 1;
  } while (param_2 < 8);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("state_name",10);
  local_8._0_1_ = 0xd;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_30);
  local_8._0_1_ = 0xb;
  param_1[0x444] = uVar3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("factory_count",0xd);
  local_8._0_1_ = 0xe;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_30);
  local_8._0_1_ = 0xb;
  param_1[0x445] = uVar3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("state_focus",0xb);
  local_8._0_1_ = 0xf;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  local_8._0_1_ = 0xb;
  param_1[0x446] = uVar3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("build_new_factory",0x11);
  local_8 = CONCAT31(local_8._1_3_,0x10);
  iVar5 = (**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x448);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

