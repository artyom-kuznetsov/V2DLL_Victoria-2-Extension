// FUN_00a796e0 @ 00a796e0 body=[[00a796e0, 00a79718]]


undefined1 * FUN_00a796e0(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_013f0744 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  return param_1;
}

