// FUN_00581e00 @ 00581e00 body=[[00581e00, 00581e4c] [00581e50, 00581e90] [00581e94, 00581ea3]]


/* WARNING: Removing unreachable block (ram,0x00581e88) */

void FUN_00581e00(undefined4 param_1)

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
  FUN_0058a320(in_ECX + 0x3c);
  pcVar2 = (char *)(in_ECX + 0x4c);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x4c),(int)pcVar2 - (in_ECX + 0x4d));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  ExceptionList = local_10;
  return;
}

