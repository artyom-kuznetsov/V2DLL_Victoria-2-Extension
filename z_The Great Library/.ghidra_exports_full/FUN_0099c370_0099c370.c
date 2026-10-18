// FUN_0099c370 @ 0099c370 body=[[0099c370, 0099c4bd] [0099c4c1, 0099c4f0] [0099c4f4, 0099c6fc]]


undefined1 FUN_0099c370(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcStack_228;
  char *pcStack_224;
  undefined1 auStack_20c [4];
  uint uStack_208;
  uint uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f0;
  uint auStack_1ec [7];
  undefined1 auStack_1d0 [156];
  undefined **appuStack_134 [46];
  undefined **appuStack_7c [19];
  void *pvStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b57b02;
  pvStack_14 = ExceptionList;
  piVar1 = *(int **)(param_1 + 100);
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x6bca0) = 1;
  }
  else if (*(char *)(param_1 + 0x6bca0) == '\0') {
    if (iVar2 == -0x7789f797) {
      pcStack_224 = "graphics.cpp";
      uStack_1f8 = 0xf;
      uStack_1fc = 0;
      auStack_20c[0] = 0;
      pcStack_228 = (code *)0x99c411;
      FUN_00409350();
      pcStack_224 = (char *)param_1;
      puStack_10 = (undefined1 *)0x0;
      pcStack_228 = (code *)0x99c423;
      puVar3 = (undefined4 *)FUN_0099d3d0();
      pcStack_228 = (code *)auStack_20c;
      pcStack_224 = (char *)0xd7e;
      puStack_10._0_1_ = 1;
      uVar4 = FUN_004015b0();
      pcStack_224 = (char *)0x22;
      pcStack_228 = (code *)0xe38108;
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
      FUN_00987d50(uVar4);
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      uVar4 = FUN_00418e30(uVar4,puVar3);
      FUN_00401280(uVar4);
      uStack_20 = CONCAT31(uStack_20._1_3_,1);
      FUN_00987ac0(appuStack_134);
      appuStack_134[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_134);
      if (0xf < auStack_1ec[0]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_200);
      }
      uStack_20 = 0xffffffff;
      auStack_1ec[0] = 0xf;
      uStack_1f0 = 0;
      uStack_200 = uStack_200 & 0xffffff00;
      if (0xf < uStack_208) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar1);
      }
      FUN_0099e8b0(param_1 + 0x88,&stack0xfffffde0);
      FUN_009bee00();
      if (*(char *)(param_1 + 0x6bc4c) != '\0') {
        FUN_0099d060();
      }
      FUN_0099e8b0(param_1 + 0xa0,&stack0xfffffde0);
      FUN_0099e8b0(param_1 + 0x6bcf0,&stack0xfffffde0);
      FUN_0099e8f0(&stack0xfffffde0);
      FUN_0099a560();
      iVar2 = (**(code **)(**(int **)(param_1 + 100) + 0x40))
                        (*(int **)(param_1 + 100),param_1 + 0x6bca4);
      if (-1 < iVar2) {
        FUN_0099a590();
        pcStack_228 = FUN_00a4ad60;
        FUN_0099e8b0(param_1 + 0x88,&pcStack_228);
        FUN_009bee30();
        if (*(char *)(param_1 + 0x6bc4c) != '\0') {
          FUN_0099d0c0();
        }
        FUN_0099da20();
        pcStack_228 = (code *)&LAB_009e6d30;
        FUN_0099e8b0(param_1 + 0xa0,&pcStack_228);
        pcStack_228 = (code *)&LAB_009e6d30;
        FUN_0099e8b0(param_1 + 0x6bcf0,&pcStack_228);
        pcStack_228 = FUN_0099eef0;
        FUN_0099e8f0(&pcStack_228);
        *(undefined1 *)(param_1 + 0x6bcdc) = 1;
        *(undefined1 *)(param_1 + 0x6bca0) = 1;
        FUN_0099da20();
        FUN_009885d0();
        uStack_28 = 3;
        puVar3 = (undefined4 *)FUN_0099d3d0(param_1,auStack_1d0);
        uStack_28._0_1_ = 4;
        uVar4 = FUN_004015b0(auStack_1ec,0xdc6,3);
        uStack_28._0_1_ = 5;
        FUN_00987d50(uVar4,"Used video memory after alt tab: ",0x21,0);
        if (0xf < (uint)puVar3[5]) {
          puVar3 = (undefined4 *)*puVar3;
        }
        uVar4 = FUN_00418e30(uVar4,puVar3);
        FUN_00401280(uVar4);
        uStack_28 = CONCAT31(uStack_28._1_3_,4);
        FUN_00987ac0(appuStack_7c);
        appuStack_7c[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_7c);
        FUN_00408ad0();
        FUN_00408ad0();
      }
      ExceptionList = pvStack_30;
      return 0;
    }
  }
  else {
    pcStack_224 = (char *)0x99c3e0;
    Sleep(1000);
    *(undefined1 *)(param_1 + 0x6bca0) = 0;
  }
  ExceptionList = pvStack_18;
  return *(undefined1 *)(param_1 + 0x6bca0);
}

