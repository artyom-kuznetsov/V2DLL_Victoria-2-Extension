// FUN_009b1ee0 @ 009b1ee0 body=[[009b1ee0, 009b1efb]]


void FUN_009b1ee0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b1ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 100))();
    return;
  }
  return;
}

