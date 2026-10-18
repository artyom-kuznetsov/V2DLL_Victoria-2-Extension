// FUN_00582520 @ 00582520 body=[[00582520, 00582609] [0058260d, 00582622]]


/* WARNING: Removing unreachable block (ram,0x00582600) */

void FUN_00582520(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  _sprintf(local_118,"%lld",*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  pcVar2 = (char *)(in_ECX + 0x48);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x48),(int)pcVar2 - (in_ECX + 0x49));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  ExceptionList = local_14;
  return;
}

