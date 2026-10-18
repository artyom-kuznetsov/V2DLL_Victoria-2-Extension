// FUN_00585690 @ 00585690 body=[[00585690, 0058572b] [0058572f, 00585770]]


void FUN_00585690(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a2520(param_1);
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  pcVar2 = (char *)(in_ECX + 100);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 100),(int)pcVar2 - (in_ECX + 0x65));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  FUN_009a0940(param_1);
  local_3c = *(undefined4 *)(in_ECX + 0x40);
  local_38 = *(undefined4 *)(in_ECX + 0x44);
  FUN_0099f020(&local_3c);
  FUN_004013e0(param_1);
  ExceptionList = local_14;
  return;
}

