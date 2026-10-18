// FUN_007a05b0 @ 007a05b0 body=[[007a05b0, 007a05c9]]


void FUN_007a05b0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x18))();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x007a05c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x10))();
    return;
  }
  return;
}

