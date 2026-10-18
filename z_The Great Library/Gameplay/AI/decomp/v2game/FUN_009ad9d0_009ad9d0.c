// FUN_009ad9d0 @ 009ad9d0 body=[[009ad9d0, 009ada36] [009ada3a, 009ada8c]]


undefined4 * FUN_009ad9d0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *in_EDX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00a727a0(local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  if (0xf < (uint)puVar3[5]) {
    ExceptionList = local_10;
    return (undefined4 *)*puVar3;
  }
  ExceptionList = local_10;
  return puVar3;
}

