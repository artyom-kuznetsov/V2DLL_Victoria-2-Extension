// FUN_004de350 @ 004de350 body=[[004de350, 004de3b5]]


void FUN_004de350(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  longlong *unaff_ESI;
  int unaff_EDI;
  longlong lVar1;
  
  lVar1 = __allmul(*(undefined4 *)(in_EAX + 0x30),*(undefined4 *)(in_EAX + 0x34),
                   *(undefined4 *)(in_EAX + 0x28),*(undefined4 *)(in_EAX + 0x2c));
  lVar1 = __allmul(lVar1 >> 0xf,*(undefined4 *)(unaff_EDI + 0x88),*(undefined4 *)(unaff_EDI + 0x8c))
  ;
  *unaff_ESI = lVar1 >> 0xf;
  lVar1 = __allmul((int)*unaff_ESI,*(undefined4 *)((int)unaff_ESI + 4),param_1,param_2);
  *unaff_ESI = lVar1 >> 0xf;
  return;
}

