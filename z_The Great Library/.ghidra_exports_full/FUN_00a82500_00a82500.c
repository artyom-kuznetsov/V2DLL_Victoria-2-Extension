// FUN_00a82500 @ 00a82500 body=[[00a82500, 00a82531]]


undefined4 FUN_00a82500(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_009bcbf0(param_1,1);
  uVar1 = FUN_009bcfc0(param_1);
  *(undefined4 *)(in_ECX + 0x140) = uVar1;
  return 1;
}

