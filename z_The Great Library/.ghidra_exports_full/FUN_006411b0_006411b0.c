// FUN_006411b0 @ 006411b0 body=[[006411b0, 0064121d] [00641221, 00641233]]


void FUN_006411b0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f6d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CEU3DialogGui::vftable;
  in_ECX[6] = CEU3DialogGui::vftable;
  local_8 = 0;
  in_ECX[0x146] = CButtonObserver::vftable;
  FUN_004097a0(in_ECX + 0x13f);
  FUN_00641b00();
  local_8 = 0xffffffff;
  FUN_009e3100();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

