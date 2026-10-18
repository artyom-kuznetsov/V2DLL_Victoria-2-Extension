// FUN_004933c0 @ 004933c0 body=[[004933c0, 004939f9] [004939fd, 00493a17]]


void FUN_004933c0(int param_1,undefined4 param_2)

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
  int in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000040;
  undefined1 *in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined1 *in_stack_0000004c;
  undefined1 *in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000060;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  int in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined1 auStack_278 [124];
  undefined4 uStack_1fc;
  undefined1 *puStack_1f8;
  undefined4 uStack_1f4;
  undefined1 *puStack_1f0;
  undefined1 auStack_1ec [76];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 *puStack_194;
  undefined1 *puStack_190;
  undefined1 *puStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 *puStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined **local_e4 [27];
  undefined1 local_78 [20];
  undefined1 local_64 [28];
  uint local_48 [2];
  undefined1 local_40 [8];
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar6 = in_stack_0000002c;
  puStack_c = &LAB_00b9579c;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int *)(DAT_012588e8 + 0xb24) == 0) ||
     (((*(char *)(param_1 + 0x30) == '\0' &&
       ((ExceptionList = &local_10, in_stack_0000002c == 0 ||
        (ExceptionList = &local_10, *(int *)(in_stack_0000002c + 0x30) != 1)))) ||
      (ExceptionList = &local_10, DAT_00f07da6 == '\0')))) goto LAB_004939fd;
  local_14 = in_stack_0000002c;
  ExceptionList = &local_10;
  if (in_stack_0000002c != 0) {
    uStack_174 = CONCAT44(0x493434,(undefined4)uStack_174);
    ExceptionList = &local_10;
    iVar2 = FUN_006a7c10();
    if (iVar6 != iVar2) {
      puVar8 = (undefined4 *)(DAT_012588e8 + 0xb5c);
      local_1c = in_stack_00000048;
      local_2c = in_stack_00000040;
      local_28 = in_stack_00000044;
      local_18 = in_stack_0000004c;
      if ((in_stack_00000044 == *(undefined1 **)(DAT_012588e8 + 0xb60)) ||
         (in_stack_0000004c == *(undefined1 **)(DAT_012588e8 + 0xb60))) {
LAB_004935d9:
        iVar6 = *(int *)(iVar6 + 0x38);
        local_20 = (undefined1 *)CONCAT31(local_20._1_3_,1);
        local_14 = iVar6;
        if (iVar6 != 0) {
          uStack_174 = CONCAT44(0x4935ec,(undefined4)uStack_174);
          iVar2 = FUN_006a7c10();
          if (iVar6 != iVar2) goto LAB_004934f8;
        }
        uStack_174 = CONCAT44(0x493601,(undefined4)uStack_174);
        FUN_009885d0();
        uStack_174 = 0x10004000000fc;
        uVar7 = 3;
        local_8._0_1_ = 3;
        uStack_17c = CONCAT44(local_64,0x49361e);
        FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,4);
        uStack_174 = CONCAT44(0x493631,(undefined4)uStack_174);
        uVar5 = FUN_00987d20();
        uStack_174 = CONCAT44(uVar5,0x493637);
        FUN_00401280();
      }
      else {
        uStack_174 = CONCAT44(puVar8,0x49347f);
        FUN_0042c350();
        uStack_174 = CONCAT44(0x493486,(undefined4)uStack_174);
        cVar1 = FUN_0043a860();
        if (cVar1 != '\0') goto LAB_004935d9;
        local_24 = *puVar8;
        uStack_174 = CONCAT44(0x4934ad,(undefined4)uStack_174);
        cVar1 = FUN_0043ca70();
        if (cVar1 != '\0') goto LAB_004935d9;
        uStack_174 = CONCAT44(0x4934bd,(undefined4)uStack_174);
        cVar1 = FUN_0043ca70();
        if (cVar1 != '\0') goto LAB_004935d9;
        local_20 = (undefined1 *)((uint)local_20 & 0xffffff00);
        iVar9 = in_stack_00000054 - (int)in_stack_00000050 >> 3;
        iVar2 = 0;
        iVar6 = local_14;
        if (0 < iVar9) {
          local_18 = in_stack_00000050;
          do {
            uStack_174 = CONCAT44(0x4934e4,(undefined4)uStack_174);
            cVar1 = FUN_0043ca70();
            iVar6 = local_14;
            if (cVar1 != '\0') goto LAB_004935d9;
            local_18 = local_18 + 8;
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar9);
        }
LAB_004934f8:
        if (((*(char *)(iVar6 + 0xe) != '\0') || (*(char *)(iVar6 + 0x10) != '\0')) ||
           ((*(int *)(iVar6 + 0x30) == 1 && (*(char *)(DAT_012588e8 + 0xd11) != '\0')))) {
          uStack_174 = CONCAT44(in_stack_00000090,in_stack_0000008c);
          local_18 = (undefined1 *)&uStack_1f4;
          puStack_1f8 = (undefined1 *)&uStack_1f4;
          uStack_1fc = 0x493543;
          FUN_006a8070();
          puStack_1f8 = (undefined1 *)0x49354b;
          piVar3 = (int *)FUN_00493c70();
          uStack_174 = CONCAT44(piVar3,0x49355e);
          FUN_006480e0();
          uStack_174 = CONCAT44(0x493567,(undefined4)uStack_174);
          (**(code **)(*piVar3 + 0x34))();
          uStack_174 = CONCAT44(0x493570,(undefined4)uStack_174);
          (**(code **)(*piVar3 + 0x28))();
          if (((char)(*(int **)(DAT_012588e8 + 0xb24))[0x17] == '\0') &&
             (*(char *)(iVar6 + 0x10) != '\0')) {
            uStack_174 = CONCAT44(0x49359a,(undefined4)uStack_174);
            cVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x158))();
            if (cVar1 == '\0') {
              uStack_174 = 0x5c004935a9;
              puVar4 = (undefined1 *)FUN_00aae9af();
              local_8._0_1_ = 5;
              local_18 = puVar4;
              if (puVar4 == (undefined1 *)0x0) {
                uVar5 = 0;
              }
              else {
                uStack_174 = CONCAT44(DAT_012588e8,0x4935c9);
                uVar5 = FUN_0068b610();
                uStack_174 = CONCAT44(1,uVar5);
                uStack_17c = CONCAT44(puVar4,0x4935d2);
                uVar5 = FUN_0072cef0();
              }
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_174 = CONCAT44(0x493658,(undefined4)uStack_174);
              iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
              uStack_174 = CONCAT44(uVar5,0x493663);
              (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
            }
          }
        }
        if (*(char *)(iVar6 + 0x11) != '\0') {
          uStack_174 = 0x10000493677;
          puVar4 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 6;
          local_18 = puVar4;
          if (puVar4 == (undefined1 *)0x0) {
            uVar5 = 0;
          }
          else {
            local_28 = auStack_1ec;
            puStack_1f0 = auStack_1ec;
            uStack_1f4 = 0x49369b;
            FUN_006a8070();
            local_8._0_1_ = 7;
            puStack_1f0 = local_20;
            uStack_1f4 = in_stack_00000090;
            puStack_1f8 = (undefined1 *)in_stack_0000008c;
            local_20 = auStack_278;
            FUN_006a8070(auStack_278);
            uStack_1f4 = FUN_00493c70();
            local_8._0_1_ = 6;
            uStack_1fc = 0x4936db;
            puStack_1f8 = puVar4;
            uVar5 = FUN_006a5ad0();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_174 = CONCAT44(uVar5,0x4936f7);
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x5c))();
        }
        if (*(char *)(iVar6 + 0xc) != '\0') {
          uStack_174 = CONCAT44(0x493711,(undefined4)uStack_174);
          uVar5 = FUN_009885d0();
          local_8._0_1_ = 8;
          uStack_174 = CONCAT44(uVar5,0x493721);
          FUN_00988f20();
          local_8._0_1_ = 10;
          uStack_174 = CONCAT44(0x493730,(undefined4)uStack_174);
          FUN_00408ad0();
          uStack_174 = CONCAT44(local_64,local_78);
          uStack_17c = CONCAT44(0x49373c,(undefined4)uStack_17c);
          FUN_009a8ee0();
          local_8._0_1_ = 0xb;
          iVar6 = in_stack_00000030;
          if (((in_stack_00000044 != (undefined1 *)0x0) || (in_stack_0000004c != (undefined1 *)0x0))
             || (in_stack_00000060 != 0)) {
            for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x3c)) {
              uStack_174 = CONCAT44(iVar6 + 0x1c,local_40);
              uStack_17c = CONCAT44(0x49376e,(undefined4)uStack_17c);
              uVar5 = FUN_009a8ee0();
              local_8._0_1_ = 0xc;
              uStack_174 = CONCAT44(uVar5,0x49377b);
              FUN_009a9a90();
              local_8._0_1_ = 0xb;
              uStack_174 = CONCAT44(local_40,0x493787);
              FUN_009a9740();
            }
            iVar6 = in_stack_00000060;
            if (in_stack_00000060 == 0) {
              if (in_stack_00000044 == (undefined1 *)0x0) {
                if (in_stack_0000004c == (undefined1 *)0x0) goto LAB_00493820;
                iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)in_stack_0000004c * 4);
              }
              else {
                iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)in_stack_00000044 * 4);
              }
              iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 0xbe4) * 4);
              if (iVar6 == 0) goto LAB_00493820;
            }
            uStack_174 = CONCAT44(0x4937da,(undefined4)uStack_174);
            iVar2 = FUN_00475500();
            uStack_17c = *(undefined8 *)(iVar2 + 0x6c);
            uStack_174 = *(undefined8 *)(iVar2 + 0x74);
            puStack_180 = (undefined1 *)0x4937fd;
            FUN_009a9880();
            local_8._0_1_ = 0xd;
            uStack_174 = CONCAT44(0x49380b,(undefined4)uStack_174);
            cVar1 = FUN_00416db0();
            if (cVar1 == '\0') {
              uStack_174 = CONCAT44(local_48,iVar6);
              uStack_17c = CONCAT44(0x493818,(undefined4)uStack_17c);
              FUN_006a5860();
            }
            uStack_174 = CONCAT44(0x493820,(undefined4)uStack_174);
            FUN_00408ad0();
          }
