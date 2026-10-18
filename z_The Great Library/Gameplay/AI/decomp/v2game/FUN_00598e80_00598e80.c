// FUN_00598e80 @ 00598e80 body=[[00598e80, 00598ec8]]


void FUN_00598e80(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00594580(param_1,param_2);
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x38);
  }
  for (puVar1 = (undefined4 *)*puVar1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]
      ) {
    iVar2 = FUN_00598f20(*puVar1);
    if (iVar2 != 0) {
      FUN_00596200(iVar2);
    }
  }
  return;
}

