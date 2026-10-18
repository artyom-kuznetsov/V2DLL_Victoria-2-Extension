// FUN_00a1cfc0 @ 00a1cfc0 body=[[00a1cfc0, 00a1d29c]]


undefined4 FUN_00a1cfc0(int *param_1,DWORD param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  HANDLE hFile;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_344 [264];
  undefined1 local_23c [264];
  uint local_134;
  FILETIME local_130;
  FILETIME local_128;
  FILETIME local_120 [2];
  char local_10c [264];
  
  piVar3 = param_1;
  if (param_1[1] != -1) {
    FUN_00a1c810();
  }
  DVar6 = param_2;
  param_1[1] = -1;
  if (*(int *)(*param_1 + 4) <= (int)param_2) {
    return 0x10000;
  }
  if ((int)param_2 < *(int *)(*param_1 + 0x10)) {
    FUN_00a1c1c0();
  }
  iVar5 = *(int *)(*param_1 + 0x10);
  while (iVar5 < (int)DVar6) {
    iVar5 = *param_1;
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) &&
       (iVar4 = *(int *)(iVar5 + 0x10) + 1, iVar4 != *(int *)(iVar5 + 4))) {
      *(int *)(iVar5 + 0x14) =
           *(int *)(iVar5 + 0x14) +
           *(int *)(iVar5 + 0x50) + *(int *)(iVar5 + 0x4c) + 0x2e + *(int *)(iVar5 + 0x48);
      *(int *)(iVar5 + 0x10) = iVar4;
      iVar4 = FUN_00a1bf60(iVar5 + 0x28,iVar5 + 0x78,0);
      *(uint *)(iVar5 + 0x18) = (uint)(iVar4 == 0);
    }
    iVar5 = *(int *)(*param_1 + 0x10);
  }
  FUN_00a1c9a0(param_1,DVar6,local_23c);
  if ((local_134 & 0x10) != 0) {
    cVar2 = *param_3;
    if (((cVar2 != '/') && (cVar2 != '\\')) && ((cVar2 == '\0' || (param_3[1] != ':')))) {
      FUN_00a1cec0(param_1 + 0x50,param_3);
      return 0;
    }
    FUN_00a1cec0(0,param_3);
    return 0;
  }
  cVar2 = *param_3;
  pcVar8 = param_3;
  pcVar9 = param_3;
  while (cVar2 != '\0') {
    if ((cVar2 == '/') || (cVar2 == '\\')) {
      pcVar9 = pcVar8 + 1;
    }
    pcVar1 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  pcVar8 = param_3;
  do {
    cVar2 = *pcVar8;
    pcVar8[(int)(local_10c + -(int)param_3)] = cVar2;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  if (pcVar9 == param_3) {
    local_10c[0] = '\0';
  }
  else {
    pcVar9[(int)(local_10c + -(int)param_3)] = '\0';
    if (((local_10c[0] == '/') || (local_10c[0] == '\\')) ||
       ((local_10c[0] != '\0' && (local_10c[1] == ':')))) {
      wsprintfA(local_344,(LPCSTR)&param_2_00e3d3cc,local_10c,pcVar9);
      FUN_00a1cec0(0,local_10c);
      goto LAB_00a1d138;
    }
  }
  wsprintfA(local_344,"%s%s%s",param_1 + 0x50,local_10c,pcVar9);
  FUN_00a1cec0(param_1 + 0x50,local_10c);
LAB_00a1d138:
  hFile = CreateFileA(local_344,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,local_134,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0x200;
  }
  FUN_00a1c430(*param_1,param_1[0x4e]);
  if (param_1[0x4f] == 0) {
    iVar5 = FUN_00aae9af(0x4000);
    param_1[0x4f] = iVar5;
  }
  param_1 = (int *)0x0;
  do {
    DVar6 = FUN_00a1c5b0(piVar3[0x4f],(int)&param_3 + 3);
    if (DVar6 == 0xffffff96) {
      param_1 = (int *)0x1000;
      goto LAB_00a1d283;
    }
    if ((int)DVar6 < 0) break;
    if ((0 < (int)DVar6) &&
       (BVar7 = WriteFile(hFile,(LPCVOID)piVar3[0x4f],DVar6,&param_2,(LPOVERLAPPED)0x0), BVar7 == 0)
       ) {
      param_1 = (int *)0x400;
      goto LAB_00a1d283;
    }
    if (param_3._3_1_ != '\0') {
      SetFileTime(hFile,&local_128,&local_130,local_120);
      goto LAB_00a1d283;
    }
  } while (DVar6 != 0);
  param_1 = (int *)0x5000000;
LAB_00a1d283:
  CloseHandle(hFile);
  FUN_00a1c810();
  return param_1;
}

