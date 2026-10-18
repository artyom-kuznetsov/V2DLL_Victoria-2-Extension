// FUN_00909030 @ 00909030 body=[[00909030, 009093cc] [009093d0, 00909659] [0090965d, 00909677]]


void FUN_00909030(int param_1,undefined1 *param_2,int param_3)

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
  int iStack_18c;
  undefined4 uStack_188;
  undefined1 *puStack_184;
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
      (ExceptionList = &local_10, DAT_00f07da6 == '\0')))) goto LAB_0090965d;
  local_18 = in_stack_00000030;
  ExceptionList = &local_10;
  if (in_stack_00000030 != 0) {
    uStack_178 = CONCAT44(0x9090a4,(undefined4)uStack_178);
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
LAB_00909243:
        iVar6 = *(int *)(iVar6 + 0x38);
        local_24 = (undefined1 *)CONCAT31(local_24._1_3_,1);
        local_18 = iVar6;
        if (iVar6 != 0) {
          uStack_178 = CONCAT44(0x909256,(undefined4)uStack_178);
          iVar2 = FUN_006a7c10();
          if (iVar6 != iVar2) goto LAB_00909168;
        }
        uStack_178 = CONCAT44(0x90926b,(undefined4)uStack_178);
        FUN_009885d0();
        uStack_178 = 0x10004000000fc;
        uVar7 = 3;
        local_8._0_1_ = 3;
        uStack_180 = CONCAT44(local_68,0x909288);
        FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,4);
        uStack_178 = CONCAT44(0x90929b,(undefined4)uStack_178);
        uVar5 = FUN_00987d20();
        uStack_178 = CONCAT44(uVar5,0x9092a1);
        FUN_00401280();
      }
      else {
        uStack_178 = CONCAT44(puVar8,0x9090ef);
        FUN_0042c350();
        uStack_178 = CONCAT44(0x9090f6,(undefined4)uStack_178);
        cVar1 = FUN_0043a860();
        if (cVar1 != '\0') goto LAB_00909243;
        local_28 = *puVar8;
        uStack_178 = CONCAT44(0x90911d,(undefined4)uStack_178);
        cVar1 = FUN_0043ca70();
        if (cVar1 != '\0') goto LAB_00909243;
        uStack_178 = CONCAT44(0x90912d,(undefined4)uStack_178);
        cVar1 = FUN_0043ca70();
        if (cVar1 != '\0') goto LAB_00909243;
        local_24 = (undefined1 *)((uint)local_24 & 0xffffff00);
        iVar9 = in_stack_00000058 - (int)in_stack_00000054 >> 3;
        iVar2 = 0;
        iVar6 = local_18;
        if (0 < iVar9) {
          local_1c = in_stack_00000054;
          do {
            uStack_178 = CONCAT44(0x909154,(undefined4)uStack_178);
            cVar1 = FUN_0043ca70();
            iVar6 = local_18;
            if (cVar1 != '\0') goto LAB_00909243;
            local_1c = local_1c + 8;
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar9);
        }
LAB_00909168:
        if (((*(char *)(iVar6 + 0xe) != '\0') || (*(char *)(iVar6 + 0x10) != '\0')) ||
           ((*(int *)(iVar6 + 0x30) == 1 && (*(char *)(DAT_012588e8 + 0xd11) != '\0')))) {
          local_1c = auStack_1f0;
          puStack_1f4 = auStack_1f0;
          uStack_1f8 = 0x9091a5;
          FUN_006a8070();
          puStack_1f4 = param_2;
          uStack_1f8 = 0x9091b3;
          piVar3 = (int *)FUN_00909890();
          uStack_178 = CONCAT44(piVar3,0x9091c7);
          FUN_006480e0();
          uStack_178 = CONCAT44(0x9091d0,(undefined4)uStack_178);
          (**(code **)(*piVar3 + 0x34))();
          uStack_178 = CONCAT44(0x9091d9,(undefined4)uStack_178);
          (**(code **)(*piVar3 + 0x28))();
          iVar6 = local_18;
          if (((char)(*(int **)(DAT_012588e8 + 0xb24))[0x17] == '\0') &&
             (*(char *)(local_18 + 0x10) != '\0')) {
            uStack_178 = CONCAT44(0x909205,(undefined4)uStack_178);
            cVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x158))();
            iVar6 = local_18;
            if (cVar1 == '\0') {
              uStack_178 = 0x5c00909214;
              puVar4 = (undefined1 *)FUN_00aae9af();
              local_8._0_1_ = 5;
              local_1c = puVar4;
              if (puVar4 == (undefined1 *)0x0) {
                uVar5 = 0;
              }
              else {
                uStack_178 = CONCAT44(DAT_012588e8,0x909233);
                uVar5 = FUN_0068b610();
                uStack_178 = CONCAT44(1,uVar5);
                uStack_180 = CONCAT44(puVar4,0x90923c);
                uVar5 = FUN_0072cef0();
              }
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_178 = CONCAT44(0x9092c2,(undefined4)uStack_178);
              iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
              uStack_178 = CONCAT44(uVar5,0x9092cd);
              (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))();
              iVar6 = local_18;
            }
          }
        }
        if (*(char *)(iVar6 + 0x11) != '\0') {
          uStack_178 = 0x100009092e4;
          puVar4 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 6;
          local_1c = puVar4;
          if (puVar4 == (undefined1 *)0x0) {
            uVar5 = 0;
          }
          else {
            local_2c = auStack_1f0;
            puStack_1f4 = auStack_1f0;
            uStack_1f8 = 0x909308;
            FUN_006a8070();
            local_8._0_1_ = 7;
            puStack_1f4 = local_24;
            local_24 = auStack_274;
            FUN_006a8070(auStack_274);
            uStack_1f8 = FUN_00909890(param_2);
            local_8._0_1_ = 6;
            uStack_200 = 0x90933d;
            puStack_1fc = puVar4;
            uVar5 = FUN_006a5ad0();
            iVar6 = local_18;
          }
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_178 = CONCAT44(uVar5,0x909361);
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x5c))();
        }
        if (*(char *)(iVar6 + 0xc) != '\0') {
          uStack_178 = CONCAT44(0x90937b,(undefined4)uStack_178);
          uVar5 = FUN_009885d0();
          local_8._0_1_ = 8;
          uStack_178 = CONCAT44(uVar5,0x90938b);
          FUN_00988f20();
          local_8._0_1_ = 10;
          uStack_178 = CONCAT44(0x90939a,(undefined4)uStack_178);
          FUN_00408ad0();
          uStack_178 = CONCAT44(local_68,local_7c);
          uStack_180 = CONCAT44(0x9093a6,(undefined4)uStack_180);
          FUN_009a8ee0();
          local_8._0_1_ = 0xb;
          iVar6 = in_stack_00000034;
          if (((in_stack_00000048 != (undefined1 *)0x0) || (in_stack_00000050 != (undefined1 *)0x0))
             || (in_stack_00000064 != 0)) {
            for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x3c)) {
              uStack_178 = CONCAT44(iVar6 + 0x1c,local_44);
              uStack_180 = CONCAT44(0x9093dd,(undefined4)uStack_180);
              uVar5 = FUN_009a8ee0();
              local_8._0_1_ = 0xc;
              uStack_178 = CONCAT44(uVar5,0x9093ea);
              FUN_009a9a90();
              local_8._0_1_ = 0xb;
              uStack_178 = CONCAT44(local_44,0x9093f6);
              FUN_009a9740();
            }
            iVar6 = in_stack_00000064;
            if (in_stack_00000064 == 0) {
              if (in_stack_00000048 == (undefined1 *)0x0) {
                if (in_stack_00000050 == (undefined1 *)0x0) goto LAB_0090948f;
                iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)in_stack_00000050 * 4);
              }
              else {
                iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)in_stack_00000048 * 4);
              }
              iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 0xbe4) * 4);
              if (iVar6 == 0) goto LAB_0090948f;
            }
            uStack_178 = CONCAT44(0x909449,(undefined4)uStack_178);
            iVar2 = FUN_00475500();
            uStack_180 = *(undefined8 *)(iVar2 + 0x6c);
            uStack_178 = *(undefined8 *)(iVar2 + 0x74);
            puStack_184 = (undefined1 *)0x90946c;
            FUN_009a9880();
            local_8._0_1_ = 0xd;
            uStack_178 = CONCAT44(0x90947a,(undefined4)uStack_178);
            cVar1 = FUN_00416db0();
            if (cVar1 == '\0') {
              uStack_178 = CONCAT44(local_4c,iVar6);
              uStack_180 = CONCAT44(0x909487,(undefined4)uStack_180);
              FUN_006a5860();
            }
            uStack_178 = CONCAT44(0x90948f,(undefined4)uStack_178);
            FUN_00408ad0();
          }
