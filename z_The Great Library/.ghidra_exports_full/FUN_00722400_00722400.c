// FUN_00722400 @ 00722400 body=[[00722400, 0072242d]]


void FUN_00722400(void)

{
  int *in_ECX;
  
  in_ECX[0x124] = -1;
  (**(code **)(*(int *)(in_ECX[0x14] + 0x18) + 0x34))();
  (**(code **)(*(int *)in_ECX[0x13] + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0072242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x18))();
  return;
}

