// FUN_00a17bd0 @ 00a17bd0 body=[[00a17bd0, 00a17ed5]]


void FUN_00a17bd0(undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  bVar1 = *(byte *)(in_ECX + 0x24);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar2 = *(char *)(in_ECX + 0x28);
  FUN_009a0940(param_1);
  puVar4 = &DAT_00dfbbd0;
  if (cVar2 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  bVar1 = *(byte *)(in_ECX + 0x2c);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(int *)(in_ECX + 0x48) != -1) {
    uVar3 = *(undefined4 *)(in_ECX + 0x34);
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",uVar3);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    uVar3 = *(undefined4 *)(in_ECX + 0x38);
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",uVar3);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    uVar3 = *(undefined4 *)(in_ECX + 0x40);
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",uVar3);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    uVar3 = *(undefined4 *)(in_ECX + 0x3c);
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",uVar3);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    uVar3 = *(undefined4 *)(in_ECX + 0x44);
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",uVar3);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    uVar3 = *(undefined4 *)(in_ECX + 0x48);
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",uVar3);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    uVar3 = *(undefined4 *)(in_ECX + 0x4c);
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",uVar3);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  return;
}

