// FUN_004e5b50 @ 004e5b50 body=[[004e5b50, 004e5c04] [004e5c0e, 004e5d4d] [004e5d51, 004e5dce]]


void FUN_004e5b50(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  void *_Dst;
  int iVar10;
  int *piVar11;
  int local_44;
  int local_40;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba1e43;
  piVar11 = *(int **)(param_1 + 0xa4);
  pvStack_14 = ExceptionList;
  iVar2 = DAT_012588e8;
  ExceptionList = &pvStack_14;
  do {
    DAT_012588e8 = iVar2;
    if (piVar11 == (int *)0x0) {
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4);
      piVar11 = *(int **)(iVar3 + 0x9d8);
      do {
        do {
          if ((piVar11 < *(int **)(iVar3 + 0x9d8)) || (*(int **)(iVar3 + 0x9dc) <= piVar11)) {
            ExceptionList = pvStack_14;
            return;
          }
          iVar4 = *(int *)(*(int *)(iVar2 + 0xacc) + *piVar11 * 4);
          iVar8 = *(int *)(iVar4 + 0x194);
          piVar11 = piVar11 + 1;
          local_40 = 0;
        } while ((int)(*(int *)(iVar4 + 0x198) - iVar8 & 0xfffffff0U) < 1);
        local_44 = 0;
        do {
          iVar8 = *(int *)(local_44 + iVar8);
          while (iVar6 = iVar8, iVar6 != 0) {
            iVar5 = *(int *)(param_1 + 0x30);
            iVar8 = *(int *)(iVar6 + 0x27c);
            if (DAT_0125d36c == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)FUN_00aae9af(0x1c);
              local_c = 0;
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                puVar9[1] = 0x1ff;
                *puVar9 = 0;
                _Dst = (void *)FUN_00aad56b(0x7fc);
                puVar9[2] = _Dst;
                _memset(_Dst,0,puVar9[1] * 4);
                puVar9[3] = 0;
                puVar9[4] = 0;
                puVar9[5] = 0;
              }
              puVar7 = DAT_0125d36c;
              local_c = 1;
              if ((puVar9 != DAT_0125d36c) && (DAT_0125d36c != (undefined4 *)0x0)) {
                FUN_0090cd00(DAT_0125d36c);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(puVar7);
              }
              local_c = 0xffffffff;
              DAT_0125d36c = puVar9;
            }
            iVar10 = FUN_004ec290(DAT_0125d36c,iVar6,0);
            if (iVar5 == iVar10) {
              *(undefined4 *)(iVar6 + 0x120) = 0;
              *(undefined4 *)(iVar6 + 0x124) = 0;
            }
          }
          iVar8 = *(int *)(iVar4 + 0x194);
          local_40 = local_40 + 1;
          local_44 = local_44 + 0x10;
        } while (local_40 < *(int *)(iVar4 + 0x198) - iVar8 >> 4);
      } while( true );
    }
    piVar1 = (int *)piVar11[2];
    iVar2 = *piVar11;
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
    for (piVar11 = *(int **)(param_1 + 0xa4); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2]) {
      if (*piVar11 == iVar2) {
        if (piVar11 != (int *)0x0) {
          if (*(char *)(param_1 + 0xb0) == '\0') {
            iVar2 = piVar11[1];
            iVar3 = piVar11[2];
            if (iVar2 != 0) {
              *(int *)(iVar2 + 8) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = iVar2;
            }
            if (piVar11 == *(int **)(param_1 + 0xa4)) {
              *(int *)(param_1 + 0xa4) = iVar3;
            }
            if (piVar11 == *(int **)(param_1 + 0xa8)) {
              *(int *)(param_1 + 0xa8) = iVar2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar11);
          }
          *(undefined1 *)(piVar11 + 3) = 1;
        }
        break;
      }
    }
    FUN_00965bd0(0);
    piVar11 = piVar1;
    iVar2 = DAT_012588e8;
  } while( true );
}

