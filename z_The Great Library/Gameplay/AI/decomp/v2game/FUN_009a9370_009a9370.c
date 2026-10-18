// FUN_009a9370 @ 009a9370 body=[[009a9370, 009a93dd]]


void FUN_009a9370(void)

{
  int in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  if (in_EAX == 0) {
    FUN_00409350("SUBJECT",7);
    return;
  }
  if (in_EAX != 1) {
    if (in_EAX != 2) {
      FUN_00409350(&DAT_00ded94d,0);
      return;
    }
    FUN_00409350("INDIRECT_OBJECT",0xf);
    return;
  }
  FUN_00409350("DIRECT_OBJECT",0xd);
  return;
}

