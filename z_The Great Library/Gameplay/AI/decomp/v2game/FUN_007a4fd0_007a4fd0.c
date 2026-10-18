// FUN_007a4fd0 @ 007a4fd0 body=[[007a4fd0, 007a52a2] [007a52a6, 007a52f4] [007a52f8, 007a5353] [007a5357, 007a53b1] [007a53b5, 007a53fe] [007a5402, 007a5454] [007a5458, 007a54a6] [007a54aa, 007a54f4] [007a54f8, 007a554a] [007a554e, 007a55a2] [007a55a6, 007a5600] [007a5604, 007a5658] [007a565c, 007a56b0] [007a56b4, 007a570d] [007a5711, 007a5765] [007a5769, 007a57bd] [007a57c1, 007a5850]]


undefined4 * FUN_007a4fd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b893ee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = CSessionInfoObserver::vftable;
  param_1[2] = CFrontEndView::vftable;
  param_1[3] = in_ECX;
  local_8 = 2;
  uStack_7 = 0;
  *param_1 = CMetaserverInterface::vftable;
  param_1[1] = CMetaserverInterface::vftable;
  param_1[2] = CMetaserverInterface::vftable;
  param_1[4] = in_ECX;
  uVar2 = (**(code **)(*in_ECX + 0x34))();
  param_1[5] = uVar2;
  uVar2 = (**(code **)(*in_ECX + 0x40))();
  param_1[6] = uVar2;
  uVar2 = (**(code **)(*in_ECX + 0x3c))();
  param_1[7] = uVar2;
  puVar1 = param_1 + 8;
  FUN_007a8fa0(FUN_007a5d60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a5f30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a7ee0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(&LAB_007a73a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a7b60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a7de0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_004010c0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a8410,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a8a10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a7d60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a8fa0(FUN_007a8180,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8 = 0xd;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  param_1[0xfc] = 0xf;
  param_1[0xfb] = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xe;
  param_1[0x103] = 0xf;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xf;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("MetaseverMainLoginWindow",0x18);
  local_8 = 0x10;
  uVar2 = (**(code **)(*(int *)param_1[5] + 0x2c))(local_2c,param_1[7]);
  local_8 = 0xf;
  param_1[0xe4] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8 = 0x11;
  iVar3 = (**(code **)(*(int *)param_1[0xe4] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar1);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(param_1[0xe4] + 0x18) + 0x34))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("MetaserverLoginWindow",0x15);
  local_8 = 0x12;
  uVar2 = (**(code **)(*(int *)param_1[5] + 0x2c))(local_2c,param_1[7]);
  local_8 = 0xf;
  param_1[0xe5] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(param_1[0xe5] + 0x18) + 0x34))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("LoginNameEditbox",0x10);
  local_8 = 0x13;
  iVar3 = (**(code **)(*(int *)param_1[0xe5] + 0x40))(local_2c);
  *(undefined2 *)(iVar3 + 0x4c) = 1;
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("LoginNameEditbox",0x10);
  local_8 = 0x14;
  uVar2 = (**(code **)(*(int *)param_1[0xe5] + 0x40))(local_2c);
  FUN_009b6400(uVar2);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("LoginButton",0xb);
  local_8 = 0x15;
  iVar3 = (**(code **)(*(int *)param_1[0xe5] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1c);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8 = 0x16;
  iVar3 = (**(code **)(*(int *)param_1[0xe5] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar1);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("MetaseverMainWindow",0x13);
  local_8 = 0x17;
  uVar2 = (**(code **)(*(int *)param_1[5] + 0x2c))(local_2c,param_1[7]);
  local_8 = 0xf;
  param_1[0xe6] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("Backbutton",10);
  local_8 = 0x18;
  iVar3 = (**(code **)(*(int *)param_1[0xe6] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(puVar1);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("CreateGame",10);
  local_8 = 0x19;
  iVar3 = (**(code **)(*(int *)param_1[0xe6] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x58);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(param_1[0xe6] + 0x18) + 0x38))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("CreateMetaGameWindow",0x14);
  local_8 = 0x1a;
  uVar2 = (**(code **)(*(int *)param_1[5] + 0x2c))(local_2c,param_1[7]);
  local_8 = 0xf;
  param_1[0xee] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("StartGameButton",0xf);
  local_8 = 0x1b;
  iVar3 = (**(code **)(*(int *)param_1[0xee] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x44);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8 = 0x1c;
  iVar3 = (**(code **)(*(int *)param_1[0xee] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xbc);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(param_1[0xee] + 0x18) + 0x38))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("JoinGamePassword",0x10);
  local_8 = 0x1d;
  uVar2 = (**(code **)(*(int *)param_1[5] + 0x2c))(local_2c,param_1[7]);
  local_8 = 0xf;
  param_1[0xef] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8 = 0x1e;
  iVar3 = (**(code **)(*(int *)param_1[0xef] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xbc);
  local_8 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("JoinGameButton",0xe);
  local_8 = 0x1f;
  iVar3 = (**(code **)(*(int *)param_1[0xef] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xd0);
  _local_8 = CONCAT31(uStack_7,0xf);
  if (local_18 < 0x10) {
    (**(code **)(*(int *)(param_1[0xef] + 0x18) + 0x38))();
    piVar4 = DAT_00f20c18;
    param_1[0xed] = 0;
    param_1[0xeb] = 0;
    param_1[0xe8] = 0;
    param_1[0xea] = 0;
    param_1[0xf0] = 0;
    param_1[0xe9] = 0;
    param_1[0xf5] = 0;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_00aae9af(4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        DAT_00f20c18 = piVar4;
      }
      else {
        *piVar4 = (int)&PTR_FUN_00e38b28;
        DAT_00f20c18 = piVar4;
      }
    }
    piVar4 = (int *)(**(code **)(*piVar4 + 4))();
    param_1[0xf4] = piVar4;
    (**(code **)(*piVar4 + 4))();
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

