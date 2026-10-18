// FUN_009b07a0 @ 009b07a0 body=[[009b07a0, 009b088d] [009b0891, 009b0a6c] [009b0a70, 009b0c05] [009b0c09, 009b0d3a] [009b0d3e, 009b0d4e] [009b0d58, 009b0e49]]


/* WARNING: Removing unreachable block (ram,0x009b0bfc) */
/* WARNING: Removing unreachable block (ram,0x009b0884) */

void FUN_009b07a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  int unaff_EBX;
  uint uVar7;
  uint unaff_EDI;
  undefined4 uVar8;
  undefined4 uStack_53c;
  undefined4 *puStack_52c;
  undefined **appuStack_4ac [5];
  undefined **appuStack_498 [6];
  undefined **ppuStack_480;
  undefined **ppuStack_3c0;
  undefined1 auStack_378 [824];
  void *pvStack_40;
  undefined4 uStack_38;
  undefined1 uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5dd96;
  local_14 = ExceptionList;
  if ((*(char *)(in_ECX + 0x234) == '\0') && (*(char *)(in_ECX + 0x25e) == '\0')) {
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    FUN_004015b0();
    local_c._0_1_ = 1;
    FUN_00987d50();
    FUN_00401280();
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00987ac0();
    ppuStack_480 = std::ios_base::vftable;
    FUN_00aad52d();
    local_c = 0xffffffff;
    if (*(int *)(in_ECX + 0x2c) == 6) {
      if (*(int *)(in_ECX + 0x110) != 0) {
        iVar4 = FUN_00aae9af();
        local_c = 2;
        if (iVar4 == 0) {
          uStack_53c = 0;
        }
        else {
          iVar4 = FUN_00aae9af();
          local_c._0_1_ = 3;
          if (iVar4 != 0) {
            FUN_009d5450();
          }
          local_c = CONCAT31(local_c._1_3_,2);
          uStack_53c = FUN_00990df0();
        }
        local_c = 4;
        FUN_009a2240(in_ECX + 0x1c);
        local_c = 0xffffffff;
        FUN_009a0cb0(auStack_378,uStack_53c);
        local_c._0_1_ = 6;
        local_c._1_3_ = 0;
        FUN_009a1440();
        FUN_009b1900();
        FUN_009885d0();
        local_c._0_1_ = 7;
        uVar5 = FUN_004015b0();
        local_c = CONCAT31(local_c._1_3_,8);
        FUN_00987d50();
        uVar8 = extraout_ECX;
        uVar5 = FUN_00455470(uVar5,0,extraout_ECX);
        uVar5 = FUN_00418e30(uVar5);
        FUN_00401280(uVar5);
        uStack_24 = 7;
        FUN_00987ac0(appuStack_498);
        appuStack_498[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_498);
        uStack_24 = 6;
        FUN_00408ad0();
        FUN_009af9f0(in_ECX);
        iVar4 = 0;
        for (puVar1 = *(undefined4 **)(in_ECX + 0xd8); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[2]) {
          *(undefined1 *)(in_ECX + 0x234) = 1;
          iVar4 = iVar4 + 1;
          (**(code **)(*(int *)*puVar1 + 0x18))();
          *(undefined1 *)(in_ECX + 0x234) = 0;
          if (iVar4 == (iVar4 / 5) * 5) {
            FUN_009af9f0(in_ECX);
          }
        }
        piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x38) + 0x4c))();
        puStack_52c = (undefined4 *)0x0;
        iVar4 = *piVar6;
        while (iVar4 != 0) {
          iVar2 = *(int *)(iVar4 + 8);
          FUN_0057aab0(iVar4);
          iVar4 = iVar2;
        }
        uStack_24 = 9;
        FUN_00549920();
        for (; puStack_52c != (undefined4 *)0x0; puStack_52c = (undefined4 *)puStack_52c[2]) {
          *(undefined1 *)(in_ECX + 0x234) = 1;
          cVar3 = (**(code **)(*(int *)*puStack_52c + 0x38))();
          if (cVar3 == '\0') {
            unaff_EDI = unaff_EDI & 0xffffff00;
            FUN_00409350("session.cpp",0xb);
            uStack_24 = 10;
            uVar5 = FUN_004015b0(&stack0xfffffab8,0x2e7,0x301);
            uStack_24 = 0xb;
            FUN_00987d50(uVar5,"Atempted to execute invalid order with stamp ",0x2d,0);
            uVar5 = FUN_00455470(uVar5,uVar8);
            FUN_00401280(uVar5);
            uStack_24 = 10;
            FUN_00987ac0(appuStack_498);
            appuStack_498[0] = std::ios_base::vftable;
            FUN_00aad52d(appuStack_498);
            uStack_24 = 9;
          }
          else {
            (**(code **)(*(int *)*puStack_52c + 0x18))();
          }
          *(undefined1 *)(in_ECX + 0x234) = 0;
        }
        if (*(int *)(in_ECX + 0x2c) != 4) {
          puVar1 = *(undefined4 **)(in_ECX + 4);
          *(undefined4 *)(in_ECX + 0x2c) = 4;
          for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
            (**(code **)(*(int *)*puVar1 + 4))(0);
          }
        }
        *(undefined4 *)(in_ECX + 0x2c) = 4;
        FUN_009af9f0(in_ECX);
        FUN_00409350("session.cpp",0xb);
        uStack_24 = 0xc;
        piVar6 = (int *)FUN_004015b0(&stack0xfffffab8,0x2ef,0x301);
        uStack_24 = 0xd;
        FUN_00987d50(piVar6,"REQUESTING SYNCHED",0x12,0);
        FUN_00408be0(piVar6);
        uVar7 = 0;
        if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
           (iVar4 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))(),
           iVar4 == -1)) {
          uVar7 = 4;
        }
        if (uVar7 != 0) {
          uVar7 = *(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar7;
          if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
            uVar7 = uVar7 | 4;
          }
          FUN_00401120(uVar7,0);
        }
        uStack_38 = CONCAT31(uStack_38._1_3_,0xc);
        FUN_00987ac0(appuStack_4ac);
        appuStack_4ac[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_4ac);
        if ((unaff_EDI & 0xffffff00) < 0x10) {
          if (unaff_EBX == 0) {
            uStack_38 = 0xffffffff;
            FUN_009a0dc0();
            ExceptionList = pvStack_40;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(unaff_EBX);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(" commands.");
      }
      FUN_009af7e0();
      FUN_009af9f0();
      FUN_009885d0();
      local_c = 0xe;
      FUN_004015b0();
      local_c._0_1_ = 0xf;
      FUN_00987d50();
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,0xe);
      FUN_00987ac0();
      ppuStack_3c0 = std::ios_base::vftable;
      FUN_00aad52d();
      FUN_00408ad0();
    }
  }
  ExceptionList = local_14;
  return;
}

