// FUN_008a61b0 @ 008a61b0 body=[[008a61b0, 008a61ef]]


undefined4 FUN_008a61b0(int param_1,undefined4 param_2)

{
  int in_EAX;
  undefined4 in_ECX;
  
  if (in_EAX < 0) {
    FUN_008a8540(param_1 + 0x4c,in_ECX,0);
    return param_2;
  }
  FUN_008a8540(*(undefined4 *)(*(int *)(param_1 + 0xb0) + in_EAX * 4),in_ECX,in_EAX);
  return param_2;
}

