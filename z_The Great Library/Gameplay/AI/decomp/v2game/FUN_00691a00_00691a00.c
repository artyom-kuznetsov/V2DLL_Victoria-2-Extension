// FUN_00691a00 @ 00691a00 body=[[00691a00, 00691b2d]]


void FUN_00691a00(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    iVar2 = *param_4;
    if (*(char *)(iVar1 + 0x12d0) == '\0') {
LAB_00691a4b:
      if (*(char *)(iVar2 + 0x12d0) != '\0') break;
LAB_00691a58:
      uVar4 = *(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0);
      uVar9 = __alldiv(uVar4 * 0x40000000,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
      uVar4 = *(uint *)(iVar2 + 0x1a0);
      uVar7 = uVar4 + (uint)uVar9;
      iVar8 = *(int *)(iVar2 + 0x1a4);
      uVar5 = *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0);
      uVar10 = __alldiv(uVar5 * 0x40000000,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
      uVar5 = *(uint *)(iVar1 + 0x1a0) + (uint)uVar10;
      iVar6 = *(int *)(iVar1 + 0x19c) +
              *(int *)(iVar1 + 0x1a4) + (int)((ulonglong)uVar10 >> 0x20) +
              (uint)CARRY4(*(uint *)(iVar1 + 0x1a0),(uint)uVar10) +
              (uint)CARRY4(*(uint *)(iVar1 + 0x198),uVar5);
      iVar8 = *(int *)(iVar2 + 0x19c) +
              iVar8 + (int)((ulonglong)uVar9 >> 0x20) + (uint)CARRY4(uVar4,(uint)uVar9) +
              (uint)CARRY4(*(uint *)(iVar2 + 0x198),uVar7);
      if ((iVar6 < iVar8) ||
         ((iVar6 <= iVar8 && (*(uint *)(iVar1 + 0x198) + uVar5 <= *(uint *)(iVar2 + 0x198) + uVar7))
         )) break;
    }
    else if (*(char *)(iVar2 + 0x12d0) != '\0') {
      if (*(char *)(iVar1 + 0x12d0) == '\0') goto LAB_00691a4b;
      goto LAB_00691a58;
    }
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar3;
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

