// FUN_0041a400 @ 0041a400 body=[[0041a400, 0041a4ba] [0041a4be, 0041a51d]]


undefined1 * FUN_0041a400(undefined1 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int local_28 [4];
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4dc01;
  local_10 = ExceptionList;
  iVar7 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  DAT_012586db = DAT_012586db == '\0';
  iVar4 = *DAT_012587e4;
  local_14 = 1;
  local_18 = iVar4;
  if (0 < iVar4) {
    do {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xadc) + iVar7 * 4);
      if (((*(int *)(iVar3 + 0x20) != 0) &&
          (((*(char *)(iVar3 + 0x1c) != 'R' || (*(char *)(iVar3 + 0x1d) != 'E')) ||
           (*(char *)(iVar3 + 0x1e) != 'B')))) &&
         (0 < (int)(*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU))) {
        piVar1 = (int *)(iVar3 + 0x15ac);
        local_8 = 1;
        if (piVar1 != local_28) {
          if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(*piVar1);
          }
          *piVar1 = 0;
          *(undefined4 *)(iVar3 + 0x15b0) = 0;
          *(undefined4 *)(iVar3 + 0x15b4) = 0;
        }
        local_8 = 0;
        FUN_005448b0(iVar3);
        iVar4 = local_18;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  pcVar6 = "Railroads are shown now everywhere";
  if (DAT_012586db == '\0') {
    pcVar6 = "Railroads are shown now normally";
  }
  pcVar5 = pcVar6;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  *param_1 = 1;
  ExceptionList = local_10;
  return param_1;
}

