// FUN_00985ff0 @ 00985ff0 body=[[00985ff0, 00985ffc]]


void FUN_00985ff0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00985ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x18))();
    return;
  }
  return;
}

