// FUN_00ad8ea0 @ 00ad8ea0 body=[[00ad8ea0, 00ad8ecf]]


void FUN_00ad8ea0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined1 *)(param_1 + 2);
    do {
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[1];
      puVar2[1] = uVar1;
      uVar1 = puVar2[-1];
      puVar2[-1] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

