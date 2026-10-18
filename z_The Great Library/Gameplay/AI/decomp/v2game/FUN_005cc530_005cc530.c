// FUN_005cc530 @ 005cc530 body=[[005cc530, 005cc63d] [005cc641, 005cc8a4] [005cc8ab, 005ccb3e] [005ccb42, 005ccb55]]


void FUN_005cc530(void)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  int *in_ECX;
  float *pfVar12;
  uint *puVar13;
  undefined4 uVar14;
  float local_70;
  int iStack_6c;
  float local_68;
  undefined8 uStack_64;
  uint auStack_5c [3];
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *pvStack_24;
  uint uStack_20;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4f0d8;
  local_14 = ExceptionList;
  if (in_ECX[0x42] == 0) {
    return;
  }
  puVar13 = (uint *)(in_ECX[0x42] + 0x74);
  ExceptionList = &local_14;
  *puVar13 = *puVar13 | 0x100;
  fVar1 = (float)in_ECX[0x37];
  pfVar12 = (float *)((int)fVar1 + 0xfc);
  pfVar11 = *(float **)((int)fVar1 + 0xfc);
  for (pfVar2 = pfVar11; local_68 = fVar1, pfVar2 != (float *)0x0; pfVar2 = (float *)pfVar2[2]) {
    if ((int *)*pfVar2 == in_ECX) {
      if ((pfVar11 == (float *)0x0) || ((int *)*pfVar11 == in_ECX)) goto LAB_005cc757;
      local_70 = *pfVar11;
      if (pfVar11 == (float *)0x0) goto LAB_005cc710;
      goto LAB_005cc705;
    }
  }
  goto LAB_005cc593;
  while (pfVar11 = (float *)pfVar11[2], pfVar11 != (float *)0x0) {
LAB_005cc705:
    if (*pfVar11 == local_70) break;
  }
LAB_005cc710:
  FUN_005f2ae0(pfVar11);
  fVar3 = *(float *)((int)fVar1 + 0x100);
  pfVar11 = (float *)FUN_00aae9af(0x10);
  if (pfVar11 == (float *)0x0) {
    pfVar11 = (float *)0x0;
  }
  else {
    *pfVar11 = local_70;
    pfVar11[1] = fVar3;
    pfVar11[2] = 0.0;
    *(undefined1 *)(pfVar11 + 3) = 0;
  }
  iVar8 = *(int *)((int)fVar1 + 0x104);
  *(float **)((int)fVar1 + 0x100) = pfVar11;
  *(int *)((int)fVar1 + 0x104) = iVar8 + 1;
  if (iVar8 == 0) {
    *pfVar12 = (float)pfVar11;
  }
  else {
    *(float **)((int)fVar3 + 8) = pfVar11;
  }
