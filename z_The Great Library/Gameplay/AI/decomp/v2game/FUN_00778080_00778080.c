// FUN_00778080 @ 00778080 body=[[00778080, 007781b5] [007781b9, 007783ae] [007783b2, 00778541] [00778545, 00778577] [0077857b, 007785e4] [007785e8, 0077863d] [00778641, 00778801] [00778805, 007788cf] [007788d3, 00778901] [00778905, 00778940] [00778944, 007789d4] [007789d8, 00778a01] [00778a05, 00778c0d] [00778c11, 00778c3b] [00778c3f, 00778c62] [00778d17, 00778d3a]]


void FUN_00778080(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  float10 fVar6;
  char *pcStack_6cc;
  uint *puStack_6c8;
  undefined8 uStack_6c4;
  uint *puStack_6bc;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  undefined **local_564 [48];
  undefined **local_4a4;
  uint local_38c;
  undefined1 local_1f8 [48];
  uint local_1c8;
  undefined **local_1c0;
  uint local_1b8;
  undefined4 local_1a8;
  uint local_1a4;
  uint local_19c;
  undefined4 local_18c;
  uint local_188;
  uint local_180;
  undefined4 local_170;
  uint local_16c;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  char *local_12c;
  undefined4 local_128;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  undefined8 local_3c;
  undefined8 local_2c;
  undefined1 *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7b767;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff954;
  if ((*(int *)(in_ECX + 0x5a0) != 0) && (*(char *)(in_ECX + 0x5bc) == '\0')) {
    uStack_6b0 = 0x7780d1;
    ExceptionList = &local_10;
    iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
    if (*(char *)(*(int *)(iVar2 + 300) + 0x34) != '\0') {
      uStack_6b0 = 0x7780ea;
      iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
      if (*(int *)(iVar2 + 300) != 0) {
        DAT_01258b2d = 1;
      }
    }
    uStack_6b0 = 0x778106;
    iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
    uStack_6b0 = 1;
    uStack_6b8 = (double)CONCAT44(0x778115,(undefined4)uStack_6b8);
    (**(code **)(**(int **)(iVar2 + 0xe4) + 0x10))();
    *(undefined1 *)(in_ECX + 0x5bd) = 0;
    if (DAT_012589ac == 0) {
      *(undefined4 *)(in_ECX + 0x5b4) = 0;
      *(undefined4 *)(in_ECX + 0x5b0) = 0;
      *(undefined1 *)(in_ECX + 0x5bc) = 1;
    }
    else {
      uStack_6b8 = (double)CONCAT44(0x778135,(undefined4)uStack_6b8);
      (**(code **)(**(int **)(in_ECX + 0x5b8) + 4))();
      uStack_6b8 = 1.27323616914838e-312;
      puVar3 = (undefined4 *)FUN_00aae9af();
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[0xd] = 0xf;
        puVar3[0xc] = 0;
        *(undefined1 *)(puVar3 + 8) = 0;
      }
      *(undefined4 **)(in_ECX + 0x5b0) = puVar3;
      uStack_6b8 = (double)CONCAT44(in_ECX + 0x590,0x778183);
      FUN_00988fa0();
      local_8 = 0;
      uStack_6b8 = (double)CONCAT44(0x77818e,(undefined4)uStack_6b8);
      uVar4 = FUN_00475500();
      uStack_6b8 = (double)CONCAT44(uVar4,0x77819a);
      iVar2 = FUN_0040b410();
      local_15 = *(int *)(iVar2 + 0x10) != 0;
      if (0xf < local_16c) {
        uStack_6b8 = (double)CONCAT44(local_180,&UNK_007781b6);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_16c = 0xf;
      local_170 = 0;
      local_180 = local_180 & 0xffffff00;
      if ((bool)local_15) {
        uStack_6b8 = (double)CONCAT44(0x7781ea,(undefined4)uStack_6b8);
        FUN_009885d0();
        local_8._0_1_ = 1;
        uStack_6b8 = (double)CONCAT44(0x7781f3,(undefined4)uStack_6b8);
        uVar4 = FUN_00475500();
        uStack_6b8 = (double)CONCAT44(uVar4,0x7781ff);
        uVar4 = FUN_0040b410();
        local_8._0_1_ = 2;
        uStack_6b8 = (double)CONCAT44(uVar4,0x778214);
        FUN_00988fa0();
        local_8._0_1_ = 3;
        uStack_6b8 = (double)CONCAT44(local_1f8,0x77822f);
        FUN_00988f20();
        local_8._0_1_ = 4;
        uStack_6b8 = (double)CONCAT44(in_ECX + 0x590,0x778247);
        puStack_6bc = (uint *)FUN_00988f20();
        uStack_6b8 = -NAN;
        local_8._0_1_ = 5;
        uStack_6c4 = (double)CONCAT44(0x77825a,(undefined4)uStack_6c4);
        FUN_00408ed0();
        uStack_6b8 = (double)CONCAT44(0x778261,(undefined4)uStack_6b8);
        FUN_00408ad0();
        uStack_6b8 = (double)CONCAT44(0x77826c,(undefined4)uStack_6b8);
        FUN_00408ad0();
        uStack_6b8 = (double)CONCAT44(0x778277,(undefined4)uStack_6b8);
        FUN_00408ad0();
        uStack_6b8 = (double)CONCAT44(0x778282,(undefined4)uStack_6b8);
        FUN_00408ad0();
        local_8 = (uint)local_8._1_3_ << 8;
        uStack_6b8 = (double)CONCAT44(0x778291,(undefined4)uStack_6b8);
        FUN_00408ad0();
      }
      local_24 = (undefined1 *)&pcStack_6cc;
      uStack_6b8 = (double)CONCAT44(uStack_6b8._4_4_,0xf);
      puStack_6bc = (uint *)0x0;
      pcStack_6cc = (char *)((uint)pcStack_6cc & 0xffffff00);
      FUN_00409350();
      FUN_00992740();
      local_8._0_1_ = 6;
      uStack_6b8 = (double)CONCAT44(*(undefined4 *)(in_ECX + 0x5b0),0x7782df);
      FUN_009930d0();
      uStack_6b8 = (double)CONCAT44(0x7782ec,(undefined4)uStack_6b8);
      fVar6 = (float10)(**(code **)(**(int **)(in_ECX + 0x5b8) + 0x14))();
      local_2c = (double)fVar6;
      uStack_6b8 = (double)CONCAT44(0x7782fc,(undefined4)uStack_6b8);
      (**(code **)(**(int **)(in_ECX + 0x5b8) + 8))();
      uStack_6b8 = 2.75932399543018e-313;
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      puStack_6bc = (uint *)0x778321;
      FUN_00409350();
      puStack_6bc = local_e4;
      uStack_6b8 = 1.63181476439062e-311;
      local_8._0_1_ = 7;
      uStack_6c4 = (double)CONCAT44(0x778341,(undefined4)uStack_6c4);
      FUN_004015b0();
      local_8._0_1_ = 8;
      uStack_6b8 = local_2c;
      puStack_6bc = (uint *)0x77835e;
      puStack_6bc = (uint *)FUN_00987d20();
      uStack_6c4 = (double)CONCAT44(0x778364,(undefined4)uStack_6c4);
      uVar4 = FUN_0048c130();
      uStack_6c4 = (double)CONCAT44(uVar4,0x77836a);
      FUN_00401280();
      local_8._0_1_ = 7;
      uStack_6c4 = (double)CONCAT44(local_564,0x77837d);
      FUN_00987ac0();
      local_564[0] = std::ios_base::vftable;
      uStack_6c4 = (double)CONCAT44(local_564,0x778393);
      FUN_00aad52d();
      local_8._0_1_ = 6;
      if (0xf < local_d0) {
        uStack_6c4 = (double)CONCAT44(local_e4[0],&UNK_007783af);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      uStack_6c4 = (double)CONCAT44(0x7783d7,(undefined4)uStack_6c4);
      (**(code **)(**(int **)(in_ECX + 0x5b8) + 4))();
      uStack_6c4 = 1.27323617247838e-312;
      local_1c = (int *)FUN_00aae9af();
      if (local_1c == (int *)0x0) {
        local_1c = (int *)0x0;
      }
      else {
        *local_1c = 0;
        local_1c[1] = 0;
        local_1c[2] = 0;
        local_1c[4] = 0;
        local_1c[5] = 0;
        local_1c[6] = 0;
        local_1c[0xd] = 0xf;
        local_1c[0xc] = 0;
        *(undefined1 *)(local_1c + 8) = 0;
      }
      local_8._0_1_ = 9;
      uStack_6c4 = (double)CONCAT44(local_1c,0x778417);
      FUN_00a16c70();
      uStack_6c4 = (double)CONCAT44(0x778427,(undefined4)uStack_6c4);
      fVar6 = (float10)(**(code **)(**(int **)(in_ECX + 0x5b8) + 0x14))();
      local_3c = (double)fVar6;
      uStack_6c4 = (double)CONCAT44(0x778441,(undefined4)uStack_6c4);
      local_2c = local_3c;
      (**(code **)(**(int **)(in_ECX + 0x5b8) + 8))();
      uStack_6c4 = 2.75932399543018e-313;
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = local_ac[0] & 0xffffff00;
      puStack_6c8 = (uint *)0x778466;
      FUN_00409350();
      local_8._0_1_ = 10;
      uStack_6c4 = (double)CONCAT44(0x778478,(undefined4)uStack_6c4);
      iVar2 = FUN_009d71b0();
      puStack_6c8 = local_ac;
      uStack_6c4 = 1.63181476439754e-311;
      local_8._0_1_ = 0xb;
      pcStack_6cc = (char *)0x77849a;
      FUN_004015b0();
      local_8._0_1_ = 0xc;
      local_20 = *(undefined4 *)(iVar2 + 0x10);
      iVar2 = local_1c[1];
      iVar1 = *local_1c;
      uStack_6c4 = (double)CONCAT44(0x7784bb,(undefined4)uStack_6c4);
      puStack_6c8 = (uint *)FUN_00987d20();
      uStack_6c4 = local_2c;
      pcStack_6cc = (char *)0x7784ce;
      FUN_0048c130();
      pcStack_6cc = " to size ";
      FUN_00418e30();
      pcStack_6cc = (char *)(iVar2 - iVar1);
      FUN_00455470();
      FUN_00418e30();
      FUN_00455470();
      FUN_00401280();
      local_8._0_1_ = 0xb;
      FUN_00987ac0();
      local_4a4 = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 9;
      local_188 = 0xf;
      local_18c = 0;
      local_19c = local_19c & 0xffffff00;
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = local_ac[0] & 0xffffff00;
      if (*(int *)(in_ECX + 0x5b4) != 0) {
        FUN_0076cbc0();
      }
      *(int **)(in_ECX + 0x5b4) = local_1c;
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xd;
      FUN_009da390();
      local_8._0_1_ = 0xf;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      FUN_00988fa0();
      local_8._0_1_ = 0x10;
      FUN_00475500();
      iVar2 = FUN_0040b410();
      local_15 = *(int *)(iVar2 + 0x10) != 0;
      if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_150 = 0xf;
      local_154 = 0;
      local_164 = local_164 & 0xffffff00;
      if ((bool)local_15) {
        FUN_009885d0();
        local_8._0_1_ = 0x11;
        FUN_00475500();
        FUN_0040b410();
        local_8._0_1_ = 0x12;
        FUN_00988fa0();
        local_8._0_1_ = 0x13;
        FUN_00988f20();
        local_8._0_1_ = 0x14;
        FUN_00988f20();
        local_8._0_1_ = 0x15;
        FUN_00408ed0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8._0_1_ = 0x10;
        FUN_00408ad0();
      }
      local_24 = (undefined1 *)FUN_009da400();
      *(undefined1 **)(in_ECX + 0x5ac) = local_24;
      local_7c = 0xf;
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      FUN_004015b0();
      local_8._0_1_ = 0x17;
      FUN_00987d20();
      FUN_00418e30();
      FUN_00418e30();
      FUN_00455470();
      FUN_00401280();
      local_8._0_1_ = 0x16;
      FUN_00987ac0();
      FUN_00aad52d();
      local_8._0_1_ = 0x10;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      local_b8 = 0;
      local_c8 = local_c8 & 0xffffff00;
      local_7c = 0xf;
      local_b4 = 0xf;
      FUN_00409350();
      local_8._0_1_ = 0x18;
      local_12c = "gamesetup.cpp";
      local_128 = 0x921;
      FUN_009a8ee0();
      local_8._0_1_ = 0x19;
      FUN_00475500();
      FUN_009a9880();
      local_8._0_1_ = 0x1a;
      FUN_009f23c0();
      local_8._0_1_ = 0x1b;
      FUN_00771510();
      local_1c0 = &PTR_FUN_00e3cffc;
      if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1a4 = 0xf;
      local_1a8 = 0;
      local_1b8 = local_1b8 & 0xffffff00;
      if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_134 = 0xf;
      local_138 = 0;
      local_148 = local_148 & 0xffffff00;
      local_8._0_1_ = 0x18;
      FUN_009a9740();
      local_8._0_1_ = 0x10;
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8 = local_c8 & 0xffffff00;
      local_44 = 0xf;
      local_48 = 0;
      local_58 = local_58 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1c;
      local_ec = 0xf;
      local_f0 = 0;
      local_100 = local_100 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1d;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x7c))();
      if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x10;
      local_ec = 0xf;
      local_f0 = 0;
      local_100 = local_100 & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58 = local_58 & 0xffffff00;
      piVar5 = (int *)(**(code **)(*piVar5 + 0x2c))();
      for (local_1c = *(int **)(*piVar5 + 8); local_1c != (undefined4 *)0x0;
          local_1c = (int *)local_1c[2]) {
        local_20 = *local_1c;
        iVar2 = FUN_00aae9af();
        local_3c = (double)CONCAT44(iVar2,(undefined4)local_3c);
        local_8._0_1_ = 0x1e;
        if (iVar2 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          local_2c = (double)CONCAT44(&stack0xfffff90c,(undefined4)local_2c);
          DAT_0131ca68 = FUN_009c12d0();
          DAT_01258a9c = DAT_01258a9c + 1;
          piVar5 = (int *)FUN_00a14a70();
        }
        local_8._0_1_ = 0x10;
        FUN_0076ce00();
        (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
        (**(code **)(*piVar5 + 0x20))();
        FUN_00408ed0(in_ECX + 0x590);
        piVar5[0x2c] = (int)local_24;
        (**(code **)(*piVar5 + 0x24))();
        (**(code **)(*piVar5 + 0x28))();
        if (((char)piVar5[0x2d] == '\0') &&
           (iVar2 = piVar5[0x36], *(undefined1 *)(piVar5 + 0x36) = 1, (char)iVar2 == '\0')) {
          if (piVar5[0x35] == 0x29a) {
            local_124 = "gamesetup.cpp";
            local_120 = 0x93a;
            FUN_009a8ee0();
            local_8._0_1_ = 0x1f;
            iVar2 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
            local_8._0_1_ = 0x20;
            FUN_009f23c0();
            local_8._0_1_ = 0x21;
            FUN_00771510();
            FUN_0076bf20();
            FUN_00408ad0();
            local_8._0_1_ = 0x10;
            FUN_009a9740();
          }
          else {
            FUN_009f23c0();
            local_8._0_1_ = 0x22;
            FUN_00771510();
            local_8._0_1_ = 0x10;
            FUN_0076bf20();
          }
        }
      }
      *(undefined1 *)(in_ECX + 0x5bc) = 1;
      if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_108 = 0xf;
      local_10c = 0;
      local_11c = local_11c & 0xffffff00;
      if (0xf < local_38c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00992d60();
      if (0xf < local_1c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

