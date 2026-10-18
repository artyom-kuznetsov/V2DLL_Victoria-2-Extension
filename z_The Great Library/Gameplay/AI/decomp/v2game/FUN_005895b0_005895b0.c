// FUN_005895b0 @ 005895b0 body=[[005895b0, 0058962a] [0058962e, 00589660]]


/* WARNING: Removing unreachable block (ram,0x00589622) */

void FUN_005895b0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  pcVar2 = (char *)(in_ECX + 0x3c);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar2 - (in_ECX + 0x3d));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (*(char *)(in_ECX + 0x44) != '\0') {
    FUN_0099f470(*(char *)(in_ECX + 0x44));
  }
  ExceptionList = local_10;
  return;
}

