// FUN_005f6c10 @ 005f6c10 body=[[005f6c10, 005f6c88] [005f6c8c, 005f6c9b]]


/* WARNING: Removing unreachable block (ram,0x005f6c80) */

void FUN_005f6c10(undefined4 param_1)

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
  pcVar2 = (char *)(in_ECX + 0x10);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(in_ECX + 0x10),(int)pcVar2 - (in_ECX + 0x11));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  ExceptionList = local_10;
  return;
}

