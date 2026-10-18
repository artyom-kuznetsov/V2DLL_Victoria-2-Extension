// FUN_00737520 @ 00737520 body=[[00737520, 00737636] [0073763a, 007376d8] [007376dc, 0073772e]]


void FUN_00737520(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  char local_74 [32];
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  uint local_28;
  uint local_24;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b50543;
  local_10 = ExceptionList;
  local_18 = (int *)0x0;
  ExceptionList = &local_10;
  if (DAT_0125fdd8 == 0) {
    ExceptionList = &local_10;
    local_1c = (int *)FUN_00aae9af(0x1c);
    local_8 = 0;
    if (local_1c == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_008b0060();
    }
    local_8 = 0xffffffff;
    FUN_005c2810(uVar4);
  }
  iVar7 = *(int *)(DAT_0125fdd8 + 0xc);
  piVar10 = (int *)(DAT_0125fdd8 + 0xc);
  local_14 = 0;
  local_1c = piVar10;
  if (0 < (int)(*(int *)(DAT_0125fdd8 + 0x10) - iVar7 & 0xfffffffcU)) {
    do {
      iVar11 = local_14;
      cVar3 = (**(code **)(**(int **)(iVar7 + local_14 * 4) + 0x24))();
      if ((cVar3 != '\0') && (iVar7 = *(int *)(*piVar10 + iVar11 * 4), *(int *)(iVar7 + 0x28) != 0))
      {
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_8 = 1;
        pcVar5 = __itoa(*(int *)(iVar7 + 0x28),local_74,10);
        pcVar9 = pcVar5;
        do {
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
        FUN_00409350(pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
        local_8 = 2;
        FUN_00988fa0(local_54);
        local_8 = CONCAT31(local_8._1_3_,4);
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x60) + 0x34))(local_38);
        uVar1 = local_28;
        uVar8 = *(uint *)(param_2 + 0x10);
        uVar6 = local_28;
        if (uVar8 <= local_28) {
          uVar6 = uVar8;
        }
        iVar7 = FUN_00414bd0(uVar6);
        bVar12 = false;
        if (iVar7 == 0) {
          if (uVar1 < uVar8) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar1 != uVar8);
          }
          bVar12 = uVar8 == 0;
        }
        piVar2 = piVar10;
        if ((!bVar12) && (iVar7 = (**(code **)(*piVar10 + 0x4c))(), piVar2 = local_18, iVar7 == 1))
        {
          (**(code **)(*piVar10 + 0x48))(1);
          piVar2 = local_18;
        }
        local_18 = piVar2;
        local_8 = 0xffffffff;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        piVar10 = local_1c;
        iVar11 = local_14;
      }
      iVar7 = *piVar10;
      local_14 = iVar11 + 1;
    } while (local_14 < piVar10[1] - iVar7 >> 2);
    if (local_18 != (int *)0x0) {
      FUN_00737390(local_18);
    }
  }
  ExceptionList = local_10;
  return;
}

