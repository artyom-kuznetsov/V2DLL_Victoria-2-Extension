// FUN_0097e850 @ 0097e850 body=[[0097e850, 0097eb20] [0097eb24, 0097eb4d] [0097eb51, 0097eb6f] [0097eb73, 0097eb94] [0097eb98, 0097ebb3] [0097ebb7, 0097ebcb]]


void FUN_0097e850(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  float *pfStack_118;
  undefined1 *puStack_114;
  int *piStack_104;
  int *local_100;
  float local_fc;
  undefined1 *puStack_f8;
  undefined4 uStack_f4;
  char *pcStack_f0;
  undefined1 auStack_ec [12];
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  undefined4 uStack_bc;
  char *pcStack_b8;
  undefined4 uStack_a8;
  uint uStack_a4;
  char *pcStack_9c;
  undefined1 auStack_98 [12];
  undefined4 uStack_8c;
  uint uStack_88;
  char *pcStack_80;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 local_60 [72];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba2794;
  pvStack_14 = ExceptionList;
  puStack_114 = *(undefined1 **)(in_ECX + 0x28);
  pfStack_118 = (float *)0x97e886;
  ExceptionList = &pvStack_14;
  FUN_008a8800();
  iVar5 = *(int *)(*(int *)(in_ECX + 0x2c) + 0x28);
  iVar7 = *(int *)(in_ECX + 0x28);
  iVar2 = iVar5 * 0x30 + *(int *)(*(int *)(iVar7 + 0x68) + 200);
  local_100 = (int *)0x0;
  if (((*(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20) & 0xfffffffcU) == 0) &&
     ((*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) & 0xfffffff0U) == 0)) {
    iVar5 = iVar5 * 0x30 + *(int *)(*(int *)(iVar7 + 0x68) + 0xd8);
    if (((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20) & 0xfffffffcU) == 0) &&
       ((*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8) & 0xfffffff0U) == 0)) {
      piVar3 = (int *)0x0;
    }
    else {
      puStack_114 = local_60;
      pfStack_118 = &local_fc;
      piVar3 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 0x68) + 0xd8) +
                                           *(int *)(*(int *)(in_ECX + 0x2c) + 0x28) * 0x30) + 0x18))
                                ();
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    puStack_114 = local_60;
    pfStack_118 = &local_fc;
    piVar3 = (int *)(**(code **)(*(int *)(iVar5 * 0x30 + *(int *)(*(int *)(iVar7 + 0x68) + 200)) +
                                0x18))();
    piVar3 = (int *)*piVar3;
  }
  iVar5 = *(int *)(*(int *)(in_ECX + 0x28) + 100);
  if (*(int *)(iVar5 + 0x164) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = **(int **)(iVar5 + 0x15c);
  }
  piStack_104 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(iVar5 + 300) * 0x10) +
                         *(int *)(iVar7 + 0x6c) * 4);
  puStack_114 = (undefined1 *)0x97e98a;
  cVar1 = (**(code **)(*piStack_104 + 0x34))();
  if (cVar1 != '\0') {
    piVar3 = (int *)((int)piVar3 +
                    *(int *)(piStack_104[0x1f] + *(int *)(*(int *)(in_ECX + 0x2c) + 0x28) * 4));
  }
  local_100 = (int *)0x0;
  piStack_104 = piVar3;
  ppiVar4 = &piStack_104;
  if ((int)piVar3 < 1) {
    ppiVar4 = &local_100;
  }
  piVar3 = *ppiVar4;
  puStack_114 = (undefined1 *)0x1;
  pfStack_118 = (float *)&DAT_00df9644;
  uStack_bc = 0xf;
  uStack_c0 = 0;
  auStack_d0[0] = 0;
  local_100 = piVar3;
  FUN_00409350();
  uStack_c = 0;
  piStack_104 = (int *)&DAT_00df8518;
  if ((int)piVar3 < 1) {
    piStack_104 = (int *)&DAT_00ded94d;
  }
  puStack_114 = (undefined1 *)0xa;
  pfStack_118 = (float *)0xe3702c;
  uStack_d8 = 0xf;
  uStack_dc = 0;
  auStack_ec[0] = 0;
  FUN_00409350();
  uStack_c._0_1_ = 1;
  piVar3 = *(int **)(in_ECX + 0x20);
  uStack_f4 = 0;
  puStack_114 = (undefined1 *)0x2;
  puStack_f8 = (undefined1 *)&pfStack_118;
  local_fc = (float)((float10)0x320000 * (float10)3.0517578125e-05);
  FUN_00401000((local_fc + 0.0005) * 1000.0);
  iVar5 = FUN_00b31c00();
  pfStack_118 = (float *)__alldiv((longlong)iVar5 * (longlong)(int)local_100,1000,0);
  puStack_114 = (undefined1 *)FUN_00988a50(auStack_98);
  uStack_c._0_1_ = 2;
  pfStack_118 = (float *)0x97eab2;
  FUN_00988fa0();
  puStack_114 = auStack_d0;
  uStack_c._0_1_ = 3;
  pfStack_118 = (float *)0x97ead0;
  uVar6 = FUN_00988f20();
  uStack_c = CONCAT31(uStack_c._1_3_,4);
  puStack_114 = auStack_ec;
  pfStack_118 = (float *)0x97eae8;
  (**(code **)(*piVar3 + 0x3c))();
  pfStack_118 = (float *)0xffffffff;
  FUN_00408ed0(uVar6,0);
  pfStack_118 = (float *)0x0;
  FUN_00a5ecc0(uVar6);
  if (0xf < uStack_6c) {
    pfStack_118 = (float *)pcStack_80;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_6c = 0xf;
  uStack_70 = 0;
  pcStack_80 = (char *)((uint)pcStack_80 & 0xffffff00);
  if (0xf < uStack_a4) {
    pfStack_118 = (float *)pcStack_b8;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_a4 = 0xf;
  uStack_a8 = 0;
  pcStack_b8 = (char *)((uint)pcStack_b8 & 0xffffff00);
  if (0xf < uStack_88) {
    pfStack_118 = (float *)pcStack_9c;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_88 = 0xf;
  uStack_8c = 0;
  pcStack_9c = (char *)((uint)pcStack_9c & 0xffffff00);
  if (0xf < uStack_dc) {
    pfStack_118 = (float *)pcStack_f0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_dc = 0xf;
  uStack_e0 = 0;
  pcStack_f0 = (char *)((uint)pcStack_f0 & 0xffffff00);
  if (0xf < uStack_c0) {
    pfStack_118 = (float *)pcStack_d4;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_18;
  return;
}

