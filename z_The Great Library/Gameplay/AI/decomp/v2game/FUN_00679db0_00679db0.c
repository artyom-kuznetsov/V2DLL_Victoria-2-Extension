// FUN_00679db0 @ 00679db0 body=[[00679db0, 00679dc8]]


void FUN_00679db0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00679dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x30))();
    return;
  }
  return;
}

