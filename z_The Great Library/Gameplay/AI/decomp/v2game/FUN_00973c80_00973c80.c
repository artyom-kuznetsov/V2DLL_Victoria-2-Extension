// FUN_00973c80 @ 00973c80 body=[[00973c80, 00973cb5] [00973cb9, 00973cbf]]


void FUN_00973c80(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CIssueOnExecute::vftable;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

