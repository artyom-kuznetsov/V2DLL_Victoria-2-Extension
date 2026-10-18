// FUN_007993b0 @ 007993b0 body=[[007993b0, 007993c4]]


void FUN_007993b0(void)

{
  int in_ECX;
  
  if (*(char *)(*(int *)(in_ECX + 4) + 0x67) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x007993c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(in_ECX + -0x1c) + 0x20))();
    return;
  }
  return;
}

