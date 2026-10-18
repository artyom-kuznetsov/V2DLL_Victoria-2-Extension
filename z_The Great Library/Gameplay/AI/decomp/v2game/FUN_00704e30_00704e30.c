// FUN_00704e30 @ 00704e30 body=[[00704e30, 00704e43]]


void FUN_00704e30(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00704e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x24))();
    return;
  }
  return;
}

