// FUN_00a2e710 @ 00a2e710 body=[[00a2e710, 00a2e726] [00a2e730, 00a2e8a1]]


void FUN_00a2e710(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *local_8;
  
  local_8 = (float *)&DAT_01255ea0;
  pfVar6 = (float *)&DAT_012576b8;
  iVar8 = 0;
  do {
    iVar5 = iVar8;
    pfVar9 = local_8;
    (&DAT_01254e90)[iVar5] = iVar5;
    uVar2 = FUN_00ab047b();
    uVar2 = uVar2 & 0x800001ff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffe00) + 1;
    }
    (&DAT_01255698)[iVar5] = (float)(int)(uVar2 - 0x100) * 0.00390625;
    iVar8 = 2;
    do {
      uVar2 = FUN_00ab047b();
      uVar2 = uVar2 & 0x800001ff;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffe00) + 1;
      }
      *pfVar6 = (float)(int)(uVar2 - 0x100) * 0.00390625;
      pfVar6 = pfVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    local_8 = (float *)0x3;
    do {
      uVar2 = FUN_00ab047b();
      uVar2 = uVar2 & 0x800001ff;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffe00) + 1;
      }
      *pfVar9 = (float)(int)(uVar2 - 0x100) * 0.00390625;
      pfVar9 = pfVar9 + 1;
      local_8 = (float *)((int)local_8 + -1);
    } while (local_8 != (float *)0x0);
    iVar8 = iVar5 + 1;
    local_8 = pfVar9;
  } while ((int)pfVar6 < 0x1257eb8);
  while (iVar5 != 0) {
    uVar1 = (&DAT_01254e90)[iVar5];
    uVar2 = FUN_00ab047b();
    uVar2 = uVar2 & 0x800000ff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
    }
    iVar5 = iVar5 + -1;
    (&DAT_01254e94)[iVar5] = (&DAT_01254e90)[uVar2];
    (&DAT_01254e90)[uVar2] = uVar1;
  }
  puVar7 = &DAT_01255698;
  puVar10 = &DAT_01255a98;
  for (iVar8 = 0x102; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar7 = &DAT_01254e90;
  puVar10 = &DAT_01255290;
  for (iVar8 = 0x102; puVar3 = &DAT_01256aa0, puVar4 = &DAT_01257eb8, iVar8 != 0; iVar8 = iVar8 + -1
      ) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  do {
    puVar7 = puVar4 + 2;
    *puVar4 = puVar4[-0x200];
    puVar4[1] = puVar4[-0x1ff];
    *puVar3 = puVar3[-0x300];
    puVar3[1] = puVar3[-0x2ff];
    puVar3[2] = puVar3[-0x2fe];
    puVar3 = puVar3 + 3;
    puVar4 = puVar7;
  } while ((int)puVar7 < 0x12586c8);
  return;
}

