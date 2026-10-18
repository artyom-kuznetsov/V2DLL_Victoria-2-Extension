// FUN_009ce470 @ 009ce470 body=[[009ce470, 009cf8e9]]


void FUN_009ce470(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63ab6;
  local_10 = ExceptionList;
  if (param_2 < 0x141) {
    if (param_2 == 0x140) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x26c,0);
      ExceptionList = local_10;
      return;
    }
    switch(param_2) {
    case 0x2e:
      ExceptionList = &local_10;
      FUN_009a1e10();
      ExceptionList = local_10;
      return;
    case 0x2f:
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x254);
      ExceptionList = local_10;
      return;
    default:
      goto switchD_009ce4ba_caseD_30;
    case 0x4b:
      ExceptionList = &local_10;
      FUN_009a1e10();
      ExceptionList = local_10;
      return;
    case 0x7c:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x29c);
      local_8 = 5;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_009f1d30(iVar2,*(undefined4 *)(in_ECX + 0x148));
      }
      local_8 = 0xffffffff;
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      (**(code **)(*piVar3 + 0x18))();
      cVar1 = FUN_00416db0();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x188);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 6;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x18c);
      *(undefined1 **)(in_ECX + 0x188) = puVar5;
      *(int *)(in_ECX + 0x18c) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x184) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 7;
      break;
    case 0x82:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x110);
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00a5dd80(*(undefined4 *)(in_ECX + 0x14c));
      }
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x1b8);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0xd;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x1bc);
      *(undefined1 **)(in_ECX + 0x1b8) = puVar5;
      *(int *)(in_ECX + 0x1bc) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x1b4) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0xe;
      break;
    case 0x84:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x68,0);
      ExceptionList = local_10;
      return;
    case 0x89:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x1a8);
      local_8 = 0x11;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00a56810(iVar2,*(undefined4 *)(in_ECX + 0x148),
                                     *(undefined4 *)(in_ECX + 0x14c));
      }
      local_8 = 0xffffffff;
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x1d8);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x12;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x1dc);
      *(undefined1 **)(in_ECX + 0x1d8) = puVar5;
      *(int *)(in_ECX + 0x1dc) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x1d4) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x13;
      break;
    case 0x8a:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    case 0x98:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x2a4);
      local_8 = 0x1a;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_009cd7c0(iVar2);
      }
      local_8 = 0xffffffff;
      FUN_009a2e40();
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x218);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x1b;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x21c);
      *(undefined1 **)(in_ECX + 0x218) = puVar5;
      *(int *)(in_ECX + 0x21c) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x214) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x1c;
      break;
    case 0x99:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x84,0);
      ExceptionList = local_10;
      return;
    case 0x9a:
      ExceptionList = &local_10;
      FUN_009a1c10();
      ExceptionList = local_10;
      return;
    case 0x9e:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0xb0,0);
      ExceptionList = local_10;
      return;
    case 0x9f:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0xcc,0);
      ExceptionList = local_10;
      return;
    case 0xa3:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0xe8,0);
      ExceptionList = local_10;
      return;
    case 0xa4:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x104,0);
      ExceptionList = local_10;
      return;
    case 0xa6:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x19c);
      local_8 = 0x1d;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00a59570(iVar2,*(undefined4 *)(in_ECX + 0x14c));
      }
      local_8 = 0xffffffff;
      FUN_009a2e40();
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x228);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x1e;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x22c);
      *(undefined1 **)(in_ECX + 0x228) = puVar5;
      *(int *)(in_ECX + 0x22c) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x224) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x1f;
      break;
    case 0xa7:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x108);
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00a582e0(*(undefined4 *)(in_ECX + 0x148),*(undefined4 *)(in_ECX + 0x14c)
                                    );
      }
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x1e8);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 3;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x1ec);
      *(undefined1 **)(in_ECX + 0x1e8) = puVar5;
      *(int *)(in_ECX + 0x1ec) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x1e4) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 4;
      break;
    case 0xa8:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x170);
      local_8 = 10;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00a5c8d0(iVar2,*(undefined4 *)(in_ECX + 0x148),
                                     *(undefined4 *)(in_ECX + 0x14c));
      }
      local_8 = 0xffffffff;
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x1a8);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0xb;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x1ac);
      *(undefined1 **)(in_ECX + 0x1a8) = puVar5;
      *(int *)(in_ECX + 0x1ac) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x1a4) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0xc;
      break;
    case 0xb1:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x29c);
      local_8 = 8;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_009f1d30(iVar2,*(undefined4 *)(in_ECX + 0x148));
      }
      local_8 = 0xffffffff;
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      (**(code **)(*piVar3 + 0x18))();
      cVar1 = FUN_00416db0();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x198);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 9;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      iVar7 = *(int *)(in_ECX + 0x19c);
      *(undefined1 **)(in_ECX + 0x198) = puVar5;
      *(int *)(in_ECX + 0x19c) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x194) = puVar5;
        ExceptionList = local_10;
        return;
      }
      *(undefined1 **)(iVar2 + 0x20) = puVar5;
      ExceptionList = local_10;
      return;
    case 0xb3:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0xb0);
      local_8 = 0x14;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_009eca80(iVar2);
      }
      local_8 = 0xffffffff;
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x1f8);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x15;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x1fc);
      *(undefined1 **)(in_ECX + 0x1f8) = puVar5;
      *(int *)(in_ECX + 0x1fc) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 500) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x16;
      break;
    case 0xbf:
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = 0;
      local_8 = 0x23;
      ExceptionList = &local_10;
      FUN_009a1750(local_30,0);
      uVar4 = FUN_00a581e0();
      *(undefined4 *)(in_ECX + 600) = uVar4;
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    case 0xc1:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x29c);
      local_8 = 0x17;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_009f1d30(iVar2,*(undefined4 *)(in_ECX + 0x148));
      }
      local_8 = 0xffffffff;
      FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = *(int *)(in_ECX + 0x150);
      uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
      (**(code **)(iVar2 + 0x18))(uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      iVar2 = *(int *)(in_ECX + 0x208);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x18;
      local_14 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x14) = 0xf;
        *(undefined4 *)(puVar5 + 0x10) = 0;
        *puVar5 = 0;
        FUN_00408ed0(uVar4,0,0xffffffff);
        *(int *)(puVar5 + 0x1c) = iVar2;
        *(undefined4 *)(puVar5 + 0x20) = 0;
        puVar5[0x24] = 0;
      }
      local_8 = 0xffffffff;
      iVar7 = *(int *)(in_ECX + 0x20c);
      *(undefined1 **)(in_ECX + 0x208) = puVar5;
      *(int *)(in_ECX + 0x20c) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined1 **)(in_ECX + 0x204) = puVar5;
      }
      else {
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
      }
      uVar4 = (**(code **)(*piVar3 + 0x18))();
      param_1 = *(int *)(in_ECX + 0x260);
      puVar5 = (undefined1 *)FUN_00aae9af(0x28);
      local_8 = 0x19;
    }
