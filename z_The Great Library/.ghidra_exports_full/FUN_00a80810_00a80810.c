// FUN_00a80810 @ 00a80810 body=[[00a80810, 00a8083d]]


void FUN_00a80810(undefined4 *param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; in_EDX != param_1; in_EDX = in_EDX + 0x15) {
    if (in_EAX != (undefined4 *)0x0) {
      puVar2 = in_EDX;
      puVar3 = in_EAX;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    in_EAX = in_EAX + 0x15;
  }
  return;
}

