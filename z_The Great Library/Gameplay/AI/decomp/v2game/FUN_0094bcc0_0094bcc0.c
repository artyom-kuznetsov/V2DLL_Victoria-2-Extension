// FUN_0094bcc0 @ 0094bcc0 body=[[0094bcc0, 0094bcd1]]


void FUN_0094bcc0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0094bccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x18))();
    return;
  }
  return;
}

