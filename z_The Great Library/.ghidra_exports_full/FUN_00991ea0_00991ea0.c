// FUN_00991ea0 @ 00991ea0 body=[[00991ea0, 00991f4e] [00991f52, 00991f6c] [00991f70, 00991f80]]


void FUN_00991ea0(void)

{
  char cVar1;
  char *pcVar2;
  char *in_ECX;
  char *in_EDX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41d68;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = 0;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  FUN_00989720(local_2c,&DAT_00dedc68);
  FUN_00989720(local_48,&DAT_00dedc68);
  FUN_00993ab0();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

