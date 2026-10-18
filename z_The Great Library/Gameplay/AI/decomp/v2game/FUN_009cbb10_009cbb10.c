// FUN_009cbb10 @ 009cbb10 body=[[009cbb10, 009cbd95]]


void FUN_009cbb10(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int in_ECX;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [20];
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))();
  if (iVar2 != 3) {
    iVar2 = (**(code **)(*(int *)(in_ECX + 0x54) + 0x18))(auStack_18);
    iVar2 = *(int *)(iVar2 + 8);
    FUN_00401000(DAT_00f141c8);
    iVar3 = FUN_00b31c00();
    if (iVar2 == iVar3) {
      uVar8 = __allmul(iVar2,iVar2 >> 0x1f,10000,0);
      iVar2 = __alldiv(uVar8,1000,0);
    }
    cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 0xa4) + 0x28))();
    if (cVar1 != '\0') {
      FUN_00401000(((float)*(int *)(in_ECX + 0x20c) * 10.0 + 0.0005) * 1000.0);
      iVar3 = FUN_00b31c00();
      iVar2 = __alldiv((longlong)iVar3 * (longlong)iVar2,1000,0);
    }
    cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 0xa4) + 0x30))();
    if (cVar1 != '\0') {
      FUN_00401000(((float)*(int *)(in_ECX + 0x210) * 100.0 + 0.0005) * 1000.0);
      iVar3 = FUN_00b31c00();
      __alldiv((longlong)iVar3 * (longlong)iVar2,1000,0);
    }
    if ((*(int *)(in_ECX + 0x70) == 4) || (*(int *)(in_ECX + 0x70) == 10)) {
      if (*(short *)(in_ECX + 0x244) == 0) {
        FUN_009cc770();
        if (*(short *)(in_ECX + 0x244) == 0) {
          iVar2 = FUN_009caed0(&stack0xffffffdc,*(undefined4 *)(in_ECX + 0x228));
          uVar7 = *(undefined4 *)(iVar2 + 4);
          fVar6 = *(float *)(in_ECX + 0xa4);
        }
        else {
          puVar4 = (undefined4 *)FUN_009caed0(auStack_1c,*(undefined4 *)(in_ECX + 0x228));
          uVar7 = *puVar4;
          fVar6 = *(float *)(in_ECX + 0xa4);
        }
      }
      else {
        FUN_009cc770();
        if (*(short *)(in_ECX + 0x244) == 0) {
          iVar2 = FUN_009caed0(auStack_1c,*(undefined4 *)(in_ECX + 0x228));
          fVar6 = *(float *)(iVar2 + 4);
        }
        else {
          pfVar5 = (float *)FUN_009caed0(&stack0xffffffdc,*(undefined4 *)(in_ECX + 0x228));
          fVar6 = *pfVar5;
        }
        fVar6 = (float)((int)fVar6 & 0xffff);
        uVar7 = *(undefined4 *)(in_ECX + 0xa8);
      }
      *(float *)(in_ECX + 0xa4) = fVar6;
      *(undefined4 *)(in_ECX + 0xa8) = uVar7;
      FUN_009ccd10(fVar6,uVar7);
      *(undefined4 *)(in_ECX + 0x70) = 10;
    }
    if (*(int *)(in_ECX + 0x70) == 2) {
      *(undefined4 *)(in_ECX + 0x70) = 10;
    }
  }
  return;
}

