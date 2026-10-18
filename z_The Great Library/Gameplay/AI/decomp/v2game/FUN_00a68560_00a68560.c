// FUN_00a68560 @ 00a68560 body=[[00a68560, 00a68846] [00a6884a, 00a6892f]]


void FUN_00a68560(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  undefined4 *puStack_568;
  undefined1 *puStack_564;
  int **ppiStack_560;
  undefined1 *puStack_55c;
  undefined **ppuStack_558;
  undefined ***pppuStack_554;
  int *piStack_544;
  undefined **ppuStack_540;
  int *piStack_53c;
  int iStack_538;
  undefined **ppuStack_534;
  undefined **ppuStack_530;
  undefined4 *puStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  uint uStack_520;
  int iStack_510;
  undefined1 local_50c [4];
  int *piStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined1 uStack_4e8;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined1 auStack_4cc [19];
  char cStack_4b9;
  undefined **ppuStack_494;
  undefined4 *puStack_490;
  undefined2 uStack_384;
  undefined1 auStack_37c [32];
  undefined4 uStack_35c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5cbb3;
  local_14 = ExceptionList;
  if (param_1 != (int *)0x0) {
    pppuStack_554 = (undefined ***)0xa685a0;
    ExceptionList = &local_14;
    cVar3 = (**(code **)(*param_1 + 0x38))();
    if (cVar3 == '\0') {
      pppuStack_554 = (undefined ***)0x1;
      ppuStack_558 = (undefined **)0xa685ae;
      (**(code **)*param_1)();
      ExceptionList = pvStack_18;
      return;
    }
    iVar4 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x54);
    if (0x7fff < iVar4) {
      iVar4 = 0;
    }
    *(short *)(param_1 + 0xd) = (short)iVar4;
    if (*(char *)((int)param_1 + 0x36) == '\0') {
      ppuStack_540 = (undefined **)(in_ECX + 0x88);
      LOCK();
      piStack_544 = (int *)*ppuStack_540;
      *ppuStack_540 = *ppuStack_540 + 1;
      UNLOCK();
      param_1[0xe] = (int)piStack_544;
    }
    piStack_508 = (int *)0x0;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4d4 = 0xf;
    uStack_4d8 = 0;
    uStack_4e8 = 0;
    pppuStack_554 = (undefined ***)0x0;
    ppuStack_558 = (undefined **)0x0;
    puStack_55c = (undefined1 *)0x1;
    ppiStack_560 = &piStack_508;
    puStack_564 = auStack_4cc;
    uStack_c = 0;
    puStack_568 = (undefined4 *)0xa68643;
    FUN_009d5450();
    uStack_528 = auStack_4cc;
    ppuStack_530 = &PTR_FUN_00e38528;
    puStack_52c = (undefined4 *)0x0;
    uStack_524 = (uint)uStack_524._2_2_ << 0x10;
    uStack_524 = CONCAT31(uStack_524._1_3_,cStack_4b9 != '\0');
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    pppuStack_554 = (undefined ***)0xa6867e;
    (**(code **)(*param_1 + 0x1c))();
    pppuStack_554 = &ppuStack_530;
    ppuStack_558 = (undefined **)0xa6868a;
    FUN_009a0940();
    pppuStack_554 = &ppuStack_530;
    ppuStack_558 = (undefined **)0xa68698;
    (**(code **)(*param_1 + 4))();
    puStack_10._0_1_ = 1;
    ppuStack_534 = &PTR_FUN_00e38528;
    if ((puStack_52c != (undefined4 *)0x0) && (uStack_528._1_1_ != '\0')) {
      ppuStack_558 = (undefined **)0x1;
      puStack_55c = (undefined1 *)0xa686ba;
      (**(code **)*puStack_52c)();
    }
    puStack_10._0_1_ = 0;
    ppuStack_558 = (undefined **)0xa686cd;
    FUN_009d5580();
    iVar4 = 0;
    if (0 < (int)(DAT_013f05bc - DAT_013f05b8 & 0xfffffffcU)) {
      do {
        ppuStack_540 = &PTR_FUN_00e38550;
        ppuStack_558 = (undefined **)0x0;
        puStack_10._0_1_ = 3;
        piStack_53c = *(int **)(DAT_013f05b8 + iVar4 * 4);
        puStack_55c = (undefined1 *)0x0;
        ppiStack_560 = (int **)0x0;
        puStack_564 = local_50c;
        puStack_568 = &uStack_4d0;
        FUN_009d5450();
        puStack_10._0_1_ = 4;
        puStack_490 = &uStack_4d0;
        ppuStack_494 = &PTR_FUN_00e37c30;
        uStack_384 = 0;
        ppuStack_558 = (undefined **)0xa6874f;
        FUN_00990100();
        ppuStack_494 = &PTR_FUN_00e37c48;
        ppuStack_558 = (undefined **)0x0;
        piStack_544 = (int *)&puStack_568;
        puStack_568 = (undefined4 *)0x0;
        puStack_564 = (undefined1 *)0x0;
        ppiStack_560 = (int **)0x0;
        puStack_10._0_1_ = 6;
        FUN_009a2240(*(int *)(iStack_510 + 0x1c) + 0x1c);
        puStack_10._0_1_ = 5;
        FUN_009a0cb0(auStack_37c,&ppuStack_494);
        piVar2 = piStack_53c;
        puStack_10._0_1_ = 7;
        ppuStack_558 = (undefined **)0xffffffff;
        ppiStack_560 = (int **)(*(int *)((int)piStack_53c + 0x1c) + 0xbc);
        puStack_55c = (undefined1 *)0x0;
        piStack_544 = (int *)0x0;
        uStack_520 = 0xf;
        uStack_524 = 0;
        ppuStack_534 = (undefined **)((uint)ppuStack_534 & 0xffffff00);
        puStack_564 = (undefined1 *)0xa687e3;
        FUN_00408ed0();
        ppuStack_558 = (undefined **)auStack_37c;
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,8);
        puStack_55c = (undefined1 *)0xa687f8;
        FUN_009a1440();
        ppuStack_558 = (undefined **)uStack_35c;
        puStack_55c = auStack_37c;
        ppiStack_560 = (int **)0xa68815;
        piVar5 = (int *)(*(code *)ppuStack_540[2])();
        if (piVar5 != (int *)0x0) {
          ppuStack_558 = (undefined **)auStack_37c;
          puStack_55c = (undefined1 *)0xa6882e;
          piStack_544 = piVar5;
          (**(code **)(*piVar5 + 0xc))();
        }
        puStack_10._0_1_ = 7;
        if (0xf < uStack_520) {
          ppuStack_558 = ppuStack_534;
                    /* WARNING: Subroutine does not return */
          puStack_55c = &UNK_00a68847;
          FUN_00aae91b();
        }
        ppuStack_558 = (undefined **)((int)piVar2 + 0x7c);
        iVar1 = *(int *)((int)piVar2 + 0x80);
        piStack_53c = (int *)(iVar1 + 0x80);
        LOCK();
        puStack_55c = (undefined1 *)*piStack_53c;
        *piStack_53c = *piStack_53c + 1;
        UNLOCK();
        ppiStack_560 = &piStack_544;
        puStack_564 = (undefined1 *)(iVar1 + 0x180 + ((int)puStack_55c * 3 & 7U) * 0x14);
        puStack_568 = (undefined4 *)0xa6888c;
        iStack_538 = (int)puStack_55c;
        FUN_00a6a9f0();
        puStack_10._0_1_ = 5;
        ppuStack_558 = (undefined **)0xa688a0;
        FUN_009a0dc0();
        puStack_10._0_1_ = 4;
        ppuStack_494 = &PTR_FUN_00e37c30;
        if ((uStack_384._1_1_ != '\0') && (puStack_490 != (undefined4 *)0x0)) {
          ppuStack_558 = (undefined **)0x1;
          puStack_55c = (undefined1 *)0xa688cf;
          (**(code **)*puStack_490)();
        }
        ppuStack_558 = (undefined **)0xa688db;
        FUN_009d5580();
        puStack_10._0_1_ = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_013f05bc - DAT_013f05b8 >> 2);
    }
    ppuStack_558 = (undefined **)0x1;
    puStack_55c = (undefined1 *)0xa68910;
    (**(code **)*param_1)();
    pppuStack_554 = (undefined ***)0xa68919;
    FUN_009d6f00();
  }
  ExceptionList = local_14;
  return;
}

