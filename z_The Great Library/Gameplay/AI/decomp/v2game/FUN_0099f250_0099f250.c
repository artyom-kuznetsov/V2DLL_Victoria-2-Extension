// FUN_0099f250 @ 0099f250 body=[[0099f250, 0099f30d]]


void FUN_0099f250(undefined4 param_1)

{
  undefined4 *in_EAX;
  int unaff_EDI;
  char local_104 [256];
  
  if ((*(char *)(unaff_EDI + 0xc) == '\0') && (*(int *)(unaff_EDI + 4) != 0)) {
    FUN_009a08a0(unaff_EDI,*(int *)(unaff_EDI + 4) + -1);
  }
  if (0xf < (uint)in_EAX[5]) {
    in_EAX = (undefined4 *)*in_EAX;
  }
  __snprintf(local_104,0xff,"%s",in_EAX);
  FUN_0099ff90(unaff_EDI);
  FUN_004013e0(unaff_EDI);
  if (*(char *)(unaff_EDI + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(local_104,"%d",param_1);
  }
  FUN_0099ff90(unaff_EDI);
  FUN_004013e0(unaff_EDI);
  return;
}

