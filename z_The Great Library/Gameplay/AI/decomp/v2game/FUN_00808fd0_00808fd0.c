// FUN_00808fd0 @ 00808fd0 body=[[00808fd0, 008090c9] [008090d0, 0080923f]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00808fd0(undefined8 *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *_Src;
  uint *_Dst;
  int iVar8;
  undefined8 *puVar9;
  char *pcVar10;
  float *pfVar11;
  int iVar12;
  undefined8 *puVar13;
  uint *unaff_ESI;
  float local_38;
  float fStack_34;
  short local_30;
  short sStack_2e;
  float fStack_2c;
  float local_28;
  float fStack_24;
  undefined8 *local_1c;
  int local_14;
  uint *local_10;
  uint local_c;
  
  _Src = (undefined8 *)
         FUN_00aad56b(-(uint)((int)((ulonglong)*unaff_ESI * 0x18 >> 0x20) != 0) |
                      (uint)((ulonglong)*unaff_ESI * 0x18));
  _Dst = (uint *)FUN_00aad56b(-(uint)((int)((ulonglong)*unaff_ESI * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)*unaff_ESI * 4));
  _memset(_Dst,-1,*unaff_ESI * 4);
  iVar8 = 0;
  local_c = 0;
  if (0 < (int)*unaff_ESI) {
    pcVar10 = (char *)((int)param_1 + 0xc);
    do {
      if ((*pcVar10 == '\0') && (pcVar10[3] == '\0')) {
        _Dst[iVar8] = 0xfffffffe;
      }
      iVar8 = iVar8 + 1;
      pcVar10 = pcVar10 + 0x18;
    } while (iVar8 < (int)*unaff_ESI);
  }
  if (0 < (int)*unaff_ESI) {
    local_14 = 1;
    puVar9 = _Src;
    puVar13 = param_1;
    local_1c = _Src;
    local_10 = _Dst;
    do {
      if (*local_10 == 0xffffffff) {
        uVar1 = *puVar13;
        uVar2 = puVar13[1];
        uVar3 = puVar13[2];
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        *local_10 = local_c;
        if (local_14 < (int)*unaff_ESI) {
          fStack_24 = (float)((ulonglong)uVar3 >> 0x20);
          local_28 = (float)uVar3;
          fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
          local_38 = (float)uVar1;
          pfVar11 = (float *)((int)puVar13 + 0x1c);
          iVar8 = local_14;
          do {
            if (((((pfVar11[-1] == local_38) && (*pfVar11 == fStack_34)) &&
                 (fStack_2c = (float)((ulonglong)uVar2 >> 0x20), pfVar11[2] == fStack_2c)) &&
                ((local_30 = (short)uVar2, *(short *)(pfVar11 + 1) == local_30 &&
                 (sStack_2e = (short)((ulonglong)uVar2 >> 0x10),
                 *(short *)((int)pfVar11 + 6) == sStack_2e)))) &&
               ((pfVar11[3] == local_28 && (pfVar11[4] == fStack_24)))) {
              _Dst[iVar8] = local_c;
            }
            iVar8 = iVar8 + 1;
            pfVar11 = pfVar11 + 6;
            puVar9 = local_1c;
          } while (iVar8 < (int)*unaff_ESI);
        }
        local_c = local_c + 1;
        puVar9 = puVar9 + 3;
        local_1c = puVar9;
      }
      local_10 = local_10 + 1;
      puVar13 = puVar13 + 3;
      bVar7 = local_14 < (int)*unaff_ESI;
      local_14 = local_14 + 1;
    } while (bVar7);
  }
  FID_conflict__memcpy(param_1,_Src,local_c * 0x18);
  iVar8 = 0;
  iVar12 = 0;
  local_14 = 0;
  if (0 < *param_3) {
    do {
      uVar4 = _Dst[*(ushort *)(param_2 + 2 + iVar8 * 2)];
      uVar5 = _Dst[*(ushort *)(param_2 + iVar8 * 2)];
      uVar6 = _Dst[*(ushort *)(param_2 + 4 + iVar8 * 2)];
      iVar8 = iVar8 + 3;
      if (((uVar5 == uVar4) || (uVar5 == uVar6)) || (uVar4 == uVar6)) {
        local_14 = local_14 + 1;
      }
      else {
        *(short *)(param_2 + iVar12 * 2) = (short)uVar5;
        local_28._0_2_ = (undefined2)uVar4;
        *(undefined2 *)(param_2 + 2 + iVar12 * 2) = local_28._0_2_;
        *(short *)(param_2 + 4 + iVar12 * 2) = (short)uVar6;
        iVar12 = iVar12 + 3;
      }
    } while (iVar8 < *param_3);
  }
  _DAT_012589d0 = _DAT_012589d0 + (*unaff_ESI - local_c);
  _DAT_012589d4 = _DAT_012589d4 + local_14;
  *unaff_ESI = local_c;
  *param_3 = iVar12;
  FUN_00aaea59(_Src);
  FUN_00aaea59(_Dst);
  return;
}

