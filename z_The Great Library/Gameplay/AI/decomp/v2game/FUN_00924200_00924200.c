// FUN_00924200 @ 00924200 body=[[00924200, 00924282] [00924286, 00924295]]


/* WARNING: Removing unreachable block (ram,0x0092427a) */

void FUN_00924200(undefined4 param_1)

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
  FUN_009112b0(param_1);
  pcVar2 = (char *)(in_ECX + 0x28);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x28),(int)pcVar2 - (in_ECX + 0x29));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  ExceptionList = local_10;
  return;
}

