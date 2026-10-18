// FUN_004dc5f0 @ 004dc5f0 body=[[004dc5f0, 004dc77f] [004dc783, 004dc795]]


void FUN_004dc5f0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined *puVar3;
  int iVar4;
  int local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5fb7b;
  local_10 = ExceptionList;
  local_14 = in_ECX;
  if (param_2 < 0x83b) {
    if (param_2 == 0x83a) {
      ExceptionList = &local_10;
      FUN_009a1d40();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x58) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint)local_30[0]._1_3_ << 8;
      local_8 = 2;
      ExceptionList = &local_10;
      FUN_009a1750(local_30,0);
      iVar4 = 0;
      puVar3 = &DAT_0125d020;
      do {
        cVar1 = FUN_00416db0();
        if (cVar1 != '\0') {
          *(undefined4 *)(local_14 + 0x1c) = (&DAT_0125d03c)[iVar4 * 8];
          break;
        }
        puVar3 = puVar3 + 0x20;
        iVar4 = iVar4 + 1;
      } while ((int)puVar3 < 0x125d0a0);
joined_r0x004dc6b2:
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2ff) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      ExceptionList = local_10;
      return;
    }
  }
  else if (param_2 == 0xa96) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (uint)local_30[0]._1_3_ << 8;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_30,0);
    if (DAT_0131bb34 == 0) {
      iVar4 = FUN_00aae9af(0x188);
      local_8._0_1_ = 1;
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0041a160();
        in_ECX = local_14;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00423700(uVar2);
    }
    iVar4 = FUN_005c2ad0(local_30);
    if (iVar4 == 0) {
      iVar4 = FUN_0096bb70();
    }
    *(int *)(in_ECX + 8) = iVar4;
    goto joined_r0x004dc6b2;
  }
  ExceptionList = &local_10;
  FUN_009a0f40();
  ExceptionList = local_10;
  return;
}

