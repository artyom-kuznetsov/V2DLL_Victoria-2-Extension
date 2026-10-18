// FUN_006dff80 @ 006dff80 body=[[006dff80, 006dff91]]


void FUN_006dff80(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006dff8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x28))();
    return;
  }
  return;
}

