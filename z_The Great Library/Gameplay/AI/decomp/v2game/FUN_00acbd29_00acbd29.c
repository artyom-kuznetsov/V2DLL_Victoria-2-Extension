// FUN_00acbd29 @ 00acbd29 body=[[00acbd29, 00acbf0c]]


void FUN_00acbd29(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short local_8;
  
  puVar4 = param_3;
  uVar8 = 0;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    uVar5 = 0;
    param_3 = (uint *)0x0;
    do {
      uVar9 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      bVar3 = false;
      uVar6 = (uVar8 * 2 | uVar5 >> 0x1f) * 2 | (uVar5 & 0x7fffffff) >> 0x1e;
      uVar5 = uVar5 * 4;
      uVar8 = ((int)param_3 * 2 | uVar8 >> 0x1f) * 2 | (uVar8 & 0x7fffffff) >> 0x1e;
      uVar7 = uVar9 + uVar5;
      *puVar4 = uVar5;
      puVar4[1] = uVar6;
      puVar4[2] = uVar8;
      if ((uVar7 < uVar5) || (uVar7 < uVar9)) {
        bVar3 = true;
      }
      *puVar4 = uVar7;
      uVar5 = uVar6;
      if (bVar3) {
        bVar3 = false;
        uVar5 = uVar6 + 1;
        if ((uVar5 < uVar6) || (uVar5 == 0)) {
          bVar3 = true;
        }
        puVar4[1] = uVar5;
        if (bVar3) {
          uVar8 = uVar8 + 1;
          puVar4[2] = uVar8;
        }
      }
      bVar3 = false;
      uVar9 = uVar5 + uVar1;
      if ((uVar9 < uVar5) || (uVar9 < uVar1)) {
        bVar3 = true;
      }
      puVar4[1] = uVar9;
      if (bVar3) {
        uVar8 = uVar8 + 1;
        puVar4[2] = uVar8;
      }
      bVar3 = false;
      param_3 = (uint *)((uVar8 + uVar2) * 2 | uVar9 >> 0x1f);
      uVar8 = uVar7 * 2;
      uVar9 = uVar9 * 2 | uVar7 >> 0x1f;
      puVar4[2] = (uint)param_3;
      *puVar4 = uVar8;
      puVar4[1] = uVar9;
      uVar5 = uVar8 + (int)*param_1;
      if ((uVar5 < uVar8) || (uVar5 < (uint)(int)*param_1)) {
        bVar3 = true;
      }
      *puVar4 = uVar5;
      uVar8 = uVar9;
      if (bVar3) {
        uVar8 = uVar9 + 1;
        bVar3 = false;
        if ((uVar8 < uVar9) || (uVar8 == 0)) {
          bVar3 = true;
        }
        puVar4[1] = uVar8;
        if (bVar3) {
          param_3 = (uint *)((int)param_3 + 1);
          puVar4[2] = (uint)param_3;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      puVar4[1] = uVar8;
      puVar4[2] = (uint)param_3;
    } while (param_2 != 0);
  }
  if (puVar4[2] == 0) {
    uVar8 = puVar4[1];
    do {
      local_8 = local_8 + -0x10;
      uVar5 = uVar8 >> 0x10;
      uVar8 = uVar8 << 0x10 | *puVar4 >> 0x10;
      puVar4[1] = uVar8;
      *puVar4 = *puVar4 << 0x10;
    } while (uVar5 == 0);
    puVar4[2] = uVar5;
  }
  uVar8 = puVar4[2];
  if ((uVar8 & 0x8000) == 0) {
    uVar5 = puVar4[1];
    do {
      local_8 = local_8 + -1;
      uVar9 = uVar8 * 2;
      uVar8 = uVar9 | uVar5 >> 0x1f;
      uVar5 = uVar5 * 2 | *puVar4 >> 0x1f;
      *puVar4 = *puVar4 * 2;
      puVar4[1] = uVar5;
      puVar4[2] = uVar8;
    } while ((uVar9 & 0x8000) == 0);
  }
  *(short *)((int)puVar4 + 10) = local_8;
  return;
}

