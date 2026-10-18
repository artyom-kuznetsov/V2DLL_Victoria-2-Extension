// FUN_006f9770 @ 006f9770 body=[[006f9770, 006f97bb] [006f97bf, 006f97e0] [006f97e4, 006f9831] [006f9835, 006f9851]]


void FUN_006f9770(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50873;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CBuildFactoryWindow::vftable;
  in_ECX[9] = CBuildFactoryWindow::vftable;
  local_8 = 5;
  FUN_006f9ff0();
  if (in_ECX[0x3a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3a]);
  }
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  if (in_ECX[0x36] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x36]);
  }
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x20] = CButtonObserver::vftable;
  in_ECX[0xc] = CButtonObserver::vftable;
  in_ECX[9] = CChoiceObserver<CStandardlistboxItem>::vftable;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 6;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0xf;
  *(undefined1 *)(in_ECX + 1) = 0;
  ExceptionList = local_10;
  return;
}

