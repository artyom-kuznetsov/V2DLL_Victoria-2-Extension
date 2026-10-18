// FUN_008f1860 @ 008f1860 body=[[008f1860, 008f18ee] [008f18f2, 008f1901]]


void FUN_008f1860(void)

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
  local_8 = 0;
  iVar3 = FUN_004a2f70(local_2c);
  if (iVar3 == 0) {
    uVar4 = FUN_00561180();
  }
  else {
    uVar4 = FUN_004a2f70(local_2c);
  }
  *(undefined4 *)(in_ECX + 0x1c) = uVar4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

