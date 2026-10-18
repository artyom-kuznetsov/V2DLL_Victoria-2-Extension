// FUN_00761c10 @ 00761c10 body=[[00761c10, 00761c36] [00761c3a, 00761c40]]


void FUN_00761c10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CFrontendSettingsScreen::vftable;
  in_ECX[0x105] = CFrontEndView::vftable;
  FUN_00761710();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

