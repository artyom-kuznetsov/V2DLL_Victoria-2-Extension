// FUN_00b1c4c0 @ 00b1c4c0 body=[[00b1c4c0, 00b1c50d]]


void FUN_00b1c4c0(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  
  FUN_00b1c3f0(param_1,param_2,param_4);
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = FUN_00b31c00();
      *(undefined2 *)(param_3 + uVar2 * 2) = uVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}

