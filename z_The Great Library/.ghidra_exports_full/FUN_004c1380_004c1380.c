// FUN_004c1380 @ 004c1380 body=[[004c1380, 004c1771]]


void FUN_004c1380(int param_1)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  double dVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 in_stack_ffffffc8;
  undefined4 uVar11;
  undefined4 local_10;
  int local_c;
  
  if (DAT_01258734 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == DAT_01258734 + 0x10) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) == DAT_012587f0 + 0x48) {
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  uVar11 = 0x4c13d3;
  FUN_004c19a0();
  iVar7 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar7 + 300) != *(int *)(iVar7 + 0x134)) {
    uVar11 = *(undefined4 *)(param_1 + 8);
    FUN_004ee150(param_1 + 0x10,uVar11,0,0x8000,0);
    FUN_004ee300(param_1 + 0x10,uVar11);
    FUN_004ee990();
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  if (((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) & 0xfffffff0U) == 0) &&
     (*(char *)(param_1 + 0xa8) != '\0')) {
    FUN_00408d50(DAT_00f1783c);
    FUN_004ef140(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),in_stack_ffffffc8
                 ,uVar11);
    *(undefined1 *)(param_1 + 0xa8) = 0;
    return;
  }
  iVar4 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  dVar8 = (double)iVar4 / 365.0;
  iVar7 = (*(int *)(iVar7 + 0x358) + -43800000) / 0x18;
  fVar3 = (float)iVar7 / 365.0;
  bVar2 = ((int)dVar8 * 0x16d + (iVar4 - (int)((float)(int)dVar8 * 365.0))) -
          ((int)fVar3 * 0x16d + (iVar7 - (int)((float)(int)fVar3 * 365.0))) < 0xe;
  local_c = 1000;
  if (bVar2) {
    local_c = 25000;
  }
  piVar1 = (int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x270) +
                  (uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 8) + 0x230 +
                                 *(int *)(DAT_012588e8 + 0xbcc)) * 8);
  iVar7 = piVar1[1];
  if ((iVar7 < 0) ||
     (((iVar7 < 1 && (*piVar1 == 0)) ||
      (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 0x3c) != '\0')))) {
    local_10 = 0x8000;
LAB_004c173f:
    local_c = 0;
  }
  else {
    uVar9 = __alldiv();
    iVar7 = (int)((ulonglong)uVar9 >> 0x20);
    puVar6 = (uint *)FUN_00408d50(0x3f866666);
    if (((int)puVar6[1] <= iVar7) && (((int)puVar6[1] < iVar7 || (*puVar6 < (uint)uVar9)))) {
      FUN_0043a5b0(*(undefined4 *)(*(int *)(DAT_012586dc + 0x10) + 0x60));
      lVar10 = __allmul();
      lVar10 = lVar10 >> 0xf;
      uVar11 = 0;
      goto LAB_004c174d;
    }
    FUN_00408d50(0x3f666666);
    cVar5 = FUN_0043a5e0();
    if (cVar5 == '\0') {
      FUN_00408d50(DAT_00f092fc);
      cVar5 = FUN_0043a5e0();
      if (cVar5 == '\0') {
        local_10 = 0;
        goto LAB_004c173f;
      }
      iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x5c);
    }
    else {
      iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x58);
    }
    uVar11 = __alldiv((longlong)iVar7 * (longlong)local_c,1000,0);
    FUN_0043a5b0(uVar11);
    if (!bVar2) {
      lVar10 = __allmul();
      local_10 = (undefined4)(lVar10 >> 0xf);
      local_c = (int)((ulonglong)(lVar10 >> 0xf) >> 0x20);
    }
  }
  lVar10 = CONCAT44(local_c,local_10);
  uVar11 = 1;
LAB_004c174d:
  FUN_004ef140(uVar11,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar10);
  return;
}

