// FUN_00a44a70 @ 00a44a70 body=[[00a44a70, 00a44a9d]]


void FUN_00a44a70(undefined4 *param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; in_EDX != param_1; in_EDX = in_EDX + 0xd) {
    if (in_EAX != (undefined4 *)0x0) {
      puVar2 = in_EDX;
      puVar3 = in_EAX;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    in_EAX = in_EAX + 0xd;
  }
  return;
}

