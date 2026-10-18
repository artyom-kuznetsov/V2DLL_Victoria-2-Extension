// FUN_009de530 @ 009de530 body=[[009de530, 009deb07]]


void FUN_009de530(void)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  int unaff_EDI;
  
  iVar17 = *(int *)(unaff_EDI + 0x20c);
  uVar15 = *(int *)(unaff_EDI + 0x1fc) / iVar17;
  iVar3 = *(int *)(unaff_EDI + 0x200);
  uVar18 = (uint)*(ushort *)(unaff_EDI + 0x17e);
  fVar12 = (float)(int)uVar15 - (float)*(ushort *)(unaff_EDI + 0x17a);
  uVar2 = *(ushort *)(unaff_EDI + 0x17c);
  fVar8 = (float)iVar3 - (float)*(ushort *)(unaff_EDI + 0x180);
  fVar7 = (float)uVar18 / (float)*(int *)(unaff_EDI + 0x204);
  iVar4 = *(int *)(unaff_EDI + 0x208);
  fVar9 = (float)*(ushort *)(unaff_EDI + 0x180) / (float)iVar4;
  if (iVar17 < 2) {
    iVar17 = 1;
  }
  fVar10 = ((float)(int)(*(int *)(unaff_EDI + 0x1fc) - (uint)*(ushort *)(unaff_EDI + 0x17a)) /
            (float)*(int *)(unaff_EDI + 0x204) - fVar7) / (float)iVar17;
  *(float *)(unaff_EDI + 0x2f4) = fVar10;
  uVar5 = DAT_00f092fc;
  if (((0.0 < fVar8) && (0.0 < fVar12)) && (uVar15 != uVar18 && -1 < (int)(uVar15 - uVar18))) {
    uVar13 = CONCAT44((float)uVar2,(float)uVar18);
    *(undefined8 *)(unaff_EDI + 0x230) = uVar13;
    *(undefined4 *)(unaff_EDI + 0x238) = uVar5;
    puVar16 = (undefined8 *)FUN_009de010(uVar13,uVar5,*(undefined4 *)(unaff_EDI + 0xf4));
    *(undefined8 *)(unaff_EDI + 0x230) = *puVar16;
    uVar5 = *(undefined4 *)(puVar16 + 1);
    *(float *)(unaff_EDI + 0x23c) = fVar7;
    fVar11 = fVar9 + ((float)(int)(iVar3 - (uint)uVar2) / (float)iVar4 - fVar9);
    *(float *)(unaff_EDI + 0x240) = fVar11;
    *(undefined4 *)(unaff_EDI + 0x238) = uVar5;
    fVar1 = *(float *)(unaff_EDI + 0x2f8);
    *(float *)(unaff_EDI + 0x2f8) = *(float *)(unaff_EDI + 0x230);
    *(float *)(unaff_EDI + 0x300) =
         (fVar1 - *(float *)(unaff_EDI + 0x230)) + *(float *)(unaff_EDI + 0x300);
    fVar1 = *(float *)(unaff_EDI + 0x2fc);
    *(float *)(unaff_EDI + 0x2fc) = *(float *)(unaff_EDI + 0x234);
    *(float *)(unaff_EDI + 0x304) =
         (fVar1 - *(float *)(unaff_EDI + 0x234)) + *(float *)(unaff_EDI + 0x304);
    uVar6 = DAT_00f092fc;
    uVar5 = *(undefined4 *)(unaff_EDI + 0xf4);
    fVar8 = fVar8 - 1.0;
    uVar13 = CONCAT44(fVar8,(float)*(ushort *)(unaff_EDI + 0x17e));
    *(undefined8 *)(unaff_EDI + 0x244) = uVar13;
    *(undefined4 *)(unaff_EDI + 0x24c) = uVar6;
    puVar16 = (undefined8 *)FUN_009de010(uVar13,uVar6,uVar5);
    *(undefined8 *)(unaff_EDI + 0x244) = *puVar16;
    uVar6 = *(undefined4 *)(puVar16 + 1);
    *(float *)(unaff_EDI + 0x250) = fVar7;
    *(float *)(unaff_EDI + 0x254) = fVar9;
    uVar14 = DAT_00f092fc;
    fVar12 = fVar12 - 1.0;
    *(undefined4 *)(unaff_EDI + 0x24c) = uVar6;
    uVar13 = CONCAT44(fVar8,fVar12);
    *(undefined8 *)(unaff_EDI + 600) = uVar13;
    *(undefined4 *)(unaff_EDI + 0x260) = uVar14;
    puVar16 = (undefined8 *)FUN_009de010(uVar13,uVar14,uVar5);
    *(undefined8 *)(unaff_EDI + 600) = *puVar16;
    uVar5 = *(undefined4 *)(puVar16 + 1);
    *(float *)(unaff_EDI + 0x264) = fVar10 + fVar7;
    *(float *)(unaff_EDI + 0x268) = fVar9;
    *(undefined4 *)(unaff_EDI + 0x260) = uVar5;
    *(float *)(unaff_EDI + 0x300) = *(float *)(unaff_EDI + 600) - *(float *)(unaff_EDI + 0x2f8);
    *(float *)(unaff_EDI + 0x304) = *(float *)(unaff_EDI + 0x25c) - *(float *)(unaff_EDI + 0x2fc);
    uVar5 = DAT_00f092fc;
    uVar13 = CONCAT44((float)*(ushort *)(unaff_EDI + 0x17c),fVar12);
    *(undefined8 *)(unaff_EDI + 0x26c) = uVar13;
    *(undefined4 *)(unaff_EDI + 0x274) = uVar5;
    puVar16 = (undefined8 *)FUN_009de010(uVar13,uVar5,*(undefined4 *)(unaff_EDI + 0xf4));
    *(undefined8 *)(unaff_EDI + 0x26c) = *puVar16;
    *(undefined4 *)(unaff_EDI + 0x274) = *(undefined4 *)(puVar16 + 1);
    *(float *)(unaff_EDI + 0x278) = fVar10 + fVar7;
    *(float *)(unaff_EDI + 0x27c) = fVar11;
    FUN_009deb70();
    puVar16 = (undefined8 *)FUN_009f9d10();
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = *(undefined8 *)(unaff_EDI + 0x230);
      puVar16[1] = *(undefined8 *)(unaff_EDI + 0x238);
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(unaff_EDI + 0x240);
      *(undefined8 *)((int)puVar16 + 0x14) = *(undefined8 *)(unaff_EDI + 0x244);
      *(undefined8 *)((int)puVar16 + 0x1c) = *(undefined8 *)(unaff_EDI + 0x24c);
      *(undefined4 *)((int)puVar16 + 0x24) = *(undefined4 *)(unaff_EDI + 0x254);
      *(undefined8 *)((int)puVar16 + 0x3c) = *(undefined8 *)(unaff_EDI + 600);
      *(undefined8 *)((int)puVar16 + 0x44) = *(undefined8 *)(unaff_EDI + 0x260);
      *(undefined4 *)((int)puVar16 + 0x4c) = *(undefined4 *)(unaff_EDI + 0x268);
      puVar16[5] = *(undefined8 *)(unaff_EDI + 0x26c);
      puVar16[6] = *(undefined8 *)(unaff_EDI + 0x274);
      *(undefined4 *)(puVar16 + 7) = *(undefined4 *)(unaff_EDI + 0x27c);
      (**(code **)(**(int **)(unaff_EDI + 0x280) + 0x30))(*(int **)(unaff_EDI + 0x280));
      return;
    }
    FUN_009f9e70();
  }
  return;
}

