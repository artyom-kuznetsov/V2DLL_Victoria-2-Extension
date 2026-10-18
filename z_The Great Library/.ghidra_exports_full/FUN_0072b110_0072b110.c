// FUN_0072b110 @ 0072b110 body=[[0072b110, 0072b1c5]]


void FUN_0072b110(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  cVar1 = *(char *)(in_ECX + 0x3c);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x40);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

