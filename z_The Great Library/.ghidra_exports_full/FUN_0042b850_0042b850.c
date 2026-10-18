// FUN_0042b850 @ 0042b850 body=[[0042b850, 0042b889]]


void FUN_0042b850(void)

{
  int *in_EAX;
  int iVar1;
  int in_EDX;
  
  iVar1 = *in_EAX;
  if (iVar1 != in_EAX[1]) {
    do {
      if (*(int *)(iVar1 + 4) == *(int *)(in_EDX + 4)) break;
      iVar1 = iVar1 + 8;
    } while (iVar1 != in_EAX[1]);
  }
  FUN_0042ba80();
  return;
}

