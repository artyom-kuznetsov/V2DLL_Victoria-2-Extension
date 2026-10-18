// FUN_009b2020 @ 009b2020 body=[[009b2020, 009b203b]]


void FUN_009b2020(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b2036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x78))();
    return;
  }
  return;
}

