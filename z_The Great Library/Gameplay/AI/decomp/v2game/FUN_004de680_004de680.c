// FUN_004de680 @ 004de680 body=[[004de680, 004de77b] [004de77f, 004de78c] [004de790, 004de84a] [004de84e, 004de972]]


void FUN_004de680(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined ***pppuVar8;
  int *piVar9;
  uint local_734;
  uint local_730 [4];
  undefined4 local_720;
  uint local_71c;
  uint local_714 [4];
  undefined4 local_704;
  uint local_700;
  undefined **local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined1 local_6e8;
  undefined1 local_6e4;
  undefined ***local_6dc;
  char local_6d4 [776];
  undefined1 local_3cc;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined1 local_3a0;
  undefined4 local_39c;
  undefined **local_398;
  undefined4 *local_394;
  char local_287;
  undefined1 local_280 [356];
  int local_11c [66];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5fb54;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0098ffc0(param_2);
  local_398 = &PTR_FUN_00e37c3c;
  local_c = 0;
  local_700 = 0xf;
  local_704 = 0;
  local_714[0] = local_714[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_6f8 = &PTR_FUN_00e38524;
  local_6f4 = 0;
  local_6f0 = 0;
  local_6ec = 0;
  local_6e8 = 0;
  local_c._0_1_ = 2;
  local_6dc = &local_398;
  local_6e4 = 0;
  local_3b8 = 0xf;
  local_3bc = 0;
  local_3cc = 0;
  FUN_00408ed0(local_714,0,0xffffffff);
  local_3b0 = 0;
  local_3ac = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_39c = 0;
  local_c = CONCAT31(local_c._1_3_,4);
  if (0xf < local_700) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_714[0]);
  }
  local_700 = 0xf;
  local_704 = 0;
  local_714[0] = local_714[0] & 0xffffff00;
  while( true ) {
    pppuVar2 = local_6dc;
    pppuVar8 = local_6dc + 0x44;
    if (*(char *)pppuVar8 == '\0') {
      ppuVar3 = (undefined **)(*(code *)(*local_6dc)[1])();
      pppuVar2[2] = ppuVar3;
      if (ppuVar3 == (undefined **)0x0) {
        pppuVar2[3] = (undefined **)0x13;
      }
      *(char *)pppuVar8 = '\x01';
    }
    pppuVar8 = pppuVar2 + 3;
    piVar9 = local_11c;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar9 = (int)*pppuVar8;
      pppuVar8 = pppuVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    if (local_11c[0] == 0x13) break;
    FUN_009a1440(&local_6f8);
    pcVar4 = local_6d4;
    local_71c = 0xf;
    local_720 = 0;
    local_730[0] = local_730[0] & 0xffffff00;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(local_6d4,(int)pcVar4 - (int)(local_6d4 + 1));
    local_c._0_1_ = 5;
    FUN_004dd0a0(local_280,local_730);
    local_c._0_1_ = 7;
    if (0xf < local_71c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_730[0]);
    }
    local_71c = 0xf;
    local_720 = 0;
    local_730[0] = local_730[0] & 0xffffff00;
    FUN_009a2a90(&local_6f8);
    FUN_004df2a0();
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_004dd290(local_280);
  }
  iVar5 = *param_1;
  iVar6 = ((param_1[1] - iVar5) / 0x160) * 0x160 + iVar5;
  local_734 = local_734 & 0xffffff00;
  FUN_004df530(iVar5,iVar6,(iVar6 - iVar5) / 0x160,local_734);
  iVar5 = (param_1[1] - *param_1) / 0x160;
  iVar6 = 0;
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      *(int *)(iVar7 + 300 + *param_1) = iVar6;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x160;
    } while (iVar6 < iVar5);
  }
  FUN_004deaa0(param_1);
  local_c = local_c & 0xffffff00;
  FUN_009a0dc0();
  local_c = 0xffffffff;
  local_398 = &PTR_FUN_00e37c30;
  if ((local_287 != '\0') && (local_394 != (undefined4 *)0x0)) {
    (**(code **)*local_394)(1);
  }
  ExceptionList = local_14;
  return;
}

