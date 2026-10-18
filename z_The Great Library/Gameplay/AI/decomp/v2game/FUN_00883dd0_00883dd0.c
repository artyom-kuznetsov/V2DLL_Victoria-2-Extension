// FUN_00883dd0 @ 00883dd0 body=[[00883dd0, 00883e85]]


void FUN_00883dd0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(in_ECX + 0xa4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
  lVar9 = __allmul(*(undefined4 *)(iVar3 + iVar4 * 8),*(undefined4 *)(iVar3 + 4 + iVar4 * 8),
                   *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  uVar6 = (uint)(lVar9 >> 0xf);
  iVar8 = (int)((ulonglong)(lVar9 >> 0xf) >> 0x20);
  iVar4 = iVar4 * 8;
  puVar7 = (uint *)(iVar4 + iVar3);
  uVar2 = *puVar7;
  *puVar7 = *puVar7 + -uVar6;
  piVar1 = (int *)(iVar4 + 4 + iVar3);
  *piVar1 = (*piVar1 - (iVar8 + (uint)(uVar6 != 0))) + (uint)CARRY4(uVar2,-uVar6);
  iVar3 = *(int *)(in_ECX + 0xa4);
  iVar5 = *(int *)(iVar4 + 4 + iVar3);
  if ((iVar5 < 1) && (iVar5 < 0)) {
    *(undefined4 *)(iVar4 + iVar3) = 0;
    *(undefined4 *)(iVar4 + 4 + iVar3) = 0;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x50) * 8;
  puVar7 = (uint *)(*(int *)(in_ECX + 0xa4) + iVar5);
  uVar2 = *puVar7;
  *puVar7 = *puVar7 + uVar6;
  puVar7[1] = puVar7[1] + iVar8 + (uint)CARRY4(uVar2,uVar6);
  iVar4 = *(int *)(in_ECX + 0xa4);
  iVar3 = *(int *)(iVar5 + 4 + iVar4);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    *(undefined4 *)(iVar5 + iVar4) = 0;
    *(undefined4 *)(iVar5 + 4 + iVar4) = 0;
  }
  FUN_004be780(in_ECX + 0x9c);
  return;
}

