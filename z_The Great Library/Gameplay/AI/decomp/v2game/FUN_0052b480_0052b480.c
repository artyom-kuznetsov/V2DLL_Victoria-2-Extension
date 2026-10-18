// FUN_0052b480 @ 0052b480 body=[[0052b480, 0052b4d2]]


void FUN_0052b480(void)

{
  int iVar1;
  int in_EAX;
  int in_EDX;
  undefined8 *unaff_ESI;
  ulonglong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0xa0) + in_EDX * 4);
  uVar2 = __allmul(*(undefined4 *)(iVar1 + 0x48 + DAT_00f0973c * 8),
                   *(undefined4 *)(iVar1 + 0x4c + DAT_00f0973c * 8),*(undefined4 *)(iVar1 + 0x10),
                   *(undefined4 *)(iVar1 + 0x14));
  uVar3 = __alldiv((int)(uVar2 & 0x7fffffff8000),
                   (int)((longlong)uVar2 >> 0x2f) << 0xf | (uint)((uVar2 & 0x7fffffff8000) >> 0x20),
                   DAT_00f0aac8,DAT_00f0aacc);
  *unaff_ESI = uVar3;
  return;
}

