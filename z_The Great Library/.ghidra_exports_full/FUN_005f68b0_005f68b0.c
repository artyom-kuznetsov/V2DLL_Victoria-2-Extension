// FUN_005f68b0 @ 005f68b0 body=[[005f68b0, 005f6917]]


void FUN_005f68b0(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  char local_104 [256];
  
  cVar1 = *(char *)(in_ECX + 0x11);
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

