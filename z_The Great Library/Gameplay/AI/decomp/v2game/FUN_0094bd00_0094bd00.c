// FUN_0094bd00 @ 0094bd00 body=[[0094bd00, 0094bd13]]


void FUN_0094bd00(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0094bd0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x28))();
    return;
  }
  return;
}

