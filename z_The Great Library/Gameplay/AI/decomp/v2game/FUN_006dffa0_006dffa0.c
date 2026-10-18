// FUN_006dffa0 @ 006dffa0 body=[[006dffa0, 006dffb3]]


void FUN_006dffa0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006dffae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x20))();
    return;
  }
  return;
}

