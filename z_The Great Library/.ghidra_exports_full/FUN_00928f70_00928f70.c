// FUN_00928f70 @ 00928f70 body=[[00928f70, 0092906b]]


void FUN_00928f70(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  char local_104 [256];
  
  cVar1 = *(char *)(in_ECX + 8);
  FUN_009a0940(param_1);
  puVar2 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar2 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_0092acc0();
  FUN_0092acc0();
  FUN_0043cd10(in_ECX + 0x1c,0);
  FUN_0043cd10(in_ECX + 0xc,0);
  cVar1 = *(char *)(in_ECX + 9);
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

