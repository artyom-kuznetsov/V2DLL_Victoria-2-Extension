// FUN_0055cd30 @ 0055cd30 body=[[0055cd30, 0055cd9f] [0055cda3, 0055cdb3]]


undefined4 FUN_0055cd30(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  pcVar2 = &stack0x00000004;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(&stack0x00000004,(int)pcVar2 - (int)&stack0x00000005);
  local_8 = 0;
  uVar3 = FUN_0055ce50(local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return uVar3;
}

