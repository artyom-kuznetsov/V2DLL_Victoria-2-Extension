// FUN_0099bf60 @ 0099bf60 body=[[0099bf60, 0099c1a3] [0099c1be, 0099c253] [0099c257, 0099c361]]


void FUN_0099bf60(undefined4 *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  uint unaff_ESI;
  int iVar5;
  int *piVar6;
  code *pcStack_11c;
  char *pcStack_118;
  undefined4 uStack_114;
  int *piStack_110;
  code **ppcStack_10c;
  undefined1 auStack_fc [4];
  code *local_f8 [3];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined **appuStack_84 [3];
  undefined **appuStack_78 [16];
  void *pvStack_38;
  undefined1 uStack_30;
  undefined4 uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b57b3c;
  pvStack_14 = ExceptionList;
  ppcStack_10c = local_f8;
  piStack_110 = (int *)(in_ECX + 0x88);
  local_f8[0] = FUN_00a4ad30;
  uStack_114 = 0x99bf9f;
  ExceptionList = &pvStack_14;
  FUN_0099e8b0();
  for (piVar6 = *(int **)(in_ECX + 0x6bd00);
      (*(int **)(in_ECX + 0x6bd00) <= piVar6 && (piVar6 < *(int **)(in_ECX + 0x6bd04)));
      piVar6 = piVar6 + 1) {
    ppcStack_10c = (code **)*piVar6;
    if (ppcStack_10c != (code **)0x0) {
      piStack_110 = (int *)0x99bfc6;
      (**(code **)((int)*ppcStack_10c + 0x114))();
    }
  }
  if (*(char *)(in_ECX + 0x6bc4c) != '\0') {
    ppcStack_10c = (code **)0x99bfd9;
    FUN_0099d060();
  }
  ppcStack_10c = local_f8;
  piStack_110 = (int *)(in_ECX + 0xa0);
  local_f8[0] = (code *)&LAB_005dafc0;
  uStack_114 = 0x99bff3;
  FUN_0099e8b0();
  ppcStack_10c = local_f8;
  piStack_110 = (int *)(in_ECX + 0x6bcf0);
  local_f8[0] = (code *)&LAB_005dafc0;
  uStack_114 = 0x99c008;
  FUN_0099e8b0();
  iVar5 = *(int *)(in_ECX + 0x6bc90);
  iVar2 = *(int *)(in_ECX + 0x6bc94) - iVar5 >> 2;
  if (iVar2 != 0) {
    iVar2 = iVar5 + iVar2 * 4;
    for (; iVar5 != iVar2; iVar5 = iVar5 + 4) {
      ppcStack_10c = (code **)0x99c02b;
      FUN_0099eee0();
    }
  }
  ppcStack_10c = *(code ***)(in_ECX + 0x10);
  if (ppcStack_10c != (code **)0x0) {
    piStack_110 = (int *)0x99c041;
    (**(code **)((int)*ppcStack_10c + 8))();
  }
  ppcStack_10c = *(code ***)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if (ppcStack_10c != (code **)0x0) {
    piStack_110 = (int *)0x99c05a;
    (**(code **)((int)*ppcStack_10c + 8))();
  }
  uVar3 = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (param_3 == '\0') {
    *(undefined4 *)(in_ECX + 0x6bcc4) = 1;
  }
  else {
    *(undefined4 *)(in_ECX + 0x6bcc4) = 0;
    *(undefined4 *)(in_ECX + 0x6bca4) = *param_1;
    *(undefined4 *)(in_ECX + 0x6bca8) = param_1[1];
    uVar3 = param_2;
  }
  *(undefined4 *)(in_ECX + 0x6bcd4) = uVar3;
  piStack_110 = *(int **)(in_ECX + 100);
  *(uint *)(in_ECX + 0x6bcd8) =
       (-(uint)(*(char *)(*(int *)(in_ECX + 0x6bc48) + 0x32) != '\0') & 0x80000001) + 0x80000000;
  ppcStack_10c = (code **)(in_ECX + 0x6bca4);
  uStack_114 = 0x99c0c4;
  iVar5 = (**(code **)(*piStack_110 + 0x40))();
  uStack_114 = 0xc;
  uStack_e8 = 0xf;
  uStack_ec = 0;
  auStack_fc[0] = 0;
  pcStack_118 = "graphics.cpp";
  if (iVar5 < 0) {
    pcStack_11c = (code *)0x99c0f0;
    FUN_00409350();
    uStack_114 = 0x1000;
    pcStack_11c = (code *)auStack_fc;
    pcStack_118 = (char *)0xd51;
    pvStack_14 = (void *)0x0;
    uVar3 = FUN_004015b0();
    uStack_114 = 0;
    pcStack_118 = (char *)0x18;
    pcStack_11c = (code *)0xe380dc;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
    FUN_00987d50(uVar3);
    uVar4 = FUN_00a93bfc(iVar5);
    uVar3 = FUN_004931f0(uVar3,iVar5,extraout_ECX,&DAT_00e29ba0,extraout_ECX,uVar4);
    uVar3 = FUN_00418e30(uVar3);
    uVar3 = FUN_00418e30(uVar3);
    FUN_00401280(uVar3);
    uStack_30 = 0;
    FUN_00987ac0(appuStack_84);
    appuStack_84[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_84);
    if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pcStack_118);
    }
  }
  else {
    pcStack_11c = (code *)0x99c1c3;
    FUN_00409350();
    uStack_114 = 3;
    pcStack_11c = (code *)auStack_fc;
    pcStack_118 = (char *)0xd56;
    pvStack_14 = (void *)0x2;
    uVar3 = FUN_004015b0();
    uStack_114 = 0;
    pcStack_118 = (char *)0xf;
    pcStack_11c = (code *)0xe380f8;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,3);
    FUN_00987d50(uVar3);
    FUN_00401280(uVar3);
    uStack_24 = CONCAT31(uStack_24._1_3_,2);
    FUN_00987ac0(appuStack_78);
    appuStack_78[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_78);
    uStack_24 = 0xffffffff;
    if ((code *)0xf < local_f8[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppcStack_10c);
    }
    (**(code **)(**(int **)(in_ECX + 100) + 0x48))(*(int **)(in_ECX + 100),0,0,0,in_ECX + 0x10);
    (**(code **)(**(int **)(in_ECX + 100) + 0xa0))
              (*(int **)(in_ECX + 100),(undefined4 *)(in_ECX + 0x14));
    pcStack_11c = FUN_00a4ad60;
    FUN_0099e8b0(in_ECX + 0x88,&pcStack_11c);
    for (piVar6 = *(int **)(in_ECX + 0x6bd00);
        (*(int **)(in_ECX + 0x6bd00) <= piVar6 && (piVar6 < *(int **)(in_ECX + 0x6bd04)));
        piVar6 = piVar6 + 1) {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x118))(piVar1);
      }
    }
    FUN_0099da20();
    if (*(char *)(in_ECX + 0x6bc4c) != '\0') {
      FUN_0099d0c0();
    }
    pcStack_11c = (code *)&LAB_009e6d30;
    FUN_0099e8b0(in_ECX + 0xa0,&pcStack_11c);
    pcStack_11c = (code *)&LAB_009e6d30;
    FUN_0099e8b0(in_ECX + 0x6bcf0,&pcStack_11c);
    iVar5 = *(int *)(in_ECX + 0x6bc90);
    iVar2 = *(int *)(in_ECX + 0x6bc94) - iVar5 >> 2;
    if (iVar2 != 0) {
      iVar2 = iVar5 + iVar2 * 4;
      for (; iVar5 != iVar2; iVar5 = iVar5 + 4) {
        FUN_0099eef0();
      }
    }
    *(undefined1 *)(in_ECX + 0x6bcdc) = 1;
    *(undefined1 *)(in_ECX + 0x6bca0) = 1;
    FUN_0099da20();
  }
  ExceptionList = pvStack_38;
  return;
}

