// FUN_00a7d140 @ 00a7d140 body=[[00a7d140, 00a7d33c] [00a7d340, 00a7d460]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00a7d2fa) */
/* WARNING: Removing unreachable block (ram,0x00a7d300) */
/* WARNING: Removing unreachable block (ram,0x00a7d30a) */
/* WARNING: Removing unreachable block (ram,0x00a7d306) */
/* WARNING: Removing unreachable block (ram,0x00a7d30c) */
/* WARNING: Removing unreachable block (ram,0x00a7d317) */
/* WARNING: Removing unreachable block (ram,0x00a7d330) */

undefined4 FUN_00a7d140(undefined4 param_1,undefined1 *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_ECX;
  int iVar8;
  char *pcVar9;
  double dVar10;
  char *apcStack_64 [2];
  int iStack_5c;
  char *pcStack_58;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b481b0;
  local_10 = ExceptionList;
  pcStack_58 = (char *)0x20;
  apcStack_64[1] = (char *)0xa7d168;
  ExceptionList = &local_10;
  puVar4 = (undefined1 *)FUN_00ab4790();
  if (puVar4 == (undefined1 *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  if (param_2 <= puVar4) {
    ExceptionList = local_10;
    return 0;
  }
  *puVar4 = 0;
  cVar3 = puVar4[1];
  if (((cVar3 != 'f') && (cVar3 != 'i')) && (cVar3 != 's')) {
    ExceptionList = local_10;
    return 0;
  }
  pcVar9 = puVar4 + 2;
  cVar2 = puVar4[2];
  while ((cVar2 != '\0' && ((cVar2 < '!' || (cVar2 == '\x7f'))))) {
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar1;
  }
  iStack_5c = 0xa7d1b8;
  pcStack_58 = pcVar9;
  iVar5 = FUN_00aaf0c5();
  cVar2 = *pcVar9;
  while (cVar2 != '\0') {
    if ((cVar2 < '!') || (cVar2 == '\x7f')) {
      cVar2 = *pcVar9;
      if (cVar2 != '\0') goto LAB_00a7d1e0;
      break;
    }
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar1;
  }
  goto LAB_00a7d1f0;
  while( true ) {
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 1;
    if (cVar3 == '\0') break;
LAB_00a7d420:
    if ((' ' < cVar3) && (cVar3 != '\x7f')) break;
  }
LAB_00a7d430:
  iVar8 = iVar8 + 1;
  if (iVar5 <= iVar8) goto LAB_00a7d439;
  goto LAB_00a7d3f2;
  while( true ) {
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 1;
    if (cVar3 == '\0') break;
LAB_00a7d3a0:
    if ((' ' < cVar3) && (cVar3 != '\x7f')) break;
  }
LAB_00a7d3b0:
  iVar8 = iVar8 + 1;
  if (iVar5 <= iVar8) goto LAB_00a7d3b8;
  goto LAB_00a7d370;
  while( true ) {
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 1;
    if (cVar2 == '\0') break;
LAB_00a7d1e0:
    if ((' ' < cVar2) && (cVar2 != '\x7f')) break;
  }
LAB_00a7d1f0:
  if (cVar3 == 'f') {
    pcStack_58 = (char *)0xa7d3d7;
    iVar6 = -(iVar5 * 4 + 8);
    *(undefined4 *)(&stack0xffffffac + iVar6) = 0xa110ca7e;
    puVar4 = &stack0xffffffb0 + iVar6;
    iVar8 = 0;
    *(undefined4 *)(puVar4 + iVar5 * 4) = 0xa110ca7e;
    if (iVar5 < 1) {
LAB_00a7d439:
      *(undefined1 **)((int)&pcStack_58 + iVar6) = puVar4;
      *(int *)((int)&iStack_5c + iVar6) = iVar5;
      *(undefined4 *)((int)apcStack_64 + iVar6 + 4) = in_ECX;
      *(undefined4 *)((int)apcStack_64 + iVar6) = 0xa7d447;
      uVar7 = FUN_00a7c580();
      ExceptionList = local_10;
      return uVar7;
    }
LAB_00a7d3f2:
    *(char **)((int)&pcStack_58 + iVar6) = pcVar9;
    *(undefined4 *)((int)&iStack_5c + iVar6) = 0xa7d3f8;
    dVar10 = _atof(*(char **)((int)&pcStack_58 + iVar6));
    *(float *)(puVar4 + iVar8 * 4) = (float)dVar10;
    cVar3 = *pcVar9;
    while (cVar3 != '\0') {
      if ((cVar3 < '!') || (cVar3 == '\x7f')) {
        cVar3 = *pcVar9;
        if (cVar3 != '\0') goto LAB_00a7d420;
        break;
      }
      pcVar1 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
      cVar3 = *pcVar1;
    }
    goto LAB_00a7d430;
  }
  if (cVar3 == 'i') {
    pcStack_58 = (char *)0xa7d353;
    iVar6 = -(iVar5 * 4 + 8);
    *(undefined4 *)(&stack0xffffffac + iVar6) = 0xa110ca7e;
    puVar4 = &stack0xffffffb0 + iVar6;
    iVar8 = 0;
    *(undefined4 *)(puVar4 + iVar5 * 4) = 0xa110ca7e;
    if (iVar5 < 1) {
LAB_00a7d3b8:
      *(undefined1 **)((int)&pcStack_58 + iVar6) = puVar4;
      *(int *)((int)&iStack_5c + iVar6) = iVar5;
      *(undefined4 *)((int)apcStack_64 + iVar6 + 4) = in_ECX;
      *(undefined4 *)((int)apcStack_64 + iVar6) = 0xa7d3c6;
      uVar7 = FUN_00a7c770();
      ExceptionList = local_10;
      return uVar7;
    }
LAB_00a7d370:
    *(char **)((int)&pcStack_58 + iVar6) = pcVar9;
    *(undefined4 *)((int)&iStack_5c + iVar6) = 0xa7d376;
    uVar7 = FUN_00aaf0c5();
    *(undefined4 *)(puVar4 + iVar8 * 4) = uVar7;
    cVar3 = *pcVar9;
    while (cVar3 != '\0') {
      if ((cVar3 < '!') || (cVar3 == '\x7f')) {
        cVar3 = *pcVar9;
        if (cVar3 != '\0') goto LAB_00a7d3a0;
        break;
      }
      pcVar1 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
      cVar3 = *pcVar1;
    }
    goto LAB_00a7d3b0;
  }
  if (cVar3 != 's') {
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0;
  local_18 = 0;
  if (0 < iVar5) {
    while( true ) {
      pcStack_58 = (char *)0x22;
      apcStack_64[1] = (char *)0xa7d238;
      iStack_5c = (int)pcVar9;
      iVar6 = FUN_00ab4790();
      if (iVar6 == 0) break;
      pcStack_58 = (char *)0x22;
      apcStack_64[1] = (char *)0xa7d24d;
      iStack_5c = iVar6 + 1;
      puVar4 = (undefined1 *)FUN_00ab4790();
      while (puVar4 != (undefined1 *)0x0) {
        if (puVar4[-1] != '\\') {
          *puVar4 = 0;
          pcStack_58 = (char *)0xa7d27d;
          FUN_009885d0();
          local_8._0_1_ = 1;
          pcStack_58 = (char *)0xa7d286;
          FUN_00a7c390();
          pcStack_58 = (char *)0xa7d290;
          FUN_00a840b0();
          local_8 = (uint)local_8._1_3_ << 8;
          pcStack_58 = (char *)0xa7d29b;
          FUN_00408ad0();
          break;
        }
        pcStack_58 = (char *)0x22;
        iStack_5c = (int)(puVar4 + 1);
        apcStack_64[1] = (char *)0xa7d265;
        puVar4 = (undefined1 *)FUN_00ab4790();
      }
      if (((char *)(iVar6 + 1) == (char *)0x0) || (puVar4 == (undefined1 *)0x0)) break;
      local_18 = local_18 + 1;
      pcVar9 = puVar4 + 1;
      if (iVar5 <= local_18) break;
    }
  }
  pcStack_58 = (char *)0xa7d2e2;
  uVar7 = FUN_00a7c960();
  ExceptionList = local_10;
  return uVar7;
}

