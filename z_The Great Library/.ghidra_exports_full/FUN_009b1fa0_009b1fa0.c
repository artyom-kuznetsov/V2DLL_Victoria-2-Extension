// FUN_009b1fa0 @ 009b1fa0 body=[[009b1fa0, 009b1fb6]]


void FUN_009b1fa0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 8) = 1;
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b1fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
    return;
  }
  return;
}

