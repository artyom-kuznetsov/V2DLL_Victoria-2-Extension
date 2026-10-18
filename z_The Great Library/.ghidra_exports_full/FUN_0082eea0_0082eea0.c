// FUN_0082eea0 @ 0082eea0 body=[[0082eea0, 0082ef60]]


void FUN_0082eea0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int unaff_ESI;
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = __allmul(*(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc),
                   *(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
  if (*(char *)(unaff_ESI + 0x28) != '\0') {
    FUN_0082ec40(param_2,param_3);
    lVar2 = __allmul(*(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc),
                     *(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
    *param_1 = ((lVar2 >> 0xf) - (lVar1 >> 0xf)) + CONCAT44(param_5,param_4);
    return;
  }
  FUN_0082ec40(param_2,param_3);
  lVar2 = __allmul(*(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc),
                   *(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
  *param_1 = ((lVar1 >> 0xf) - (lVar2 >> 0xf)) + CONCAT44(param_5,param_4);
  return;
}

