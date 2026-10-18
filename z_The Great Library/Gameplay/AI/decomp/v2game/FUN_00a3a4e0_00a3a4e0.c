// FUN_00a3a4e0 @ 00a3a4e0 body=[[00a3a4e0, 00a3a521]]


void FUN_00a3a4e0(int param_1)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  if (in_ECX != param_1) {
    iVar1 = in_ECX - in_EAX;
    do {
      FUN_00408ed0(in_ECX,0,0xffffffff);
      FUN_00408ed0(iVar1 + 0x1c + in_EAX,0,0xffffffff);
      in_ECX = in_ECX + 0x38;
      in_EAX = in_EAX + 0x38;
    } while (in_ECX != param_1);
  }
  return;
}

