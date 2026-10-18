// FUN_00761e00 @ 00761e00 body=[[00761e00, 00761e1c] [00761e20, 00761e26]]


void FUN_00761e00(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CIngameSettingsScreen::vftable;
  FUN_00761710();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

