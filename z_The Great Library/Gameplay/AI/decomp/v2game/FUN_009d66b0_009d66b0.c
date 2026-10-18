// FUN_009d66b0 @ 009d66b0 body=[[009d66b0, 009d66e1] [009d66e5, 009d66eb]]


int * FUN_009d66b0(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = in_ECX + -2;
  *(undefined ***)(*(int *)(*piVar1 + 4) + -8 + (int)in_ECX) = &PTR_FUN_00e3b4b4;
  *in_ECX = std::ios_base::vftable;
  FUN_00aad52d();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  return piVar1;
}

