// FUN_004e38d0 @ 004e38d0 body=[[004e38d0, 004e39b8] [004e39be, 004e3a22] [004e3a26, 004e3a3a]]


int * FUN_004e38d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 local_48 [5];
  uint local_34;
  undefined4 local_2c [2];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b8f43b;
  local_10 = ExceptionList;
  piVar4 = (int *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x144);
  local_8._0_1_ = 1;
  if (iVar1 != 0) {
    piVar4 = (int *)FUN_005b61c0(iVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_20 = DAT_00f096c4;
  local_24 = 0x25;
  DAT_00f096c4 = DAT_00f096c4 + 1;
  (**(code **)(*piVar4 + 0x18))(&local_24);
  iVar1 = *(int *)(param_1 + 0x48);
  local_1c = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_004e4d40(param_1,local_2c,param_2);
    iVar1 = puVar2[1];
    local_1c = *puVar2;
    if (iVar1 == 0) {
      local_1c = *(undefined4 *)(param_2 + 0x128);
      iVar1 = *(int *)(param_2 + 300);
    }
  }
  if (in_stack_0000001c == 0) {
    uVar3 = FUN_00537800(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4),local_48);
    local_8._0_1_ = 2;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  else {
    FUN_00408ed0(&param_3,0,0xffffffff);
  }
  FUN_005b8030(local_1c,iVar1);
  piVar4[0x2c] = 0;
  local_2c[0] = *(undefined4 *)(param_1 + 0x54);
  FUN_0050e760(piVar4,1);
  iVar1 = *(int *)(param_1 + 0x58);
  piVar4[0x23] = *(int *)(param_1 + 0x54);
  piVar4[0x24] = iVar1;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return piVar4;
}

