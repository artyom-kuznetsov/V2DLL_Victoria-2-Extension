// FUN_0051b870 @ 0051b870 body=[[0051b870, 0051b939] [0051b93d, 0051baa5] [0051bab0, 0051bdd7] [0051bddb, 0051bdfc] [0051be00, 0051be25] [0051be29, 0051be48] [0051be4c, 0051be62] [0051be66, 0051bf38] [0051bf3c, 0051bf4c]]


void FUN_0051b870(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int local_234 [4];
  undefined1 local_224 [40];
  int aiStack_1fc [12];
  undefined **local_1cc [18];
  int local_184 [3];
  uint auStack_178 [11];
  int aiStack_14c [10];
  undefined **local_124 [19];
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined ***local_30;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b5139d;
  local_10 = ExceptionList;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00547770();
  local_8._0_1_ = 1;
  FUN_00548160();
  local_8._0_1_ = 2;
  uVar3 = FUN_0055cd30(*(undefined4 *)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20));
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00408ed0(uVar3,0,0xffffffff);
  local_8._0_1_ = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00409350(&DAT_00dfe94c,4);
  local_8._0_1_ = 4;
  FUN_00988f20();
  local_8._0_1_ = 6;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  iVar4 = FUN_00548b20();
  if (iVar4 == 0) {
    uVar1 = *(uint *)((int)local_234 + *(int *)(local_234[0] + 4) + 0xc);
    uVar5 = uVar1 | 2;
    if (*(int *)((int)aiStack_1fc + *(int *)(local_234[0] + 4)) == 0) {
      uVar5 = uVar1 | 6;
    }
  }
  else {
    uVar5 = (-(uint)(*(int *)((int)aiStack_1fc + *(int *)(local_234[0] + 4)) != 0) & 0xfffffffc) + 4
    ;
  }
  FUN_00401120(uVar5,0);
  iVar4 = FUN_00548b20();
  if (iVar4 == 0) {
    uVar1 = *(uint *)((int)auStack_178 + *(int *)(local_184[0] + 4));
    uVar5 = uVar1 | 2;
    if (*(int *)((int)aiStack_14c + *(int *)(local_184[0] + 4)) == 0) {
      uVar5 = uVar1 | 6;
    }
  }
  else {
    uVar5 = (-(uint)(*(int *)((int)aiStack_14c + *(int *)(local_184[0] + 4)) != 0) & 0xfffffffc) + 4
    ;
  }
  FUN_00401120(uVar5,0);
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350("color = {",9);
  local_8._0_1_ = 7;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfe960,1);
  local_8._0_1_ = 8;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded950,1);
  local_8 = CONCAT31(local_8._1_3_,9);
  iVar4 = *(int *)((int)local_234 + *(int *)(local_234[0] + 4) + 0xc);
  while (iVar4 == 0) {
    uVar2 = FUN_00549350();
    FUN_0054b3e0(local_234,uVar2);
    iVar4 = FUN_005484e0(local_d8,"color",5);
    if (iVar4 == -1) {
      FUN_0054a180(local_184);
      FUN_00408be0();
      iVar4 = *(int *)(local_184[0] + 4);
    }
    else {
      FUN_0054a180(local_184,local_a0);
      iVar4 = FUN_004fb5c0();
      FUN_0048c130(local_184,(double)*(float *)(iVar4 + 8) * 255.0);
      FUN_0054a180(local_184,local_84);
      FUN_004fb5c0();
      FUN_0048c130(local_184);
      FUN_0054a180(local_184,local_84);
      FUN_004fb5c0();
      FUN_0048c130(local_184);
      FUN_0054a180(local_184,local_84);
      FUN_0054a180(local_184,local_bc);
      FUN_00408be0(local_184);
      iVar4 = *(int *)(local_184[0] + 4);
    }
    uVar5 = 0;
    if (((*(byte *)((int)auStack_178 + iVar4) & 6) == 0) &&
       (iVar4 = (**(code **)(**(int **)((int)aiStack_14c + iVar4) + 0x34))(), iVar4 == -1)) {
      uVar5 = 4;
    }
    if (uVar5 != 0) {
      uVar5 = *(uint *)((int)auStack_178 + *(int *)(local_184[0] + 4)) | uVar5;
      if (*(int *)((int)aiStack_14c + *(int *)(local_184[0] + 4)) == 0) {
        uVar5 = uVar5 | 4;
      }
      FUN_00401120(uVar5,0);
    }
    iVar4 = *(int *)((int)local_234 + *(int *)(local_234[0] + 4) + 0xc);
  }
  FUN_00547810();
  FUN_00548240();
  iVar4 = FUN_00548b20();
  if (iVar4 == 0) {
    uVar1 = *(uint *)((int)local_234 + *(int *)(local_234[0] + 4) + 0xc);
    uVar5 = uVar1 | 2;
    if (*(int *)((int)aiStack_1fc + *(int *)(local_234[0] + 4)) == 0) {
      uVar5 = uVar1 | 6;
    }
  }
  else {
    uVar5 = (-(uint)(*(int *)((int)aiStack_1fc + *(int *)(local_234[0] + 4)) != 0) & 0xfffffffc) + 4
    ;
  }
  FUN_00401120(uVar5,0);
  iVar4 = FUN_00548b20();
  if (iVar4 == 0) {
    uVar1 = *(uint *)((int)auStack_178 + *(int *)(local_184[0] + 4));
    uVar5 = uVar1 | 2;
    if (*(int *)((int)aiStack_14c + *(int *)(local_184[0] + 4)) == 0) {
      uVar5 = uVar1 | 6;
    }
  }
  else {
    uVar5 = (-(uint)(*(int *)((int)aiStack_14c + *(int *)(local_184[0] + 4)) != 0) & 0xfffffffc) + 4
    ;
  }
  FUN_00401120(uVar5,0);
  FUN_005471e0(local_184,local_224);
  FUN_00547810();
  FUN_00548240();
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_00f20c18 + 0x20))();
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc[0]);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0[0]);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_30 = local_124;
  *(undefined ***)((int)local_184 + *(int *)(local_184[0] + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  local_8._0_1_ = 10;
  FUN_00547890();
  local_8._0_1_ = 1;
  *(undefined ***)((int)local_184 + *(int *)(local_184[0] + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  local_124[0] = std::ios_base::vftable;
  FUN_00aad52d(local_124);
  local_30 = local_1cc;
  *(undefined ***)((int)local_234 + *(int *)(local_234[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  local_8._0_1_ = 0xb;
  FUN_00547890();
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined ***)((int)local_234 + *(int *)(local_234[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  local_1cc[0] = std::ios_base::vftable;
  FUN_00aad52d(local_1cc);
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_d8[0]);
  }
  ExceptionList = local_10;
  return;
}

