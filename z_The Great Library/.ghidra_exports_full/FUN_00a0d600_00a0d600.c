// FUN_00a0d600 @ 00a0d600 body=[[00a0d600, 00a0d683] [00a0d697, 00a0d6b0]]


void FUN_00a0d600(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 == 0xe2) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    FUN_00408ed0(local_2c,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_009a2620(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}

