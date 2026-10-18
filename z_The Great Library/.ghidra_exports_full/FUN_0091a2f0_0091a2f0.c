// FUN_0091a2f0 @ 0091a2f0 body=[[0091a2f0, 0091a330] [0091a334, 0091a346]]


void FUN_0091a2f0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c108;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00427800(in_ECX + 10);
  *in_ECX = CDiplomaticAction::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

