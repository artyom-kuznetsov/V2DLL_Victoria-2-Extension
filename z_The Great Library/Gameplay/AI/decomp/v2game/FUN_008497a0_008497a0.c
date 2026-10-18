// FUN_008497a0 @ 008497a0 body=[[008497a0, 0084980e]]


void FUN_008497a0(int param_1)

{
  int iVar1;
  int in_EAX;
  int unaff_EDI;
  
  while( true ) {
    iVar1 = in_EAX * 2;
    in_EAX = iVar1 + 2;
    if (param_1 <= in_EAX) break;
    if (*(int *)(in_EAX * 100 + -0x60 + unaff_EDI) < *(int *)(in_EAX * 100 + 4 + unaff_EDI)) {
      in_EAX = iVar1 + 1;
    }
    FUN_00849680();
  }
  if (in_EAX == param_1) {
    FUN_00849680();
  }
  FUN_00849a60();
  return;
}

