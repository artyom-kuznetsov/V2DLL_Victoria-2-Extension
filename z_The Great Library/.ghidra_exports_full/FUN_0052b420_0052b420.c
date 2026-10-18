// FUN_0052b420 @ 0052b420 body=[[0052b420, 0052b47e]]


void FUN_0052b420(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_EAX;
  undefined8 *unaff_ESI;
  ulonglong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0xa0) + param_1 * 4);
  uVar2 = __allmul(*(undefined4 *)(iVar1 + 0x48 + DAT_00f0973c * 8),
                   *(undefined4 *)(iVar1 + 0x4c + DAT_00f0973c * 8),param_2,param_3);
  uVar3 = __alldiv((int)(uVar2 & 0x7fffffff8000),
                   (int)((longlong)uVar2 >> 0x2f) << 0xf | (uint)((uVar2 & 0x7fffffff8000) >> 0x20),
                   DAT_00f0aac8,DAT_00f0aacc);
  *unaff_ESI = uVar3;
  return;
}

