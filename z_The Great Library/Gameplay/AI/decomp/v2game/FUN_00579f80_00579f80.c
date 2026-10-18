// FUN_00579f80 @ 00579f80 body=[[00579f80, 0057a114]]


void FUN_00579f80(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  char local_108 [260];
  
  FUN_009a0940(param_1);
  FUN_004013e0(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 8);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(local_108,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0xc);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(local_108,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(local_108,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x1c);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_108,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