LAB_0090948f:
          local_8._0_1_ = 10;
          uStack_178 = CONCAT44(local_7c,0x90949c);
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_178 = CONCAT44(0x9094a8,(undefined4)uStack_178);
          FUN_00408ad0();
          iVar6 = local_18;
        }
        if (*(char *)(iVar6 + 0xd) != '\0') {
          if (param_3 == 0) {
            uStack_178 = 0x8000909521;
            iVar6 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0xf);
            if (iVar6 == 0) goto LAB_0090953a;
            uStack_178 = CONCAT44(iVar6,0x909538);
            uVar5 = FUN_006a8070();
          }
          else {
            uStack_178 = 0x90009094c6;
            iVar6 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0xe);
            if (iVar6 == 0) {
LAB_0090953a:
              uVar5 = 0;
            }
            else {
              uStack_178 = CONCAT44(in_stack_0000008c,in_stack_00000088);
              uStack_180 = CONCAT44(in_stack_00000050,in_stack_0000004c);
              puStack_184 = in_stack_00000048;
              uStack_188 = in_stack_00000044;
              iStack_18c = in_stack_00000064;
              puStack_190 = &stack0x00000034;
              puStack_194 = (undefined1 *)in_stack_00000030;
              puStack_198 = (undefined1 *)param_3;
              puStack_19c = param_2;
              uStack_1a0 = 0x909515;
              uVar5 = FUN_00909680();
            }
          }
          local_8 = local_8 & 0xffffff00;
          uStack_178 = CONCAT44(uVar5,0x909557);
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x80))();
        }
        uStack_178 = CONCAT44(0x909564,(undefined4)uStack_178);
        FUN_009885d0();
        puStack_190 = &iStack_18c;
        uVar7 = 0x10;
        local_8._0_1_ = 0x10;
        puStack_194 = &stack0x00000010;
        puStack_198 = (undefined1 *)0x90957b;
        FUN_006a8210();
        puStack_190 = (undefined4 *)0x10002;
        puStack_194 = (undefined1 *)0x14c;
        local_8._0_1_ = 0x11;
        puStack_19c = (undefined1 *)0x909597;
        puStack_198 = local_68;
        puStack_190 = (undefined4 *)FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,0x13);
        puStack_194 = (undefined1 *)0x9095a8;
        puStack_194 = (undefined1 *)FUN_004238b0();
        puStack_198 = (undefined1 *)0x9095ae;
        FUN_00401280();
      }
      local_8 = CONCAT31(local_8._1_3_,uVar7);
      uStack_178 = CONCAT44(0x9095bf,(undefined4)uStack_178);
      FUN_00401650();
      uStack_178 = CONCAT44(0x9095c7,(undefined4)uStack_178);
      FUN_00408ad0();
      goto LAB_0090965d;
    }
  }
  uStack_178 = 0x2200df263c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  uStack_180 = CONCAT44(0x9095e9,(undefined4)uStack_180);
  FUN_00409350();
  uStack_178 = 0x10004000000d9;
  local_8._0_1_ = 1;
  uStack_180 = CONCAT44(local_4c,0x909606);
  FUN_004015b0();
  local_8._0_1_ = 2;
  uStack_178 = CONCAT44(0x909619,(undefined4)uStack_178);
  uVar5 = FUN_00987d20();
  uStack_178 = CONCAT44(uVar5,0x90961f);
  FUN_00401280();
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_178 = CONCAT44(local_e8,0x909632);
  FUN_00987ac0();
  local_e8[0] = std::ios_base::vftable;
  uStack_178 = CONCAT44(local_e8,0x909648);
  FUN_00aad52d();
  if (0xf < local_38) {
    uStack_178 = CONCAT44(local_4c[0],&UNK_0090965a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_0090965d:
  uStack_178 = CONCAT44(0x909665,(undefined4)uStack_178);
  FUN_006a81a0();
  ExceptionList = local_10;
  return;
}

