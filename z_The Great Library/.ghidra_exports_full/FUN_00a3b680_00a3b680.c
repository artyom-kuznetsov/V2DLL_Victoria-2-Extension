// FUN_00a3b680 @ 00a3b680 body=[[00a3b680, 00a3b775] [00a3b779, 00a3b789]]


void FUN_00a3b680(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 != 0x24) {
    if (param_2 != 0x5c) {
      ExceptionList = &local_10;
      FUN_00a20b80(param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,&param_1);
    *(float *)(in_ECX + 0x94) = (float)*piVar2 / 1000.0;
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
  uVar4 = FUN_009bcbf0(local_2c,1);
  *(undefined4 *)(in_ECX + 0x90) = uVar4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

