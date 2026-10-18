// FUN_00926da0 @ 00926da0 body=[[00926da0, 00926e76] [00926e7a, 00926e8a]]


void FUN_00926da0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  if (param_2 != 0x343) {
    ExceptionList = &local_10;
    FUN_00911470(param_1,param_2);
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
  if (DAT_0131acac == 0) {
    iVar4 = FUN_00aae9af(0x20);
    local_8._0_1_ = 1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0090cca0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0090d9d0(uVar5);
  }
  iVar2 = DAT_0131acac;
  iVar4 = FUN_0090da40(local_2c);
  if (iVar4 == 0) {
    iVar4 = **(int **)(iVar2 + 0xc);
  }
  *(int *)(in_ECX + 0x28) = iVar4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

