// FUN_00a76cb0 @ 00a76cb0 body=[[00a76cb0, 00a76cd1]]


void FUN_00a76cb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e4356c;
  if (in_ECX[1] == 1) {
    FreeLibrary((HMODULE)in_ECX[2]);
    in_ECX[1] = 0;
  }
  return;
}

