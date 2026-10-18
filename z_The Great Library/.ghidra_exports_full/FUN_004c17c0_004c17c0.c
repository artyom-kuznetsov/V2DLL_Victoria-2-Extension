// FUN_004c17c0 @ 004c17c0 body=[[004c17c0, 004c1872]]


void FUN_004c17c0(undefined4 param_1)

{
  int in_ECX;
  char acStack_10c [264];
  
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x10) + 4))(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_10c,"%lld",*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if ((*(int *)(in_ECX + 0xc) != DAT_012587f0 + 0x48) && (*(int *)(in_ECX + 0xc) != 0)) {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  return;
}

