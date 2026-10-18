// FUN_00874c60 @ 00874c60 body=[[00874c60, 00874c7f]]


void FUN_00874c60(void)

{
  char cVar1;
  int *unaff_ESI;
  
  cVar1 = (**(code **)(*unaff_ESI + 0x18))();
  if (cVar1 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00874c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_ESI[9] + 0x18))();
  return;
}

