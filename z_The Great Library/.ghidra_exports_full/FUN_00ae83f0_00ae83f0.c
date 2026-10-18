// FUN_00ae83f0 @ 00ae83f0 body=[[00ae83f0, 00ae8499]]


void FUN_00ae83f0(float param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  
  iVar1 = in_ECX[1];
  iVar6 = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar2 = *(uint *)(*in_ECX + 8 + iVar6);
    iVar5 = *in_ECX + iVar6;
    uVar4 = 0;
    if (3 < (int)uVar2) {
      do {
        iVar3 = *(int *)(*(int *)(iVar5 + 4) + uVar4 * 4);
        uVar4 = uVar4 + 4;
        *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0xc) + param_1;
        iVar3 = *(int *)(*(int *)(iVar5 + 4) + -0xc + uVar4 * 4);
        *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0xc) + param_1;
        iVar3 = *(int *)(*(int *)(iVar5 + 4) + -8 + uVar4 * 4);
        *(float *)(iVar3 + 0xc) = param_1 + *(float *)(iVar3 + 0xc);
        iVar3 = *(int *)(*(int *)(iVar5 + 4) + -4 + uVar4 * 4);
        *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0xc) + param_1;
      } while (uVar4 < uVar2 - 3);
    }
    for (; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      iVar3 = *(int *)(*(int *)(iVar5 + 4) + uVar4 * 4);
      *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0xc) + param_1;
    }
    iVar6 = iVar6 + 0x14;
  }
  FUN_00ae8350();
  return;
}

