// FUN_0057e820 @ 0057e820 body=[[0057e820, 0057e8a4] [0057e8a8, 0057e8db]]


/* WARNING: Removing unreachable block (ram,0x0057e89c) */

void FUN_0057e820(undefined4 param_1)

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
  ExceptionList = &local_10;
  FUN_009a2520(param_1);
  pcVar2 = (char *)(in_ECX + 0x3c);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar2 - (in_ECX + 0x3d));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x44);
  ExceptionList = local_10;
  return;
}

