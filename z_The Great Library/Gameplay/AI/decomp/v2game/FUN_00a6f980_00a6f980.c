// FUN_00a6f980 @ 00a6f980 body=[[00a6f980, 00a6f9d1] [00a6f9d5, 00a6f9f8]]


undefined4 FUN_00a6f980(void)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  int unaff_EDI;
  uint local_24 [4];
  undefined4 local_14;
  uint local_10;
  int local_8;
  
  local_10 = 0xf;
  local_14 = 0;
  local_24[0] = local_24[0] & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  FUN_00a6fc20(&local_8,local_24);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_24[0]);
  }
  if (local_8 != *(int *)(unaff_EDI + 0x2c)) {
    return *(undefined4 *)(local_8 + 0x24);
  }
  return 0;
}

