// FUN_00a3ae20 @ 00a3ae20 body=[[00a3ae20, 00a3ae4c] [00a3ae50, 00a3ae6b] [00a3ae6f, 00a3ae76]]


void FUN_00a3ae20(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = DAT_01109b64;
  *in_ECX = &PTR_FUN_00e407ac;
  if (iVar1 != 0) {
    FUN_0057afc0(iVar1);
    FUN_00aaea59(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_01109b64 = 0;
  *in_ECX = &PTR_FUN_00e37854;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

