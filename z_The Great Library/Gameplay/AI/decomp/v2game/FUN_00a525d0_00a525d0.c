// FUN_00a525d0 @ 00a525d0 body=[[00a525d0, 00a52719] [00a52720, 00a5296c] [00a52970, 00a5299f]]


void FUN_00a525d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined4 uStack_80;
  int *piStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  int iStack_70;
  float *pfStack_6c;
  undefined8 *puStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  
  *(int *)(in_EAX + 0x1d8) = *(int *)(in_EAX + 0x178) - *(int *)(in_EAX + 0x174) >> 2;
  *(float *)(in_EAX + 0x1d0) = (float)*(int *)(**(int **)(in_EAX + 0x174) + 0x34);
  uStack_4c = 0;
  *(float *)(in_EAX + 0x1d4) =
       (float)((*(int *)(**(int **)(in_EAX + 0x174) + 0x40) -
                *(int *)(**(int **)(in_EAX + 0x174) + 0x3c) >> 2) / 9);
  iVar6 = **(int **)(in_EAX + 0x174);
  fStack_50 = (float)(in_EAX + 0x1c0);
  fStack_54 = 0.0;
  fStack_58 = 3.83956e-43;
  iStack_60 = ((*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) >> 2) / 9) *
              (*(int *)(in_EAX + 0x178) - (int)*(int **)(in_EAX + 0x174) >> 2) * 0x20;
  iStack_5c = 0x208;
  iStack_64 = *(int *)(in_EAX + 0xfc);
  puStack_68 = (undefined8 *)0xa5269f;
  (**(code **)(**(int **)(in_EAX + 0xfc) + 0x68))();
  puStack_68 = (undefined8 *)0x2000;
  pfStack_6c = &fStack_54;
  piStack_78 = *(int **)(in_EAX + 0x1c0);
  iStack_70 = ((*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) >> 2) / 9) *
              (*(int *)(in_EAX + 0x178) - *(int *)(in_EAX + 0x174) >> 2) * 0x20;
  uStack_74 = 0;
  piStack_7c = (int *)0xa526e8;
  (**(code **)(*piStack_78 + 0x2c))();
  iVar8 = *(int *)(in_EAX + 0x174);
  iStack_5c = 0;
  if (0 < (int)(*(int *)(in_EAX + 0x178) - iVar8 & 0xfffffffcU)) {
    do {
      iVar8 = *(int *)(iVar8 + iStack_5c * 4);
      iStack_64 = 0;
      if (0 < (*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2) / 9) {
        iVar9 = 0x10;
        do {
          iVar7 = *(int *)(iVar8 + 0x3c);
          fStack_54 = *(float *)(iVar7 + -0xc + iVar9);
          fStack_50 = *(float *)(iVar7 + -8 + iVar9);
          fStack_58 = -*(float *)(iVar7 + -0x10 + iVar9);
          if (*(float *)(in_EAX + 0x8c) < fStack_58) {
            *(float *)(in_EAX + 0x8c) = fStack_58;
          }
          if (*(float *)(in_EAX + 0x90) < fStack_54) {
            *(float *)(in_EAX + 0x90) = fStack_54;
          }
          if (*(float *)(in_EAX + 0x94) < fStack_50) {
            *(float *)(in_EAX + 0x94) = fStack_50;
          }
          if (fStack_58 < *(float *)(in_EAX + 0x98)) {
            *(float *)(in_EAX + 0x98) = fStack_58;
          }
          if (fStack_54 < *(float *)(in_EAX + 0x9c)) {
            *(float *)(in_EAX + 0x9c) = fStack_54;
          }
          if (fStack_50 < *(float *)(in_EAX + 0xa0)) {
            *(float *)(in_EAX + 0xa0) = fStack_50;
          }
          iVar7 = *(int *)(iVar8 + 0x3c);
          uVar1 = *(uint *)(iVar7 + iVar9);
          uStack_4c = uVar1 ^ 0x80000000;
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9);
          uVar3 = *(undefined4 *)(iVar7 + 8 + iVar9);
          uVar4 = *(undefined4 *)(iVar7 + 0xc + iVar9);
          fVar5 = *(float *)(iVar7 + 0x10 + iVar9);
          *puStack_68 = CONCAT44(fStack_54,fStack_58);
          puStack_68[1] = CONCAT44(uVar1,fStack_50) ^ 0x8000000000000000;
          puStack_68[2] = CONCAT44(uVar3,uVar2);
          *(undefined4 *)(puStack_68 + 3) = uVar4;
          *(float *)((int)puStack_68 + 0x1c) = 1.0 - fVar5;
          puStack_68 = puStack_68 + 4;
          iStack_64 = iStack_64 + 1;
          iVar9 = iVar9 + 0x24;
        } while (iStack_64 < (*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2) / 9);
      }
      iVar8 = *(int *)(in_EAX + 0x174);
      iStack_5c = iStack_5c + 1;
    } while (iStack_5c < *(int *)(in_EAX + 0x178) - iVar8 >> 2);
  }
  piStack_7c = *(int **)(in_EAX + 0x1c0);
  uStack_80 = 0xa52916;
  (**(code **)(*piStack_7c + 0x30))();
  uStack_80 = 0;
  puVar10 = (undefined4 *)(in_EAX + 0x1c4);
  puVar11 = (undefined2 *)((*(int *)(iVar6 + 0x28) - *(int *)(iVar6 + 0x24) >> 1) * 2);
  (**(code **)(**(int **)(in_EAX + 0xfc) + 0x6c))
            (*(int **)(in_EAX + 0xfc),puVar11,0x208,0x65,0,puVar10);
  (**(code **)(*(int *)*puVar10 + 0x2c))((int *)*puVar10,0,0,&uStack_80,0x2000);
  iVar8 = *(int *)(iVar6 + 0x24);
  iVar9 = 0;
  if (0 < (int)(*(int *)(iVar6 + 0x28) - iVar8 & 0xfffffffeU)) {
    do {
      *puVar11 = *(undefined2 *)(iVar8 + iVar9 * 2);
      puVar11 = puVar11 + 1;
      iVar8 = *(int *)(iVar6 + 0x24);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(iVar6 + 0x28) - iVar8 >> 1);
  }
  (**(code **)(*(int *)*puVar10 + 0x30))((int *)*puVar10);
  return;
}

