// FUN_00a097e0 @ 00a097e0 body=[[00a097e0, 00a0987f]]


void FUN_00a097e0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (*(int *)(in_ECX + 0x78) != 0) {
    FUN_009a0560(param_1);
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x74);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

