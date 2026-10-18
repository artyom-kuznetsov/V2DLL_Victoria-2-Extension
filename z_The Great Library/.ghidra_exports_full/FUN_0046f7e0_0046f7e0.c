// FUN_0046f7e0 @ 0046f7e0 body=[[0046f7e0, 0046f85b] [0046f85f, 0046f925]]


void FUN_0046f7e0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_60 [17];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)((int)param_1 + 0x28) = param_2;
  uVar3 = FUN_0043b700(param_2 + 8,local_60 + 0xd);
  local_8 = 0;
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0(uVar3,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60[0xd]);
  }
  local_60[2] = 2;
  local_60[3] = 2;
  local_60[7] = 2;
  local_60[10] = 2;
  local_60[0xc] = 2;
  local_60[0] = 0;
  local_60[1] = 1;
  local_60[4] = 0;
  local_60[5] = 1;
  local_60[6] = 0;
  local_60[8] = 0;
  local_60[9] = 1;
  local_60[0xb] = 0;
  iVar1 = local_60[param_3 % 0xd];
  iVar4 = 0;
  param_1 = (undefined4 *)((int)param_1 + 0x30);
  local_18 = 0xf;
  local_1c = 0;
  local_60[0xd] = local_60[0xd] & 0xffffff00;
  do {
    piVar2 = (int *)*param_1;
    if (iVar4 == iVar1) {
      (**(code **)(*piVar2 + 0x108))();
      (**(code **)(*piVar2 + 0x34))();
      (**(code **)(*piVar2 + 0x48))((*(char *)(param_2 + 0x90) != '\0') + '\x01');
    }
    else {
      (**(code **)(*piVar2 + 0x104))();
    }
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  ExceptionList = local_10;
  return;
}

