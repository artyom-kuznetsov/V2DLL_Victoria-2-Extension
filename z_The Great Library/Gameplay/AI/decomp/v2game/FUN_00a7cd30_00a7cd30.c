// FUN_00a7cd30 @ 00a7cd30 body=[[00a7cd30, 00a7ce06] [00a7ce0c, 00a7ceec] [00a7cef0, 00a7d0be]]


void FUN_00a7cd30(int param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *in_ECX;
  int iVar9;
  undefined8 uVar10;
  undefined **local_90 [19];
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_28;
  char *local_24;
  char *local_20;
  char local_19;
  char *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53f7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((in_ECX == (char *)0x0) || (ExceptionList = &local_10, *in_ECX == '\0')) ||
     (ExceptionList = &local_10, iVar4 = PHYSFS_exists(), iVar4 == 0)) {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("pdxasset.cpp",0xc);
    local_8 = 0;
    FUN_004015b0(local_44,0x18c,0x1000);
    local_8._0_1_ = 1;
    uVar5 = FUN_00987d20();
    uVar5 = FUN_00418e30(uVar5);
    FUN_00401280(uVar5);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00987ac0(local_90);
    local_90[0] = std::ios_base::vftable;
    FUN_00aad52d(local_90);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
  }
  else {
    iVar4 = PHYSFS_openRead();
    local_8 = 2;
    local_28 = iVar4;
    uVar10 = PHYSFS_fileLength(iVar4);
    PHYSFS_seek(iVar4,uVar10);
    iVar6 = PHYSFS_tell(iVar4);
    PHYSFS_seek(iVar4,0,0);
    pcVar7 = _malloc(iVar6 + 1);
    local_24 = pcVar7;
    PHYSFS_read(iVar4,pcVar7,iVar6,1);
    pcVar7[iVar6] = '\0';
    iVar4 = _strncmp("@@b@",pcVar7,4);
    pcVar8 = pcVar7 + 4;
    pcVar7 = pcVar7 + 4;
    if (iVar4 == 0) {
      local_18 = (char *)(iVar6 + -4);
      local_20 = pcVar8;
      if (0 < (int)local_18) {
        do {
          if (*pcVar8 == '[') {
            pcVar8 = pcVar8 + 1;
            iVar4 = 0;
            cVar3 = *pcVar8;
            while (iVar6 = param_1, cVar3 == '[') {
              pcVar8 = pcVar8 + 1;
              iVar4 = iVar4 + 1;
              cVar3 = *pcVar8;
            }
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              iVar9 = (*(int *)(iVar6 + 0x54) - *(int *)(iVar6 + 0x50)) / 0x60;
              if (iVar9 == 0) goto LAB_00a7d020;
              iVar6 = iVar9 * 0x60 + -0x60 + *(int *)(iVar6 + 0x50);
            }
            if (iVar6 != 0) {
              FUN_00a7c430(pcVar8);
            }
LAB_00a7d020:
            do {
              cVar3 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
          }
          else if (*pcVar8 == '!') {
            iVar6 = *(int *)(param_1 + 0x50);
            iVar9 = *(int *)(param_1 + 0x54) - iVar6;
            iVar4 = param_1;
            while (iVar9 / 0x60 != 0) {
              iVar4 = (iVar9 / 0x60) * 0x60;
              piVar1 = (int *)(iVar4 + -0xc + iVar6);
              iVar4 = iVar4 + -0x60 + iVar6;
              iVar6 = *(int *)(iVar4 + 0x50);
              iVar9 = *piVar1 - iVar6;
            }
            iVar4 = FUN_00a7d470(iVar4);
            pcVar8 = pcVar8 + iVar4 + 1;
          }
        } while ((int)pcVar8 - (int)local_20 < (int)local_18);
      }
    }
    else {
      while (cVar3 = *pcVar7, cVar3 != '\0') {
        while ((cVar3 < '!' || (cVar3 == '\x7f'))) {
          cVar3 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
          if (cVar3 == '\0') goto LAB_00a7d090;
        }
        cVar3 = *pcVar7;
        cVar2 = cVar3;
        local_18 = pcVar7;
        while ((cVar2 != '\0' && (cVar2 != '\n'))) {
          pcVar8 = local_18 + 1;
          local_18 = local_18 + 1;
          cVar2 = *pcVar8;
        }
        local_19 = *local_18 != '\0';
        if (cVar3 != '#') {
          if (cVar3 == '[') {
            pcVar7 = pcVar7 + 1;
            iVar4 = 0;
            cVar3 = *pcVar7;
            while (cVar3 == '[') {
              pcVar7 = pcVar7 + 1;
              iVar4 = iVar4 + 1;
              cVar3 = *pcVar7;
            }
            pcVar8 = (char *)FUN_00ab4790(pcVar7,0x5d);
            if ((pcVar8 != (char *)0x0) && (pcVar8 < local_18)) {
              *pcVar8 = '\0';
              iVar6 = param_1;
              for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                iVar9 = (*(int *)(iVar6 + 0x54) - *(int *)(iVar6 + 0x50)) / 0x60;
                if (iVar9 == 0) goto LAB_00a7cfa8;
                iVar6 = iVar9 * 0x60 + -0x60 + *(int *)(iVar6 + 0x50);
              }
              if (iVar6 != 0) {
                FUN_00a7c430(pcVar7);
              }
            }
          }
          else {
            iVar6 = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) / 0x60;
            iVar4 = param_1;
            if (iVar6 != 0) {
              iVar9 = *(int *)(param_1 + 0x50);
              do {
                piVar1 = (int *)(iVar6 * 0x60 + -0xc + iVar9);
                iVar4 = iVar6 * 0x60 + -0x60 + iVar9;
                iVar9 = *(int *)(iVar4 + 0x50);
                iVar6 = (*piVar1 - iVar9) / 0x60;
              } while (iVar6 != 0);
            }
            FUN_00a7d140(iVar4,local_18);
          }
        }
LAB_00a7cfa8:
        pcVar7 = local_18;
        if (local_19 == '\0') break;
      }
    }
LAB_00a7d090:
    _free(local_24);
    if (local_28 != 0) {
      PHYSFS_close(local_28);
    }
  }
  ExceptionList = local_10;
  return;
}

