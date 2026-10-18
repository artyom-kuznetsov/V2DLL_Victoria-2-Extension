// FUN_005aa110 @ 005aa110  (requested 005AA110, first bytes: 55 8B EC 81 EC 04 01 00)


void FUN_005aa110(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_104 [256];
  
  FUN_0059bfb0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x34);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

