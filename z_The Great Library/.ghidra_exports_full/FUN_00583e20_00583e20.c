// FUN_00583e20 @ 00583e20 body=[[00583e20, 00583ea4] [00583ea8, 00583f00] [00583f04, 00583f13]]


/* WARNING: Removing unreachable block (ram,0x00583ef8) */
/* WARNING: Removing unreachable block (ram,0x00583e9c) */

void FUN_00583e20(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
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
  pcVar2 = (char *)(in_ECX + 0x44);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x44),(int)pcVar2 - (in_ECX + 0x45));
  local_8 = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  ExceptionList = local_10;
  return;
}

