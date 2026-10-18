// FUN_00902910 @ 00902910 body=[[00902910, 009029f7] [009029fb, 00902a0b]]


void FUN_00902910(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
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
  if (param_2 == 0x2a7) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    local_8 = 0;
    if (DAT_0125ce80 == 0) {
      iVar3 = FUN_00aae9af(0x3c);
      local_8._0_1_ = 1;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004dada0();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004dc340(uVar4);
    }
    iVar3 = FUN_004dc420(local_2c);
    if (iVar3 == 0) {
      iVar3 = FUN_004dacc0();
    }
    *(int *)(in_ECX + 0x20) = iVar3;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else if (param_2 == 0x984) {
    *(bool *)(in_ECX + 0x1c) = *(int *)(param_1 + 0x228) == 0x29f;
    return;
  }
  ExceptionList = local_10;
  return;
}

