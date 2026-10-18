// FUN_00a7aab0 @ 00a7aab0 body=[[00a7aab0, 00a7aad5]]


void FUN_00a7aab0(int param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x78) != param_1) || (*(int *)(in_ECX + 0x78) == 0)) {
    *(int *)(in_ECX + 0x78) = param_1;
    SetCursor(*(HCURSOR *)(in_ECX + 0xd4 + param_1 * 4));
  }
  return;
}

