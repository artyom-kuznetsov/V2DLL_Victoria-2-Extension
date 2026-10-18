// FUN_00502cf0 @ 00502cf0 body=[[00502cf0, 00502dbc] [00502dc0, 00502e7d] [00502e81, 00502f59] [00502f63, 0050301e]]


void FUN_00502cf0(void)

{
  int *piVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  char cVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined ****ppppuStack_10c;
  undefined ***local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  undefined1 *local_dc;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb41ef;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(in_ECX + 0xce0) == 0) {
    ppppuStack_10c = (undefined ****)0x7;
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = (undefined ***)((uint)local_f8[0] & 0xffffff00);
    ExceptionList = &pvStack_14;
    FUN_00409350("Generic");
    local_c = 0;
    if (DAT_01268284 == 0) {
      ppppuStack_10c = (undefined ****)0x1c;
      local_dc = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 1;
      if (local_dc == (undefined1 *)0x0) {
        ppppuStack_10c = (undefined ****)0x0;
      }
      else {
        ppppuStack_10c = (undefined ****)0x502d76;
        ppppuStack_10c = (undefined ****)FUN_008b0060();
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_007e7840();
    }
    ppppuStack_10c = local_f8;
    uVar5 = FUN_00973bd0();
    local_c = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xce0) = uVar5;
    if (0xf < local_e4) {
      ppppuStack_10c = (undefined ****)local_f8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppppuStack_10c = (undefined ****)0xb;
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = (undefined ***)((uint)local_f8[0] & 0xffffff00);
    FUN_00409350("country.cpp");
    ppppuStack_10c = (undefined ****)0x10004;
    local_c = 2;
    uVar5 = FUN_004015b0(local_f8,0x8e3);
    ppppuStack_10c = (undefined ****)0x0;
    local_c._0_1_ = 3;
    FUN_00987d50(uVar5,"No gfxculturetype set for ",0x1a);
    ppppuStack_10c = (undefined ****)(in_ECX + 0x1c);
    uVar5 = FUN_00418e30(uVar5);
    FUN_00401280(uVar5);
    ppppuStack_10c = (undefined ****)appuStack_60;
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987ac0();
    ppppuStack_10c = (undefined ****)appuStack_60;
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_c = 0xffffffff;
    if (0xf < local_e4) {
      ppppuStack_10c = (undefined ****)local_f8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_c = 0xffffffff;
  ppppuStack_10c = *(undefined *****)(in_ECX + 0xbcc);
  FUN_00568c80();
  piVar1 = *(int **)(in_ECX + 0x4f8);
  *(undefined1 *)(in_ECX + 0x504) = 1;
  while (piVar1 != (int *)0x0) {
    if ((char)piVar1[3] == '\0') {
      iVar6 = *piVar1;
      piVar1 = (int *)piVar1[2];
      local_dc = (undefined1 *)&ppppuStack_10c;
      ppppuStack_10c = (undefined ****)0x3e8;
      FUN_00568dc0(*(undefined4 *)(in_ECX + 0xbcc),iVar6 + 0x70);
    }
    else {
      piVar1 = (int *)piVar1[2];
    }
  }
  ppppuStack_10c = (undefined ****)0x502eda;
  FUN_005499c0();
  piVar1 = *(int **)(in_ECX + 0xe44);
  do {
    while( true ) {
      if (piVar1 == (int *)0x0) {
        FUN_00508330();
        if ((*(char *)(DAT_012588e8 + 0xd10) != '\0') && (0 < *(int *)(in_ECX + 0x844))) {
          ppppuStack_10c = (undefined ****)0x502fab;
          cVar4 = (**(code **)(**(int **)(in_ECX + 0x84c) + 0x20))();
          if (cVar4 == '\0') {
            *(undefined4 *)(in_ECX + 0x84c) = **(undefined4 **)(in_ECX + 0x83c);
            FUN_0051c890();
            FUN_0050ea30();
          }
        }
        FUN_00525860();
        iVar6 = 0;
        if (0 < (int)(*(int *)(in_ECX + 0x1594) - *(int *)(in_ECX + 0x1590) & 0xfffffffcU)) {
          do {
            ppppuStack_10c = (undefined ****)(in_ECX + 0x1c);
            FUN_004723d0();
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(in_ECX + 0x1594) - *(int *)(in_ECX + 0x1590) >> 2);
        }
        ExceptionList = pvStack_14;
        return;
      }
      pppuVar2 = (undefined ***)*piVar1;
      piVar1 = (int *)piVar1[2];
      if (((int)pppuVar2[0x13] - (int)pppuVar2[0x12] & 0xfffffffcU) == 0) break;
      ppppuStack_10c = (undefined ****)0x502f78;
      FUN_004cfd20();
    }
    for (ppppuStack_10c = *(undefined *****)(in_ECX + 0xe44); ppppuStack_10c != (undefined ****)0x0;
        ppppuStack_10c = (undefined ****)ppppuStack_10c[2]) {
      if (*ppppuStack_10c == pppuVar2) {
        if (ppppuStack_10c != (undefined ****)0x0) {
          if (*(char *)(in_ECX + 0xe50) == '\0') {
            pppuVar2 = ppppuStack_10c[1];
            pppuVar3 = ppppuStack_10c[2];
            if (pppuVar2 != (undefined ***)0x0) {
              pppuVar2[2] = (undefined **)pppuVar3;
            }
            if (pppuVar3 != (undefined ***)0x0) {
              pppuVar3[1] = (undefined **)pppuVar2;
            }
            if (ppppuStack_10c == *(undefined *****)(in_ECX + 0xe44)) {
              *(undefined ****)(in_ECX + 0xe44) = pppuVar3;
            }
            if (ppppuStack_10c == *(undefined *****)(in_ECX + 0xe48)) {
              *(undefined ****)(in_ECX + 0xe48) = pppuVar2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          *(undefined1 *)(ppppuStack_10c + 3) = 1;
        }
        break;
      }
    }
    if (pppuVar2 != (undefined ***)0x0) {
      ppppuStack_10c = (undefined ****)0x1;
      (*(code *)**pppuVar2)();
    }
  } while( true );
}

