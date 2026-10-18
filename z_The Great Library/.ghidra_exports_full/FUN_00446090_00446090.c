// FUN_00446090 @ 00446090 body=[[00446090, 004460cb]]


undefined1 * FUN_00446090(undefined1 *param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x20))();
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  return param_1;
}

