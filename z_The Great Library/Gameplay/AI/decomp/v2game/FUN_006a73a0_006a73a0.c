// FUN_006a73a0 @ 006a73a0 body=[[006a73a0, 006a73b8]]


void FUN_006a73a0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a73b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x28))();
    return;
  }
  return;
}

