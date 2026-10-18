// FUN_009b1fc0 @ 009b1fc0 body=[[009b1fc0, 009b1fd6]]


void FUN_009b1fc0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 8) = 0;
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b1fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x38))();
    return;
  }
  return;
}

