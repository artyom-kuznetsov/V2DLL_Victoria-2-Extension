// FUN_00471330 @ 00471330 body=[[00471330, 00471477]]


void FUN_00471330(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int in_ECX;
  int iVar5;
  char local_108 [256];
  int local_8;
  
  uVar3 = param_1;
  uVar2 = *(undefined4 *)(in_ECX + 8);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0xc);
  FUN_009a0940(param_1);
  puVar4 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_108,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x20);
  FUN_009a0940(param_1);
  puVar4 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_108,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  param_1 = 0;
  iVar5 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 3;
  if (0 < iVar5) {
    do {
      local_8 = *(int *)(in_ECX + 0x10) + param_1 * 8;
      FUN_009a0940(uVar3);
      FUN_0099f020(local_8);
      param_1 = param_1 + 1;
    } while (param_1 < iVar5);
  }
  return;
}

