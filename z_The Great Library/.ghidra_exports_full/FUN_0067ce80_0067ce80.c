// FUN_0067ce80 @ 0067ce80 body=[[0067ce80, 0067d396]]


void FUN_0067ce80(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined4 unaff_ESI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b3a40e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((DAT_013f19a8 & 1) == 0) {
    DAT_013f19a8 = DAT_013f19a8 | 1;
    local_c = 0;
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0x118))(&DAT_013f19a0);
  }
  local_c = 0xffffffff;
  iVar1 = in_ECX[0x43];
  if (((((float)in_ECX[0x44] == *(float *)(iVar1 + 0x33c)) &&
       ((float)in_ECX[0x45] == *(float *)(iVar1 + 0x340))) &&
      ((float)in_ECX[0x46] == *(float *)(iVar1 + 0x348))) &&
     ((pfVar5 = (float *)(**(code **)(*in_ECX + 0x118))(&fStack_28), DAT_013f19a0 == *pfVar5 &&
      (DAT_013f19a4 == pfVar5[1])))) {
    ExceptionList = pvStack_14;
    return;
  }
  iVar1 = in_ECX[0x43];
  in_ECX[0x44] = *(int *)(iVar1 + 0x33c);
  in_ECX[0x45] = *(int *)(iVar1 + 0x340);
  in_ECX[0x46] = *(int *)(iVar1 + 0x348);
  puVar6 = (undefined4 *)(**(code **)(*in_ECX + 0x118))(&fStack_28);
  DAT_013f19a0 = (float)*puVar6;
  DAT_013f19a4 = (float)puVar6[1];
  *(undefined4 *)(in_ECX[0x49] + 0x1114) = 0;
  *(undefined4 *)(in_ECX[0x4a] + 0x1114) = 0;
  fStack_2c = (float)in_ECX[0x44] / (float)in_ECX[0x47];
  fStack_28 = (float)in_ECX[0x45] / (float)in_ECX[0x48];
  (**(code **)(*in_ECX + 0xf4))(&stack0xffffffcc);
  fStack_2c = fStack_2c * (float)(int)(short)((uint)unaff_ESI >> 0x10);
  (**(code **)(*in_ECX + 0xf4))(&stack0xffffffcc);
  pfVar5 = (float *)(**(code **)(*in_ECX + 0x118))(&fStack_2c);
  fVar9 = *pfVar5;
  fVar10 = pfVar5[1];
  iVar1 = in_ECX[0x43];
  iVar2 = in_ECX[0x49];
  fVar3 = (float)(int)((*(float *)(iVar1 + 0x348) /
                       ((float)*(int *)(iVar1 + 0x350) - (float)*(int *)(iVar1 + 0x34c))) * 820.0 +
                      80.0) * 0.1 * 0.25;
  fVar4 = (float)(int)((*(float *)(iVar1 + 0x348) /
                       ((float)*(int *)(iVar1 + 0x350) - (float)*(int *)(iVar1 + 0x34c))) * 1230.0 +
                      70.0) * 0.1 * 0.25;
  fVar7 = (float)(int)((fVar9 + fStack_28) - fVar4);
  fVar8 = (float)(int)((fVar10 + fStack_24) - fVar3);
  iVar1 = *(int *)(iVar2 + 0x1114);
  *(float *)(iVar2 + 0x174 + iVar1 * 8) = fVar7;
  *(float *)(iVar2 + 0x178 + iVar1 * 8) = fVar8;
  *(int *)(iVar2 + 0x1114) = *(int *)(iVar2 + 0x1114) + 1;
  iVar1 = in_ECX[0x49];
  fVar10 = (float)(int)(fVar3 + fVar10 + fStack_24);
  iVar2 = *(int *)(iVar1 + 0x1114);
  *(float *)(iVar1 + 0x174 + iVar2 * 8) = fVar7;
  *(float *)(iVar1 + 0x178 + iVar2 * 8) = fVar10;
  *(int *)(iVar1 + 0x1114) = *(int *)(iVar1 + 0x1114) + 1;
  iVar1 = in_ECX[0x49];
  fVar9 = (float)(int)(fVar4 + fVar9 + fStack_28);
  iVar2 = *(int *)(iVar1 + 0x1114);
  *(float *)(iVar1 + 0x174 + iVar2 * 8) = fVar9;
  *(float *)(iVar1 + 0x178 + iVar2 * 8) = fVar10;
  *(int *)(iVar1 + 0x1114) = *(int *)(iVar1 + 0x1114) + 1;
  iVar1 = in_ECX[0x49];
  iVar2 = *(int *)(iVar1 + 0x1114);
  *(float *)(iVar1 + 0x174 + iVar2 * 8) = fVar9;
  *(float *)(iVar1 + 0x178 + iVar2 * 8) = fVar8;
  *(int *)(iVar1 + 0x1114) = *(int *)(iVar1 + 0x1114) + 1;
  iVar1 = in_ECX[0x49];
  iVar2 = *(int *)(iVar1 + 0x1114);
  *(float *)(iVar1 + 0x174 + iVar2 * 8) = fVar7;
  *(float *)(iVar1 + 0x178 + iVar2 * 8) = fVar8;
  *(int *)(iVar1 + 0x1114) = *(int *)(iVar1 + 0x1114) + 1;
  ExceptionList = pvStack_14;
  return;
}

