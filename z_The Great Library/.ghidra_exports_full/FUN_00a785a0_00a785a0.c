// FUN_00a785a0 @ 00a785a0 body=[[00a785a0, 00a78682] [00a78686, 00a7878c] [00a78790, 00a787a2]]


undefined4 * FUN_00a785a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint in_stack_0000001c;
  undefined **local_7c [18];
  uint local_34;
  _RTL_CRITICAL_SECTION local_30;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b540f4;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e43768;
  puVar8 = param_1 + 1;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)puVar8 = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  local_8._0_1_ = 2;
  if (DAT_01258b44 == 0) {
    local_30.LockSemaphore = (HANDLE)0xf;
    local_30.OwningThread = (HANDLE)0x0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350("wincriticalsection.cpp",0x16);
    local_8._0_1_ = 3;
    FUN_004015b0(&local_34,0xc,0);
    local_8._0_1_ = 4;
    uVar3 = FUN_00987d20();
    FUN_00401280(uVar3);
    local_8._0_1_ = 3;
    FUN_00987ac0(local_7c);
    local_7c[0] = std::ios_base::vftable;
    FUN_00aad52d(local_7c);
    local_8._0_1_ = 2;
    if ((HANDLE)0xf < local_30.LockSemaphore) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    iVar4 = FUN_00aae9af(0x10);
    local_8._0_1_ = 5;
    local_14 = iVar4;
    if (iVar4 == 0) {
      DAT_01258b44 = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 8) = 0;
      uVar3 = FUN_00a3a480();
      *(undefined4 *)(iVar4 + 4) = uVar3;
      *(undefined4 *)uVar3 = uVar3;
      *(int *)(*(int *)(iVar4 + 4) + 4) = *(int *)(iVar4 + 4);
      *(int *)(*(int *)(iVar4 + 4) + 8) = *(int *)(iVar4 + 4);
      *(undefined1 *)(*(int *)(iVar4 + 4) + 0x40) = 1;
      *(undefined1 *)(*(int *)(iVar4 + 4) + 0x41) = 1;
      DAT_01258b44 = iVar4;
    }
    local_8._0_1_ = 2;
    local_14 = FUN_00aae9af(0x10);
    local_8._0_1_ = 6;
    if (local_14 == 0) {
      DAT_01258b48 = 0;
    }
    else {
      DAT_01258b48 = FUN_00a39790();
    }
  }
  iVar1 = DAT_01258b44;
  local_8._0_1_ = 2;
  iVar4 = *(int *)(DAT_01258b44 + 4);
  local_18 = FUN_00a78c90(puVar8);
  if ((local_18 == *(int *)(iVar1 + 4)) || (cVar2 = FUN_0098ab20(), cVar2 != '\0')) {
    local_14 = *(int *)(iVar1 + 4);
    piVar5 = &local_14;
  }
  else {
    piVar5 = &local_18;
  }
  if (*piVar5 == iVar4) {
    puVar6 = (undefined4 *)FUN_00a78a00(puVar8);
    *puVar6 = 1;
    InitializeCriticalSection(&local_30);
    puVar7 = (undefined8 *)FUN_00a78930(puVar8);
    *puVar7 = local_30._0_8_;
    puVar7[1] = CONCAT44(local_30.OwningThread,local_30.RecursionCount);
    puVar7[2] = CONCAT44(local_30.SpinCount,local_30.LockSemaphore);
  }
  else {
    piVar5 = (int *)FUN_00a78a00(puVar8);
    *piVar5 = *piVar5 + 1;
  }
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_2);
}

