// FUN_004c3f90 @ 004c3f90 body=[[004c3f90, 004c421b] [004c421f, 004c453c]]


void FUN_004c3f90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *_Dst;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  int *piVar7;
  undefined4 *local_24;
  void *local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d133;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0xc0) / 2 + *(int *)(in_ECX + 0xb8);
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0xc4) / 2 + *(int *)(in_ECX + 0xbc);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x38);
  iVar2 = *(int *)(in_ECX + 0xc0) + *(int *)(in_ECX + 0xc4);
  if (iVar2 < 0x1e) {
    *(undefined4 *)(in_ECX + 0x2c) = 1;
  }
  else if (iVar2 < 0x3c) {
    *(undefined4 *)(in_ECX + 0x2c) = 2;
  }
  else {
    *(uint *)(in_ECX + 0x2c) = (0x59 < iVar2) + 3;
  }
  iVar2 = *(int *)(in_ECX + 0xa8) - *(int *)(in_ECX + 0xa4) >> 3;
  if ((iVar2 != 0) && (iVar3 = 0, 0 < iVar2)) {
    do {
      piVar7 = (int *)(*(int *)(in_ECX + 0xa4) + iVar3 * 8);
      *piVar7 = *piVar7 - *(int *)(in_ECX + 0x34);
      piVar7 = (int *)(*(int *)(in_ECX + 0xa4) + 4 + iVar3 * 8);
      *piVar7 = *piVar7 - *(int *)(in_ECX + 0x38);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0xa8) - *(int *)(in_ECX + 0xa4) >> 3);
  }
  if ((*(int *)(in_ECX + 0x34) == 0) || (*(int *)(in_ECX + 0x38) == 0)) {
    *(undefined4 *)(in_ECX + 0x34) = 1;
    *(undefined4 *)(in_ECX + 0x38) = 1;
    *(undefined4 *)(in_ECX + 0x74) = 1;
    *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x38);
  }
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(in_ECX + 0x74);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(in_ECX + 0x78);
  *(float *)(in_ECX + 0x54) = (float)*(int *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x58) = (float)*(int *)(in_ECX + 0x78);
  *(float *)(in_ECX + 100) = (float)*(int *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x68) = (float)*(int *)(in_ECX + 0x78);
  *(float *)(in_ECX + 0x44) = (float)*(int *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x48) = (float)*(int *)(in_ECX + 0x78);
  *(float *)(in_ECX + 0x48) = (float)*(int *)(in_ECX + 0x78) - 2.0;
  *(float *)(in_ECX + 0x1b4) = (float)*(int *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x1b8) = (float)*(int *)(in_ECX + 0x78);
  *(float *)(in_ECX + 0x1c4) = (float)*(int *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x1c8) = (float)*(int *)(in_ECX + 0x78);
  *(float *)(in_ECX + 0x1d4) = (float)*(int *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x1d8) = (float)*(int *)(in_ECX + 0x78);
  *(undefined4 *)(in_ECX + 0x1dc) = 0;
  puVar4 = DAT_0125ce80;
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_00aae9af(0x3c);
    local_8 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 0x1ff;
      *puVar4 = 0;
      local_24 = puVar4;
      _Dst = (void *)FUN_00aad56b(0x7fc);
      puVar4[2] = _Dst;
      _memset(_Dst,0,puVar4[1] * 4);
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
    }
    local_8 = 1;
    local_24 = (undefined4 *)0x0;
    if ((puVar4 != DAT_0125ce80) && (local_1c = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1c);
    }
  }
  DAT_0125ce80 = puVar4;
  local_8 = 0xffffffff;
  local_18 = (int *)(in_ECX + 0x330);
  uVar6 = (int)(DAT_0125ce80[4] - DAT_0125ce80[3]) >> 2;
  uVar5 = *(int *)(in_ECX + 0x334) - *(int *)(in_ECX + 0x330) >> 4;
  local_14 = uVar6;
  if (uVar6 < uVar5) {
    FUN_004c90f0(local_18,&local_24,uVar6 * 0x10 + *(int *)(in_ECX + 0x330),
                 *(undefined4 *)(in_ECX + 0x334));
  }
  else if (uVar5 < uVar6) {
    FUN_004a3b80();
    FUN_004ca070(local_24);
    local_18[1] = (uVar6 - (local_18[1] - *local_18 >> 4)) * 0x10 + local_18[1];
  }
  puVar4 = *(undefined4 **)(in_ECX + 0x344);
  piVar7 = (int *)(in_ECX + 0x340);
  uVar5 = (int)puVar4 - *piVar7 >> 2;
  local_1c = piVar7;
  if (local_14 < uVar5) {
    local_24 = (undefined4 *)(*piVar7 + local_14 * 4);
    if (local_24 == puVar4) goto LAB_004c433c;
    local_20 = (void *)0x0;
    FID_conflict__memcpy(local_24,puVar4,0);
    iVar2 = (int)local_20 + (int)local_24;
  }
  else {
    if (local_14 <= uVar5) goto LAB_004c433c;
    FUN_007b94a0();
    puVar4 = *(undefined4 **)(in_ECX + 0x344);
    iVar2 = local_14 - ((int)puVar4 - *piVar7 >> 2);
    if (iVar2 != 0) {
      for (; piVar7 = local_1c, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    iVar2 = piVar7[1] + (local_14 - (piVar7[1] - *piVar7 >> 2)) * 4;
  }
  piVar7[1] = iVar2;
LAB_004c433c:
  uVar5 = *(int *)(in_ECX + 0x354) - *(int *)(in_ECX + 0x350) >> 2;
  if (local_14 < uVar5) {
    local_20 = (void *)(*(int *)(in_ECX + 0x350) + local_14 * 4);
    if (local_20 != *(void **)(in_ECX + 0x354)) {
      local_24 = (undefined4 *)0x0;
      FID_conflict__memcpy(local_20,*(void **)(in_ECX + 0x354),0);
      *(int *)(in_ECX + 0x354) = (int)local_24 + (int)local_20;
    }
  }
  else if (uVar5 < local_14) {
    FUN_007b94a0();
    puVar4 = *(undefined4 **)(in_ECX + 0x354);
    iVar2 = local_14 - ((int)puVar4 - *(int *)(in_ECX + 0x350) >> 2);
    if (iVar2 != 0) {
      for (; piVar7 = local_1c, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    *(uint *)(in_ECX + 0x354) =
         *(int *)(in_ECX + 0x354) +
         (local_14 - (*(int *)(in_ECX + 0x354) - *(int *)(in_ECX + 0x350) >> 2)) * 4;
  }
  iVar2 = 0;
  if (3 < (int)local_14) {
    local_1c = (int *)0x0;
    do {
      iVar3 = *local_18;
      *(float *)(iVar3 + 8 + (int)local_1c) = (float)*(int *)(in_ECX + 0x74);
      *(float *)(iVar3 + 0xc + (int)local_1c) = (float)*(int *)(in_ECX + 0x78);
      *(undefined4 *)(*piVar7 + iVar2 * 4) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x350) + iVar2 * 4) = 0;
      iVar3 = *local_18 + 0x10 + (int)local_1c;
      *(float *)(iVar3 + 8) = (float)*(int *)(in_ECX + 0x74);
      *(float *)(iVar3 + 0xc) = (float)*(int *)(in_ECX + 0x78);
      *(undefined4 *)(*piVar7 + 4 + iVar2 * 4) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x350) + 4 + iVar2 * 4) = 0;
      iVar3 = (int)local_1c + 0x20 + *local_18;
      *(float *)(iVar3 + 8) = (float)*(int *)(in_ECX + 0x74);
      *(float *)(iVar3 + 0xc) = (float)*(int *)(in_ECX + 0x78);
      *(undefined4 *)(*piVar7 + 8 + iVar2 * 4) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x350) + 8 + iVar2 * 4) = 0;
      iVar3 = *local_18;
      *(float *)(iVar3 + 0x38 + (int)local_1c) = (float)*(int *)(in_ECX + 0x74);
      *(float *)(iVar3 + 0x3c + (int)local_1c) = (float)*(int *)(in_ECX + 0x78);
      *(undefined4 *)(*piVar7 + 0xc + iVar2 * 4) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x350) + 0xc + iVar2 * 4) = 0;
      iVar2 = iVar2 + 4;
      local_1c = (int *)((int)local_1c + 0x40);
    } while (iVar2 < (int)(local_14 - 3));
  }
  if (iVar2 < (int)local_14) {
    iVar3 = iVar2 << 4;
    do {
      iVar1 = *local_18;
      *(float *)(iVar1 + 8 + iVar3) = (float)*(int *)(in_ECX + 0x74);
      *(float *)(iVar1 + 0xc + iVar3) = (float)*(int *)(in_ECX + 0x78);
      *(undefined4 *)(*piVar7 + iVar2 * 4) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x350) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < (int)local_14);
  }
  ExceptionList = local_10;
  return;
}

