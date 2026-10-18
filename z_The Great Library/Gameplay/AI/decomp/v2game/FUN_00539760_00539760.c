// FUN_00539760 @ 00539760 body=[[00539760, 00539874]]


void FUN_00539760(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_ESI;
  longlong lVar6;
  
  uVar4 = (uint)*(byte *)(in_EAX + 0xecc + param_1);
  lVar6 = __allmul(*(undefined4 *)(in_EAX + 0x1448),*(undefined4 *)(in_EAX + 0x144c),
                   *(undefined4 *)(*(int *)(in_EAX + 0xf0c) + uVar4 * 8),
                   *(undefined4 *)(*(int *)(in_EAX + 0xf0c) + 4 + uVar4 * 8));
  uVar4 = (uint)*(byte *)(in_EAX + 0xf24 + param_1);
  uVar1 = *(undefined4 *)(in_EAX + 0x1454);
  *(longlong *)unaff_ESI = lVar6 >> 0xf;
  lVar6 = __allmul(*(undefined4 *)(*(int *)(in_EAX + 0xf64) + uVar4 * 8),
                   *(undefined4 *)(*(int *)(in_EAX + 0xf64) + 4 + uVar4 * 8),
                   *(undefined4 *)(in_EAX + 0x1450),uVar1);
  uVar5 = (uint)*(byte *)(in_EAX + 0xf7c + param_1);
  uVar3 = (uint)(lVar6 >> 0xf);
  uVar4 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + uVar3;
  iVar2 = *(int *)(in_EAX + 0xfbc);
  unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)(lVar6 >> 0xf) >> 0x20) + (uint)CARRY4(uVar4,uVar3)
  ;
  uVar3 = *(uint *)(iVar2 + uVar5 * 8);
  uVar4 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + uVar3;
  uVar1 = *(undefined4 *)(in_EAX + 0x145c);
  unaff_ESI[1] = unaff_ESI[1] + *(int *)(iVar2 + 4 + uVar5 * 8) + (uint)CARRY4(uVar4,uVar3);
  uVar4 = (uint)*(byte *)(in_EAX + 0xfd4 + param_1);
  lVar6 = __allmul(*(undefined4 *)(*(int *)(in_EAX + 0x1014) + uVar4 * 8),
                   *(undefined4 *)(*(int *)(in_EAX + 0x1014) + 4 + uVar4 * 8),
                   *(undefined4 *)(in_EAX + 0x1458),uVar1);
  uVar3 = (uint)(lVar6 >> 0xf);
  uVar4 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + uVar3;
  unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)(lVar6 >> 0xf) >> 0x20) + (uint)CARRY4(uVar4,uVar3)
  ;
  uVar4 = unaff_ESI[1];
  if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (*unaff_ESI != 0)))) {
    *unaff_ESI = *unaff_ESI;
    unaff_ESI[1] = uVar4;
    return;
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  return;
}