LAB_00493820:
          local_8._0_1_ = 10;
          uStack_174 = CONCAT44(local_78,0x49382d);
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_174 = CONCAT44(0x493839,(undefined4)uStack_174);
          FUN_00408ad0();
          iVar6 = local_14;
        }
        if (*(char *)(iVar6 + 0xd) != '\0') {
          if (in_stack_0000008c == 0) {
            uStack_174 = 0x80004938c1;
            iVar6 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0xf);
            if (iVar6 == 0) goto LAB_004938da;
            uStack_174 = CONCAT44(iVar6,0x4938d8);
            uVar5 = FUN_006a8070();
          }
          else {
            uStack_174 = 0x9800493859;
            iVar6 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0xe);
            if (iVar6 == 0) {
LAB_004938da:
              uVar5 = 0;
            }
            else {
              local_28 = (undefined1 *)&uStack_174;
              uStack_174 = CONCAT44(in_stack_00000088,in_stack_00000084);
              uStack_17c = CONCAT44(in_stack_0000004c,in_stack_00000048);
              puStack_180 = in_stack_00000044;
              uStack_184 = in_stack_00000040;
              uStack_188 = in_stack_00000090;
              puStack_18c = (undefined1 *)in_stack_0000008c;
              puStack_190 = (undefined1 *)in_stack_00000060;
              puStack_194 = &stack0x00000030;
              iStack_198 = in_stack_0000002c;
              uStack_19c = param_2;
              uStack_1a0 = 0x4938b5;
              uVar5 = FUN_00493a20();
            }
          }
          local_8 = local_8 & 0xffffff00;
          uStack_174 = CONCAT44(uVar5,0x4938f7);
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x80))();
        }
        uStack_174 = CONCAT44(0x493904,(undefined4)uStack_174);
        FUN_009885d0();
        puStack_18c = (undefined1 *)&uStack_188;
        uVar7 = 0x10;
        local_8._0_1_ = 0x10;
        puStack_190 = &stack0x0000000c;
        puStack_194 = (undefined4 *)0x49391b;
        FUN_006a8210();
        puStack_18c = (undefined1 *)0x10002;
        puStack_190 = (undefined1 *)0x14c;
        local_8._0_1_ = 0x11;
        iStack_198 = 0x493937;
        puStack_194 = (undefined4 *)local_64;
        puStack_18c = (undefined1 *)FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,0x13);
        puStack_190 = (undefined1 *)0x493948;
        puStack_190 = (undefined1 *)FUN_004238b0();
        puStack_194 = (undefined4 *)0x49394e;
        FUN_00401280();
      }
      local_8 = CONCAT31(local_8._1_3_,uVar7);
      uStack_174 = CONCAT44(0x49395f,(undefined4)uStack_174);
      FUN_00401650();
      uStack_174 = CONCAT44(0x493967,(undefined4)uStack_174);
      FUN_00408ad0();
      goto LAB_004939fd;
    }
  }
  uStack_174 = 0x2200df263c;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  uStack_17c = CONCAT44(0x493989,(undefined4)uStack_17c);
  FUN_00409350();
  uStack_174 = 0x10004000000d9;
  local_8._0_1_ = 1;
  uStack_17c = CONCAT44(local_48,0x4939a6);
  FUN_004015b0();
  local_8._0_1_ = 2;
  uStack_174 = CONCAT44(0x4939b9,(undefined4)uStack_174);
  uVar5 = FUN_00987d20();
  uStack_174 = CONCAT44(uVar5,0x4939bf);
  FUN_00401280();
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_174 = CONCAT44(local_e4,0x4939d2);
  FUN_00987ac0();
  local_e4[0] = std::ios_base::vftable;
  uStack_174 = CONCAT44(local_e4,0x4939e8);
  FUN_00aad52d();
  if (0xf < local_34) {
    uStack_174 = CONCAT44(local_48[0],&UNK_004939fa);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_004939fd:
  uStack_174 = CONCAT44(0x493a05,(undefined4)uStack_174);
  FUN_006a81a0();
  ExceptionList = local_10;
  return;
}

