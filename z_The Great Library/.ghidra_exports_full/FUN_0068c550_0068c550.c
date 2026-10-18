// FUN_0068c550 @ 0068c550 body=[[0068c550, 0068c5bf]]


void FUN_0068c550(int param_1)

{
  int in_ECX;
  
  if (param_1 < 1) {
    if (param_1 == -1) {
      if ((*(int *)(in_ECX + 0xbc0) - *(int *)(in_ECX + 0xbbc) & 0xfffffffcU) == 0)
      goto LAB_0068c5a6;
      **(undefined4 **)(in_ECX + 0xbbc) = 0xffffffff;
    }
    return;
  }
  if (800 < (int)(*(int *)(in_ECX + 0xbc0) - *(int *)(in_ECX + 0xbbc) & 0xfffffffcU)) {
    **(undefined4 **)(in_ECX + 0xbbc) = 0xffffffff;
    return;
  }
LAB_0068c5a6:
  FUN_004e9b90();
  return;
}

