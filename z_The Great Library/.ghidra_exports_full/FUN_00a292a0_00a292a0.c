// FUN_00a292a0 @ 00a292a0 body=[[00a292a0, 00a2942c]]


undefined4 FUN_00a292a0(short *param_1,ushort param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_30 [6];
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(char *)(in_ECX + 0x178) != '\0') || (*(int *)(in_ECX + 0x168) == 0)) {
    return 1;
  }
  if (*(char *)(in_ECX + 0x170) == '\0') {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (*(uint *)(in_ECX + 0x94) < (uint)param_2) {
    param_2 = *(ushort *)(in_ECX + 0x94);
  }
  (**(code **)(**(int **)(in_ECX + 0x168) + 0x4c))(*(int **)(in_ECX + 0x168),0,&local_10,0,0x10);
  local_8 = local_c;
  (**(code **)(**(int **)(in_ECX + 0x168) + 0x44))(*(int **)(in_ECX + 0x168),0,local_30);
  if (local_30[0] == 0x33545844) {
    uVar4 = (uint)param_1[1];
    uVar6 = (uint)*param_1;
    uVar5 = uVar4 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = uVar6 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = uVar3 + uVar5 * 4;
    uVar5 = uVar3 & 0x80000001;
    bVar7 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar7 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    bVar2 = *(byte *)((int)uVar3 / 2 + local_8 +
                     (((((uint)param_2 * local_18) / *(uint *)(in_ECX + 0x94)) *
                       ((int)(uVar4 + ((int)uVar4 >> 0x1f & 3U)) >> 2) >> 2) +
                     ((int)(uVar6 + ((int)uVar6 >> 0x1f & 3U)) >> 2)) * 0x10);
    if (bVar7) {
      bVar2 = bVar2 & 0xf;
    }
    else {
      bVar2 = bVar2 >> 4;
    }
  }
  else {
    if (local_30[0] == 0x31545844) {
      return 0;
    }
    if (local_30[0] == 0x35545844) {
      return 0;
    }
    bVar2 = *(byte *)(param_1[1] * local_10 + local_c + 3 +
                     (((param_2 - 1) * *(int *)(in_ECX + 0xa4)) / *(uint *)(in_ECX + 0x94) +
                     (int)*param_1) * 4);
  }
  piVar1 = *(int **)(in_ECX + 0x168);
  if (bVar2 != 0) {
    (**(code **)(*piVar1 + 0x50))(piVar1,0);
    return 0;
  }
  (**(code **)(*piVar1 + 0x50))();
  return 1;
}

