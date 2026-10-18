// FUN_00a1cec0 @ 00a1cec0 body=[[00a1cec0, 00a1cfb0]]


void FUN_00a1cec0(char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_20c [259];
  char cStack_109;
  CHAR local_108 [260];
  
  if ((param_1 != (LPCSTR)0x0) && (DVar3 = GetFileAttributesA(param_1), DVar3 == 0xffffffff)) {
    CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  }
  cVar2 = *param_2;
  pcVar4 = param_2;
  pcVar7 = param_2;
  if (cVar2 != '\0') {
    do {
      if ((cVar2 == '/') || (cVar2 == '\\')) {
        pcVar7 = pcVar4;
      }
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar7 != param_2) {
      FID_conflict__memcpy(local_20c,param_2,(int)pcVar7 - (int)param_2);
      local_20c[(int)pcVar7 - (int)param_2] = 0;
      FUN_00a1cec0(param_1,local_20c);
    }
    local_108[0] = '\0';
    pcVar4 = param_2;
    if (param_1 != (LPCSTR)0x0) {
      iVar1 = -(int)param_1;
      do {
        cVar2 = *param_1;
        param_1[(int)(local_108 + iVar1)] = cVar2;
        param_1 = param_1 + 1;
      } while (cVar2 != '\0');
    }
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = (int)pcVar4 - (int)param_2;
    pcVar4 = &cStack_109;
    do {
      pcVar7 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar7 != '\0');
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *param_2;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    DVar3 = GetFileAttributesA(local_108);
    if (DVar3 == 0xffffffff) {
      CreateDirectoryA(local_108,(LPSECURITY_ATTRIBUTES)0x0);
    }
  }
  return;
}

