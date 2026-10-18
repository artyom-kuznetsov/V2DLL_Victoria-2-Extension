// FUN_004d2ff0 @ 004d2ff0 body=[[004d2ff0, 004d3005] [004d3010, 004d30a2]]


void FUN_004d2ff0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  uint *unaff_EDI;
  longlong lVar5;
  
  for (iVar3 = *(int *)(in_EAX + 0x60); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x224)) {
    if (param_1 == *(int *)(*(int *)(*(int *)(iVar3 + 0x18) + 300) + 0x80)) {
      uVar4 = *(uint *)(iVar3 + 0xd8);
      uVar2 = *unaff_EDI;
      *unaff_EDI = *unaff_EDI + uVar4;
      unaff_EDI[1] = unaff_EDI[1] + *(int *)(iVar3 + 0xdc) + (uint)CARRY4(uVar2,uVar4);
      lVar5 = __allmul(*(undefined4 *)(iVar3 + 0x1e8),*(undefined4 *)(iVar3 + 0x1ec),
                       *(undefined4 *)(iVar3 + 0xd8),*(undefined4 *)(iVar3 + 0xdc));
      uVar4 = (uint)(lVar5 >> 0xf);
      puVar1 = unaff_EDI + 2;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar4;
      unaff_EDI[3] = unaff_EDI[3] + (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) +
                     (uint)CARRY4(uVar2,uVar4);
      lVar5 = __allmul(*(undefined4 *)(iVar3 + 0x1f0),*(undefined4 *)(iVar3 + 500),
                       *(undefined4 *)(iVar3 + 0xd8),*(undefined4 *)(iVar3 + 0xdc));
      uVar4 = (uint)(lVar5 >> 0xf);
      puVar1 = unaff_EDI + 4;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar4;
      unaff_EDI[5] = unaff_EDI[5] + (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) +
                     (uint)CARRY4(uVar2,uVar4);
    }
  }
  return;
}

