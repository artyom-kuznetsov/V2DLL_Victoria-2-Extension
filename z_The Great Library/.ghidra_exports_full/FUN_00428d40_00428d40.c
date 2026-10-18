// FUN_00428d40 @ 00428d40 body=[[00428d40, 00428d6b]]


void FUN_00428d40(int param_1)

{
  int *piVar1;
  int in_EAX;
  
  piVar1 = (int *)(in_EAX + 0x10);
  *piVar1 = *piVar1 + param_1;
  if (*piVar1 < 0) {
    *(undefined4 *)(in_EAX + 0x10) = 0;
    return;
  }
  if (100000 < *(int *)(in_EAX + 0x10)) {
    *(undefined4 *)(in_EAX + 0x10) = 100000;
  }
  return;
}

