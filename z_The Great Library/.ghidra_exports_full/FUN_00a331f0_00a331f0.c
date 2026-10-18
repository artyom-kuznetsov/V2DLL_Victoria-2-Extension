// FUN_00a331f0 @ 00a331f0 body=[[00a331f0, 00a33344] [00a33348, 00a333af] [00a333b3, 00a333c6]]


void FUN_00a331f0(undefined4 *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int in_EDX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b9cd40;
  local_14 = ExceptionList;
  piVar2 = (int *)param_1[8];
  piVar1 = (int *)param_1[9];
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == in_EDX) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      local_c = 0;
      if (in_EDX == in_ECX) {
        ExceptionList = &local_14;
        uVar3 = FUN_00a32ba0();
        if (param_2 == '\0') {
          uVar3 = FUN_0042c180(local_34,uVar3);
          local_c._0_1_ = 3;
          FUN_00408ed0(uVar3,0,0xffffffff);
        }
        else {
          uVar3 = FUN_0042c180(local_34,uVar3);
          local_c._0_1_ = 2;
          FUN_00408ed0(uVar3,0,0xffffffff);
        }
      }
      else {
        ExceptionList = &local_14;
        uVar3 = FUN_00a32ba0();
        uVar3 = FUN_00a32ba0(&DAT_00e40230,uVar3);
        uVar3 = FUN_0043ec10(local_34,&DAT_00dfbf14,uVar3);
        local_c._0_1_ = 1;
        FUN_00408ed0(uVar3,0,0xffffffff);
      }
      local_c = (uint)local_c._1_3_ << 8;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      for (piVar2 = (int *)param_1[8]; (piVar2 != (int *)param_1[9] && (*piVar2 != in_EDX));
          piVar2 = piVar2 + 1) {
      }
      FUN_0068f020();
      FUN_00a32f00(param_1,local_50,0);
      uVar3 = *param_1;
      puVar4 = (undefined4 *)FUN_00a31760();
      if (param_1 == puVar4) {
        FUN_00a319d0(uVar3);
        FUN_00a317b0();
      }
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

