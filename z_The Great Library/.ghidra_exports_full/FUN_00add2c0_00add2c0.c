// FUN_00add2c0 @ 00add2c0 body=[[00add2c0, 00add2e8]]


undefined4 FUN_00add2c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00add270(param_1,param_2);
  if (iVar1 == -1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x20) + iVar1 * 4);
}

