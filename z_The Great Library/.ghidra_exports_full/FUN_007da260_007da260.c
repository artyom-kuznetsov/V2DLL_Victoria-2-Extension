// FUN_007da260 @ 007da260 body=[[007da260, 007da26c]]


void FUN_007da260(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x48);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  return;
}

