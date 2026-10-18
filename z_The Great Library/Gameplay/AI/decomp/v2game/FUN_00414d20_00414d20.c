// FUN_00414d20 @ 00414d20 body=[[00414d20, 00414d32] [00414d36, 00414d6e]]


void FUN_00414d20(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CCityGroup::vftable;
  iVar1 = DAT_012588e8;
  if (unaff_ESI[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  *unaff_ESI = CSelectable::vftable;
  if (*(char *)(unaff_ESI + 1) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0xb24) + 0xa4))(1);
  }
  return;
}

