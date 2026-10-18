// FUN_009ada90 @ 009ada90 body=[[009ada90, 009adab9] [009adabd, 009adadd]]


undefined4 * FUN_009ada90(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0131c99c;
  if (param_1 == DAT_0131c99c) {
    DAT_0131c99c = param_1;
    return &DAT_0131c99c;
  }
  if (DAT_0131c99c != 0) {
    FUN_009ad450(DAT_0131c99c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0131c99c = param_1;
  return &DAT_0131c99c;
}

