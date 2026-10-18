// FUN_00660f50 @ 00660f50 body=[[00660f50, 00660fe0] [00660fe4, 00661088] [0066108c, 006610a8] [006610b0, 00661213] [00661217, 006612ae] [006612b2, 006612d0] [006612d4, 0066134c] [00661350, 0066136e] [00661372, 006613ea] [006613ee, 0066140c] [00661410, 00661488] [0066148c, 006614aa] [006614ae, 00661526] [0066152a, 00661548] [0066154c, 006615c4] [006615c8, 006615e6] [006615ea, 0066163d] [00661641, 006616a1] [006616a5, 0066171e] [00661722, 006617d8] [006617dc, 0066182e]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00660f50(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_20;
  int local_1c;
  uint *local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_14[2] = &LAB_00b59fd3;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x15a4) + 0x18) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0x15a4) + 0x50))();
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("menubar",7);
  local_8 = 0;
  uVar3 = (**(code **)(**(int **)(in_ECX + -0x38) + 0x2c))(local_3c,in_ECX + 0x1760);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x15a4) = uVar3;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x15a4) + 0x18) + 0x34))();
  (**(code **)(**(int **)(in_ECX + 0x15a4) + 0xb0))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0xe8) + 0x18) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0xe8) + 0x50))();
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("message_icons",0xd);
  local_8 = 1;
  local_18 = (uint *)(**(int **)(in_ECX + -0x38) + 0x2c);
  uVar3 = (**(code **)(*(int *)(in_ECX + -0x8c) + 0x3c))();
  uVar3 = (*(code *)*local_18)(local_3c,uVar3);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xe8) = uVar3;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0xe8) + 0x18) + 0x34))();
  for (local_14[0] = *(undefined1 **)(in_ECX + -0x2c);
      (undefined4 *)local_14[0] != (undefined4 *)0x0;
      local_14[0] = *(undefined1 **)((int)local_14[0] + 8)) {
    cVar2 = (**(code **)(**(int **)local_14[0] + 8))();
    if (cVar2 != '\0') {
      local_18 = *(uint **)local_14[0];
      piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0xe8) + 0x9c))
                                (&DAT_00f0bec0 + *(int *)(local_18[0xd] + 8) * 7);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xb4))(local_18[1],1);
      }
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x15ac) + 0x54))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x15ac) + 4) + 0x30))();
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("chat_list",9);
  local_8 = 2;
  local_18 = *(uint **)(in_ECX + -0x38);
  (**(code **)(*(int *)((int)local_18 + 0x34) + 4))(local_3c);
  local_20 = (undefined4 *)FUN_00a5a320(*(undefined4 *)((int)local_18 + 0x30),local_18);
  if (local_20 == (undefined4 *)0x0) {
    local_14[0] = (undefined1 *)0x0;
  }
  else {
    local_14[0] = (undefined1 *)((int)local_20 + 4);
  }
  puVar5 = (uint *)((int)local_18 + 0x5c);
  if (local_14 < *(undefined4 ***)((int)local_18 + 0x60)) {
    if (local_14 < (undefined4 **)*puVar5) goto LAB_006611d5;
    piVar4 = (int *)((int)local_18 + 0x60);
    local_1c = (int)local_14 - (int)*puVar5 >> 2;
    piVar1 = (int *)((int)local_18 + 100);
    local_18 = puVar5;
    if (*piVar4 == *piVar1) {
      FUN_00a513f0();
    }
    piVar4 = (int *)local_18[1];
    if (piVar4 == (int *)0x0) goto LAB_006611f1;
    puVar7 = *(undefined4 **)(*local_18 + local_1c * 4);
  }
  else {
LAB_006611d5:
    piVar4 = (int *)((int)local_18 + 0x60);
    piVar1 = (int *)((int)local_18 + 100);
    local_18 = puVar5;
    if (*piVar4 == *piVar1) {
      FUN_00a513f0();
    }
    piVar4 = (int *)local_18[1];
    puVar7 = (undefined4 *)local_14[0];
    if (piVar4 == (int *)0x0) goto LAB_006611f1;
  }
  *piVar4 = (int)puVar7;
