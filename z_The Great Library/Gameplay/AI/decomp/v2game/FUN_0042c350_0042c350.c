// FUN_0042c350 @ 0042c350 body=[[0042c350, 0042c37e]]


void FUN_0042c350(int param_1)

{
  int *in_EAX;
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if (iVar1 != unaff_ESI[1]) {
    do {
      if (*(int *)(iVar1 + 4) == *(int *)(param_1 + 4)) break;
      iVar1 = iVar1 + 8;
    } while (iVar1 != unaff_ESI[1]);
  }
  *in_EAX = iVar1;
  in_EAX[1] = (int)unaff_ESI;
  return;
}

