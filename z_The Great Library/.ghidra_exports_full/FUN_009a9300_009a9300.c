// FUN_009a9300 @ 009a9300 body=[[009a9300, 009a936d]]


void FUN_009a9300(void)

{
  int in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  if (in_EAX == 0) {
    FUN_00409350("MASCULINE",9);
    return;
  }
  if (in_EAX != 1) {
    if (in_EAX != 2) {
      FUN_00409350(&DAT_00ded94d,0);
      return;
    }
    FUN_00409350("NEUTER",6);
    return;
  }
  FUN_00409350("FEMININE",8);
  return;
}

