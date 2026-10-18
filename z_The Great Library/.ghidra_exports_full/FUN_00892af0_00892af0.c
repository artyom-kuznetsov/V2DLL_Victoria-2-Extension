// FUN_00892af0 @ 00892af0 body=[[00892af0, 00892b63] [00892b67, 00892b76]]


void FUN_00892af0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int in_ECX;
  uint *puVar4;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  pcVar2 = &stack0x00000008;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  puVar4 = local_2c;
  local_8 = 0;
  FUN_00976610(puVar4);
  uVar3 = FUN_00976870(puVar4);
  *(undefined4 *)(in_ECX + 0x20) = uVar3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

