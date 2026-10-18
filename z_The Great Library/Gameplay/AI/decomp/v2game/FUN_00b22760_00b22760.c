// PHYSFS_setSaneConfig @ 00b22760 body=[[00b22760, 00b227bc] [00b227c0, 00b2296c] [00b22970, 00b22a7a]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void PHYSFS_setSaneConfig(char *param_1,char *param_2,char *param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  pcVar13 = DAT_00f20a94;
  uVar4 = DAT_00f20a90;
  puVar3 = PTR_DAT_00f05ea4;
                    /* 0x722760  52  PHYSFS_setSaneConfig */
  uVar5 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (DAT_00f20a78 == 0) {
    FUN_00b1f840("Not initialized");
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar6 = DAT_00f20a94;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  pcVar7 = param_1;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  pcVar8 = param_2;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  pcVar9 = PTR_DAT_00f05ea4;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  pcVar6 = pcVar6 + (int)(pcVar7 + (int)(pcVar8 + (-(int)(param_2 + 1) - (int)(param_1 + 1)))) * 2 +
                    (((int)pcVar9 - (int)(PTR_DAT_00f05ea4 + 1)) * 3 - (int)(DAT_00f20a94 + 1)) + 2;
  if (pcVar6 < (char *)0x80) {
    pcVar7 = &stack0xffffffe0;
  }
  else {
    pcVar7 = (char *)0x0;
  }
  bVar16 = pcVar7 == (char *)0x0;
  if (bVar16) {
    pcVar7 = (char *)(*DAT_013f3aa8)(pcVar6 + 1,(char *)0xfffffffe < pcVar6);
  }
  if (pcVar7 != (char *)0x0) {
    pcVar6 = pcVar7 + 1;
    *pcVar7 = bVar16;
    if (pcVar6 != (char *)0x0) {
      _sprintf(pcVar6,"%s.%s%s%s",pcVar13,param_1,puVar3,param_2);
      iVar10 = PHYSFS_setWriteDir(pcVar6);
      if (iVar10 == 0) {
        _sprintf(pcVar6,".%s/%s",param_1,param_2);
        iVar10 = PHYSFS_setWriteDir(pcVar13);
        if ((iVar10 != 0) && (iVar10 = PHYSFS_mkdir(pcVar6), iVar10 != 0)) {
          _sprintf(pcVar6,"%s.%s%s%s",pcVar13,param_1,puVar3,param_2);
          iVar10 = PHYSFS_setWriteDir(pcVar6);
          if (iVar10 != 0) goto LAB_00b22921;
        }
        PHYSFS_setWriteDir(0);
        if (*pcVar7 != '\0') {
          (*DAT_013f3ab0)(pcVar7);
        }
        FUN_00b1f840("Can\'t set write directory");
        __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
        return;
      }
LAB_00b22921:
      PHYSFS_mount(pcVar6,0,0);
      if (*pcVar7 != '\0') {
        (*DAT_013f3ab0)(pcVar7);
      }
      PHYSFS_mount(uVar4,0,1);
      if (param_4 != 0) {
        piVar11 = (int *)FUN_00b20a90(FUN_00b293d0);
        iVar10 = *piVar11;
        piVar12 = piVar11;
        while (iVar10 != 0) {
          PHYSFS_mount(iVar10,0,1);
          piVar1 = piVar12 + 1;
          piVar12 = piVar12 + 1;
          iVar10 = *piVar1;
        }
        iVar10 = *piVar11;
        piVar12 = piVar11;
        while (iVar10 != 0) {
          (*DAT_013f3ab0)(iVar10);
          piVar1 = piVar12 + 1;
          piVar12 = piVar12 + 1;
          iVar10 = *piVar1;
        }
        (*DAT_013f3ab0)(piVar11);
      }
      if (param_3 != (char *)0x0) {
        piVar12 = (int *)PHYSFS_enumerateFiles(&DAT_00dedc68);
        pcVar13 = param_3;
        do {
          cVar2 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        uVar14 = (int)pcVar13 - (int)(param_3 + 1);
        iVar10 = *piVar12;
        piVar11 = piVar12;
        while (iVar10 != 0) {
          pcVar13 = (char *)*piVar11;
          pcVar6 = pcVar13;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          uVar15 = (int)pcVar6 - (int)(pcVar13 + 1);
          if (((uVar14 < uVar15) && (pcVar13[uVar15 + (-1 - uVar14)] == '.')) &&
             (iVar10 = FUN_00b23450(pcVar13 + (uVar15 - uVar14),param_3), iVar10 == 0)) {
            FUN_00b22630(*piVar11,uVar15,puVar3,param_5);
          }
          piVar11 = piVar11 + 1;
          iVar10 = *piVar11;
        }
        iVar10 = *piVar12;
        piVar11 = piVar12;
        while (iVar10 != 0) {
          (*DAT_013f3ab0)(iVar10);
          piVar1 = piVar11 + 1;
          piVar11 = piVar11 + 1;
          iVar10 = *piVar1;
        }
        (*DAT_013f3ab0)(piVar12);
      }
      __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

