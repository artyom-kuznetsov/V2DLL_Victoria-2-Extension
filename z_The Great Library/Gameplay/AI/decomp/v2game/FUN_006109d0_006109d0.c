// FUN_006109d0 @ 006109d0 body=[[006109d0, 00610a49]]


void FUN_006109d0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  while( true ) {
    iVar1 = in_ECX * 2 + 2;
    if (param_1 <= iVar1) break;
    if (*(int *)(*(int *)(*(int *)(param_4 + 0xbc) + *(int *)(in_EDX + -4 + iVar1 * 4) * 0x10) +
                param_3 * 4) <
        *(int *)(*(int *)(*(int *)(param_4 + 0xbc) + *(int *)(in_EDX + iVar1 * 4) * 0x10) +
                param_3 * 4)) {
      iVar1 = in_ECX * 2 + 1;
    }
    *(undefined4 *)(in_EDX + in_ECX * 4) = *(undefined4 *)(in_EDX + iVar1 * 4);
    in_ECX = iVar1;
  }
  if (iVar1 == param_1) {
    *(undefined4 *)(in_EDX + in_ECX * 4) = *(undefined4 *)(in_EDX + -4 + param_1 * 4);
  }
  FUN_006122e0();
  return;
}

