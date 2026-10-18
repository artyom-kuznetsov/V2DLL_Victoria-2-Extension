// FUN_00a32320 @ 00a32320 body=[[00a32320, 00a3251d] [00a32521, 00a325ac] [00a325b0, 00a325bf]]


void FUN_00a32320(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e110;
  local_10 = ExceptionList;
  iVar6 = (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x54;
  iVar7 = 0;
  if (0 < iVar6) {
    piVar3 = (int *)(*(int *)(unaff_ESI + 200) + 0x34);
    do {
      if (*piVar3 == param_2) {
        iVar6 = iVar7 * 0x54 + *(int *)(unaff_ESI + 200);
        goto LAB_00a32389;
      }
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0x15;
    } while (iVar7 < iVar6);
  }
  iVar6 = *(int *)(unaff_ESI + 200);
LAB_00a32389:
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0(iVar6 + 4,0,0xffffffff);
  local_8 = 0;
  FUN_00a331f0(iVar6,0);
  if (((*(int *)(iVar6 + 0x24) - *(int *)(iVar6 + 0x20) & 0xfffffffcU) == 0) &&
     (*(char *)(iVar6 + 0x30) == '\0')) {
    iVar7 = (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x54;
    iVar4 = 0;
    if (0 < iVar7) {
      iVar5 = *(int *)(unaff_ESI + 200);
      do {
        if (iVar6 == iVar5) {
          FUN_00a36990(*(undefined4 *)(unaff_ESI + 0xcc),iVar4 * 0x54 + *(int *)(unaff_ESI + 200),
                       param_1);
          FUN_00a36a50(*(undefined4 *)(unaff_ESI + 0xcc),param_1);
          *(int *)(unaff_ESI + 0xcc) = *(int *)(unaff_ESI + 0xcc) + -0x54;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x54;
      } while (iVar4 < iVar7);
    }
  }
  if (param_1 == *(int *)(unaff_ESI + 0xa4)) {
    if (param_1 != param_3) {
      uVar1 = FUN_00a32ba0();
      FUN_0043ec10(local_48,"CHANNEL",local_2c,&DAT_00e40230,uVar1);
      local_8._0_1_ = 1;
      param_1 = (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x54;
      if (0 < param_1) {
        iVar6 = 0;
        do {
          iVar7 = *(int *)(unaff_ESI + 200);
          piVar3 = *(int **)(iVar7 + 0x24 + iVar6);
          piVar2 = *(int **)(iVar7 + 0x20 + iVar6);
          if (piVar2 != piVar3) {
            do {
              if (*piVar2 == *(int *)(unaff_ESI + 0xa4)) break;
              piVar2 = piVar2 + 1;
            } while (piVar2 != piVar3);
            if (piVar2 != piVar3) {
              FUN_00a32f00(iVar7 + iVar6,local_48,0);
            }
          }
          iVar6 = iVar6 + 0x54;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
    }
    if (*(int *)(unaff_ESI + 0xd8) == param_2) {
      iVar7 = 0;
      *(undefined4 *)(unaff_ESI + 0xd8) = 0;
      iVar6 = (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x54;
      if (0 < iVar6) {
        piVar3 = (int *)(*(int *)(unaff_ESI + 200) + 0x34);
        do {
          if (*piVar3 == 0) {
            iVar6 = iVar7 * 0x54 + *(int *)(unaff_ESI + 200);
            goto LAB_00a32573;
          }
          iVar7 = iVar7 + 1;
          piVar3 = piVar3 + 0x15;
        } while (iVar7 < iVar6);
      }
      iVar6 = *(int *)(unaff_ESI + 200);
LAB_00a32573:
      *(undefined1 *)(iVar6 + 0x50) = 0;
      FUN_00a317b0();
      FUN_00a319d0(unaff_ESI);
      FUN_00a31b50(unaff_ESI);
    }
    else {
      FUN_00a317b0();
    }
  }
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

