// FUN_0045eae0 @ 0045eae0 body=[[0045eae0, 0045ec19] [0045ec1d, 0045ecf8] [0045ecfc, 0045ed1e]]


void FUN_0045eae0(int param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint auStack_110 [4];
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 auStack_f4 [5];
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b965f1;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00409350(&DAT_00ded94d,0);
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
  if (0 < iVar7) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x44) + iVar6 * 4);
      if (((int)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) & 0xfffffffcU) < 1) ||
         (cVar2 = (**(code **)(*(int *)(iVar1 + 8) + 0x18))(param_2), cVar2 != '\0')) {
        uVar3 = *param_4 * 0x343fd + 0x269ec3;
        uVar4 = uVar3 * 0x343fd + 0x269ec3;
        *param_4 = uVar4;
        uVar5 = FUN_0045d9a0(auStack_f4,(uVar3 >> 0x10 & 0x7fff) * (uVar4 >> 0x10 & 0x7fff),
                             *(undefined4 *)(param_2 + 0x28),param_5);
        uStack_c = 0;
        FUN_00408ed0(uVar5,0,0xffffffff);
        uStack_c = 0xffffffff;
        if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_f4[0]);
        }
        if (param_5 != 0) {
          iVar6 = *(int *)(param_5 + 4);
          iVar7 = FUN_0045c080(iVar6,param_3);
          if (iVar7 == iVar6) {
            FUN_00a840b0();
          }
          else {
            uStack_fc = 0xf;
            uStack_100 = 0;
            auStack_110[0] = auStack_110[0] & 0xffffff00;
            FUN_00409350("news_database.cpp",0x11);
            uStack_c = 1;
            uVar5 = FUN_004015b0(auStack_110,0x182,0x10004);
            uStack_c._0_1_ = 2;
            FUN_00987d50(uVar5,
                         "Failed to pick unique picture for newspaper. Images database is too poor."
                         ,0x49,0);
            FUN_00401280(uVar5);
            uStack_c = CONCAT31(uStack_c._1_3_,1);
            FUN_00987ac0(appuStack_60);
            appuStack_60[0] = std::ios_base::vftable;
            FUN_00aad52d(appuStack_60);
            uStack_c = 0xffffffff;
            if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_110[0]);
            }
            uStack_fc = 0xf;
            uStack_100 = 0;
            auStack_110[0] = auStack_110[0] & 0xffffff00;
          }
        }
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  FUN_0045e970(param_2,param_3 + 0x1c,param_1 + 0x54,param_4);
  FUN_0045e970(param_2,param_3 + 0x38,param_1 + 100,param_4);
  ExceptionList = pvStack_14;
  return;
}

