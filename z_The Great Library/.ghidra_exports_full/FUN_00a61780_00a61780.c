// FUN_00a61780 @ 00a61780 body=[[00a61780, 00a62408] [00a6240c, 00a624d8] [00a624dc, 00a626fb] [00a62702, 00a62830]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a61780(char param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *******pppppppcVar8;
  size_t _Size;
  int *piVar9;
  undefined4 *puVar10;
  DWORD DVar11;
  int *in_ECX;
  undefined1 *local_13b8;
  int *piStack_13b4;
  undefined8 uStack_13b0;
  undefined1 local_1390 [3096];
  undefined **ppuStack_778;
  undefined **local_6b8;
  undefined **ppuStack_5f8;
  undefined **ppuStack_538;
  undefined **local_478;
  undefined **ppuStack_3b8;
  char ******local_34c [5];
  uint local_338;
  int local_30c;
  undefined1 local_25c [280];
  undefined1 local_144;
  undefined4 local_134;
  undefined4 local_130;
  uint uStack_128;
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  undefined **local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined **local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined1 local_98;
  undefined1 local_97;
  int iStack_94;
  undefined4 uStack_84;
  uint uStack_80;
  void *local_78;
  int *local_74;
  void *local_6c;
  int iStack_64;
  int local_60;
  undefined **local_5c;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  int local_30;
  int *local_2c [2];
  int *local_24;
  int *local_20;
  int local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5d179;
  pvStack_10 = ExceptionList;
  uStack_18 = 0xa617a3;
  local_14 = &stack0xffffec64;
  ExceptionList = &pvStack_10;
  FUN_00a6a1f0();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar5 = FUN_00a6a210();
  uStack_18._3_1_ = local_74 != *(int **)(iVar5 + 4);
  tbb::internal::NFS_Free(local_6c);
  piVar6 = local_74;
  while (uStack_18._3_1_ != '\0') {
    local_6c = (void *)0x0;
    local_74 = piVar6;
    FUN_00a6ad70();
    piVar6 = (int *)*piVar6;
    local_24 = (int *)&local_13b8;
    local_13b8 = (undefined1 *)((uint)local_13b8 & 0xffffff00);
    FUN_00408ed0(in_ECX[7] + 0xbc,0,0xffffffff);
    iVar5 = (**(code **)(*piVar6 + 0x34))();
    *(int *)(iVar5 + 0x38) = piVar6[0xe];
    puVar10 = (undefined4 *)in_ECX[0x15];
    local_1c = puVar10[1];
    piVar6 = (int *)FUN_00aae9af();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = iVar5;
      piVar6[1] = local_1c;
      piVar6[2] = 0;
      *(undefined1 *)(piVar6 + 3) = 0;
    }
    iVar5 = puVar10[2];
    puVar10[1] = piVar6;
    puVar10[2] = iVar5 + 1;
    if (iVar5 == 0) {
      *puVar10 = piVar6;
    }
    else {
      *(int **)(local_1c + 8) = piVar6;
    }
    iVar5 = FUN_00a6a210();
    uStack_18._3_1_ = local_74 != *(int **)(iVar5 + 4);
    tbb::internal::NFS_Free(local_6c);
    piVar6 = local_74;
  }
  local_6c = (void *)0x0;
  (**(code **)(*in_ECX + 0x70))();
  uStack_18 = (uint)(uint3)uStack_18;
  do {
    uStack_13b0 = CONCAT44(0xa618d1,(undefined4)uStack_13b0);
    iVar5 = FUN_00a89d00();
    bVar3 = false;
    if (iVar5 < 1) {
      if (iVar5 == -1) {
        uStack_80 = 0xf;
        uStack_84 = 0;
        iStack_94 = (uint)iStack_94._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 0x37;
        uStack_13b0 = CONCAT44(0xa62ccc,(undefined4)uStack_13b0);
        FUN_004015b0();
        local_8 = CONCAT31(local_8._1_3_,0x38);
        piVar6 = (int *)FUN_00987d20();
        FUN_00408be0();
        if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
           (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))(),
           iVar5 == -1)) {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_00401120();
        }
        local_8._0_1_ = 0x37;
        FUN_00987ac0();
        ppuStack_3b8 = std::ios_base::vftable;
        FUN_00aad52d();
        local_8._0_1_ = 0;
        if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      DVar11 = timeGetTime();
      DAT_012586d0 = DVar11 - _DAT_01258b70;
      FUN_00a899f0();
      if (param_1 == '\0') {
        if (in_ECX[0x26] == in_ECX[0x25]) {
          local_44 = *(int *)(in_ECX[7] + 0x54);
          iStack_64 = local_44 >> 0x1f;
          local_48 = 5;
          uStack_13b0 = CONCAT44(&local_48,0xa62dd3);
          (**(code **)(*in_ECX + 0x14))();
        }
        *(int *)(in_ECX[7] + 0x54) = *(int *)(in_ECX[7] + 0x54) + 1;
      }
      if (in_ECX[0x26] == in_ECX[0x25]) {
        in_ECX[0x26] = 0;
      }
      else {
        in_ECX[0x26] = in_ECX[0x26] + 1;
      }
      if (uStack_18._3_1_ != '\0') {
        for (puVar10 = *(undefined4 **)(in_ECX[7] + 4); puVar10 != (undefined4 *)0x0;
            puVar10 = (undefined4 *)puVar10[2]) {
          (**(code **)(*(int *)*puVar10 + 4))();
        }
      }
      local_8 = 0xffffffff;
      tbb::internal::NFS_Free(local_78);
      ExceptionList = pvStack_10;
      return;
    }
    switch(local_40) {
    case 0:
      break;
    case 1:
      (**(code **)(*in_ECX + 0x60))();
      break;
    case 2:
      if (*(int *)(iStack_3c + 0x14) != 0) {
        local_1c = FUN_009b0f50();
        uStack_10c = **(uint **)(iStack_3c + 0x14);
        for (piVar6 = *(int **)(in_ECX[0x21] + (uStack_10c % (uint)in_ECX[0x20]) * 4);
            piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
          iVar5 = *piVar6;
          if (*(uint *)(iVar5 + 0x1c) == uStack_10c) goto LAB_00a62a15;
        }
        iVar5 = 0;
LAB_00a62a15:
        uStack_108 = *(undefined4 *)(iVar5 + 4);
        iStack_64 = CONCAT22(iStack_64._2_2_,*(undefined2 *)(iVar5 + 8));
        iStack_104 = iStack_64;
        FUN_004bec00();
        uStack_18 = CONCAT13(1,(uint3)uStack_18);
        if (((uint)*(ushort *)(in_ECX + 0x23) == **(uint **)(iStack_3c + 0x14)) && (local_1c != 0))
        {
          local_24 = (int *)local_1c;
          iVar5 = FUN_00a6a9c0();
          if (iVar5 != 0) {
            local_24 = (int *)local_1c;
            FUN_00a6a9c0();
            FUN_00a60e20();
          }
        }
        uStack_fc = **(undefined4 **)(iStack_3c + 0x14);
        uStack_13b0._4_4_ = &uStack_100;
        uStack_100 = 3;
        local_24 = (int *)0x0;
        uStack_13b0._0_4_ = 0xa62ac3;
        (**(code **)(*in_ECX + 0x14))();
        uStack_13b0 = CONCAT44(uStack_13b0._4_4_,*(undefined4 *)(iStack_3c + 0x14));
        piStack_13b4 = (int *)0xa62ad1;
        FUN_00a60580();
        uStack_114 = 0xf;
        uStack_118 = 0;
        uStack_128 = uStack_128 & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x33;
        uStack_13b0 = CONCAT44(0xa62b1a,(undefined4)uStack_13b0);
        FUN_004015b0();
        local_8._0_1_ = 0x34;
        FUN_00987d20();
        FUN_00401280();
        local_8._0_1_ = 0x33;
        FUN_00987ac0();
        ppuStack_538 = std::ios_base::vftable;
        FUN_00aad52d();
        local_8._0_1_ = 0;
        if (0xf < uStack_114) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      *(undefined4 *)(iStack_3c + 0x14) = 0;
      break;
    case 3:
      if ((char)local_38 == '\x01') {
        local_50 = **(undefined8 **)(local_30 + 8);
        switch(*(undefined4 *)*(undefined8 **)(local_30 + 8)) {
        case 8:
          cVar4 = FUN_009b1170();
          if (cVar4 == '\0') {
            FUN_009885d0();
            local_8._0_1_ = 1;
            uStack_13b0 = CONCAT44(0xa61996,(undefined4)uStack_13b0);
            FUN_004015b0();
            local_8._0_1_ = 2;
            FUN_00987d20();
            FUN_00401280();
            local_8._0_1_ = 1;
            FUN_00401650();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            uStack_13b0 = CONCAT44(iStack_3c,local_40);
            local_13b8 = (undefined1 *)0xa619f4;
            piStack_13b4 = in_ECX;
            FUN_00a60f40();
          }
          else {
            FUN_009885d0();
            local_8._0_1_ = 3;
            uStack_13b0 = CONCAT44(0xa61a20,(undefined4)uStack_13b0);
            FUN_004015b0();
            local_8._0_1_ = 4;
            FUN_00987d20();
            FUN_00401280();
            local_8._0_1_ = 3;
            FUN_00401650();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            local_f8 = 0x14;
            local_f4 = 0;
            uStack_13b0 = CONCAT44(0xa61a7a,(undefined4)uStack_13b0);
            FUN_00a89eb0();
            uStack_13b0 = CONCAT44(1,iStack_3c);
            piStack_13b4 = (int *)0xa61a87;
            iVar5 = FUN_00a89f70();
            if (iVar5 == -1) {
              FUN_009885d0();
              local_8._0_1_ = 5;
              uStack_13b0 = CONCAT44(0xa61abf,(undefined4)uStack_13b0);
              FUN_004015b0();
              local_8._0_1_ = 6;
              uStack_13b0 = CONCAT44(0xa61ae3,(undefined4)uStack_13b0);
              uStack_13b0._4_4_ = (undefined4 *)FUN_00987d20();
              uStack_13b0._0_4_ = 0xa61ae9;
              uVar7 = FUN_00447240();
              uStack_13b0 = CONCAT44(uStack_13b0._4_4_,uVar7);
              piStack_13b4 = (int *)0xa61aef;
              uVar7 = FUN_00418e30();
              uStack_13b0 = CONCAT44(uVar7,0xa61af8);
              FUN_009da180();
              FUN_00401280();
              local_8 = CONCAT31(local_8._1_3_,5);
              FUN_00401650();
              goto LAB_00a629a0;
            }
          }
          break;
        case 9:
          if (param_1 == '\0') {
            iVar5 = *in_ECX;
            local_50 = 0xb;
            uStack_13b0 = CONCAT44(0xa61b67,(undefined4)uStack_13b0);
            FUN_00a603d0();
            uStack_13b0 = CONCAT44(&local_50,0xa61b75);
            (**(code **)(iVar5 + 0x14))();
          }
          else {
            uStack_13b0 = CONCAT44(iStack_3c,local_40);
            local_13b8 = (undefined1 *)0xa61b41;
            piStack_13b4 = in_ECX;
            FUN_00a61410();
          }
          break;
        default:
          local_c0 = 0xf;
          local_c4 = 0;
          local_d4 = local_d4 & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x21;
          uStack_13b0 = CONCAT44(0xa623ab,(undefined4)uStack_13b0);
          FUN_004015b0();
          local_8._0_1_ = 0x22;
          FUN_00987d20();
          FUN_00401280();
          local_8._0_1_ = 0x21;
          FUN_00987ac0();
          local_6b8 = std::ios_base::vftable;
          FUN_00aad52d();
          local_8._0_1_ = 0;
          if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c0 = 0xf;
          local_c4 = 0;
          local_d4 = local_d4 & 0xffffff00;
          break;
        case 0xc:
          FUN_009885d0();
          local_8._0_1_ = 0x16;
          uStack_13b0 = CONCAT44(0xa61fe5,(undefined4)uStack_13b0);
          FUN_004015b0();
          local_8._0_1_ = 0x17;
          FUN_00987d20();
          FUN_00401280();
          local_8._0_1_ = 0x16;
          FUN_00401650();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          local_24 = (int *)(*(int *)(in_ECX[7] + 0x30) >> 0x1f);
          local_50 = CONCAT44(*(int *)(in_ECX[7] + 0x30),0x11);
          uStack_13b0 = CONCAT44(0xa62041,(undefined4)uStack_13b0);
          FUN_00a89eb0();
          uStack_13b0 = CONCAT44(1,iStack_3c);
          piStack_13b4 = (int *)0xa6204e;
          iVar5 = FUN_00a89f70();
          if (iVar5 == -1) {
            FUN_009885d0();
            local_8._0_1_ = 0x18;
            uStack_13b0 = CONCAT44(0xa62086,(undefined4)uStack_13b0);
            FUN_004015b0();
            local_8._0_1_ = 0x19;
            uStack_13b0 = CONCAT44(0xa620aa,(undefined4)uStack_13b0);
            uStack_13b0._4_4_ = (undefined4 *)FUN_00987d20();
            uStack_13b0._0_4_ = 0xa620b0;
            uVar7 = FUN_00447240();
            uStack_13b0 = CONCAT44(uStack_13b0._4_4_,uVar7);
            piStack_13b4 = (int *)0xa620b6;
            uVar7 = FUN_00418e30();
            uStack_13b0 = CONCAT44(uVar7,0xa620bf);
            FUN_009da180();
            FUN_00401280();
            local_8 = CONCAT31(local_8._1_3_,0x18);
            FUN_00401650();
LAB_00a629a0:
            local_8._0_1_ = 0;
            FUN_00408ad0();
          }
          break;
        case 0xd:
          iVar5 = FUN_00aae9af();
          if (iVar5 == 0) {
            local_2c[0] = (int *)0x0;
          }
          else {
            local_2c[0] = (int *)FUN_009d6e00();
          }
          piVar6 = local_2c[0];
          local_24 = (int *)FUN_00aae9af();
          local_8._0_1_ = 7;
          if (local_24 == (int *)0x0) {
            local_b0 = 0;
          }
          else {
            uStack_13b0 = CONCAT44(piVar6,local_24);
            piStack_13b4 = (int *)0xa61bb9;
            local_b0 = FUN_009d5450();
          }
          local_ac = *(char *)(local_b0 + 0x13) != '\0';
          local_b8 = &PTR_FUN_00e38528;
          local_b4 = 0;
          local_ab = 1;
          local_8._0_1_ = 8;
          iVar5 = in_ECX[7];
          FUN_009a0940();
          (**(code **)(*(int *)(iVar5 + 0x1c0) + 4))();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_0099eff0();
          local_58 = 0x15;
          local_54 = 0;
          iVar5 = FUN_00aae9af();
          if (iVar5 == 0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = (undefined4 *)FUN_009d6e00();
          }
          uStack_13b0 = CONCAT44(&local_58,puVar10[1]);
          piStack_13b4 = (int *)0xa61c60;
          FUN_009d7490();
          uStack_13b0 = CONCAT44(*local_2c[0],puVar10[1]);
          piStack_13b4 = (int *)0xa61c7d;
          FUN_009d7490();
          FUN_0076cbc0();
          uStack_13b0._4_4_ = (undefined4 *)*puVar10;
          uStack_13b0._0_4_ = 0xa61c95;
          FUN_00a89eb0();
          uStack_13b0 = CONCAT44(uStack_13b0._4_4_,1);
          piStack_13b4 = (int *)iStack_3c;
          local_13b8 = (undefined1 *)0xa61ca2;
          iVar5 = FUN_00a89f70();
          if (iVar5 == -1) {
            FUN_009885d0();
            local_8._0_1_ = 9;
            uStack_13b0 = CONCAT44(local_25c,0xa61cd6);
            FUN_004015b0();
            local_8._0_1_ = 10;
            FUN_00987d20();
            FUN_00401280();
            local_8._0_1_ = 9;
            FUN_00401650();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00408ad0();
          }
          FUN_0076cbc0();
          FUN_009885d0();
          local_8._0_1_ = 0xb;
          uStack_13b0 = CONCAT44(0xa61d43,(undefined4)uStack_13b0);
          FUN_004015b0();
          local_8._0_1_ = 0xc;
          FUN_00987d20();
          FUN_00401280();
          local_8._0_1_ = 0xb;
          FUN_00401650();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          local_54 = *(int *)(in_ECX[7] + 0x30);
          local_24 = (int *)(local_54 >> 0x1f);
          local_58 = 0x11;
          uStack_13b0 = CONCAT44(0xa61d9f,(undefined4)uStack_13b0);
          FUN_00a89eb0();
          uStack_13b0 = CONCAT44(1,iStack_3c);
          piStack_13b4 = (int *)0xa61dac;
          iVar5 = FUN_00a89f70();
          if (iVar5 == -1) {
            FUN_009885d0();
            local_8._0_1_ = 0xd;
            uStack_13b0 = CONCAT44(0xa61de4,(undefined4)uStack_13b0);
            FUN_004015b0();
            local_8._0_1_ = 0xe;
            uStack_13b0 = CONCAT44(0xa61e08,(undefined4)uStack_13b0);
            uStack_13b0._4_4_ = (undefined4 *)FUN_00987d20();
            uStack_13b0._0_4_ = 0xa61e0e;
            uVar7 = FUN_00447240();
            uStack_13b0 = CONCAT44(uStack_13b0._4_4_,uVar7);
            piStack_13b4 = (int *)0xa61e14;
            uVar7 = FUN_00418e30();
            uStack_13b0 = CONCAT44(uVar7,0xa61e1d);
            FUN_009da180();
            FUN_00401280();
            local_8 = CONCAT31(local_8._1_3_,0xd);
            FUN_00401650();
            goto LAB_00a629a0;
          }
          break;
        case 0xe:
          local_24 = (int *)FUN_00aae9af();
          local_8._0_1_ = 0xf;
          if (local_24 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_009d6ea0();
          }
          local_8._0_1_ = 0;
          uStack_13b0 = CONCAT44(*(undefined4 *)(iVar5 + 4),0xa61e91);
          FUN_009d7490();
          FUN_009885d0();
          local_8._0_1_ = 0x10;
          local_24 = (int *)FUN_00aae9af();
          local_8._0_1_ = 0x11;
          if (local_24 != (int *)0x0) {
            local_20 = (int *)FUN_00aae9af();
            local_8._0_1_ = 0x12;
            if (local_20 == (int *)0x0) {
              local_8._0_1_ = 0x11;
              FUN_00990df0();
            }
            else {
              uStack_13b0 = CONCAT44(iVar5,local_20);
              piStack_13b4 = (int *)0xa61ee1;
              FUN_009d5450();
              local_8._0_1_ = 0x11;
              FUN_00990df0();
            }
          }
          local_8._0_1_ = 0x10;
          uStack_13b0 = CONCAT44(0xa61f1a,(undefined4)uStack_13b0);
          FUN_009a0bf0();
          local_8._0_1_ = 0x14;
          FUN_00408ad0();
          FUN_009a1440();
          local_130 = 0xf;
          local_134 = 0;
          local_144 = 0;
          local_8._0_1_ = 0x15;
          FUN_009a1750();
          uStack_13b0 = CONCAT44(0xa61f81,(undefined4)uStack_13b0);
          FUN_00408ed0();
          *(int *)(in_ECX[7] + 0x254) = iStack_3c;
          FUN_009ae5d0();
          FUN_00408ad0();
          local_8._0_1_ = 0;
          FUN_009a0dc0();
          break;
        case 0x18:
          FUN_009885d0();
          local_8._0_1_ = 0x1a;
          uStack_13b0 = CONCAT44(0xa6210e,(undefined4)uStack_13b0);
          FUN_004015b0();
          local_8._0_1_ = 0x1b;
          FUN_00987d20();
          FUN_00401280();
          local_8._0_1_ = 0x1a;
          FUN_00401650();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          local_44 = *(int *)(in_ECX[7] + 0x30);
          local_24 = (int *)(local_44 >> 0x1f);
          local_48 = 0x11;
          uStack_13b0 = CONCAT44(0xa6216a,(undefined4)uStack_13b0);
          FUN_00a89eb0();
          uStack_13b0 = CONCAT44(1,iStack_3c);
          piStack_13b4 = (int *)0xa62177;
          iVar5 = FUN_00a89f70();
          if (iVar5 == -1) {
            FUN_009885d0();
            local_8._0_1_ = 0x1c;
            uStack_13b0 = CONCAT44(0xa621af,(undefined4)uStack_13b0);
            FUN_004015b0();
            local_8._0_1_ = 0x1d;
            uStack_13b0 = CONCAT44(0xa621d3,(undefined4)uStack_13b0);
            uStack_13b0._4_4_ = (undefined4 *)FUN_00987d20();
            uStack_13b0._0_4_ = 0xa621d9;
            uVar7 = FUN_00447240();
            uStack_13b0 = CONCAT44(uStack_13b0._4_4_,uVar7);
            piStack_13b4 = (int *)0xa621df;
            uVar7 = FUN_00418e30();
            uStack_13b0 = CONCAT44(uVar7,0xa621e8);
            FUN_009da180();
            FUN_00401280();
            local_8._0_1_ = 0x1c;
            FUN_00401650();
            local_8._0_1_ = 0;
            FUN_00408ad0();
          }
          FUN_00648af0();
          local_8._0_1_ = 0x1e;
          local_24 = (int *)(local_30c >> 0x1f);
          local_48 = 0x17;
          local_44 = local_30c;
          uStack_13b0 = CONCAT44(0xa6224a,(undefined4)uStack_13b0);
          FUN_00a89eb0();
          uStack_13b0 = CONCAT44(1,iStack_3c);
          piStack_13b4 = (int *)0xa62257;
          FUN_00a89f70();
          pppppppcVar8 = (char *******)local_34c[0];
          if (local_338 < 0x10) {
            pppppppcVar8 = local_34c;
          }
          pcVar1 = (char *)((int)pppppppcVar8 + 1);
          do {
            cVar4 = *(char *)pppppppcVar8;
            pppppppcVar8 = (char *******)((int)pppppppcVar8 + 1);
          } while (cVar4 != '\0');
          _Size = (int)pppppppcVar8 - (int)pcVar1;
          piVar6 = (int *)FUN_00aad56b();
          pppppppcVar8 = (char *******)local_34c[0];
          if (local_338 < 0x10) {
            pppppppcVar8 = local_34c;
          }
          uStack_13b0 = CONCAT44(0xa622a5,(undefined4)uStack_13b0);
          FID_conflict__memcpy(piVar6,pppppppcVar8,_Size);
          uStack_13b0 = CONCAT44(1,_Size);
          local_13b8 = (undefined1 *)0xa622ae;
          piStack_13b4 = piVar6;
          FUN_00a89eb0();
          local_13b8 = (undefined1 *)0x1;
          iVar5 = FUN_00a89f70(iStack_3c);
          if (iVar5 == -1) {
            FUN_009885d0();
            local_8._0_1_ = 0x1f;
            uStack_13b0 = CONCAT44(0xa622f3,(undefined4)uStack_13b0);
            FUN_004015b0();
            local_8._0_1_ = 0x20;
            uStack_13b0 = CONCAT44(0xa62317,(undefined4)uStack_13b0);
            uStack_13b0._4_4_ = (undefined4 *)FUN_00987d20();
            uStack_13b0._0_4_ = 0xa6231d;
            uVar7 = FUN_00447240();
            uStack_13b0 = CONCAT44(uStack_13b0._4_4_,uVar7);
            piStack_13b4 = (int *)0xa62323;
            uVar7 = FUN_00418e30();
            uStack_13b0 = CONCAT44(uVar7,0xa6232c);
            FUN_009da180();
            FUN_00401280();
            local_8._0_1_ = 0x1f;
            FUN_00401650();
            FUN_00408ad0();
          }
          local_8._0_1_ = 0;
          FUN_00648a60();
        }
      }
      else if ((char)local_38 == '\0') {
        local_dc = 0xf;
        local_e0 = 0;
        local_f0 = local_f0 & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x23;
        uStack_13b0 = CONCAT44(0xa6247b,(undefined4)uStack_13b0);
        FUN_004015b0();
        local_8._0_1_ = 0x24;
        FUN_00987d20();
        FUN_00401280();
        local_8._0_1_ = 0x23;
        FUN_00987ac0();
        local_478 = std::ios_base::vftable;
        FUN_00aad52d();
        local_8._0_1_ = 0;
        if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_dc = 0xf;
        local_e0 = 0;
        local_f0 = local_f0 & 0xffffff00;
        local_24 = (int *)FUN_00aae9af();
        local_8._0_1_ = 0x25;
        if (local_24 == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = FUN_009d6ea0();
        }
        iVar5 = local_1c;
        local_8._0_1_ = 0;
        uStack_13b0 = CONCAT44(*(undefined4 *)(local_1c + 4),0xa6253f);
        FUN_009d7490();
        local_2c[0] = (int *)0x0;
        local_24 = (int *)FUN_00aae9af();
        local_8._0_1_ = 0x26;
        if (local_24 == (int *)0x0) {
          local_20 = (int *)0x0;
        }
        else {
          local_20 = (int *)FUN_00aae9af();
          local_8._0_1_ = 0x27;
          if (local_20 == (int *)0x0) {
            local_8._0_1_ = 0x26;
            local_20 = (int *)FUN_00990df0();
          }
          else {
            uStack_13b0 = CONCAT44(iVar5,local_20);
            piStack_13b4 = (int *)0xa62582;
            FUN_009d5450();
            local_8._0_1_ = 0x26;
            local_20 = (int *)FUN_00990df0();
          }
        }
        local_24 = (int *)&uStack_13b0;
        piStack_13b4 = (int *)(in_ECX[7] + 0x1c);
        uStack_13b0 = 0;
        local_8._0_1_ = 0x28;
        local_13b8 = (undefined1 *)0xa625da;
        FUN_009a2240();
        local_8._0_1_ = 0;
        piStack_13b4 = local_20;
        local_13b8 = local_1390;
        FUN_009a0cb0();
        local_5c = &PTR_FUN_00e38550;
        local_24 = (int *)&local_13b8;
        local_8._0_1_ = 0x2a;
        local_13b8 = (undefined1 *)((uint)local_13b8 & 0xffffff00);
        FUN_00408ed0(in_ECX[7] + 0xbc,0,0xffffffff);
        FUN_009a14e0(local_2c);
        local_5c = &PTR_FUN_00e38318;
        local_8._0_1_ = 0;
        FUN_009a0dc0();
        piVar6 = local_2c[0];
        cVar4 = (**(code **)(*local_2c[0] + 0x38))();
        if (cVar4 == '\0') {
          FUN_009885d0();
          local_8._0_1_ = 0x31;
          uStack_13b0 = CONCAT44(0xa62917,(undefined4)uStack_13b0);
          FUN_004015b0();
          local_8._0_1_ = 0x32;
          uStack_13b0 = CONCAT44("; Sent: ",piVar6[0xb]);
          piStack_13b4 = (int *)0xa62944;
          piStack_13b4 = (int *)FUN_00987d20();
          local_13b8 = (undefined1 *)0xa6294a;
          local_13b8 = (undefined1 *)FUN_00447240();
          piStack_13b4 = (int *)FUN_00418e30();
          local_13b8 = (undefined1 *)0xa62959;
          local_13b8 = (undefined1 *)FUN_00455470();
          piStack_13b4 = (int *)FUN_00418e30();
          local_13b8 = (undefined1 *)0xa62968;
          FUN_00455470();
          FUN_00401280();
          local_8 = CONCAT31(local_8._1_3_,0x31);
          FUN_00987ac0();
          ppuStack_778 = std::ios_base::vftable;
          FUN_00aad52d();
          goto LAB_00a629a0;
        }
        local_20 = (int *)**(undefined4 **)(iStack_3c + 0x14);
        iVar5 = FUN_00a6a9c0();
        local_24 = (int *)piVar6[0xe];
        local_20 = *(int **)(iVar5 + 0x10);
        piVar9 = (int *)FUN_00aae9af();
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          *piVar9 = (int)local_24;
          piVar9[1] = (int)local_20;
          piVar9[2] = 0;
          *(undefined1 *)(piVar9 + 3) = 0;
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        *(int *)(iVar5 + 0x14) = iVar2 + 1;
        *(int **)(iVar5 + 0x10) = piVar9;
        if (iVar2 == 0) {
          *(int **)(iVar5 + 0xc) = piVar9;
        }
        else {
          *(int **)((int)local_20 + 8) = piVar9;
        }
        if ((in_ECX[0x2b] < *(int *)(iVar5 + 0x14)) && (iVar2 = *(int *)(iVar5 + 0xc), iVar2 != 0))
        {
          if (*(char *)(iVar5 + 0x18) == '\0') {
            iVar2 = *(int *)(iVar2 + 8);
            *(int *)(iVar5 + 0xc) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(iVar5 + 0x10) = 0;
            }
            else {
              *(undefined4 *)(iVar2 + 4) = 0;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          *(undefined1 *)(iVar2 + 0xc) = 1;
        }
        if (*(char *)((int)piVar6 + 0x36) == '\0') {
          local_24 = in_ECX + 0x2a;
          LOCK();
          local_60 = *local_24;
          *local_24 = *local_24 + 1;
          UNLOCK();
          piVar6[0xe] = local_60;
        }
        piVar9 = (int *)in_ECX[0x15];
        local_20 = (int *)piVar9[1];
        puVar10 = (undefined4 *)FUN_00aae9af();
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          *puVar10 = piVar6;
          puVar10[1] = local_20;
          puVar10[2] = 0;
          *(undefined1 *)(puVar10 + 3) = 0;
        }
        iVar5 = piVar9[2];
        piVar9[1] = (int)puVar10;
        piVar9[2] = iVar5 + 1;
        if (iVar5 == 0) {
          *piVar9 = (int)puVar10;
        }
        else {
          local_20[2] = (int)puVar10;
        }
        if (*(char *)((int)piVar6 + 0x36) == '\0') {
          FUN_0076cbc0();
          iVar5 = FUN_00aae9af();
          if (iVar5 == 0) {
            local_1c = 0;
          }
          else {
            local_1c = FUN_009d6e00();
          }
          local_8._0_1_ = 0x2b;
          local_24 = (int *)FUN_00aae9af();
          local_8._0_1_ = 0x2c;
          if (local_24 == (int *)0x0) {
            local_9c = 0;
          }
          else {
            uStack_13b0 = CONCAT44(local_1c,local_24);
            piStack_13b4 = (int *)0xa627c4;
            local_9c = FUN_009d5450();
          }
          local_a4 = &PTR_FUN_00e38528;
          local_a0 = 0;
          local_97 = 1;
          local_98 = *(char *)(local_9c + 0x13) != '\0';
          local_8._0_1_ = 0x2d;
          (**(code **)(*piVar6 + 0x1c))();
          FUN_009a0940();
          (**(code **)(*piVar6 + 4))();
          local_8 = CONCAT31(local_8._1_3_,0x2b);
          FUN_0099eff0();
          local_8 = 0;
          FUN_00a62847();
          return;
        }
        FUN_0076cbc0();
      }
      (*(code *)PTR__free_00f071fc)();
      (*(code *)PTR__free_00f071fc)();
      break;
    default:
      bVar3 = false;
      uStack_80 = 0xf;
      uStack_84 = 0;
      iStack_94 = (uint)iStack_94._1_3_ << 8;
      FUN_00409350();
      local_8._0_1_ = 0x35;
      uStack_13b0 = CONCAT44(0xa62bd6,(undefined4)uStack_13b0);
      FUN_004015b0();
      local_8 = CONCAT31(local_8._1_3_,0x36);
      piVar6 = (int *)FUN_00987d20();
      FUN_00408be0();
      if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
         (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))(),
         iVar5 == -1)) {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_00401120();
      }
      local_8._0_1_ = 0x35;
      FUN_00987ac0();
      ppuStack_5f8 = std::ios_base::vftable;
      FUN_00aad52d();
      local_8._0_1_ = 0;
      if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  } while( true );
}

