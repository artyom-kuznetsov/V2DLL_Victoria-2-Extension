// FUN_006a4d80 @ 006a4d80 body=[[006a4d80, 006a4d98]]


void FUN_006a4d80(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a4d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x48))();
    return;
  }
  return;
}

