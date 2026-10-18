// FUN_004f53e0 @ 004f53e0 body=[[004f53e0, 004f549d]]


void FUN_004f53e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *unaff_ESI;
  uint uVar6;
  longlong lVar7;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x88 + in_EAX);
  iVar2 = *(int *)(in_EAX + 200);
  uVar3 = *(uint *)(iVar2 + uVar5 * 8);
  uVar6 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + uVar3;
  unaff_ESI[1] = unaff_ESI[1] + *(int *)(iVar2 + 4 + uVar5 * 8) + (uint)CARRY4(uVar6,uVar3);
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x88 + in_EAX);
  local_10 = *(uint *)(*(int *)(in_EAX + 200) + uVar6 * 8);
  local_c = *(int *)(*(int *)(in_EAX + 200) + 4 + uVar6 * 8);
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x30 + in_EAX);
  local_18 = *(uint *)(*(int *)(in_EAX + 0x70) + uVar6 * 8);
  local_14 = *(int *)(*(int *)(in_EAX + 0x70) + 4 + uVar6 * 8);
  if ((local_c < local_14) || ((local_c <= local_14 && (local_10 <= local_18)))) {
    puVar4 = &local_10;
  }
  else {
    puVar4 = &local_18;
  }
  uVar3 = *puVar4;
  puVar1 = unaff_ESI + 4;
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  unaff_ESI[5] = unaff_ESI[5] + puVar4[1] + (uint)CARRY4(uVar6,uVar3);
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x88 + in_EAX);
  lVar7 = __allmul(*(undefined4 *)(*(int *)(in_EAX + 200) + uVar6 * 8),
                   *(undefined4 *)(*(int *)(in_EAX + 200) + 4 + uVar6 * 8),
                   *(undefined4 *)(in_EAX + 0x1e0),*(undefined4 *)(in_EAX + 0x1e4));
  uVar3 = (uint)(lVar7 >> 0xf);
  puVar4 = unaff_ESI + 2;
  uVar6 = *puVar4;
  *puVar4 = *puVar4 + uVar3;
  unaff_ESI[3] = unaff_ESI[3] + (int)((ulonglong)(lVar7 >> 0xf) >> 0x20) + (uint)CARRY4(uVar6,uVar3)
  ;
  return;
}

