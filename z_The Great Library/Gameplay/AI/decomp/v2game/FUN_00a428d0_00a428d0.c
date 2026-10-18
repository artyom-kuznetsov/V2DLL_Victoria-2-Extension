// FUN_00a428d0 @ 00a428d0 body=[[00a428d0, 00a4294c] [00a42950, 00a429b3] [00a429b7, 00a42a0d] [00a42a10, 00a42a4c] [00a42a50, 00a42a80] [00a42a84, 00a42aa6] [00a42aaa, 00a42abe]]


int * FUN_00a428d0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  char *pcVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  int *piVar6;
  int *piVar7;
  uint in_stack_00000024;
  uint local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b63398;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[2] = in_EDX;
  param_1[1] = in_ECX;
  piVar6 = param_2;
  piVar7 = param_1 + 3;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = param_3;
  param_1[0x18] = -1;
  param_1[0x19] = -1;
  param_1[0x1a] = -1;
  param_1[0x1b] = -1;
  param_1[0x1c] = -1;
  pcVar1 = (char *)param_2[0x11];
  if (pcVar1 != (char *)0x0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    pcVar4 = pcVar1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(pcVar1,(int)pcVar4 - (int)(pcVar1 + 1));
    local_8._0_1_ = 1;
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    cVar3 = (**(code **)(*DAT_00f20c18 + 0x24))(local_2c);
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    pcVar1 = (char *)param_2[0x11];
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    pcVar4 = pcVar1;
    if (cVar3 == '\0') {
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      local_8._0_1_ = uVar2;
      FUN_00409350(pcVar1,(int)pcVar4 - (int)(pcVar1 + 1));
      local_8._0_1_ = 3;
      FUN_00988f20(local_2c);
      local_8._0_1_ = 5;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      iVar5 = FUN_009bcbf0(local_48,1);
      param_1[0x19] = iVar5;
    }
    else {
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      FUN_00409350(pcVar1,(int)pcVar4 - (int)(pcVar1 + 1));
      local_8._0_1_ = 2;
      iVar5 = FUN_009bcbf0(local_2c,1);
      param_1[0x19] = iVar5;
      local_48[0] = local_2c[0];
      local_34 = local_18;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  DAT_00f077f8 = DAT_00f077f8 + 1;
  *param_1 = DAT_00f077f8;
  FUN_00a438f0();
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  ExceptionList = local_10;
  return param_1;
}

