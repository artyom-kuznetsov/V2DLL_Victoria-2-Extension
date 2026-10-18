// FUN_00a1c9a0 @ 00a1c9a0 body=[[00a1c9a0, 00a1cb21] [00a1cb25, 00a1ce86] [00a1ce8a, 00a1ceba]]


undefined4 FUN_00a1c9a0(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int3 iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  int *piVar15;
  bool bVar16;
  undefined8 uVar17;
  char local_288 [264];
  char local_180 [264];
  uint local_78 [6];
  int local_60;
  int local_5c;
  uint local_44;
  FILETIME local_24;
  _FILETIME local_1c;
  uint local_14;
  int local_10;
  undefined1 local_b;
  byte local_a;
  byte local_9;
  
  piVar15 = param_3;
  if ((param_2 < -1) || (*(int *)(*param_1 + 4) <= param_2)) {
    return 0x10000;
  }
  if (param_1[1] != -1) {
    FUN_00a1c810();
  }
  param_1[1] = -1;
  if (param_2 == param_1[0x4d]) {
    if (param_2 != -1) {
      piVar12 = param_1 + 2;
      for (iVar9 = 0x4b; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar15 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar15 = piVar15 + 1;
      }
      return 0;
    }
  }
  else if (param_2 != -1) {
    if (param_2 < *(int *)(*param_1 + 0x10)) {
      FUN_00a1c1c0();
    }
    iVar9 = *(int *)(*param_1 + 0x10);
    while (iVar9 < param_2) {
      FUN_00a1c200();
      iVar9 = *(int *)(*param_1 + 0x10);
    }
    FUN_00a1bf60(local_78,0,0x104);
    iVar9 = FUN_00a1c260(&local_10,&param_3,&local_14);
    if (iVar9 != 0) {
      return 0x700;
    }
    pcVar13 = *(char **)*param_1;
    if (*pcVar13 == '\0') {
      *(int **)(pcVar13 + 0x1c) = param_3;
    }
    else {
      if (pcVar13[1] == '\0') {
        return 0x800;
      }
      SetFilePointer(*(HANDLE *)(pcVar13 + 4),*(int *)(pcVar13 + 0xc) + (int)param_3,(PLONG)0x0,0);
    }
    uVar5 = local_14;
    local_10 = FUN_00aae9af(local_14);
    uVar5 = FUN_00a1b9e0(local_10,1,uVar5);
    if (uVar5 != local_14) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_10);
    }
    *piVar15 = *(int *)(*param_1 + 0x10);
    iVar9 = 0;
    do {
      pcVar13 = local_180 + iVar9;
      local_288[iVar9] = *pcVar13;
      iVar9 = iVar9 + 1;
    } while (*pcVar13 != '\0');
    pcVar13 = local_288;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                for (; (cVar1 = *pcVar13, cVar1 != '\0' && (pcVar13[1] == ':'));
                    pcVar13 = pcVar13 + 2) {
                }
                if (cVar1 != '\\') break;
                pcVar13 = pcVar13 + 1;
              }
              if (cVar1 != '/') break;
              pcVar13 = pcVar13 + 1;
            }
            iVar9 = FUN_00aafe90(pcVar13,&DAT_00e3f51c);
            if (iVar9 == 0) break;
            pcVar13 = (char *)(iVar9 + 4);
          }
          iVar9 = FUN_00aafe90(pcVar13,&DAT_00e3f524);
          if (iVar9 == 0) break;
          pcVar13 = (char *)(iVar9 + 4);
        }
        iVar9 = FUN_00aafe90(pcVar13,&DAT_00e3f52c);
        if (iVar9 == 0) break;
        pcVar13 = (char *)(iVar9 + 4);
      }
      iVar9 = FUN_00aafe90(pcVar13,&DAT_00e3f534);
      piVar12 = param_3;
      if (iVar9 == 0) break;
      pcVar13 = (char *)(iVar9 + 4);
    }
    pcVar14 = pcVar13;
    do {
      cVar1 = *pcVar14;
      pcVar14[(int)piVar15 + (4 - (int)pcVar13)] = cVar1;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    local_9 = (byte)(local_44 >> 0x1e) & 1;
    bVar11 = ~(byte)(local_44 >> 0x17);
    local_78[0] = local_78[0] >> 8;
    param_3 = (int *)((uint)param_3 & 0xffffff);
    local_a = 0;
    local_b = 1;
    if ((((local_78[0] == 0) || (local_78[0] == 7)) || (local_78[0] == 0xb)) || (local_78[0] == 0xe)
       ) {
      param_3._0_3_ = SUB43(piVar12,0);
      param_3 = (int *)(CONCAT13((char)(local_44 >> 1),param_3._0_3_) & 0x1ffffff);
      local_a = (byte)(local_44 >> 2) & 1;
      bVar11 = (byte)local_44;
      bVar4 = (byte)(local_44 >> 5) & 1;
      bVar8 = (byte)(local_44 >> 4) & 1;
    }
    else {
      bVar4 = 1;
      bVar8 = local_9;
    }
    piVar15[0x42] = 0;
    if (bVar8 != 0) {
      piVar15[0x42] = 0x10;
    }
    if (bVar4 != 0) {
      piVar15[0x42] = piVar15[0x42] | 0x20;
    }
    if (param_3._3_1_ != '\0') {
      piVar15[0x42] = piVar15[0x42] | 2;
    }
    if ((bVar11 & 1) != 0) {
      piVar15[0x42] = piVar15[0x42] | 1;
    }
    if (local_a != 0) {
      piVar15[0x42] = piVar15[0x42] | 4;
    }
    piVar15[0x4a] = local_5c;
    piVar15[0x49] = local_60;
    local_24 = (FILETIME)FUN_00a1c8a0();
    LocalFileTimeToFileTime(&local_24,&local_1c);
    iVar3 = local_10;
    iVar9 = 0;
    piVar15[0x43] = local_1c.dwLowDateTime;
    piVar15[0x44] = local_1c.dwHighDateTime;
    piVar15[0x45] = local_1c.dwLowDateTime;
    piVar15[0x46] = local_1c.dwHighDateTime;
    piVar15[0x47] = local_1c.dwLowDateTime;
    piVar15[0x48] = local_1c.dwHighDateTime;
    if (4 < local_14) {
      param_3 = (int *)((uint)param_3 & 0xff000000);
      do {
        param_3._0_2_ =
             CONCAT11(*(undefined1 *)(local_10 + 1 + iVar9),*(undefined1 *)(iVar9 + local_10));
        pbVar10 = &DAT_00e3f53c;
        pbVar6 = (byte *)&param_3;
        do {
          bVar11 = *pbVar6;
          bVar16 = bVar11 < *pbVar10;
          if (bVar11 != *pbVar10) {
LAB_00a1cd48:
            iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00a1cd4d;
          }
          if (bVar11 == 0) break;
          bVar11 = pbVar6[1];
          bVar16 = bVar11 < pbVar10[1];
          if (bVar11 != pbVar10[1]) goto LAB_00a1cd48;
          pbVar6 = pbVar6 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar11 != 0);
        iVar7 = 0;
LAB_00a1cd4d:
        if (iVar7 == 0) {
          bVar11 = *(byte *)(iVar9 + 4 + local_10);
          local_9 = bVar11 >> 2 & 1;
          iVar7 = iVar9 + 5;
          param_3 = (int *)(CONCAT13(bVar11 >> 1,param_3._0_3_) & 0x1ffffff);
          if ((bVar11 & 1) != 0) {
            iVar2 = CONCAT21(CONCAT11(*(undefined1 *)(iVar9 + 8 + local_10),
                                      *(undefined1 *)(iVar9 + 7 + local_10)),
                             *(undefined1 *)(iVar9 + 6 + local_10));
            uVar5 = CONCAT31(iVar2,*(undefined1 *)(iVar7 + local_10));
            iVar7 = iVar9 + 9;
            uVar17 = __allmul(uVar5 + 0xb6109100,
                              ((int)iVar2 >> 0x17) + 2 + (uint)(0x49ef6eff < uVar5),10000000,0);
            *(undefined8 *)(piVar15 + 0x47) = uVar17;
          }
          if (param_3._3_1_ != '\0') {
            iVar2 = CONCAT21(CONCAT11(*(undefined1 *)(iVar7 + 3 + iVar3),
                                      *(undefined1 *)(iVar7 + 2 + iVar3)),
                             *(undefined1 *)(iVar7 + 1 + iVar3));
            uVar5 = CONCAT31(iVar2,*(undefined1 *)(iVar7 + iVar3));
            iVar7 = iVar7 + 4;
            uVar17 = __allmul(uVar5 + 0xb6109100,
                              ((int)iVar2 >> 0x17) + 2 + (uint)(0x49ef6eff < uVar5),10000000,0);
            *(undefined8 *)(piVar15 + 0x43) = uVar17;
          }
          if (local_9 != 0) {
            iVar2 = CONCAT21(CONCAT11(*(undefined1 *)(iVar7 + 3 + iVar3),
                                      *(undefined1 *)(iVar7 + 2 + iVar3)),
                             *(undefined1 *)(iVar7 + 1 + iVar3));
            uVar5 = CONCAT31(iVar2,*(undefined1 *)(iVar7 + iVar3));
            uVar17 = __allmul(uVar5 + 0xb6109100,
                              ((int)iVar2 >> 0x17) + 2 + (uint)(0x49ef6eff < uVar5),10000000,0);
            *(undefined8 *)(piVar15 + 0x45) = uVar17;
          }
          break;
        }
        iVar9 = iVar9 + 4 + (uint)*(byte *)(iVar9 + 2 + local_10);
      } while (iVar9 + 4U < local_14);
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar3);
    }
    piVar12 = param_1 + 2;
    for (iVar9 = 0x4b; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar12 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar12 = piVar12 + 1;
    }
    param_1[0x4d] = param_2;
    return 0;
  }
  *piVar15 = *(int *)(*param_1 + 4);
  *(undefined1 *)(piVar15 + 1) = 0;
  piVar15[0x42] = 0;
  piVar15[0x43] = 0;
  piVar15[0x44] = 0;
  piVar15[0x45] = 0;
  piVar15[0x46] = 0;
  piVar15[0x47] = 0;
  piVar15[0x48] = 0;
  piVar15[0x49] = 0;
  piVar15[0x4a] = 0;
  return 0;
}