LAB_009ce745:
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 0;
      FUN_00408ed0(uVar4,0,0xffffffff);
      *(int *)(puVar5 + 0x1c) = param_1;
      *(undefined4 *)(puVar5 + 0x20) = 0;
      puVar5[0x24] = 0;
    }
    *(undefined1 **)(in_ECX + 0x260) = puVar5;
    iVar2 = *(int *)(in_ECX + 0x264);
    *(int *)(in_ECX + 0x264) = iVar2 + 1;
    if (iVar2 == 0) {
      *(undefined1 **)(in_ECX + 0x25c) = puVar5;
      ExceptionList = local_10;
      return;
    }
    *(undefined1 **)(param_1 + 0x20) = puVar5;
    ExceptionList = local_10;
    return;
  }
  switch(param_2) {
  case 0x141:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0x288,0);
    ExceptionList = local_10;
    return;
  case 0x147:
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0xe4);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00a58d40(*(undefined4 *)(in_ECX + 0x148),*(undefined4 *)(in_ECX + 0x14c));
    }
    FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(param_1);
    iVar2 = *(int *)(in_ECX + 0x150);
    uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
    (**(code **)(iVar2 + 0x18))(uVar4);
    uVar4 = (**(code **)(*piVar3 + 0x18))();
    iVar2 = *(int *)(in_ECX + 0x1c8);
    puVar5 = (undefined1 *)FUN_00aae9af(0x28);
    local_8 = 0xf;
    local_14 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 0;
      FUN_00408ed0(uVar4,0,0xffffffff);
      *(int *)(puVar5 + 0x1c) = iVar2;
      *(undefined4 *)(puVar5 + 0x20) = 0;
      puVar5[0x24] = 0;
    }
    local_8 = 0xffffffff;
    iVar7 = *(int *)(in_ECX + 0x1cc);
    *(undefined1 **)(in_ECX + 0x1c8) = puVar5;
    *(int *)(in_ECX + 0x1cc) = iVar7 + 1;
    if (iVar7 == 0) {
      *(undefined1 **)(in_ECX + 0x1c4) = puVar5;
    }
    else {
      *(undefined1 **)(iVar2 + 0x20) = puVar5;
    }
    uVar4 = (**(code **)(*piVar3 + 0x18))();
    param_1 = *(int *)(in_ECX + 0x260);
    puVar5 = (undefined1 *)FUN_00aae9af(0x28);
    local_8 = 0x10;
    goto LAB_009ce745;
  case 0x167:
    ExceptionList = &local_10;
    piVar6 = (int *)FUN_00aae9af(0x98);
    piVar3 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      iVar2 = *(int *)(in_ECX + 0x14c);
      iVar7 = *(int *)(in_ECX + 0x148);
      piVar6[1] = 0x18d;
      piVar6[6] = 0;
      piVar6[7] = 0xf;
      *(undefined1 *)(piVar6 + 2) = 0;
      piVar6[0xd] = 0;
      piVar6[0xe] = 0xf;
      *(undefined1 *)(piVar6 + 9) = 0;
      piVar6[0x14] = 0;
      piVar6[0x15] = 0xf;
      *(undefined1 *)(piVar6 + 0x10) = 0;
      piVar6[0x17] = 0;
      piVar6[0x18] = 0;
      *piVar6 = (int)&PTR_FUN_00e42be4;
      piVar6[0x19] = iVar2;
      piVar6[0x1a] = iVar7;
      piVar6[0x1b] = 0;
      piVar6[0x1c] = 0;
      piVar6[0x21] = 0;
      piVar6[0x22] = 0xf;
      *(undefined1 *)(piVar6 + 0x1d) = 0;
      piVar6[0x24] = 0;
      piVar6[0x25] = 0;
      piVar3 = piVar6;
    }
    FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(param_1);
    (**(code **)(*piVar3 + 0x18))();
    FUN_00401320();
    local_8 = 0;
    iVar2 = *(int *)(in_ECX + 0x150);
    uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
    (**(code **)(iVar2 + 0x18))(uVar4);
    uVar4 = (**(code **)(*piVar3 + 0x18))();
    iVar2 = *(int *)(in_ECX + 0x260);
    puVar5 = (undefined1 *)FUN_00aae9af(0x28);
    local_8._0_1_ = 1;
    local_14 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 0;
      FUN_00408ed0(uVar4,0,0xffffffff);
      *(int *)(puVar5 + 0x1c) = iVar2;
      *(undefined4 *)(puVar5 + 0x20) = 0;
      puVar5[0x24] = 0;
    }
    local_8._0_1_ = 0;
    iVar7 = *(int *)(in_ECX + 0x264);
    *(undefined1 **)(in_ECX + 0x260) = puVar5;
    *(int *)(in_ECX + 0x264) = iVar7 + 1;
    if (iVar7 == 0) {
      *(undefined1 **)(in_ECX + 0x25c) = puVar5;
    }
    else {
      *(undefined1 **)(iVar2 + 0x20) = puVar5;
    }
    uVar4 = (**(code **)(*piVar3 + 0x18))();
    iVar2 = *(int *)(in_ECX + 0x238);
    puVar5 = (undefined1 *)FUN_00aae9af(0x28);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 0;
      FUN_00408ed0(uVar4,0,0xffffffff);
      *(int *)(puVar5 + 0x1c) = iVar2;
      *(undefined4 *)(puVar5 + 0x20) = 0;
      puVar5[0x24] = 0;
    }
    iVar7 = *(int *)(in_ECX + 0x23c);
    *(undefined1 **)(in_ECX + 0x238) = puVar5;
    *(int *)(in_ECX + 0x23c) = iVar7 + 1;
    if (iVar7 == 0) {
      *(undefined1 **)(in_ECX + 0x234) = puVar5;
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
    *(undefined1 **)(iVar2 + 0x20) = puVar5;
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  case 0x176:
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0xa0);
    local_8 = 0x20;
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00a58950(iVar2);
    }
    local_8 = 0xffffffff;
    FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(param_1);
    iVar2 = *(int *)(in_ECX + 0x150);
    uVar4 = (**(code **)(*piVar3 + 0x18))(piVar3);
    (**(code **)(iVar2 + 0x18))(uVar4);
    (**(code **)(*piVar3 + 0x18))();
    iVar2 = *(int *)(in_ECX + 0x248);
    iVar7 = FUN_00aae9af(0x28);
    local_8 = 0x21;
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00409310(iVar2,0);
    }
    local_8 = 0xffffffff;
    iVar7 = *(int *)(in_ECX + 0x24c);
    *(undefined4 *)(in_ECX + 0x248) = uVar4;
    *(int *)(in_ECX + 0x24c) = iVar7 + 1;
    if (iVar7 == 0) {
      *(undefined4 *)(in_ECX + 0x244) = uVar4;
    }
    else {
      *(undefined4 *)(iVar2 + 0x20) = uVar4;
    }
    (**(code **)(*piVar3 + 0x18))();
    iVar2 = *(int *)(in_ECX + 0x260);
    iVar7 = FUN_00aae9af(0x28);
    local_8 = 0x22;
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00409310(iVar2,0);
    }
    iVar7 = *(int *)(in_ECX + 0x264);
    *(undefined4 *)(in_ECX + 0x260) = uVar4;
    *(int *)(in_ECX + 0x264) = iVar7 + 1;
    if (iVar7 == 0) {
      *(undefined4 *)(in_ECX + 0x25c) = uVar4;
      ExceptionList = local_10;
      return;
    }
    *(undefined4 *)(iVar2 + 0x20) = uVar4;
    ExceptionList = local_10;
    return;
  case 0x1a4:
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x255);
    ExceptionList = local_10;
    return;
  }
switchD_009ce4ba_caseD_30:
  ExceptionList = &local_10;
  FUN_009ecfa0(param_1,param_2);
  ExceptionList = local_10;
  return;
}

