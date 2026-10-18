// FUN_00897360 @ 00897360 body=[[00897360, 0089740d] [00897411, 00897420]]


void FUN_00897360(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42433;
  local_10 = ExceptionList;
  pcVar2 = &stack0x00000008;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  local_8 = 0;
  if (DAT_0131bb34 == 0) {
    local_14 = FUN_00aae9af(0x188);
    local_8._0_1_ = 1;
    if (local_14 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041a160();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00423700(uVar3);
  }
  iVar4 = FUN_005c2ad0(local_30);
  if (iVar4 == 0) {
    iVar4 = FUN_0096bb70();
  }
  *(int *)(in_ECX + 0x20) = iVar4;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

