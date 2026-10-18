// FUN_00a76c70 @ 00a76c70 body=[[00a76c70, 00a76c9e] [00a76ca2, 00a76ca8]]


void FUN_00a76c70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e4356c;
  if (in_ECX[1] == 1) {
    FreeLibrary((HMODULE)in_ECX[2]);
    in_ECX[1] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

