// FUN_007b4910 @ 007b4910 body=[[007b4910, 007b49ad] [007b49b1, 007b4a6f] [007b4a73, 007b4b1b] [007b4b1f, 007b4b3d] [007b4b41, 007b4b92] [007b4b96, 007b4bc3] [007b4bc7, 007b4be4] [007b4be8, 007b4c34] [007b4c38, 007b4c4c]]


undefined4 *
FUN_007b4910(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 local_88;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9d30f;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("micro_avail_member",0x12);
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
  uVar2 = (**(code **)(*param_2 + 0x2c))(local_30,param_3);
  param_1[8] = uVar2;
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  *param_1 = CMicroItemMember::vftable;
  param_1[7] = CMicroItemMember::vftable;
  FUN_007b47e0(param_1 + 10);
  FUN_007b9380(FUN_007b4d00,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 8;
  param_1[0x4a] = param_5;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("name_label",10);
  local_8._0_1_ = 9;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_30);
  FUN_00408ed0(param_1 + 0x12,0,0xffffffff);
  FUN_00a5ecc0(param_1 + 0x12,0);
  local_8._0_1_ = 8;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("price_label",0xb);
  piVar5 = (int *)param_1[8];
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 0xb;
  pcVar3 = __itoa(param_1[0x11],(char *)local_6c,10);
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  local_8._0_1_ = 0xc;
  (**(code **)(*piVar5 + 0x3c))(local_4c);
  FUN_00408ed0(local_30,0,0xffffffff);
  FUN_00a5ecc0(local_30,0);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8._0_1_ = 8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e184f0,3);
  local_8._0_1_ = 0xd;
  iVar4 = (**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(param_1 + 0x36);
  local_8._0_1_ = 8;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  iVar4 = FUN_007b4ff0();
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
  if (*(int *)(iVar4 + 0x38) < (int)param_1[0x11]) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("member_button",0xd);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    piVar5 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
    (**(code **)(*piVar5 + 0xbc))();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

