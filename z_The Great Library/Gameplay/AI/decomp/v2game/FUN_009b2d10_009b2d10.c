// FUN_009b2d10 @ 009b2d10 body=[[009b2d10, 009b2d38] [009b2d43, 009b2d57]]


void FUN_009b2d10(void)

{
  int iVar1;
  int *in_ECX;
  
  (**(code **)(in_ECX[0x1c] + 0x24))();
  FUN_009b1da0();
  iVar1 = in_ECX[0x18];
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
                    /* WARNING: Could not recover jumptable at 0x009b2d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x6c))();
  return;
}