LAB_006611f1:
  local_18[1] = local_18[1] + 4;
  local_8 = 0xffffffff;
  *(undefined4 **)(in_ECX + 0x15ac) = local_20;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  (**(code **)(**(int **)(in_ECX + 0x15ac) + 0x50))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x15ac) + 4) + 0x6c))();
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("closebutton",0xb);
  local_8 = 3;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("messagelog_window",0x11);
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x15a4) + 0x6c))(local_3c);
  iVar6 = (**(code **)(*piVar4 + 0x34))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0xacc);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = 0xffffffff;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("closebutton",0xb);
  local_8 = 5;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = CONCAT31(local_8._1_3_,6);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x15a4) + 0x6c))(local_3c);
  iVar6 = (**(code **)(*piVar4 + 0x34))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0x824);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = 0xffffffff;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("allies",6);
  local_8 = 7;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = CONCAT31(local_8._1_3_,8);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x15a4) + 0x6c))(local_3c);
  iVar6 = (**(code **)(*piVar4 + 0x34))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0x8c4);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = 0xffffffff;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfbe10,4);
  local_8 = 9;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = CONCAT31(local_8._1_3_,10);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x15a4) + 0x6c))(local_3c);
  iVar6 = (**(code **)(*piVar4 + 0x34))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0x874);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = 0xffffffff;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("enemies",7);
  local_8 = 0xb;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x15a4) + 0x6c))(local_3c);
  iVar6 = (**(code **)(*piVar4 + 0x34))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0x914);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = 0xffffffff;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350(&DAT_00df2058,3);
  local_8 = 0xd;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x15a4) + 0x6c))(local_3c);
  iVar6 = (**(code **)(*piVar4 + 0x34))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0x964);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = 0xffffffff;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("OPENbutton",10);
  local_8 = 0xf;
  iVar6 = (**(code **)(**(int **)(in_ECX + 0x15a4) + 0x34))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0xacc);
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x15a4) + 0x18) + 0x34))();
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = 0x10;
  iVar6 = (**(code **)(**(int **)(in_ECX + 0x15a4) + 0x6c))(local_74);
  (**(code **)(*(int *)(iVar6 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  (**(code **)(**(int **)(in_ECX + 0x15a4) + 0xb0))();
  (**(code **)(**(int **)(in_ECX + 0x18e0) + 0x30))();
  (**(code **)(**(int **)(in_ECX + 0x18e4) + 0x30))();
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("bg_main_menus",0xd);
  local_8 = 0x11;
  uVar3 = (**(code **)(**(int **)(in_ECX + -0x38) + 0x7c))(local_74,in_ECX + 0x1760);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18e0) = uVar3;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  (**(code **)(**(int **)(in_ECX + 0x18e0) + 0x38))();
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("minimap_pic",0xb);
  local_8 = 0x12;
  local_18 = *(uint **)(in_ECX + -0x38);
  local_20 = (undefined4 *)(**(code **)(*(int *)((int)local_18 + 0x34) + 4))(local_58);
  local_1c = FUN_00aae9af(300);
  local_8._0_1_ = 0x13;
  if (local_1c == 0) {
    local_14[0] = (undefined1 *)0x0;
  }
  else {
    local_14[0] = (undefined1 *)
                  FUN_0067cc10(local_1c,*(undefined4 *)((int)local_18 + 0x30),local_18,
                               in_ECX + 0x1760);
  }
  local_8 = CONCAT31(local_8._1_3_,0x12);
  local_20 = (undefined4 *)local_14[0];
  FUN_006463e0((undefined4 *)((int)local_18 + 0x5c),*(undefined4 *)((int)local_18 + 0x5c));
  local_8 = 0xffffffff;
  *(undefined1 **)(in_ECX + 0x18e4) = local_14[0];
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  (**(code **)(**(int **)(in_ECX + 0x18e4) + 0x34))();
  if (*(int **)(in_ECX + 0x1d98) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1d98) + 0xc))();
    (**(code **)**(undefined4 **)(in_ECX + 0x1d98))();
    (**(code **)(**(int **)(in_ECX + 0x1d98) + 0xc))();
  }
  ExceptionList = local_14[1];
  return 1;
}

