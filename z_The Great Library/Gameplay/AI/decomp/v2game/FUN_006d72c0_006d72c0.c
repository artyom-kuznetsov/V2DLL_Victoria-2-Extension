// FUN_006d72c0 @ 006d72c0 body=[[006d72c0, 006d7349] [006d734d, 006d739e] [006d73a5, 006d741e] [006d7422, 006d7475] [006d7479, 006d74cc] [006d74d0, 006d7520] [006d7524, 006d7577] [006d757b, 006d75ce] [006d75d2, 006d7626] [006d762a, 006d767e] [006d7682, 006d76d6] [006d76da, 006d772e] [006d7732, 006d77a7] [006d77ab, 006d77c9] [006d77cd, 006d7842] [006d7846, 006d7864] [006d7868, 006d78dd] [006d78e1, 006d78ff] [006d7903, 006d7948] [006d794c, 006d79a8] [006d79ac, 006d79ea]]


void FUN_006d72c0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44860;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("party_window",0xc);
  local_8 = 0;
  local_14 = (int *)*DAT_01258a80;
  local_18 = DAT_01258a80;
  uVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  local_14 = (int *)(**(code **)((int)local_14 + 0x2c))(local_38,uVar2);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("ruling_party_pos",0x10);
  local_8 = 1;
  local_18 = (int *)(**(code **)(*DAT_01258a80 + 0x48))(local_54);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_1c = *(undefined4 *)((int)local_18 + 100);
  local_18 = (int *)CONCAT22((short)*(undefined4 *)((int)local_18 + 0x68),
                             (short)*(undefined4 *)((int)local_18 + 100));
  (**(code **)(*local_14 + 0x18))(local_18);
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("ruling_party_window",0x13);
  local_8 = 2;
  (**(code **)(*(int *)in_ECX[0x13] + 0xbc))(local_54,local_14);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("party_name",10);
  local_8 = 3;
  iVar3 = (**(code **)(*local_14 + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x67);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("hold_election",0xd);
  local_8 = 4;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x5c);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("sort_by_issue_name",0x12);
  local_8 = 5;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x17);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("sort_by_people",0xe);
  local_8 = 6;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x2d);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("sort_by_voters",0xe);
  local_8 = 7;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x22);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("release_nations_tab",0x13);
  local_8 = 8;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x93);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("reforms_tab",0xb);
  local_8 = 9;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x93);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("movements_tab",0xd);
  local_8 = 10;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x93);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("decisions_tab",0xd);
  local_8 = 0xb;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_54);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x93);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("sortby_radical_button",0x15);
  local_8 = 0xc;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("movements_window",0x10);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x13] + 0x6c))(local_54);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_38);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x38);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("sortby_size_button",0x12);
  local_8 = 0xe;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("movements_window",0x10);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x13] + 0x6c))(local_54);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_38);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x4e);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("sortby_name_button",0x12);
  local_8 = 0x10;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("movements_window",0x10);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x13] + 0x6c))(local_54);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_38);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x43);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  uVar1 = local_54[0] >> 8;
  local_54[0] = uVar1 << 8;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = uVar1 << 8;
  FUN_00409350("unciv_reforms_window",0x14);
  local_8 = 0x12;
  local_18 = (int *)(**(code **)(*(int *)in_ECX[0x13] + 0x6c))(local_54);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("westernize_button",0x11);
  local_8 = 0x13;
  iVar3 = (**(code **)(*local_18 + 0x34))(local_70);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0xa9);
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_006df530();
  (**(code **)(*(int *)(in_ECX[0x13] + 0x18) + 0x34))();
  (**(code **)(*in_ECX + 0x10))();
  (**(code **)(*in_ECX + 0x2c))();
  ExceptionList = local_10;
  return;
}

