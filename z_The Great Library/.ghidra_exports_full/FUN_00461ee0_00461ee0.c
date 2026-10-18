// FUN_00461ee0 @ 00461ee0 body=[[00461ee0, 00461f39]]


undefined4 FUN_00461ee0(void)

{
  int unaff_ESI;
  
  if (((*(int *)(unaff_ESI + 0x194) != 0) && (*(int *)(unaff_ESI + 0x1b0) != 0)) &&
     (*(int *)(unaff_ESI + 0x1cc) != 0)) {
    FUN_00461db0(unaff_ESI);
    FUN_00460400(unaff_ESI,unaff_ESI + 0x1a0);
    FUN_004608a0(unaff_ESI,unaff_ESI + 0x1bc);
    FUN_00460d90(unaff_ESI,unaff_ESI + 0x184);
    return 1;
  }
  return 0;
}

