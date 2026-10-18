// FUN_009d9750 @ 009d9750 body=[[009d9750, 009d977a] [009d977e, 009d9784]]


void FUN_009d9750(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3ba2c;
  FUN_00aaea59(in_ECX[8]);
  in_ECX[8] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

