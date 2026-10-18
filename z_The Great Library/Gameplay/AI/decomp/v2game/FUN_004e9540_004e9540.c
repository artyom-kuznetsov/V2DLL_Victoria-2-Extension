// FUN_004e9540 @ 004e9540 body=[[004e9540, 004e98dc] [004e98e0, 004e9b69] [004e9b6d, 004e9b87]]


void FUN_004e9540(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int in_stack_00000030;
  int in_stack_00000034;
  undefined4 in_stack_00000044;
  undefined1 *in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined1 *in_stack_00000050;
  undefined1 *in_stack_00000054;
  int in_stack_00000058;
  int in_stack_00000064;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined1 auStack_274 [116];
  undefined4 uStack_200;
  undefined1 *puStack_1fc;
  undefined4 uStack_1f8;
  undefined1 *puStack_1f4;
  undefined1 auStack_1f0 [80];
  undefined4 uStack_1a0;
  undefined1 *puStack_19c;
  undefined1 *puStack_198;
  undefined1 *puStack_194;
  undefined4 *puStack_190;
  undefined4 uStack_18c;
  undefined1 *puStack_188;
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **local_e8 [27];
  undefined1 local_7c [20];
  undefined1 local_68 [28];
  uint local_4c [2];
  undefined1 local_44 [8];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar6 = in_stack_00000030;
  puStack_c = &LAB_00b9624c;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int *)(DAT_012588e8 + 0xb24) == 0) ||
     (((*(char *)(param_1 + 0x30) == '\0' &&
       ((ExceptionList = &local_10, in_stack_00000030 == 0 ||
        (ExceptionList = &local_10, *(int *)(in_stack_00000030 + 0x30) != 1)))) ||
      (ExceptionList = &local_10, DAT_00f07da6 == '\0')))) goto LAB_004e9b6d;
  local_18 = in_stack_00000030;
  ExceptionList = &local_10;
  if (in_stack_00000030 != 0) {
    uStack_178 = CONCAT44(0x4e95b4,(undefined4)uStack_178);
    ExceptionList = &local_10;
    iVar2 = FUN_006a7c10();
    if (iVar6 != iVar2) {
      puVar8 = (undefined4 *)(DAT_012588e8 + 0xb5c);
      local_20 = in_stack_0000004c;
      local_30 = in_stack_00000044;
      local_2c = in_stack_00000048;
      local_1c = in_stack_00000050;
      if ((in_stack_00000048 == *(undefined1 **)(DAT_012588e8 + 0xb60)) ||
         (in_stack_00000050 == *(undefined1 **)(DAT_012588e8 + 0xb60))) {
LAB_004e9753:
        iVar6 = *(int *)(iVar6 + 0x38);
        local_24 = (undefined1 *)CONCAT31(local_24._1_3_,1);
        local_18 = iVar6;
        if (iVar6 != 0) {
          uStack_178 = CONCAT44(0x4e9766,(undefined4)uStack_178);
          iVar2 = FUN_006a7c10();
          if (iVar6 != iVar2) goto LAB_004e9678;
        }
        uStack_178 = CONCAT44(0x4e977b,(undefined4)uStack_178);
        FUN_009885d0();
        uStack_178 = 0x10004000000fc;
        uVar7 = 3;
        local_8._0_1_ = 3;
        uStack_180 = CONCAT44(local_68,0x4e9798);
        FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,4);
        uStack_178 = CONCAT44(0x4e97ab,(undefined4)uStack_178);
        uVar5 = FUN_00987d20();
        uStack_178 = CONCAT44(uVar5,0x4e97b1);
        FUN_00401280();
      }
      else {
        uStack_178 = CONCAT44(puVar8,0x4e95ff);
        FUN_0042c350();
        uStack_178 = CONCAT44(0x4e9606,(undefined4)uStack_178);
        cVar1 = FUN_0043a860();
        if (cVar1 != '\0') goto LAB_004e9753;
        local_28 = *puVar8;
        uStack_178 = CONCAT44(0x4e962d,(undefined4)uStack_178);
        cVar1 = FUN_0043ca70();
        if (cVar1 != '\0') goto LAB_004e9753;
        uStack_178 = CONCAT44(0x4e963d,(undefined4)uStack_178);
        cVar1 = FUN_0043ca70();
        if (cVar1 != '\0') goto LAB_004e9753;
        local_24 = (undefined1 *)((uint)local_24 & 0xffffff00);
        iVar9 = in_stack_00000058 - (int)in_stack_00000054 >> 3;
        iVar2 = 0;
        iVar6 = local_18;
        if (0 < iVar9) {
          local_1c = in_stack_00000054;
          do {
            uStack_178 = CONCAT44(0x4e9664,(undefined4)uStack_178);
            cVar1 = FUN_0043ca70();
            iVar6 = local_18;
            if (cVar1 != '\0') goto LAB_004e9753;
            local_1c = local_1c + 8;
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar9);
        }
LAB_004e9678:
        if (((*(char *)(iVar6 + 0xe) != '\0') || (*(char *)(iVar6 + 0x10) != '\0')) ||
           ((*(int *)(iVar6 + 0x30) == 1 && (*(char *)(DAT_012588e8 + 0xd11) != '\0')))) {
          local_1c = auStack_1f0;
          puStack_1f4 = auStack_1f0;
          uStack_1f8 = 0x4e96b5;
          FUN_006a8070();
          puStack_1f4 = param_2;
          uStack_1f8 = 0x4e96c3;
          piVar3 = (int *)FUN_004e9e30();
          uStack_178 = CONCAT44(piVar3,0x4e96d7);
          FUN_006480e0();
          uStack_178 = CONCAT44(0x4e96e0,(undefined4)uStack_178);
          (**(code **)(*piVar3 + 0x34))();
          uStack_178 = CONCAT44(0x4e96e9,(undefined4)uStack_178);
          (**(code **)(*piVar3 + 0x28))();
          iVar6 = local_18;
          if (((char)(*(int **)(DAT_012588e8 + 0xb24))[0x17] == '\0') &&
             (*(char *)(local_18 + 0x10) != '\0')) {
            uStack_178 = CONCAT44(0x4e9715,(undefined4)uStack_178);
            cVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x158))();
            iVar6 = local_18;
            if (cVar1 == '\0') {
              uStack_178 = 0x5c004e9724;
              puVar4 = (undefined1 *)FUN_00aae9af();
              local_8._0_1_ = 5;
              local_1c = puVar4;
              if (puVar4 == (undefined1 *)0x0) {
                uVar5 = 0;
              }
              else {
                uStack_178 = CONCAT44(DAT_012588e8,0x4e9743);
                uVar5 = FUN_0068b610();
                uStack_178 = CONCAT44(1,uVar5);
                uStack_180 = CONCAT44(puVar4,0x4e974c);
                uVar5 = FUN_0072cef0();
              }
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_178 = CONCAT44(0x4e97d2,(undefined4)uStack_178);
              iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
              uStack_178 = CONCAT44(uVar5,0x4e97dd);
              (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))();
              iVar6 = local_18;
            }
          }
        }
        if (*(char *)(iVar6 + 0x11) != '\0') {
          uStack_178 = 0x100004e97f4;
          puVar4 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 6;
          local_1c = puVar4;
          if (puVar4 == (undefined1 *)0x0) {
            uVar5 = 0;
          }
          else {
            local_2c = auStack_1f0;
            puStack_1f4 = auStack_1f0;
            uStack_1f8 = 0x4e9818;
            FUN_006a8070();
            local_8._0_1_ = 7;
            puStack_1f4 = local_24;
            local_24 = auStack_274;
            FUN_006a8070(auStack_274);
            uStack_1f8 = FUN_004e9e30(param_2);
            local_8._0_1_ = 6;
            uStack_200 = 0x4e984d;
            puStack_1fc = puVar4;
            uVar5 = FUN_006a5ad0();
            iVar6 = local_18;
          }
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_178 = CONCAT44(uVar5,0x4e9871);
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x5c))();
        }
        if (*(char *)(iVar6 + 0xc) != '\0') {
          uStack_178 = CONCAT44(0x4e988b,(undefined4)uStack_178);
          uVar5 = FUN_009885d0();
          local_8._0_1_ = 8;
          uStack_178 = CONCAT44(uVar5,0x4e989b);
          FUN_00988f20();
          local_8._0_1_ = 10;
          uStack_178 = CONCAT44(0x4e98aa,(undefined4)uStack_178);
          FUN_00408ad0();
          uStack_178 = CONCAT44(local_68,local_7c);
          uStack_180 = CONCAT44(0x4e98b6,(undefined4)uStack_180);
          FUN_009a8ee0();
          local_8._0_1_ = 0xb;
          iVar6 = in_stack_00000034;
          if (((in_stack_00000048 != (undefined1 *)0x0) || (in_stack_00000050 != (undefined1 *)0x0))
             || (in_stack_00000064 != 0)) {
            for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x3c)) {
              uStack_178 = CONCAT44(iVar6 + 0x1c,local_44);
              uStack_180 = CONCAT44(0x4e98ed,(undefined4)uStack_180);
              uVar5 = FUN_009a8ee0();
              local_8._0_1_ = 0xc;
              uStack_178 = CONCAT44(uVar5,0x4e98fa);
              FUN_009a9a90();
              local_8._0_1_ = 0xb;
              uStack_178 = CONCAT44(local_44,0x4e9906);
              FUN_009a9740();
            }
            iVar6 = in_stack_00000064;
            if (in_stack_00000064 == 0) {
              if (in_stack_00000048 == (undefined1 *)0x0) {
                if (in_stack_00000050 == (undefined1 *)0x0) goto LAB_004e999f;
                iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)in_stack_00000050 * 4);
              }
              else {
                iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)in_stack_00000048 * 4);
              }
              iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 0xbe4) * 4);
              if (iVar6 == 0) goto LAB_004e999f;
            }
            uStack_178 = CONCAT44(0x4e9959,(undefined4)uStack_178);
            iVar2 = FUN_00475500();
            uStack_180 = *(undefined8 *)(iVar2 + 0x6c);
            uStack_178 = *(undefined8 *)(iVar2 + 0x74);
            iStack_184 = 0x4e997c;
            FUN_009a9880();
            local_8._0_1_ = 0xd;
            uStack_178 = CONCAT44(0x4e998a,(undefined4)uStack_178);
            cVar1 = FUN_00416db0();
            if (cVar1 == '\0') {
              uStack_178 = CONCAT44(local_4c,iVar6);
              uStack_180 = CONCAT44(0x4e9997,(undefined4)uStack_180);
              FUN_006a5860();
            }
            uStack_178 = CONCAT44(0x4e999f,(undefined4)uStack_178);
            FUN_00408ad0();
          }
