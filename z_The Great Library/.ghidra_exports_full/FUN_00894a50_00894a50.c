// FUN_00894a50 @ 00894a50 body=[[00894a50, 00894acc] [00894ad0, 00894adf]]


void FUN_00894a50(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
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
  iVar3 = FUN_00975ed0(local_2c);
  if (iVar3 == 0) {
    iVar3 = FUN_00974850();
  }
  *(int *)(in_ECX + 0x20) = iVar3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

