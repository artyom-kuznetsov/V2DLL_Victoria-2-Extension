// FUN_006537e0 @ 006537e0 body=[[006537e0, 006538b8] [006538bc, 00653cbf]]


void FUN_006537e0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_268 [12];
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int *piStack_254;
  undefined4 ****ppppuStack_250;
  undefined4 uStack_24c;
  undefined1 local_ec [28];
  int local_d0;
  undefined1 *local_c8;
  undefined1 local_a4 [28];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_6c [28];
  undefined4 ****local_50 [3];
  undefined **local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  char local_37;
  undefined4 ****local_34 [5];
  uint local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8c0aa;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdb8;
  if ((char)param_1[0x2f1] != '\0') {
    if (*(char *)((int)param_1 + 0xbc5) == '\0') {
      *(undefined1 *)((int)param_1 + 0xbc5) = 1;
      return;
    }
    if (((char)param_1[0x2f1] != '\0') && (*(char *)((int)param_1 + 0xbc5) != '\0')) {
      uStack_24c = 0x653856;
      ExceptionList = &local_10;
      iVar2 = (**(code **)(*param_1 + 0x44))();
      if (*(char *)(iVar2 + 0x34) != '\0') {
        *(undefined2 *)(param_1 + 0x2f1) = 0;
        uStack_24c = 1;
        ppppuStack_250 = (undefined4 ****)0x65387e;
        (**(code **)(**(int **)(param_1[0x5fa] + 0xe4) + 0x10))();
        ppppuStack_250 = (undefined4 ****)0x65388e;
        FUN_009885d0();
        local_8 = 0;
        ppppuStack_250 = (undefined4 ****)0x65389a;
        ppppuStack_250 = (undefined4 ****)FUN_00475500();
        piStack_254 = (int *)0x6538a3;
        iVar2 = FUN_0040b410();
        if (0xf < local_20) {
          ppppuStack_250 = local_34[0];
                    /* WARNING: Subroutine does not return */
          piStack_254 = (int *)&UNK_006538b9;
          FUN_00aae91b();
        }
        if (*(int *)(iVar2 + 0x10) != 0) {
          ppppuStack_250 = (undefined4 ****)0x6538d1;
          FUN_009885d0();
          local_8._0_1_ = 1;
          ppppuStack_250 = (undefined4 ****)0x6538da;
          ppppuStack_250 = (undefined4 ****)FUN_00475500();
          piStack_254 = (int *)0x6538e3;
          ppppuStack_250 = (undefined4 ****)FUN_0040b410();
          local_8._0_1_ = 2;
          piStack_254 = (int *)0x6538f8;
          FUN_00988fa0();
          ppppuStack_250 = local_34;
          local_8._0_1_ = 3;
          piStack_254 = (int *)0x65390d;
          uStack_258 = FUN_00988f20();
          ppppuStack_250 = (undefined4 ****)0xffffffff;
          piStack_254 = (int *)0x0;
          local_8._0_1_ = 4;
          uStack_25c = 0x653921;
          FUN_00408ed0();
          ppppuStack_250 = (undefined4 ****)0x653928;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653933;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x65393b;
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          ppppuStack_250 = (undefined4 ****)0x653947;
          FUN_00408ad0();
        }
        ppppuStack_250 = (undefined4 ****)0x65394c;
        iVar2 = FUN_00475500();
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = 0;
        local_8._0_1_ = 5;
        if (*(int *)(iVar2 + 0x15c) == 0) {
          ppppuStack_250 = (undefined4 ****)0x653983;
          FUN_009885d0();
          local_8._0_1_ = 6;
          piStack_254 = (int *)0x653998;
          ppppuStack_250 = (undefined4 ****)local_a4;
          uStack_258 = FUN_00988f20();
          ppppuStack_250 = (undefined4 ****)0xffffffff;
          piStack_254 = (int *)0x0;
          local_8._0_1_ = 7;
          uStack_25c = 0x6539ac;
          FUN_00408ed0();
          ppppuStack_250 = (undefined4 ****)0x6539b3;
          FUN_00408ad0();
          local_8._0_1_ = 5;
          ppppuStack_250 = (undefined4 ****)0x6539c2;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x6539d2;
          FUN_009885d0();
          local_8._0_1_ = 8;
          piStack_254 = (int *)0x6539e7;
          ppppuStack_250 = (undefined4 ****)local_a4;
          FUN_00988f20();
          local_8._0_1_ = 10;
          ppppuStack_250 = (undefined4 ****)0x6539f6;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653a03;
          FUN_009885d0();
          local_8._0_1_ = 0xb;
          piStack_254 = (int *)0x653a18;
          ppppuStack_250 = (undefined4 ****)local_6c;
          FUN_00988f20();
          local_8 = CONCAT31(local_8._1_3_,0xd);
          ppppuStack_250 = (undefined4 ****)0x653a24;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653a2f;
          cVar1 = FUN_00991930();
          if (cVar1 != '\0') {
            ppppuStack_250 = (undefined4 ****)0x653a3b;
            cVar1 = FUN_00991930();
            if (cVar1 != '\0') {
              ppppuStack_250 = (undefined4 ****)0x653a46;
              cVar1 = FUN_00991930();
              if (cVar1 != '\0') {
                ppppuStack_250 = local_50[0];
                if (local_3c < 0x10) {
                  ppppuStack_250 = local_50;
                }
                piStack_254 = (int *)0x653a60;
                PHYSFS_delete();
              }
              if (local_3c < 0x10) {
                local_50[0] = local_50;
              }
              piStack_254 = (int *)0x653a7f;
              ppppuStack_250 = local_50[0];
              FUN_00991ae0();
            }
            if (local_20 < 0x10) {
              local_34[0] = local_34;
            }
            piStack_254 = (int *)0x653aab;
            ppppuStack_250 = local_34[0];
            FUN_00991ae0();
          }
          ppppuStack_250 = (undefined4 ****)0x653ab6;
          FUN_00408ad0();
        }
        else {
          ppppuStack_250 = (undefined4 ****)0x653acb;
          FUN_009885d0();
          local_8._0_1_ = 0xe;
          ppppuStack_250 = (undefined4 ****)0x653adc;
          FUN_009885d0();
          local_8._0_1_ = 0xf;
          ppppuStack_250 = (undefined4 ****)0x653af7;
          FUN_009885d0();
          local_8._0_1_ = 0x10;
          ppppuStack_250 = (undefined4 ****)0x653b08;
          FUN_009885d0();
          local_8._0_1_ = 0x11;
          ppppuStack_250 = (undefined4 ****)local_ec;
          piStack_254 = DAT_012588e8 + 0x2c3;
          uStack_258 = 0x653b25;
          uVar3 = FUN_0043b0d0();
          local_8._0_1_ = 0x12;
          piStack_254 = (int *)0x653b3f;
          ppppuStack_250 = (undefined4 ****)local_6c;
          FUN_00988f20();
          ppppuStack_250 = (undefined4 ****)local_a4;
          local_8._0_1_ = 0x13;
          piStack_254 = (int *)0x653b57;
          FUN_00988f20();
          ppppuStack_250 = local_34;
          local_8._0_1_ = 0x14;
          piStack_254 = (int *)0x653b6c;
          FUN_00988f20();
          local_8._0_1_ = 0x15;
          piStack_254 = (int *)0x653b7e;
          ppppuStack_250 = (undefined4 ****)uVar3;
          FUN_00988f20();
          ppppuStack_250 = local_50;
          local_8._0_1_ = 0x16;
          piStack_254 = (int *)0x653b93;
          uStack_258 = FUN_00988f20();
          ppppuStack_250 = (undefined4 ****)0xffffffff;
          piStack_254 = (int *)0x0;
          local_8 = CONCAT31(local_8._1_3_,0x17);
          uStack_25c = 0x653ba7;
          FUN_00408ed0();
          ppppuStack_250 = (undefined4 ****)0x653bae;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653bb9;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653bc4;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653bcf;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653bda;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653be5;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653bed;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653bf8;
          FUN_00408ad0();
          ppppuStack_250 = (undefined4 ****)0x653c00;
          FUN_00408ad0();
        }
        ppppuStack_250 = (undefined4 ****)0x653c08;
        FUN_00408ad0();
        ppppuStack_250 = (undefined4 ****)0x3c;
        local_8._0_1_ = 0x18;
        piStack_254 = (int *)0x653c13;
        iVar2 = FUN_00aae9af();
        local_8._0_1_ = 0x19;
        local_d0 = iVar2;
        if (iVar2 == 0) {
          local_3c = (undefined4 *)0x0;
        }
        else {
          local_c8 = auStack_268;
          FUN_009885d0();
          local_3c = (undefined4 *)FUN_00992740(iVar2,local_88,1);
        }
        ppppuStack_250 = (undefined4 ****)0x653c5c;
        FUN_00993a80();
        local_44 = &PTR_FUN_00e38528;
        local_37 = '\x01';
        local_38 = *(char *)((int)local_3c + 0x13) != '\0';
        local_8._0_1_ = 0x1a;
        local_40 = 0xffffffff;
        ppppuStack_250 = (undefined4 ****)&local_44;
        piStack_254 = (int *)0x653c98;
        (**(code **)(*DAT_012588e8 + 4))();
        local_8 = CONCAT31(local_8._1_3_,0x18);
        local_44 = &PTR_FUN_00e38528;
        if ((local_3c != (undefined4 *)0x0) && (local_37 != '\0')) {
          piStack_254 = (int *)0x1;
          uStack_258 = 0x653cb4;
          (**(code **)*local_3c)();
        }
        local_8 = 5;
        FUN_00653d9b();
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

