// FUN_007e6a00 @ 007e6a00 body=[[007e6a00, 007e6d0a]]


void FUN_007e6a00(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float fVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float fStack_94;
  int *piStack_90;
  undefined4 *puStack_8c;
  float fStack_88;
  undefined8 uStack_84;
  undefined4 *puStack_7c;
  float fStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  
  uStack_5c = 0;
  iStack_60 = in_ECX + 0x90;
  uStack_64 = 1;
  uStack_68 = 0x152;
  *(undefined4 *)(in_ECX + 0x9c) = 0x4e;
  *(undefined4 *)(in_ECX + 0x98) = 0x50;
  piStack_74 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  uStack_6c = 8;
  uStack_70 = 0xb40;
  fStack_78 = 1.1609407e-38;
  (**(code **)(*piStack_74 + 0x68))();
  piStack_90 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  fStack_78 = 0.0;
  uStack_84 = 2.1219958408659e-314;
  fStack_88 = 1.12104e-44;
  puStack_8c = (undefined4 *)0x1d4;
  fStack_94 = 1.160946e-38;
  puStack_7c = (undefined4 *)(in_ECX + 0x94);
  (**(code **)(*piStack_90 + 0x6c))();
  piVar1 = *(int **)(in_ECX + 0x94);
  iVar9 = 0;
  fStack_94 = 0.0;
  puVar11 = (undefined4 *)0x0;
  (**(code **)(*piVar1 + 0x2c))(piVar1,0,0);
  uVar7 = 0;
  do {
    puStack_8c = (undefined4 *)((uVar7 & 0xffff) + 0x28);
    *(short *)((int)fStack_94 + iVar9 * 2) = (short)puStack_8c;
    sVar5 = (short)uVar7;
    *(short *)((int)fStack_94 + 2 + iVar9 * 2) = sVar5;
    *(short *)((int)fStack_94 + 4 + iVar9 * 2) = sVar5 + 1;
    *(short *)((int)fStack_94 + 6 + iVar9 * 2) = sVar5 + 1;
    *(short *)((int)fStack_94 + 8 + iVar9 * 2) = sVar5 + 0x29;
    *(short *)((int)fStack_94 + 10 + iVar9 * 2) = (short)puStack_8c;
    uVar7 = uVar7 + 1;
    iVar9 = iVar9 + 6;
  } while ((int)uVar7 < 0x27);
  piVar1 = *(int **)(in_ECX + 0x94);
  (**(code **)(*piVar1 + 0x30))();
  fStack_88 = *(float *)(in_ECX + 0xa0);
  uStack_84 = (double)CONCAT44(*(float *)(in_ECX + 0xa4),(undefined4)uStack_84);
  puStack_7c = (undefined4 *)(*(float *)(in_ECX + 0xa4) / fStack_88);
  pfVar10 = &fStack_94;
  fVar4 = 1.0 - (float)puStack_7c;
  (**(code **)(*(int *)*puStack_8c + 0x2c))((int *)*puStack_8c,0,0,pfVar10,0);
  fVar2 = 2.0 - fStack_94;
  uStack_70 = 0x3c23d70a;
  iVar9 = 0;
  fVar3 = fStack_94 - 0.0;
  fVar6 = 0.0;
  do {
    piStack_74 = (int *)(((float)iVar9 * (float)piStack_90 + (1.0 - (float)pfVar10)) * fVar3 + 0.0 +
                        fVar2);
    fStack_88 = 1.0 - (float)iVar9;
    iVar8 = 0;
    fStack_94 = (float)((int)fVar6 + 0x5a0);
    do {
      puStack_8c = (undefined4 *)((float)iVar8 / 39.0);
      uStack_84 = (double)(float)puStack_8c;
      fStack_78 = (float)puStack_8c * (fVar4 * 0.5 - 0.0) + 0.0;
      iVar8 = iVar8 + 1;
      *(int *)((int)fVar6 + 0x18 + (int)piVar1) =
           (int)(longlong)ROUND(uStack_84 * uStack_84 * 255.0);
      *(ulonglong *)((int)piVar1 + (int)fVar6) = CONCAT44(piStack_74,fStack_78);
      *(undefined4 *)((int)piVar1 + (int)fVar6 + 8) = 0x3c23d70a;
      *(undefined4 **)((int)fVar6 + 0x1c + (int)piVar1) = puStack_8c;
      *(float *)((int)fVar6 + 0x20 + (int)piVar1) = fStack_88;
      fVar6 = (float)((int)fVar6 + 0x24);
    } while (iVar8 < 0x28);
    iVar9 = iVar9 + 1;
    fVar6 = fStack_94;
  } while (iVar9 < 2);
  (**(code **)(*(int *)*puVar11 + 0x30))((int *)*puVar11);
  return;
}

