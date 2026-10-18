// FUN_004a7760 @ 004a7760 body=[[004a7760, 004a7976]]


void FUN_004a7760(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  char acStack_10c [264];
  
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 8) + 4))(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_10c,"%lld",*(undefined4 *)(in_ECX + 0x60),*(undefined4 *)(in_ECX + 100));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(int *)(in_ECX + 0x70) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x58);
    FUN_009a0940(param_1);
    _sprintf(acStack_10c,"%d",uVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if (*(int *)(in_ECX + 0x74) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0x58);
    FUN_009a0940(param_1);
    _sprintf(acStack_10c,"%d",uVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x78);
  FUN_009a0940(param_1);
  _sprintf(acStack_10c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x7c);
  FUN_009a0940(param_1);
  _sprintf(acStack_10c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x80);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(acStack_10c,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  FUN_009a0940(param_1);
  _sprintf(acStack_10c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

