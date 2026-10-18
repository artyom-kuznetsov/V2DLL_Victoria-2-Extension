// FUN_00974820 @ 00974820 body=[[00974820, 0097483d] [00974841, 00974847]]


void FUN_00974820(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CNullIssue::vftable;
  FUN_00974200(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

