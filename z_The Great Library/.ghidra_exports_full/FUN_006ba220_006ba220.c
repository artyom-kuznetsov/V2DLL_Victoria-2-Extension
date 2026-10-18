// FUN_006ba220 @ 006ba220 body=[[006ba220, 006ba734]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ba220(int *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined1 local_d8 [64];
  undefined4 local_98 [16];
  undefined4 local_58 [16];
  int *local_18;
  float local_14;
  undefined4 uStack_10;
  float local_c;
  
  piVar8 = param_1;
  FUN_009ae320(param_1[0x10b]);
  puVar1 = (undefined1 *)(*(int *)(piVar8[0x2d] + 0x124) + 0x3a28);
  FUN_007f7ce0(*(int *)(piVar8[0x2d] + 0x124) + 0x20bc,piVar8 + 0x2e,piVar8[0x10b],puVar1);
  bVar14 = DAT_012586da != '\0';
  *puVar1 = 0;
  if (bVar14) {
    DAT_012586da = '\0';
  }
  cVar9 = FUN_0099c370(piVar8[0x2b]);
  if (cVar9 != '\0') {
    DAT_01258a6c = 0;
    DAT_01258a70 = 0;
    (**(code **)(**(int **)(piVar8[0x2b] + 100) + 0xa4))(*(int **)(piVar8[0x2b] + 100));
    (**(code **)(**(int **)(piVar8[0x2b] + 100) + 0xac))
              (*(int **)(piVar8[0x2b] + 100),0,0,7,0xff000000,DAT_00f092fc,0);
    FUN_00645460(piVar8 + 0x2e,piVar8[0x10b]);
    iVar11 = *(int *)(piVar8[0x2b] + 0x6bc88);
    if (iVar11 != 0) {
      piVar4 = *(int **)(piVar8[0x2b] + 100);
      (**(code **)(*piVar4 + 0xe4))(piVar4,0xe,0);
      local_18 = (int *)(iVar11 + 0x1c);
      puVar10 = (undefined4 *)(**(code **)(*(int *)(iVar11 + 0x1c) + 0x16c))();
      puVar13 = local_98;
      for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar10 = (undefined4 *)(**(code **)(*local_18 + 0x174))();
      puVar13 = local_58;
      for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      D3DXMatrixMultiply(local_d8,local_98,local_58);
      D3DXCreateLine(*(undefined4 *)(piVar8[0x2b] + 100),&param_1);
      (**(code **)(*param_1 + 0x2c))(param_1,DAT_00f17b54);
      (**(code **)(*param_1 + 0x10))(param_1);
      if ((_DAT_013f3258 & 1) == 0) {
        _DAT_013f3258 = _DAT_013f3258 | 1;
        DAT_013f1984 = 0;
        DAT_013f1988 = 0;
        _DAT_013f198c = 0;
        _atexit((_func_4879 *)&LAB_00c81e60);
      }
      FUN_006bed40();
      FUN_00a284f0();
      uVar6 = DAT_00f092fc;
      iVar11 = 0;
      local_18 = (int *)(DAT_012636dc - DAT_012636d8 >> 3);
      if (3 < (int)local_18) {
        uStack_10 = DAT_00f092fc;
        iVar12 = 0;
        do {
          iVar7 = DAT_013f1984;
          iVar5 = *(int *)(DAT_012636d8 + iVar11 * 8 + 4);
          fVar3 = (float)piVar8[0xfe];
          *(ulonglong *)(DAT_013f1984 + iVar12) =
               CONCAT44(uVar6,(float)*(int *)(DAT_012636d8 + iVar11 * 8) - (float)piVar8[0xfd]);
          *(float *)(iVar7 + 8 + iVar12) = (float)iVar5 - fVar3;
          iVar7 = DAT_013f1984;
          fVar3 = (float)piVar8[0xfe];
          iVar5 = *(int *)(DAT_012636d8 + 0xc + iVar11 * 8);
          *(ulonglong *)(iVar12 + 0xc + DAT_013f1984) =
               CONCAT44(uVar6,(float)*(int *)(DAT_012636d8 + 8 + iVar11 * 8) - (float)piVar8[0xfd]);
          *(float *)(iVar12 + 0x14 + iVar7) = (float)iVar5 - fVar3;
          iVar7 = DAT_013f1984;
          fVar3 = (float)piVar8[0xfe];
          iVar5 = *(int *)(DAT_012636d8 + 0x14 + iVar11 * 8);
          *(ulonglong *)(iVar12 + 0x18 + DAT_013f1984) =
               CONCAT44(uVar6,(float)*(int *)(DAT_012636d8 + 0x10 + iVar11 * 8) -
                              (float)piVar8[0xfd]);
          *(float *)(iVar12 + iVar7 + 0x20) = (float)iVar5 - fVar3;
          local_14 = (float)*(int *)(DAT_012636d8 + 0x18 + iVar11 * 8) - (float)piVar8[0xfd];
          local_c = (float)*(int *)(DAT_012636d8 + 0x1c + iVar11 * 8) - (float)piVar8[0xfe];
          puVar2 = (undefined8 *)(iVar12 + 0x24 + DAT_013f1984);
          iVar11 = iVar11 + 4;
          iVar12 = iVar12 + 0x30;
          *puVar2 = CONCAT44(uVar6,local_14);
          *(float *)(puVar2 + 1) = local_c;
        } while (iVar11 < (int)local_18 + -3);
      }
      uVar6 = DAT_00f092fc;
      if (iVar11 < (int)local_18) {
        uStack_10 = DAT_00f092fc;
        iVar12 = iVar11 * 0xc;
        do {
          iVar5 = DAT_013f1984;
          local_14 = (float)*(int *)(DAT_012636d8 + iVar11 * 8) - (float)piVar8[0xfd];
          local_c = (float)*(int *)(DAT_012636d8 + iVar11 * 8 + 4) - (float)piVar8[0xfe];
          *(ulonglong *)(DAT_013f1984 + iVar12) = CONCAT44(uVar6,local_14);
          *(float *)(iVar5 + 8 + iVar12) = local_c;
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 0xc;
        } while (iVar11 < (int)local_18);
      }
      if (DAT_013f1984 != DAT_013f1988) {
        (**(code **)(*param_1 + 0x18))
                  (param_1,DAT_013f1984,(DAT_013f1988 - DAT_013f1984) / 0xc,local_d8,0xffffffff);
      }
      (**(code **)(*param_1 + 0x44))(param_1);
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0099a480();
      FUN_00999bb0();
      FUN_00999fa0();
      (**(code **)(**(int **)(piVar8[0x2b] + 100) + 0xa8))(*(int **)(piVar8[0x2b] + 100));
      iVar11 = piVar8[0x2b];
      *(int *)(iVar11 + 0x6bc8c) = *(int *)(iVar11 + 0x6bc8c) + 1;
      if (((*(char *)(iVar11 + 0x6bca0) != '\0') &&
          (iVar12 = (**(code **)(**(int **)(iVar11 + 100) + 0x44))(*(int **)(iVar11 + 100),0,0,0,0),
          iVar12 != 0)) && (iVar12 == -0x7789f798)) {
        *(undefined1 *)(iVar11 + 0x6bca0) = 0;
      }
    }
  }
  return;
}

