// FUN_00b25bc0 @ 00b25bc0 body=[[00b25bc0, 00b25c3c]]


void FUN_00b25bc0(void)

{
  int unaff_ESI;
  
  if (unaff_ESI < 1) {
    if (unaff_ESI == 0) {
      return;
    }
    if (unaff_ESI == -0x7fffbfff) {
      FUN_00b1f840("Not implemented");
      return;
    }
    if ((unaff_ESI != -0x7fffbffb) && (unaff_ESI == -0x7ff8fff2)) {
      FUN_00b1f840("Out of memory");
      return;
    }
  }
  else {
    if (unaff_ESI == 1) {
      FUN_00b1f840("data error");
      return;
    }
    if ((unaff_ESI == 3) || (unaff_ESI == 6)) {
      FUN_00b1f840("Corrupted archive");
      return;
    }
  }
  FUN_00b1f840("unknown error");
  return;
}

