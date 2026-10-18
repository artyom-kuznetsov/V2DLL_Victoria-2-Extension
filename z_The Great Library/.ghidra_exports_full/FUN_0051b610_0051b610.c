// FUN_0051b610 @ 0051b610 body=[[0051b610, 0051b67b]]


void FUN_0051b610(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_EAX;
  int in_EDX;
  undefined8 *unaff_ESI;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(int *)(in_EAX + 0x1234) + in_EDX * 4) != 0) {
    iVar1 = *(int *)(*(int *)(in_EAX + 0x1234) + in_EDX * 4);
    uVar2 = __allmul(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),param_1,param_2);
    uVar3 = __alldiv((int)(uVar2 & 0x7fffffff8000),
                     (int)((longlong)uVar2 >> 0x2f) << 0xf |
                     (uint)((uVar2 & 0x7fffffff8000) >> 0x20),DAT_00f0b340,DAT_00f0b344);
    *unaff_ESI = uVar3;
    return;
  }
  *(undefined4 *)unaff_ESI = 0xffff8000;
  *(undefined4 *)((int)unaff_ESI + 4) = 0xffffffff;
  return;
}

