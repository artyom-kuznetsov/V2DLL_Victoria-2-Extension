// FUN_0084af70 @ 0084af70 body=[[0084af70, 0084afc5]]


void FUN_0084af70(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *in_ECX;
  
  cVar2 = (**(code **)(*param_1 + 0x104))();
  if (cVar2 != '\0') {
    for (puVar1 = (undefined4 *)in_ECX[0x85];
        (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_1));
        puVar1 = (undefined4 *)puVar1[2]) {
    }
    FUN_005f2ae0(puVar1);
  }
  (**(code **)(*in_ECX + 0x120))(param_1);
  return;
}

