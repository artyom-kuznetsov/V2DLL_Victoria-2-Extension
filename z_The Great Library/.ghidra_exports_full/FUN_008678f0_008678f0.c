// FUN_008678f0 @ 008678f0 body=[[008678f0, 00867933]]


void FUN_008678f0(void)

{
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4fade;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = CTutorial::vftable;
  local_8 = 1;
  FUN_00867ce0(in_ECX);
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[8]);
}

