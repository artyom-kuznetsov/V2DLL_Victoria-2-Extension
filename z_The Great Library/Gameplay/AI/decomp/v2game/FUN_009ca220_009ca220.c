// FUN_009ca220 @ 009ca220 body=[[009ca220, 009cac48] [009cac4c, 009cacc7] [009caccb, 009cad0f] [009cad13, 009cad27]]


/* WARNING: Removing unreachable block (ram,0x009cacbf) */
/* WARNING: Removing unreachable block (ram,0x009cac40) */

undefined4 *
FUN_009ca220(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,float param_13,
            float param_14,float param_15,float param_16,undefined4 param_17)

{
  float fVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  uint in_stack_00000058;
  undefined2 in_stack_00000060;
  undefined1 uStack00000064;
  undefined1 uStack00000068;
  uint uStack_78;
  undefined4 *puStack_74;
  uint uStack_70;
  code *local_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int *piStack_54;
  undefined4 *local_50;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b78144;
  local_10 = ExceptionList;
  local_8 = 0;
  local_50 = (undefined4 *)param_3;
  piStack_54 = param_1;
  local_58 = (undefined4 *)0x9ca250;
  ExceptionList = &local_10;
  FUN_009a6a30();
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  DAT_013f0904 = DAT_013f0904 + 1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = &PTR_FUN_00e3b090;
  param_1[0x1b] = CButtonObserver::vftable;
  param_1[0x1e] = param_2;
  param_1[0x1f] = param_5;
  local_50 = (undefined4 *)0x0;
  piStack_54 = (int *)0x0;
  local_58 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  uStack_60 = 0;
  puStack_64 = (undefined4 *)0x0;
  uStack_68 = 0;
  local_6c = (code *)0x0;
  uStack_70 = 0;
  puStack_74 = (undefined4 *)0x0;
  uStack_78 = 0;
  *param_1 = &PTR_FUN_00e3b0e0;
  param_1[0x15] = &PTR_LAB_00e3b198;
  param_1[0x1b] = &PTR_LAB_00e3b1d8;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x20] = (float)(int)(short)param_10;
  param_1[0x21] = (float)(int)param_10._2_2_;
  param_1[0x22] = (float)(int)(short)param_10;
  param_1[0x23] = (float)(int)param_10._2_2_;
  FUN_009cd590(FUN_009cc340,0,0,0,0,0,0);
  local_50 = (undefined4 *)0x0;
  piStack_54 = (int *)0x0;
  local_58 = (undefined4 *)0x0;
  local_5c = (undefined4 *)&LAB_009cc6f0;
  uStack_60 = 0;
  puStack_64 = (undefined4 *)0x0;
  uStack_68 = 0;
  local_6c = FUN_009cc680;
  uStack_70 = 0;
  puStack_74 = (undefined4 *)0x0;
  uStack_78 = 0;
  FUN_009cd590(FUN_009cc630,0,0,0,&LAB_009cc700,0,0);
  local_50 = (undefined4 *)0x0;
  piStack_54 = (int *)0x0;
  local_58 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  uStack_60 = 0;
  puStack_64 = (undefined4 *)0x0;
  uStack_68 = 0;
  local_6c = (code *)0x0;
  uStack_70 = 0;
  puStack_74 = (undefined4 *)0x0;
  uStack_78 = 0;
  FUN_009cd590(FUN_009cbb10,0,FUN_009cc0a0,0,FUN_009cc8f0,0,0);
  local_50 = (undefined4 *)0x0;
  piStack_54 = (int *)0x0;
  local_58 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  uStack_60 = 0;
  puStack_64 = (undefined4 *)0x0;
  uStack_68 = 0;
  local_6c = (code *)0x0;
  uStack_70 = 0;
  puStack_74 = (undefined4 *)0x0;
  uStack_78 = 0;
  FUN_009cd590(FUN_009cbda0,0,FUN_009cc1f0,0,&LAB_009cc920,0,0);
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x8c] = 0;
  local_50 = (undefined4 *)((param_16 + 0.0005) * 1000.0);
  param_1[0x87] = 0;
  piStack_54 = (int *)0x9ca400;
  FUN_00401000();
  local_50 = (undefined4 *)0x9ca408;
  param_3 = FUN_00b31c00();
  local_50 = (undefined4 *)((param_13 + 0.0005) * 1000.0);
  piStack_54 = (int *)0x9ca43a;
  FUN_00401000();
  local_50 = (undefined4 *)0x9ca442;
  param_16 = (float)FUN_00b31c00();
  local_50 = (undefined4 *)((param_14 + 0.0005) * 1000.0);
  piStack_54 = (int *)0x9ca474;
  FUN_00401000();
  local_50 = (undefined4 *)0x9ca47c;
  param_13 = (float)FUN_00b31c00();
  local_50 = &param_3;
  piStack_54 = (int *)0x9ca494;
  FUN_0043d130();
  *(undefined2 *)(param_1 + 0x91) = in_stack_00000060;
  *(undefined2 *)((int)param_1 + 0x246) = (undefined2)param_11;
  *(undefined2 *)(param_1 + 0x92) = param_11._2_2_;
  *(undefined1 *)(param_1 + 0x96) = uStack00000064;
  *(undefined1 *)((int)param_1 + 0x259) = uStack00000068;
  *(undefined2 *)((int)param_1 + 0x25a) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  _uStack00000064 =
       (uint *)CONCAT22((short)*(undefined4 *)(param_2 + 0x6b9c0),
                        (short)*(undefined4 *)(param_2 + 0x6b9bc));
  local_50 = (undefined4 *)0x9ca502;
  _uStack00000068 = param_1 + 0x98;
  FUN_009f8e80();
  uVar7 = DAT_00f092fc;
  local_8._0_1_ = 0xb;
  param_1[0xd9] = _uStack00000064;
  param_1[0x98] = &PTR_FUN_00e38350;
  param_1[0xd6] = uVar7;
  param_1[0xdf] = 0xf;
  local_50 = (undefined4 *)0x0;
  param_1[0xde] = 0;
  piStack_54 = (int *)&DAT_00ded94d;
  *(undefined1 *)(param_1 + 0xda) = 0;
  local_58 = (undefined4 *)0x9ca543;
  FUN_00409350();
  *(undefined1 *)(param_1 + 0xe1) = 1;
  *(undefined4 *)((int)param_1 + 0x386) = 0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_50 = (undefined4 *)((param_15 + 0.0005) * 1000.0);
  piStack_54 = (int *)0x9ca585;
  FUN_00401000();
  local_50 = (undefined4 *)0x9ca58d;
  uVar7 = FUN_00b31c00();
  param_1[0xe4] = uVar7;
  param_1[0xe5] = *(undefined4 *)(param_5 + 0x19c);
  param_1[0xe6] = *(undefined4 *)(param_5 + 0x1a0);
  uVar2 = *(undefined1 *)(param_5 + 0x1a4);
  param_1[0x89] = 0;
  local_50 = (undefined4 *)(param_2 + 0x6b9e0);
  *(undefined1 *)(param_1 + 0xe7) = uVar2;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  param_1[0xcf] = 0;
  piStack_54 = (int *)0x9ca5e9;
  (**(code **)(param_1[0x98] + 0x74))();
  _uStack00000064 = &uStack_70;
  param_1[0x89] = param_12;
  *(undefined2 *)(param_1 + 0x88) = param_11._2_2_;
  param_1[0x8a] = param_15;
  uVar7 = DAT_00f17898;
  param_1[0x83] = 1;
  param_1[0x84] = 1;
  puStack_74 = (undefined4 *)0xffffffff;
  *(undefined2 *)((int)param_1 + 0x222) = (undefined2)param_11;
  param_1[0x8b] = uVar7;
  uStack_78 = 0;
  local_5c = (undefined4 *)0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  piStack_54 = param_1 + 0x98;
  FUN_00408ed0(param_8);
  puStack_74 = (undefined4 *)0x9ca660;
  piVar8 = (int *)FUN_00a57a30();
  param_1[0x6a] = piVar8;
  piStack_54 = (int *)0x9ca66f;
  (**(code **)(*piVar8 + 0x34))();
  piStack_54 = param_1 + 0x98;
  _uStack00000064 = &uStack_70;
  local_5c = (undefined4 *)0xf;
  uStack_60 = 0;
  puStack_74 = (undefined4 *)0xffffffff;
  uStack_78 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  FUN_00408ed0(param_9);
  puStack_74 = (undefined4 *)0x9ca69f;
  piVar8 = (int *)FUN_00a57a30();
  param_1[0x55] = piVar8;
  piStack_54 = (int *)0x9ca6ae;
  (**(code **)(*piVar8 + 0x34))();
  piStack_54 = param_1 + 0x98;
  _uStack00000064 = &uStack_70;
  puStack_74 = (undefined4 *)0xffffffff;
  uStack_78 = 0;
  local_5c = (undefined4 *)0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  FUN_00408ed0(param_6);
  puStack_74 = (undefined4 *)0x9ca6de;
  piVar8 = (int *)FUN_00a57b40();
  param_1[0x2b] = piVar8;
  piStack_54 = (int *)0x9ca6ed;
  (**(code **)(*piVar8 + 0x34))();
  if (*(short *)(param_1 + 0x91) == 0) {
    _uStack00000064 = (uint *)param_1[0x21];
    piStack_54 = (int *)&stack0x00000068;
    local_58 = (undefined4 *)0x9ca71d;
    iVar9 = (**(code **)(*(int *)param_1[0x6a] + 0xf4))();
    uVar3 = *(ushort *)(param_1 + 0x88);
    uVar7 = CONCAT22((short)(int)((float)(int)*(short *)(iVar9 + 2) + (float)_uStack00000064),
                     (short)(int)(float)param_1[0x20]);
    param_1[0x24] = uVar7;
    local_58 = (undefined4 *)&stack0x00000064;
    dVar14 = (double)(float)_uStack00000064;
    local_5c = (undefined4 *)0x9ca782;
    _uStack00000064 = (uint *)uVar7;
    iVar9 = (**(code **)(*(int *)param_1[0x6a] + 0xf4))();
    dVar14 = (dVar14 + (double)uVar3) - (double)(int)*(short *)(iVar9 + 2);
    param_1[0x25] = CONCAT22((short)(int)dVar14,(short)(int)(float)param_1[0x20]);
    _uStack00000064 =
         (uint *)CONCAT22((short)(int)(float)param_1[0x21],(short)(int)(float)param_1[0x20]);
    param_1[0x26] = _uStack00000064;
    local_5c = (undefined4 *)0x9ca7d9;
    FUN_009cae80();
    param_1[0x29] = param_1[0x20];
    param_1[0x2a] = SUB84(dVar14,0);
    fVar13 = SUB84(dVar14,0);
  }
  else {
    fVar13 = (float)param_1[0x21];
    piStack_54 = (int *)&stack0x00000064;
    local_58 = (undefined4 *)0x9ca81b;
    psVar10 = (short *)(**(code **)(*(int *)param_1[0x6a] + 0xf4))();
    fVar1 = (float)param_1[0x20];
    param_1[0x24] = CONCAT22((short)(int)fVar13,(short)(int)((float)(int)*psVar10 + fVar1));
    fVar13 = (float)param_1[0x21];
    uVar3 = *(ushort *)((int)param_1 + 0x222);
    _uStack00000064 = (uint *)CONCAT22((short)(int)fVar13,(short)(int)fVar1);
    param_1[0x25] = _uStack00000064;
    local_58 = (undefined4 *)&stack0x00000064;
    local_5c = (undefined4 *)0x9ca89a;
    psVar10 = (short *)(**(code **)(*(int *)param_1[0x6a] + 0xf4))();
    fVar12 = (float)param_1[0x21];
    param_1[0x26] =
         CONCAT22((short)(int)fVar13,(short)(int)((fVar1 + (float)uVar3) - (float)(int)*psVar10));
    local_5c = (undefined4 *)0x9ca8d6;
    _uStack00000064 = (uint *)fVar12;
    FUN_009cae80();
    param_1[0x29] = fVar12;
    param_1[0x2a] = _uStack00000064;
    fVar13 = (float)_uStack00000064;
  }
  param_1[0x27] = param_1[0x24];
  param_1[0x28] = param_1[0x24];
  local_5c = param_1 + 0x98;
  _uStack00000064 = &uStack_78;
  puStack_64 = (undefined4 *)0xf;
  uStack_68 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  FUN_00408ed0(param_7,0,0xffffffff);
  piVar8 = (int *)FUN_00a57920(param_1[0x1f]);
  param_1[0x54] = piVar8;
  local_5c = (undefined4 *)0x9ca949;
  (**(code **)(*piVar8 + 0x34))();
  local_5c = (undefined4 *)&stack0x00000068;
  if (*(short *)(param_1 + 0x91) == 0) {
    uStack_60 = 0x9ca966;
    iVar9 = (**(code **)(*(int *)param_1[0x6a] + 0xf4))();
    _uStack00000064 =
         (uint *)CONCAT22(*(short *)(param_1 + 0x88) + *(short *)(iVar9 + 2) * -2,
                          *(undefined2 *)((int)param_1 + 0x222));
    uStack_60 = _uStack00000064;
    puStack_64 = (undefined4 *)0x9ca9a3;
    (**(code **)(**(int **)(param_1[0x54] + 0xa0) + 0x100))();
    puStack_64 = (undefined4 *)&stack0x00000064;
    uStack_68 = 0x9ca9b7;
    psVar10 = (short *)(**(code **)(*(int *)param_1[0x6a] + 0xf4))();
    *(ushort *)(param_1 + 0x24) =
         *(short *)(param_1 + 0x24) + (*psVar10 / 2 - (*(ushort *)((int)param_1 + 0x222) >> 1));
  }
  else {
    uVar4 = *(undefined2 *)(param_1 + 0x88);
    uStack_60 = 0x9ca9dc;
    psVar10 = (short *)(**(code **)(*(int *)param_1[0x6a] + 0xf4))();
    _uStack00000064 = (uint *)CONCAT22(uVar4,*(short *)((int)param_1 + 0x222) + *psVar10 * -2);
    uStack_60 = _uStack00000064;
    puStack_64 = (undefined4 *)0x9caa11;
    (**(code **)(**(int **)(param_1[0x54] + 0xa0) + 0x100))();
  }
  uStack_68 = param_1[0x26];
  local_6c = (code *)0x9caa28;
  (**(code **)(*(int *)param_1[0x6a] + 200))();
  *(undefined4 *)(param_1[0x6a] + 0x9c) = param_1[0x26];
  local_6c = (code *)(param_1 + 0x56);
  uStack_70 = 0x9caa52;
  (**(code **)(*(int *)(param_1[0x6a] + 0x54) + 4))();
  uStack_70 = param_1[0x25];
  puStack_74 = (undefined4 *)0x9caa69;
  (**(code **)(*(int *)param_1[0x55] + 200))();
  puStack_74 = param_1 + 0x6c;
  uStack_78 = 0x9caa81;
  (**(code **)(*(int *)(param_1[0x55] + 0x54) + 4))();
  *(undefined4 *)(param_1[0x55] + 0x9c) = param_1[0x25];
  uStack_78 = param_1[0x24];
  (**(code **)(*(int *)param_1[0x54] + 200))();
  *(undefined4 *)(param_1[0x54] + 0x9c) = param_1[0x24];
  (**(code **)(*(int *)param_1[0x2b] + 0x34))();
  FUN_009ccd10(param_1[0x29],param_1[0x2a]);
  if (*(char *)((int)param_1 + 0x259) != '\0') {
    (**(code **)(*(int *)(param_1[0x2b] + 0x54) + 4))(param_1 + 0x40);
    (**(code **)(*(int *)(param_1[0x54] + 0x54) + 4))(param_1 + 0x2c);
  }
  if (*(short *)(param_1 + 0x91) == 0) {
    FUN_009cae80();
    param_1[0x85] = (int)(float)param_1[0x20];
    param_1[0x86] = (int)fVar13;
  }
  else {
    fVar1 = (float)param_1[0x21];
    FUN_009cae80();
    param_1[0x85] = (int)fVar13;
    param_1[0x86] = (int)fVar1;
  }
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  puVar11 = (undefined4 *)(**(code **)(*DAT_00f20c18 + 4))();
  puVar5 = (undefined4 *)param_1[0x82];
  if ((puVar11 != puVar5) && (puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  param_1[0x82] = puVar11;
  param_1[0x1c] = 10;
  param_1[0x93] = 0;
  (**(code **)(*(int *)param_1[0x6a] + 0x38))();
  (**(code **)(*(int *)param_1[0x55] + 0x38))();
  (**(code **)(*(int *)param_1[0x2b] + 0x38))();
  (**(code **)(*(int *)param_1[0x54] + 0x38))();
  (**(code **)(*(int *)param_1[0x2b] + 0x6c))();
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0xd;
  cVar6 = FUN_00416db0();
  _uStack00000064 = (uint *)CONCAT13(cVar6 == '\0',_uStack00000064);
  local_8._0_1_ = 0xc;
  if (cVar6 == '\0') {
    piVar8 = (int *)FUN_00a57c40(param_1[0x1f] + 0xd8,param_4,param_1 + 0x98);
    param_1[0x80] = piVar8;
    (**(code **)(*piVar8 + 0x38))();
  }
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0xe;
  cVar6 = FUN_00416db0();
  _uStack00000064 = (uint *)CONCAT13(cVar6 == '\0',_uStack00000064);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (cVar6 == '\0') {
    piVar8 = (int *)FUN_00a57c40(param_1[0x1f] + 0xf4,param_4,param_1 + 0x98);
    param_1[0x81] = piVar8;
    (**(code **)(*piVar8 + 0x38))();
  }
  FUN_009cd050();
  if (0xf < in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_17);
  }
  ExceptionList = local_10;
  return param_1;
}

