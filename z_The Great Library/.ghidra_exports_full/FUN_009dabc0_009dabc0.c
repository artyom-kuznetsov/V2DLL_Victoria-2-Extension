// FUN_009dabc0 @ 009dabc0 body=[[009dabc0, 009dac8d]]


void FUN_009dabc0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_104 [256];
  
  uVar1 = *(undefined4 *)(in_ECX + 0xc);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x10);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0 < *(int *)(in_ECX + 8)) {
    FUN_0099f1e0(*(int *)(in_ECX + 8));
  }
  return;
}

