// FUN_009a2520 @ 009a2520 body=[[009a2520, 009a2614]]


void FUN_009a2520(undefined4 param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int in_ECX;
  char local_104 [256];
  
  uVar2 = *(ushort *)(in_ECX + 0x34);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",(uint)uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x36);
  FUN_009a0940(param_1);
  puVar4 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x38);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%u",uVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

