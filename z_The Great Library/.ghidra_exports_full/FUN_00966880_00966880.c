// FUN_00966880 @ 00966880 body=[[00966880, 00966921]]


void FUN_00966880(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  int in_ECX;
  uint *unaff_ESI;
  longlong lVar5;
  
  if (((*(int *)(in_EAX + 0x1d4) != 0) &&
      (iVar3 = *(int *)(*(int *)(in_EAX + 0x1d4) + 0xb0), iVar3 != 0)) &&
     (in_ECX == *(int *)(iVar3 + 0x80))) {
    uVar4 = *(uint *)(in_EAX + 0x148);
    uVar2 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + uVar4;
    unaff_ESI[1] = unaff_ESI[1] + *(int *)(in_EAX + 0x14c) + (uint)CARRY4(uVar2,uVar4);
    lVar5 = __allmul(*(undefined4 *)(*(int *)(in_EAX + 0x1d4) + 0xd0),
                     *(undefined4 *)(*(int *)(in_EAX + 0x1d4) + 0xd4),
                     *(undefined4 *)(in_EAX + 0x148),*(undefined4 *)(in_EAX + 0x14c));
    uVar4 = (uint)(lVar5 >> 0xf);
    puVar1 = unaff_ESI + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    unaff_ESI[3] = unaff_ESI[3] + (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) +
                   (uint)CARRY4(uVar2,uVar4);
    lVar5 = __allmul(*(undefined4 *)(*(int *)(in_EAX + 0x1d4) + 0xd8),
                     *(undefined4 *)(*(int *)(in_EAX + 0x1d4) + 0xdc),
                     *(undefined4 *)(in_EAX + 0x148),*(undefined4 *)(in_EAX + 0x14c));
    uVar4 = (uint)(lVar5 >> 0xf);
    puVar1 = unaff_ESI + 4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    unaff_ESI[5] = unaff_ESI[5] + (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) +
                   (uint)CARRY4(uVar2,uVar4);
  }
  return;
}