LAB_004e999f:
          local_8._0_1_ = 10;
          uStack_178 = CONCAT44(local_7c,0x4e99ac);
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_178 = CONCAT44(0x4e99b8,(undefined4)uStack_178);
          FUN_00408ad0();
          iVar6 = local_18;
        }
        if (*(char *)(iVar6 + 0xd) != '\0') {
          if (param_3 == 0) {
            uStack_178 = 0x80004e9a31;
            iVar6 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0xf);
            if (iVar6 == 0) goto LAB_004e9a4a;
            uStack_178 = CONCAT44(iVar6,0x4e9a48);
            uVar5 = FUN_006a8070();
          }
          else {
            uStack_178 = 0x90004e99d6;
            iVar6 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0xe);
            if (iVar6 == 0) {
LAB_004e9a4a:
              uVar5 = 0;
            }
            else {
              uStack_178 = CONCAT44(in_stack_0000008c,in_stack_00000088);
              uStack_180 = CONCAT44(in_stack_00000050,in_stack_0000004c);
              iStack_184 = in_stack_00000064;
              puStack_188 = in_stack_00000048;
              uStack_18c = in_stack_00000044;
              puStack_190 = &stack0x00000034;
              puStack_194 = (undefined1 *)in_stack_00000030;
              puStack_198 = (undefined1 *)param_3;
              puStack_19c = param_2;
              uStack_1a0 = 0x4e9a25;
              uVar5 = FUN_004e9bf0();
            }
          }
          local_8 = local_8 & 0xffffff00;
          uStack_178 = CONCAT44(uVar5,0x4e9a67);
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x80))();
        }
        uStack_178 = CONCAT44(0x4e9a74,(undefined4)uStack_178);
        FUN_009885d0();
        puStack_190 = &uStack_18c;
        uVar7 = 0x10;
        local_8._0_1_ = 0x10;
        puStack_194 = &stack0x00000010;
        puStack_198 = (undefined1 *)0x4e9a8b;
        FUN_006a8210();
        puStack_190 = (undefined4 *)0x10002;
        puStack_194 = (undefined1 *)0x14c;
        local_8._0_1_ = 0x11;
        puStack_19c = (undefined1 *)0x4e9aa7;
        puStack_198 = local_68;
        puStack_190 = (undefined4 *)FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,0x13);
        puStack_194 = (undefined1 *)0x4e9ab8;
        puStack_194 = (undefined1 *)FUN_004238b0();
        puStack_198 = (undefined1 *)0x4e9abe;
        FUN_00401280();
      }
      local_8 = CONCAT31(local_8._1_3_,uVar7);
      uStack_178 = CONCAT44(0x4e9acf,(undefined4)uStack_178);
      FUN_00401650();
      uStack_178 = CONCAT44(0x4e9ad7,(undefined4)uStack_178);
      FUN_00408ad0();
      goto LAB_004e9b6d;
    }
  }
  uStack_178 = 0x2200df263c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  uStack_180 = CONCAT44(0x4e9af9,(undefined4)uStack_180);
  FUN_00409350();
  uStack_178 = 0x10004000000d9;
  local_8._0_1_ = 1;
  uStack_180 = CONCAT44(local_4c,0x4e9b16);
  FUN_004015b0();
  local_8._0_1_ = 2;
  uStack_178 = CONCAT44(0x4e9b29,(undefined4)uStack_178);
  uVar5 = FUN_00987d20();
  uStack_178 = CONCAT44(uVar5,0x4e9b2f);
  FUN_00401280();
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_178 = CONCAT44(local_e8,0x4e9b42);
  FUN_00987ac0();
  local_e8[0] = std::ios_base::vftable;
  uStack_178 = CONCAT44(local_e8,0x4e9b58);
  FUN_00aad52d();
  if (0xf < local_38) {
    uStack_178 = CONCAT44(local_4c[0],&UNK_004e9b6a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_004e9b6d:
  uStack_178 = CONCAT44(0x4e9b75,(undefined4)uStack_178);
  FUN_006a81a0();
  ExceptionList = local_10;
  return;
}

