// FUN_0043a6a0 @ 0043a6a0 body=[[0043a6a0, 0043a6c5]]


void FUN_0043a6a0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  longlong *unaff_ESI;
  longlong lVar2;
  
  uVar1 = in_ECX[1];
  *(undefined4 *)unaff_ESI = *in_ECX;
  lVar2 = __allmul((int)*unaff_ESI,uVar1,*in_EAX,in_EAX[1]);
  *unaff_ESI = lVar2 >> 0xf;
  return;
}

