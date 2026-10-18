// FUN_0047d3c0 @ 0047d3c0 body=[[0047d3c0, 0047d448] [0047d44c, 0047d487] [0047d48b, 0047d49a]]


void FUN_0047d3c0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  pcVar2 = (char *)(in_ECX + 8);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(in_ECX + 8),(int)pcVar2 - (in_ECX + 9));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  FUN_0043acd0(in_ECX + 0x10,local_48);
  local_8 = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

