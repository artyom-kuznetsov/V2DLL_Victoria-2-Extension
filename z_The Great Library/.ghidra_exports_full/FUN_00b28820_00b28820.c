// FUN_00b28820 @ 00b28820 body=[[00b28820, 00b2883f]]


void FUN_00b28820(void)

{
  short sVar1;
  short *in_ECX;
  
  sVar1 = *in_ECX;
  while (sVar1 != 0) {
    in_ECX = in_ECX + 1;
    sVar1 = *in_ECX;
  }
  return;
}

