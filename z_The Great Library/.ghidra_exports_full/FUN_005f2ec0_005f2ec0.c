// FUN_005f2ec0 @ 005f2ec0 body=[[005f2ec0, 005f3064] [005f306a, 005f3107] [005f310d, 005f3554] [005f355a, 005f3611] [005f3617, 005f37d6] [005f37dc, 005f3884] [005f388a, 005f3930] [005f3936, 005f3b3b]]


void FUN_005f2ec0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStackY_404 [60];
  undefined4 uStackY_314;
  int iStackY_310;
  undefined1 *puStackY_30c;
  int *piStackY_308;
  undefined4 local_2f0;
  int *local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  int *local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  int *local_2b4;
  int *local_2b0;
  undefined1 local_140 [28];
  undefined1 *local_124;
  int local_120;
  undefined4 local_11c;
  int local_fc;
  int *local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined1 *local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  int *local_c4;
  CSimpleException *local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int *local_94;
  int local_90;
  int *local_8c;
  undefined4 local_88;
  int *local_84;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined **local_6c;
  undefined4 local_64;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b95635;
  local_10 = ExceptionList;
  if (param_3 < 0x2b5) {
    if (param_3 == 0x2b4) {
      piStackY_308 = (int *)0x5f3378;
      ExceptionList = &local_10;
      local_c0 = (CSimpleException *)FUN_00aae9af();
      if (local_c0 == (CSimpleException *)0x0) {
        local_2c8 = 0;
      }
      else {
        piStackY_308 = (int *)0x5f33ab;
        local_2c8 = CSimpleException::CSimpleException(local_c0,in_ECX[8]);
      }
      local_bc = local_2c8;
      local_2c = local_2c8;
      FUN_00401470();
      piStackY_308 = (int *)0x5f33e3;
      FUN_005f4f30();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f3405;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    }
    switch(param_3) {
    case 0x1cb:
      piStackY_308 = (int *)0x5f34bb;
      ExceptionList = &local_10;
      local_d0 = FUN_00aae9af();
      if (local_d0 == 0) {
        local_2d0 = 0;
      }
      else {
        piStackY_308 = (int *)0x5f34ee;
        local_2d0 = FUN_005f5510();
      }
      local_cc = local_2d0;
      local_38 = local_2d0;
      piStackY_308 = (int *)0x5f3521;
      FUN_009a1bb0();
      piStackY_308 = (int *)0x5f352e;
      FUN_005eb550();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f3550;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    case 0x1ec:
      piStackY_308 = (int *)0x5f3071;
      ExceptionList = &local_10;
      local_98 = FUN_00aae9af();
      if (local_98 == 0) {
        local_2b4 = (int *)0x0;
      }
      else {
        piStackY_308 = (int *)0x5f30a4;
        local_2b4 = (int *)FUN_005f5a60();
      }
      local_94 = local_2b4;
      local_18 = local_2b4;
      FUN_00401470();
      piStackY_308 = (int *)0x5f30e1;
      (**(code **)(*local_18 + 0x20))();
      piStackY_308 = (int *)0x5f30ec;
      FUN_005ed9f0();
      piStackY_308 = local_18;
      puStackY_30c = (undefined1 *)0x5f3103;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    case 0x295:
      piStackY_308 = (int *)0x5f3114;
      ExceptionList = &local_10;
      local_a0 = FUN_00aae9af();
      if (local_a0 == 0) {
        local_2b8 = 0;
      }
      else {
        piStackY_308 = (int *)0x5f3147;
        local_2b8 = FUN_005f3c90();
      }
      local_9c = local_2b8;
      local_1c = local_2b8;
      FUN_00401470();
      piStackY_308 = (int *)0x5f317f;
      FUN_005f3cf0();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f31a1;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    case 0x296:
      piStackY_308 = (int *)0x5f31ad;
      ExceptionList = &local_10;
      local_a8 = FUN_00aae9af();
      if (local_a8 == 0) {
        local_2bc = 0;
      }
      else {
        piStackY_308 = (int *)0x5f31e0;
        local_2bc = FUN_005f40e0();
      }
      local_a4 = local_2bc;
      local_20 = local_2bc;
      FUN_00401470();
      piStackY_308 = (int *)0x5f3218;
      FUN_005f4140();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f323a;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    case 0x29c:
      piStackY_308 = (int *)0x5f2fce;
      ExceptionList = &local_10;
      local_90 = FUN_00aae9af();
      if (local_90 == 0) {
        local_2b0 = (int *)0x0;
      }
      else {
        piStackY_308 = (int *)0x5f3001;
        local_2b0 = (int *)FUN_005f5770();
      }
      local_8c = local_2b0;
      local_14 = local_2b0;
      FUN_00401470();
      piStackY_308 = (int *)0x5f303e;
      (**(code **)(*local_14 + 0x20))();
      piStackY_308 = (int *)0x5f3049;
      FUN_005ed9f0();
      piStackY_308 = local_14;
      puStackY_30c = (undefined1 *)0x5f3060;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    case 0x2ab:
      piStackY_308 = (int *)0x5f3246;
      ExceptionList = &local_10;
      local_b0 = FUN_00aae9af();
      if (local_b0 == 0) {
        local_2c0 = 0;
      }
      else {
        piStackY_308 = (int *)0x5f3279;
        local_2c0 = FUN_005f46b0();
      }
      local_ac = local_2c0;
      local_24 = local_2c0;
      FUN_00401470();
      piStackY_308 = (int *)0x5f32b1;
      FUN_005f46f0();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f32d3;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    case 0x2ac:
      piStackY_308 = (int *)0x5f32df;
      ExceptionList = &local_10;
      local_b8 = FUN_00aae9af();
      if (local_b8 == 0) {
        local_2c4 = 0;
      }
      else {
        piStackY_308 = (int *)0x5f3312;
        local_2c4 = FUN_005f4950();
      }
      local_b4 = local_2c4;
      local_28 = local_2c4;
      FUN_00401470();
      piStackY_308 = (int *)0x5f334a;
      FUN_005f4990();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f336c;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    }
  }
  else if (param_3 < 0x761) {
    if (param_3 == 0x760) {
LAB_005f355a:
      piStackY_308 = (int *)0x5f3561;
      ExceptionList = &local_10;
      local_d8 = FUN_00aae9af();
      if (local_d8 == 0) {
        local_2d4 = 0;
      }
      else {
        piStackY_308 = (int *)0x5f3594;
        local_2d4 = FUN_005f55e0();
      }
      local_d4 = local_2d4;
      local_3c = local_2d4;
      local_40 = 0;
      FUN_009a1ce0();
      local_dc = &stack0xfffffcfc;
      piStackY_308 = &local_40;
      puStackY_30c = (undefined1 *)0x5f35e3;
      FUN_00414cc0();
      piStackY_308 = (int *)0x5f35eb;
      FUN_005eba90();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f360d;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    }
    if (param_3 == 0x439) {
      piStackY_308 = (int *)0x5f3735;
      ExceptionList = &local_10;
      local_ec = FUN_00aae9af();
      if (local_ec == 0) {
        local_2dc = 0;
      }
      else {
        piStackY_308 = (int *)0x5f3768;
        local_2dc = FUN_005f5b80();
      }
      local_e8 = local_2dc;
      local_78 = local_2dc;
      puVar2 = (undefined4 *)FUN_00401470();
      puVar4 = auStackY_404;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_005e9f50();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f37d2;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    }
    if (param_3 == 0x43a) {
      piStackY_308 = (int *)0x5f37e3;
      ExceptionList = &local_10;
      local_f4 = FUN_00aae9af();
      if (local_f4 == 0) {
        local_2e0 = 0;
      }
      else {
        piStackY_308 = (int *)0x5f3816;
        local_2e0 = FUN_005f5c50();
      }
      local_f0 = local_2e0;
      local_7c = local_2e0;
      puVar2 = (undefined4 *)FUN_00401470();
      puVar4 = auStackY_404;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_005e9f50();
      FUN_005ed9f0();
      piStackY_308 = (int *)0x5f3880;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    }
    if (param_3 == 0x4a4) {
      piStackY_308 = (int *)0x5f3414;
      ExceptionList = &local_10;
      local_c8 = FUN_00aae9af();
      local_8 = 0;
      if (local_c8 == 0) {
        local_2cc = (int *)0x0;
      }
      else {
        piStackY_308 = (int *)0x5f344e;
        local_2cc = (int *)FUN_005f5030();
      }
      local_c4 = local_2cc;
      local_8 = 0xffffffff;
      local_30 = local_2cc;
      piStackY_308 = (int *)0x5f348d;
      (**(code **)(*local_2cc + 0xc))();
      piStackY_308 = (int *)0x5f3498;
      FUN_005ed9f0();
      piStackY_308 = local_30;
      puStackY_30c = (undefined1 *)0x5f34af;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (param_3 == 0x837) {
      ExceptionList = &local_10;
      FUN_0040a710();
      local_6c = CStateBuildingData::vftable;
      local_64 = 1;
      FUN_00988530();
      local_44 = 1;
      local_8 = 1;
      FUN_009a1740();
      FUN_004dad40();
      piStackY_308 = (int *)0x5f3659;
      local_70 = FUN_004db700();
      if (local_70 != 0) {
        piStackY_308 = (int *)0x5f366d;
        local_e4 = FUN_00aae9af();
        if (local_e4 == 0) {
          local_2d8 = 0;
        }
        else {
          iStackY_310 = in_ECX[8];
          piStackY_308 = (int *)local_64;
          puStackY_30c = (undefined1 *)local_70;
          uStackY_314 = 0x5f36ad;
          local_2d8 = FUN_005f4d70();
        }
        local_e0 = local_2d8;
        local_74 = local_2d8;
        FUN_005ed9f0();
        piStackY_308 = (int *)0x5f36f6;
        (**(code **)(*in_ECX + 0x18))();
        local_8 = 0xffffffff;
        piStackY_308 = (int *)0x5f3705;
        FUN_00408ad0();
        piStackY_308 = (int *)0x5f370d;
        FUN_004010c0();
        ExceptionList = local_10;
        return;
      }
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_004010c0();
      goto LAB_005f3a69;
    }
    if (param_3 == 0x8b9) goto LAB_005f355a;
    if (param_3 == 0x932) {
      piStackY_308 = (int *)0x5f3891;
      ExceptionList = &local_10;
      local_fc = FUN_00aae9af();
      local_8 = 2;
      if (local_fc == 0) {
        local_2e4 = (int *)0x0;
      }
      else {
        piStackY_308 = (int *)0x5f38cb;
        local_2e4 = (int *)FUN_005f5d20();
      }
      local_f8 = local_2e4;
      local_8 = 0xffffffff;
      local_80 = local_2e4;
      piStackY_308 = (int *)0x5f390a;
      (**(code **)(*local_2e4 + 0xc))();
      piStackY_308 = (int *)0x5f3915;
      FUN_005ed9f0();
      piStackY_308 = local_80;
      puStackY_30c = (undefined1 *)0x5f392c;
      (**(code **)(*in_ECX + 0x18))();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = &local_10;
  FUN_00401480();
  FUN_0098fc50();
  FUN_009885d0();
  local_8 = 3;
  FUN_004dad40();
  piStackY_308 = (int *)0x5f397a;
  local_84 = (int *)FUN_004db700();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  if ((local_84 != (int *)0x0) && (cVar1 = (**(code **)(*local_84 + 0x24))(), cVar1 != '\0')) {
    piStackY_308 = (int *)0x5f39b8;
    local_120 = FUN_00aae9af();
    if (local_120 == 0) {
      local_2f0 = 0;
    }
    else {
      piStackY_308 = (int *)in_ECX[8];
      puStackY_30c = (undefined1 *)0x5f39ef;
      local_2f0 = FUN_005f4bf0();
    }
    local_11c = local_2f0;
    local_88 = local_2f0;
    local_124 = &stack0xfffffcfc;
    piStackY_308 = (int *)&stack0xfffffcfc;
    puStackY_30c = (undefined1 *)0x5f3a2b;
    puStackY_30c = (undefined1 *)FUN_00401470();
    iStackY_310 = 0x5f3a31;
    FUN_0098fb60();
    piStackY_308 = (int *)0x5f3a3c;
    FUN_005f4c50();
    FUN_005ed9f0();
    piStackY_308 = (int *)0x5f3a64;
    (**(code **)(*in_ECX + 0x18))();
    ExceptionList = local_10;
    return;
  }
LAB_005f3a69:
  FUN_009885d0();
  local_8 = 4;
  piStackY_308 = (int *)0x109;
  puStackY_30c = local_140;
  iStackY_310 = 0x5f3a9c;
  FUN_004015b0();
  local_8._0_1_ = 5;
  piStackY_308 = (int *)0x5f3ac2;
  FUN_009a2070();
  piStackY_308 = (int *)0xe04190;
  puStackY_30c = (undefined1 *)0x5f3ad1;
  FUN_00401480();
  puStackY_30c = (undefined1 *)0x5f3ad6;
  puStackY_30c = (undefined1 *)FUN_0098fc50();
  iStackY_310 = 0x5f3ae7;
  iStackY_310 = FUN_00987d20();
  uStackY_314 = 0x5f3aed;
  puStackY_30c = (undefined1 *)FUN_00418e30();
  iStackY_310 = 0x5f3af6;
  piStackY_308 = (int *)FUN_00418e30();
  puStackY_30c = (undefined1 *)0x5f3b01;
  FUN_00989050();
  piStackY_308 = (int *)0x5f3b09;
  FUN_00408bd0();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00401650();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

