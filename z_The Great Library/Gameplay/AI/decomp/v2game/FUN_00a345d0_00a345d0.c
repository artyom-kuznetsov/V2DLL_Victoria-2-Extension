// FUN_00a345d0 @ 00a345d0 body=[[00a345d0, 00a34769]]


void FUN_00a345d0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar2 = *(undefined4 *)(in_ECX + 0x58);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x5c);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x60);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x68);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 100);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a2520(param_1);
  return;
}

