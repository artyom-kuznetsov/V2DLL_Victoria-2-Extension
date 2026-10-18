// FUN_006d2c10 @ 006d2c10 body=[[006d2c10, 006d2c34]]


void FUN_006d2c10(void)

{
  int *in_ECX;
  
  (**(code **)(*(int *)(in_ECX[0x14] + 0x18) + 0x34))();
  (**(code **)(*(int *)in_ECX[0x13] + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x006d2c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x2c))();
  return;
}

