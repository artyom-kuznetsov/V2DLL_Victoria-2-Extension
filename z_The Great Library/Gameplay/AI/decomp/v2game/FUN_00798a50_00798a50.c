// FUN_00798a50 @ 00798a50 body=[[00798a50, 00798b0b] [00798b0f, 00798d1b] [00798d1f, 00798d70] [00798d74, 00798dc5] [00798dc9, 00798e1a] [00798e1e, 00798e73] [00798e77, 00798ed6] [00798eda, 00798f36] [00798f3a, 00798f7f] [00798f83, 00798fcc] [00798fd0, 0079901e] [00799022, 0079906e] [00799072, 007990b7] [007990bb, 0079910c] [00799110, 00799161] [00799165, 007991b6] [007991ba, 0079920b] [0079920f, 0079925f] [00799263, 0079928c]]


undefined4 *
FUN_00798a50(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  int *in_ECX;
  char cStack0000000f;
  uint *puVar5;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f9db;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("unitpanel",9);
  local_8 = 0;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  piVar1 = (int *)(**(code **)(*in_ECX + 0x34))();
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
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_30,local_14);
  param_1[8] = uVar2;
  *param_1 = CUnitViewBaseEntry::vftable;
  param_1[7] = CUnitViewBaseEntry::vftable;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  *param_1 = CUnitView::vftable;
  param_1[7] = CUnitView::vftable;
  param_1[0xb] = in_ECX;
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,&LAB_0079d790,0,0,0,0,0);
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,&LAB_0079d7f0,0,0,0,0,0);
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,&LAB_0079d810,0,0,0,0,0);
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0079d950,0,0,0,0,0);
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0079da90,0,0,0,0,0);
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0079da10,0,0,0,0,0);
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0079db10,0,0,0,0,0);
  FUN_0079e240(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0079dc70,0,0,0,0,0);
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  FUN_0079e240(&LAB_0079d9e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0xf;
  param_1[199] = param_4;
  param_1[0xd] = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("remove_unit_from_selection_button",0x21);
  local_8._0_1_ = 0x10;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x22);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("only_unit_from_selection_button",0x1f);
  local_8._0_1_ = 0x11;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x36);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("leader_button",0xd);
  local_8._0_1_ = 0x12;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x4a);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unit_location_button",0x14);
  local_8._0_1_ = 0x13;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xb2);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("only_unit_from_selection_button",0x1f);
  local_8._0_1_ = 0x14;
  piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  psVar4 = (short *)(**(code **)(*piVar1 + 0x3c))(&param_3);
  local_8._0_1_ = 0xf;
  param_1[0xc6] = (int)*psVar4;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  cStack0000000f = FUN_005cc390();
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unitpanel_bg",0xc);
  local_8._0_1_ = 0x15;
  piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_30);
  (**(code **)(*piVar1 + 0x48))((cStack0000000f != '\0') + '\x01');
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unitname",8);
  local_8._0_1_ = 0x16;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x40))(local_30);
  iVar3 = *(int *)(iVar3 + 0x54);
  uVar2 = (**(code **)(*(int *)param_1[10] + 0x20))();
  (**(code **)(iVar3 + 0x40))(uVar2);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unitname",8);
  local_8._0_1_ = 0x17;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x40))(local_30);
  FUN_009b6400(uVar2);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unitname",8);
  local_8._0_1_ = 0x18;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x40))(local_30);
  *(undefined4 *)(iVar3 + 0xf0) = 1;
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unitname",8);
  local_8._0_1_ = 0x19;
  puVar5 = local_30;
  (**(code **)(*(int *)param_1[8] + 0x40))(puVar5,0x22);
  FUN_009f6010(puVar5);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unitname",8);
  local_8._0_1_ = 0x1a;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x40))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 0x90))();
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("unitname",8);
  local_8._0_1_ = 0x1b;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x40))(local_30);
  FUN_009b6400(uVar2);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("disbandbutton",0xd);
  local_8._0_1_ = 0x1c;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x5e);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("disbandtoosmallbutton",0x15);
  local_8._0_1_ = 0x1d;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x72);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("newunitbutton",0xd);
  local_8._0_1_ = 0x1e;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x86);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("splitinhalf",0xb);
  local_8._0_1_ = 0x1f;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x9a);
  local_8._0_1_ = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if ((*(char *)(param_1 + 0xc) == '\0') || (cStack0000000f != '\0')) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("unitname",8);
    local_8._0_1_ = 0x20;
    iVar3 = (**(code **)(*(int *)param_1[8] + 0x40))(local_4c);
    *(undefined1 *)(iVar3 + 0x165) = 1;
    local_8._0_1_ = 0xf;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  local_8._0_1_ = 0xf;
  (**(code **)(*(int *)(param_1[8] + 0x18) + 0x34))();
  FUN_0079b800();
  ExceptionList = local_10;
  return param_1;
}