LAB_005cc757:
  FUN_004b6f20(in_ECX);
  while( true ) {
    iVar8 = *(int *)*pfVar12;
    (**(code **)(**(int **)(iVar8 + 0x108) + 0x58))(&local_70);
    if (*(int *)(iVar8 + 0xc4) == iStack_6c) break;
    local_68 = *(float *)(DAT_012587e4 + 4);
    iVar6 = *(int *)((int)local_68 + *(int *)(iVar8 + 0xc4) * 4);
    auStack_5c[0] = *(uint *)(iVar6 + 0xcf8);
    iVar6 = *(int *)(iVar6 + 0xcfc);
    if (((iVar6 != 0) && (iVar6 == iStack_6c)) &&
       (auStack_5c[0] = *(uint *)(iVar8 + 0xc0),
       *(int *)(*(int *)(*(int *)(*(int *)((int)local_68 + *(int *)(iVar8 + 0xc4) * 4) + 0xbe8) +
                        iVar6 * 4) + 0x1c) == iVar6)) {
      auStack_5c[0] = *(uint *)(iVar8 + 0xc0);
      if (((*(int *)(iVar8 + 0xc4) <
            *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
          (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(iVar8 + 0xc4) * 4) == 0)) &&
         (auStack_5c[0] = *(uint *)(iVar8 + 0xc0),
         *(char *)(*(int *)(*(int *)(*(int *)((int)local_68 + *(int *)(iVar8 + 0xc4) * 4) + 0xbe8) +
                           iVar6 * 4) + 0x70) != '\0')) break;
    }
    pfVar11 = (float *)*pfVar12;
    if ((int *)*pfVar11 == in_ECX) break;
    local_68 = *pfVar11;
    for (; pfVar11 != (float *)0x0; pfVar11 = (float *)pfVar11[2]) {
      if (*pfVar11 == local_68) {
        if (pfVar11 != (float *)0x0) {
          if (*(char *)((int)fVar1 + 0x108) == '\0') {
            fVar3 = pfVar11[1];
            fVar4 = pfVar11[2];
            if (fVar3 != 0.0) {
              *(float *)((int)fVar3 + 8) = fVar4;
            }
            if (fVar4 != 0.0) {
              *(float *)((int)fVar4 + 4) = fVar3;
            }
            if (pfVar11 == (float *)*pfVar12) {
              *pfVar12 = fVar4;
            }
            if (pfVar11 == *(float **)((int)fVar1 + 0x100)) {
              *(float *)((int)fVar1 + 0x100) = fVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(pfVar11);
          }
          *(undefined1 *)(pfVar11 + 3) = 1;
        }
        break;
      }
    }
    fVar3 = *(float *)((int)fVar1 + 0x100);
    pfVar11 = (float *)FUN_00aae9af(0x10);
    if (pfVar11 == (float *)0x0) {
      pfVar11 = (float *)0x0;
    }
    else {
      *pfVar11 = local_68;
      pfVar11[1] = fVar3;
      pfVar11[2] = 0.0;
      *(undefined1 *)(pfVar11 + 3) = 0;
    }
    iVar8 = *(int *)((int)fVar1 + 0x104);
    *(float **)((int)fVar1 + 0x100) = pfVar11;
    *(int *)((int)fVar1 + 0x104) = iVar8 + 1;
    if (iVar8 == 0) {
      *pfVar12 = (float)pfVar11;
    }
    else {
      *(float **)((int)fVar3 + 8) = pfVar11;
    }
  }
LAB_005cc593:
  FUN_005d4540(in_ECX,in_ECX + 0x4c);
  in_ECX[0x50] = 0;
  iVar8 = *(int *)(in_ECX[0x37] + 0x58);
  iVar6 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
  uVar14 = *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x20d8) + iVar8 * 4) + 0x10);
  uStack_3c = 0xf;
  uStack_40 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  FUN_00409350("selection_projection",0x14);
  uStack_c = 0;
  (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
  puVar13 = &uStack_50;
  uVar7 = (**(code **)(*(int *)in_ECX[0x42] + 0x40))(puVar13,uVar14);
  iVar8 = FUN_007e08e0(uVar7,puVar13,uVar14);
  uStack_c = 0xffffffff;
  in_ECX[0x44] = iVar8;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_50);
  }
  (**(code **)(*(int *)in_ECX[0x44] + 0x34))();
  cVar5 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar5 == '\0') {
LAB_005cc8f3:
    cVar5 = (**(code **)(*in_ECX + 0x38))();
    if ((cVar5 != '\0') && (iVar8 = (**(code **)(*in_ECX + 0x2c))(), *(int *)(iVar8 + 0x1b4) != 0))
    {
      iVar10 = (**(code **)(*in_ECX + 0x2c))();
      iVar8 = in_ECX[0x37];
      iVar6 = *(int *)(iVar8 + 0x5c);
      iVar10 = **(int **)(iVar10 + 0x1b4);
      goto LAB_005cc678;
    }
    (**(code **)(*in_ECX + 0x70))(auStack_5c,in_ECX[0x37]);
    iVar8 = *(int *)(in_ECX[0x37] + 0x58);
    iVar6 = in_ECX[0x44];
    iVar10 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
    if (*(int *)(*(int *)(iVar10 + 0x20d8) + iVar8 * 4) != 0) {
      FUN_00644a70(iVar10,iVar6,0);
    }
    cVar5 = (**(code **)(*in_ECX + 0x40))();
    if (cVar5 != '\0') {
      uStack_64 = *(undefined8 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x130);
      auStack_5c[0] = *(uint *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x138);
      (**(code **)(*(int *)in_ECX[0x44] + 0x168))(&uStack_64);
      goto LAB_005cca3b;
    }
    if (in_ECX[0x1d] == 0) {
      if ((in_ECX[0x3b] < 1) || (cVar5 = (**(code **)(*in_ECX + 0x3c))(), cVar5 != '\0')) {
        uStack_64 = *(undefined8 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x100);
        auStack_5c[0] = *(uint *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x108);
      }
      else {
        uStack_64 = *(undefined8 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x10c);
        auStack_5c[0] = *(uint *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x114);
      }
      pfVar11 = (float *)&uStack_64;
    }
    else {
      pfVar11 = (float *)(in_ECX + 0x56);
    }
  }
  else {
    iVar8 = in_ECX[0x37];
    iVar6 = *(int *)(iVar8 + 0x5c);
    if (*(char *)(iVar6 + 0x2a) == '\0') goto LAB_005cc8f3;
    iVar10 = *in_ECX;
LAB_005cc678:
    piVar9 = (int *)(**(code **)(iVar10 + 0x70))(auStack_5c,iVar8);
    iVar8 = in_ECX[0x44];
    local_70 = (float)(*piVar9 - *(int *)(iVar6 + 0x74));
    local_68 = (float)(piVar9[1] - *(int *)(iVar6 + 0x78));
    iStack_6c = 0;
    iVar6 = *(int *)(in_ECX[0x37] + 0x58);
    iVar10 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
    if (*(int *)(*(int *)(iVar10 + 0x20d8) + iVar6 * 4) != 0) {
      FUN_00644a70(iVar10,iVar8,0);
    }
    pfVar11 = &local_70;
  }
  (**(code **)(*(int *)in_ECX[0x44] + 0x168))(pfVar11);
LAB_005cca3b:
  if (DAT_012588e4 == '\0') {
    (**(code **)(*(int *)in_ECX[0x42] + 0x78))();
  }
  if ((in_ECX[0x10] < 1) || (*(int *)in_ECX[0xe] == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(int *)in_ECX[0xe] + 0x38);
  }
  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x200) != 0)) {
    piVar9 = (int *)FUN_009c7290();
    (**(code **)(*piVar9 + 0x60))(iVar8 + 0x1f0);
    ExceptionList = pvStack_24;
    return;
  }
  cVar5 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar5 == '\0') {
    uStack_2c = 0xf;
    uStack_30 = 0;
    uStack_40 = uStack_40 & 0xffffff00;
    FUN_00409350("army_selected",0xd);
    uStack_18 = 2;
    piVar9 = (int *)FUN_009c7290();
    (**(code **)(*piVar9 + 0x60))(&uStack_40);
  }
  else {
    uStack_48 = 0xf;
    uStack_4c = 0;
    auStack_5c[0] = auStack_5c[0] & 0xffffff00;
    FUN_00409350("navy_selected",0xd);
    uStack_18 = 1;
    piVar9 = (int *)FUN_009c7290();
    (**(code **)(*piVar9 + 0x60))(auStack_5c);
    uStack_34 = uStack_50;
    uStack_20 = uStack_3c;
  }
  if (uStack_20 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_34);
}

