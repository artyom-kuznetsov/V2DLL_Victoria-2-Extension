// FUN_00a31150 @ 00a31150 body=[[00a31150, 00a312c0]]


bool FUN_00a31150(short *param_1,ushort param_2)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int unaff_EBX;
  int unaff_EDI;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *local_3c [3];
  int local_30 [11];
  
  uVar1 = *(uint *)(in_ECX + 0x100);
  if (uVar1 == 0xffffffff) {
    local_3c[0] = (int *)0x0;
  }
  else if (uVar1 < 10000) {
    local_3c[0] = *(int **)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x44));
  }
  else {
    local_3c[0] = (int *)0x0;
  }
  piVar6 = local_3c[0];
  iVar10 = 0;
  iVar9 = 0;
  piVar8 = local_3c[0];
  (**(code **)(*local_3c[0] + 0x4c))(local_3c[0],0,local_30,0,0x10);
  (**(code **)(*piVar6 + 0x44))(piVar6,0,local_3c);
  if (unaff_EDI == 0x33545844) {
    uVar2 = (uint)param_1[1];
    uVar5 = (uint)*param_1;
    uVar1 = uVar2 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = uVar5 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = uVar3 + uVar1 * 4;
    uVar1 = uVar3 & 0x80000001;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
    }
    bVar4 = *(byte *)((int)uVar3 / 2 + iVar9 +
                     (((((uint)param_2 * local_30[0]) / *(uint *)(in_ECX + 0xf0)) *
                       ((int)(uVar2 + ((int)uVar2 >> 0x1f & 3U)) >> 2) >> 2) +
                     ((int)(uVar5 + ((int)uVar5 >> 0x1f & 3U)) >> 2)) * 0x10);
    piVar6 = piVar8;
    if (bVar7) {
      bVar4 = bVar4 & 0xf;
    }
    else {
      bVar4 = bVar4 >> 4;
    }
  }
  else {
    if (*(uint *)(in_ECX + 0x100) < 10000) {
      iVar9 = *(int *)(*(uint *)(in_ECX + 0x100) * 0x2c + 0x17c + *(int *)(in_ECX + 0x8c));
    }
    else {
      iVar9 = 0;
    }
    bVar4 = *(byte *)(param_1[1] * iVar10 + unaff_EBX + 3 +
                     ((int)((uint)param_2 * iVar9) / *(int *)(in_ECX + 0xf0) + (int)*param_1) * 4);
  }
  (**(code **)(*piVar6 + 0x50))(piVar6,0);
  return bVar4 == 0;
}

