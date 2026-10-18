// FUN_0084afd0 @ 0084afd0 body=[[0084afd0, 0084b025]]


void FUN_0084afd0(int *param_1)

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
  (**(code **)(*in_ECX + 0x118))(param_1);
  return;
}

