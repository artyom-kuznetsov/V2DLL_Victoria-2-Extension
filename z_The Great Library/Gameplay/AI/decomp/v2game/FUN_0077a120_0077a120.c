// FUN_0077a120 @ 0077a120 body=[[0077a120, 0077a276] [0077a27a, 0077a2ca] [0077a2ce, 0077a341] [0077a345, 0077a364] [0077a368, 0077a3db] [0077a3df, 0077a3fe] [0077a402, 0077a475] [0077a479, 0077a498] [0077a49c, 0077a50f] [0077a513, 0077a532] [0077a536, 0077a5a9] [0077a5ad, 0077a5cc] [0077a5d0, 0077a643] [0077a647, 0077a666] [0077a66a, 0077a6dd] [0077a6e1, 0077a700] [0077a704, 0077a777] [0077a77b, 0077a79a] [0077a79e, 0077a811] [0077a815, 0077a834] [0077a838, 0077a8ab] [0077a8af, 0077a8ce] [0077a8d2, 0077a945] [0077a949, 0077a968] [0077a96c, 0077a9df] [0077a9e3, 0077aa02] [0077aa06, 0077aa79] [0077aa7d, 0077aa9c] [0077aaa0, 0077ab13] [0077ab17, 0077ab36] [0077ab3a, 0077abad] [0077abb1, 0077abd0] [0077abd4, 0077ac47] [0077ac4b, 0077ac6a] [0077ac6e, 0077ace1] [0077ace5, 0077ad04] [0077ad08, 0077ad6c] [0077ad70, 0077ad8f] [0077ad93, 0077ade8] [0077adec, 0077ae0b] [0077ae0f, 0077ae64] [0077ae68, 0077ae87] [0077ae8b, 0077aee0] [0077aee4, 0077af03] [0077af07, 0077af5c] [0077af60, 0077af7f] [0077af83, 0077afd8] [0077afdc, 0077affb] [0077afff, 0077b054] [0077b058, 0077b077] [0077b07b, 0077b0d0] [0077b0d4, 0077b0f7] [0077b0fb, 0077b138] [0077b13c, 0077b176] [0077b17a, 0077b1b4] [0077b1b8, 0077b1f2] [0077b1f6, 0077b237] [0077b23b, 0077b274] [0077b278, 0077b2b8] [0077b2bc, 0077b2f6] [0077b2fa, 0077b330] [0077b334, 0077b349]]


undefined4 * FUN_0077a120(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_ECX;
  undefined4 *puVar5;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00bb9ccc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = in_ECX;
  *param_1 = CTutorialScreen::vftable;
  param_1[2] = param_2;
  param_1[3] = CButtonObserverGlue<CTutorialScreen>::vftable;
  param_1[4] = param_1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = FUN_0077b800;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = CButtonObserverGlue<CTutorialScreen>::vftable;
  param_1[0xf] = param_1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = FUN_0077bdf0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = CButtonObserverGlue<CTutorialScreen>::vftable;
  param_1[0x1a] = param_1;
  param_1[0x1b] = &LAB_0077b770;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_8 = 3;
  uStack_7 = 0;
  param_1[0x25] = 0;
  (**(code **)(*(int *)param_1[1] + 0x44))();
  FUN_009c17f0();
  local_14 = FUN_00aae9af(0x40);
  local_8 = 4;
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_008677a0(local_14);
  }
  local_8 = 3;
  param_1[0x24] = uVar2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("back_button",0xb);
  local_8 = 5;
  iVar3 = (**(code **)(*param_2 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x19);
  local_8 = 3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("start_button",0xc);
  local_8 = 6;
  iVar3 = (**(code **)(*param_2 + 0x34))(local_30);
  puVar5 = param_1 + 3;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  local_8 = 3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("tutorial_button_1",0x11);
  local_8 = 7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 8;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_2",0x11);
  local_8 = 9;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 10;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_3",0x11);
  local_8 = 0xb;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 0xc;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_4",0x11);
  local_8 = 0xd;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 0xe;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_5",0x11);
  local_8 = 0xf;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 0x10;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_6",0x11);
  local_8 = 0x11;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 0x12;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_7",0x11);
  local_8 = 0x13;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 0x14;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_8",0x11);
  local_8 = 0x15;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 0x16;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_9",0x11);
  local_8 = 0x17;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_basic",0x17);
  local_8 = 0x18;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_1",0x11);
  local_8 = 0x19;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x1a;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_2",0x11);
  local_8 = 0x1b;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x1c;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_3",0x11);
  local_8 = 0x1d;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x1e;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_4",0x11);
  local_8 = 0x1f;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x20;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_5",0x11);
  local_8 = 0x21;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x22;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_6",0x11);
  local_8 = 0x23;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x24;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_7",0x11);
  local_8 = 0x25;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x26;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
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
  FUN_00409350("tutorial_button_8",0x11);
  local_8 = 0x27;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_chapters_medium",0x18);
  local_8 = 0x28;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 3;
  local_1c = 0xf;
  local_20 = 0;
  uVar1 = local_30[0] >> 8;
  local_30[0] = uVar1 << 8;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = uVar1 << 8;
  FUN_00409350("tutorial_button_1",0x11);
  local_8 = 0x29;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x2a;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_button_2");
  local_8 = 0x2b;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x2c;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_button_3");
  local_8 = 0x2d;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x2e;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_button_4");
  local_8 = 0x2f;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x30;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_button_5");
  local_8 = 0x31;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x32;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_button_6");
  local_8 = 0x33;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x34;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_button_7");
  local_8 = 0x35;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x36;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_button_8");
  local_8 = 0x37;
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x38;
  piVar4 = (int *)(**(code **)(*param_2 + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_8 = 3;
  local_38 = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("tutorial_chapters_basic");
  local_8 = 0x39;
  iVar3 = (**(code **)(*(int *)param_1[2] + 0x6c))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_004471e0("tutorial_chapters_medium");
  local_8 = 0x3a;
  iVar3 = (**(code **)(*(int *)param_1[2] + 0x6c))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_004471e0("tutorial_chapters_advanced");
  local_8 = 0x3b;
  iVar3 = (**(code **)(*(int *)param_1[2] + 0x6c))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_004471e0("tutorial_tab_basic");
  local_8 = 0x3c;
  piVar4 = (int *)(**(code **)(*param_2 + 0x34))(local_4c);
  (**(code **)(*piVar4 + 0x48))(2);
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_009885d0();
  local_8 = 0x3d;
  piVar4 = (int *)(**(code **)(*param_2 + 0x34))(local_4c);
  (**(code **)(*piVar4 + 0x48))(1);
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_009885d0();
  local_8 = 0x3e;
  piVar4 = (int *)(**(code **)(*param_2 + 0x34))(local_4c);
  (**(code **)(*piVar4 + 0x48))(1);
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_009885d0();
  local_8 = 0x3f;
  iVar3 = (**(code **)(*param_2 + 0x34))(local_4c);
  puVar5 = param_1 + 0xe;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_009885d0();
  local_8 = 0x40;
  iVar3 = (**(code **)(*param_2 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  local_8 = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_009885d0();
  _local_8 = CONCAT31(uStack_7,0x41);
  iVar3 = (**(code **)(*param_2 + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar5);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

