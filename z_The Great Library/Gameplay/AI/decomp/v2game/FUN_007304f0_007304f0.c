// FUN_007304f0 @ 007304f0 body=[[007304f0, 007305c1] [007305c5, 00730664] [00730668, 007306ae] [007306b2, 007306f8] [007306fc, 00730742] [00730746, 0073078c] [00730790, 007307d6] [007307da, 00730823] [00730827, 0073086d] [00730871, 007308ba]]


undefined4 * FUN_007304f0(undefined4 *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  char *pcVar5;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4be0c;
  local_10 = ExceptionList;
  pcVar5 = "build_unit_entry_wide";
  if (param_2 == '\0') {
    pcVar5 = "build_unit_entry";
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
  local_8 = 0;
  uVar3 = (**(code **)(*in_ECX + 0x3c))();
  piVar4 = (int *)(**(code **)(*in_ECX + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(local_34,uVar3);
  param_1[8] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *param_1 = CUnitBuildItem::vftable;
  param_1[7] = CUnitBuildItem::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_18 = 0x2d2d2d;
  param_1[0xe] = 0x2d2d2d;
  param_1[0xf] = 0;
  FUN_00737d10(FUN_007319b0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 8;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("build_button",0xc);
  local_8._0_1_ = 9;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_34);
  local_8._0_1_ = 8;
  param_1[0x25] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("build_button_group",0x12);
  local_8._0_1_ = 10;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_34);
  local_8._0_1_ = 8;
  param_1[0x26] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df09f4,4);
  local_8._0_1_ = 0xb;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_34);
  local_8._0_1_ = 8;
  param_1[0x27] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("province",8);
  local_8._0_1_ = 0xc;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_34);
  local_8._0_1_ = 8;
  param_1[0x28] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("unit_strip",10);
  local_8._0_1_ = 0xd;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x44))(local_34);
  local_8._0_1_ = 8;
  param_1[0x2a] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("time_to_build",0xd);
  local_8._0_1_ = 0xe;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_34);
  local_8._0_1_ = 8;
  param_1[0x2b] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("resources",9);
  local_8._0_1_ = 0xf;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x9c))(local_34);
  local_8._0_1_ = 8;
  param_1[0x2c] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("popsize",7);
  local_8._0_1_ = 0x10;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8 = CONCAT31(local_8._1_3_,8);
  param_1[0x29] = uVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 0x38))();
  }
  (**(code **)(*(int *)(param_1[0x25] + 0x54) + 4))(param_1 + 0x10);
  (**(code **)(*(int *)(param_1[0x26] + 0x54) + 4))(param_1 + 0x10);
  ExceptionList = local_10;
  return param_1;
}

