// FUN_00b259b0 @ 00b259b0 body=[[00b259b0, 00b259d8]]


undefined4 FUN_00b259b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00b2a250(*(undefined4 *)(param_1 + 8),param_2,1,param_3);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  return 0;
}

