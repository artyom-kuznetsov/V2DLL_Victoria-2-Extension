// FUN_004db7d0 @ 004db7d0 body=[[004db7d0, 004db804] [004db808, 004db80e]]


void FUN_004db7d0(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = DAT_012588e8;
  *in_ECX = CSelectable::vftable;
  if (*(char *)(in_ECX + 1) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0xb24) + 0xa4))(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

