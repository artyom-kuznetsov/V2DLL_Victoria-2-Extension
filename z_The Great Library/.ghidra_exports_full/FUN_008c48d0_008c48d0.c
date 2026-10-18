// FUN_008c48d0 @ 008c48d0 body=[[008c48d0, 008c49c8] [008c49cc, 008c49dc]]


void FUN_008c48d0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bab9d3;
  local_10 = ExceptionList;
  if (param_2 != 0xd9) {
    if (param_2 != 0x344) {
      ExceptionList = &local_10;
      FUN_008b33e0(param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    ExceptionList = local_10;
    return;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar3 = (char *)(param_1 + 0x22c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
  local_8 = 0;
  if (DAT_0125fdd8 == 0) {
    iVar4 = FUN_00aae9af(0x1c);
    local_8._0_1_ = 1;
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008b0060();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005c2810(uVar2);
  }
  uVar2 = FUN_005c2ad0(local_2c);
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

