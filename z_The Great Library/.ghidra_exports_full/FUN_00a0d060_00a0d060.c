// FUN_00a0d060 @ 00a0d060 body=[[00a0d060, 00a0d0ea]]


void FUN_00a0d060(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  cVar1 = *(char *)(in_ECX + 0x90);
  FUN_009a0940(param_1);
  puVar2 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar2 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

