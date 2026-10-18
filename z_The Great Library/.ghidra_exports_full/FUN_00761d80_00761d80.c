// FUN_00761d80 @ 00761d80 body=[[00761d80, 00761ddc] [00761de0, 00761dfb]]


void FUN_00761d80(void)

{
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("menu_settings_ingame",0x14);
  local_8 = 0;
  FUN_0075ac50(unaff_ESI,unaff_EDI,local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *unaff_ESI = CIngameSettingsScreen::vftable;
  unaff_ESI[0x105] = unaff_EDI;
  ExceptionList = local_10;
  return;
}

