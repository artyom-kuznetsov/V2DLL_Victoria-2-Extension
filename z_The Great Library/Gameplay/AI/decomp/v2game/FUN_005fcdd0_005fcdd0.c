// FUN_005fcdd0 @ 005fcdd0 body=[[005fcdd0, 005fce07]]


void FUN_005fcdd0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int in_EAX;
  longlong *unaff_ESI;
  longlong lVar2;
  
  uVar1 = *(undefined4 *)(*(int *)(in_EAX + 0x7f4) + 4 + param_2 * 8);
  *(undefined4 *)unaff_ESI = *(undefined4 *)(*(int *)(in_EAX + 0x7f4) + param_2 * 8);
  lVar2 = __allmul((int)*unaff_ESI,uVar1,param_3,param_4);
  *unaff_ESI = lVar2 >> 0xf;
  return;
}

