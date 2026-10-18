// FUN_008ffb90 @ 008ffb90 body=[[008ffb90, 008ffc1c] [008ffc20, 008ffc9a] [008ffc9e, 008ffcb1]]


void FUN_008ffb90(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 local_40 [12];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5e2d3;
  local_14 = ExceptionList;
  if (param_2 == 0xd9) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    local_c = 0;
    if (DAT_0131bb34 == 0) {
      iVar4 = FUN_00aae9af(0x188);
      local_c._0_1_ = 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0041a160();
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00423700(uVar5);
    }
    iVar4 = FUN_005c2ad0(local_34);
    if (iVar4 == 0) {
      iVar4 = FUN_0096bb70();
    }
    *(int *)(in_ECX + 0x28) = iVar4;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  else if (param_2 == 0x344) {
    ExceptionList = &local_14;
    puVar2 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_40);
    *(undefined4 *)(in_ECX + 0x20) = *puVar2;
    *(undefined4 *)(in_ECX + 0x24) = puVar2[1];
    ExceptionList = local_14;
    return;
  }
  ExceptionList = local_14;
  return;
}

