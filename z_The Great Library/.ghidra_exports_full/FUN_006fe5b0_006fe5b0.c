// FUN_006fe5b0 @ 006fe5b0 body=[[006fe5b0, 006fe60f]]


void FUN_006fe5b0(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x1c8);
  if (iVar1 == 0) {
    FUN_006f3e70();
    return;
  }
  if (iVar1 == 4) {
    FUN_007046b0(in_EAX);
    return;
  }
  if (iVar1 == 1) {
    FUN_006f7140(in_EAX);
    return;
  }
  if (iVar1 == 2) {
    FUN_006f53a0(in_EAX,1);
    return;
  }
  if (iVar1 == 3) {
    FUN_00704be0(in_EAX);
  }
  return;
}

