// FUN_0043a620 @ 0043a620 body=[[0043a620, 0043a641]]


void FUN_0043a620(void)

{
  undefined4 *in_EAX;
  longlong *unaff_ESI;
  longlong lVar1;
  
  lVar1 = __allmul(*in_EAX,in_EAX[1],(int)*unaff_ESI,*(undefined4 *)((int)unaff_ESI + 4));
  *unaff_ESI = lVar1 >> 0xf;
  return;
}

