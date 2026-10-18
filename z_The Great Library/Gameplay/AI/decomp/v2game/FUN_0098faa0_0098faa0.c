// FUN_0098faa0 @ 0098faa0 body=[[0098faa0, 0098fac3]]


void FUN_0098faa0(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  if (0xf < (uint)in_EAX[5]) {
    in_EAX = (undefined4 *)*in_EAX;
  }
  __snprintf((char *)(unaff_ESI + 1),0xff,"%s",in_EAX);
  return;
}

