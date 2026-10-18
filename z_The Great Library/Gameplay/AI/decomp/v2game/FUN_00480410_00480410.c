// FUN_00480410 @ 00480410 body=[[00480410, 00480878]]


void FUN_00480410(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined1 auStack_f4 [12];
  undefined4 uStack_e8;
  int iStack_e4;
  undefined1 **ppuStack_e0;
  int *piStack_dc;
  undefined1 *local_cc;
  int local_c8 [22];
  int local_70 [22];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b51c2c;
  local_14 = ExceptionList;
  if (param_2 < 0x421) {
    if (param_2 == 0x420) {
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x48070e;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x178) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
    switch(param_2) {
    case 0x23e:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x4804cd;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 8) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x240:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x48047b;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x120) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x241:
      piStack_dc = local_c8;
      ppuStack_e0 = (undefined1 **)0x48051a;
      ExceptionList = &local_14;
      FUN_00561bd0();
      local_c = 0;
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x480536;
      (**(code **)(local_c8[0] + 0xc))();
      iVar1 = *(int *)(in_ECX + 0x334);
      ppuStack_e0 = (undefined1 **)0x64;
      iStack_e4 = 0x480543;
      iVar3 = FUN_00aae9af();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        ppuStack_e0 = &local_cc;
        uStack_e8 = 0x480563;
        iStack_e4 = iVar3;
        FUN_0047db00();
        *(int *)(iVar3 + 0x58) = iVar1;
        *(undefined4 *)(iVar3 + 0x5c) = 0;
        *(undefined1 *)(iVar3 + 0x60) = 0;
      }
      iVar2 = *(int *)(in_ECX + 0x338);
      *(int *)(in_ECX + 0x334) = iVar3;
      *(int *)(in_ECX + 0x338) = iVar2 + 1;
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0x5c) = iVar3;
        ppuStack_e0 = (undefined1 **)0x48059a;
        FUN_0047e4a0();
        ExceptionList = pvStack_18;
        return;
      }
      *(int *)(in_ECX + 0x330) = iVar3;
      ppuStack_e0 = (undefined1 **)0x4805c0;
      FUN_0047e4a0();
      ExceptionList = pvStack_18;
      return;
    case 0x242:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x4804f9;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x2d8) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x243:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x4805ec;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x344) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x244:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x480618;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x39c) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x246:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x480644;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x434) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x247:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x48069c;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x724) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x249:
    case 0x24b:
      piStack_dc = local_70;
      ppuStack_e0 = (undefined1 **)0x4806bd;
      ExceptionList = &local_14;
      FUN_00561bd0();
      local_c = 3;
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x4806d9;
      (**(code **)(local_70[0] + 0xc))();
      ppuStack_e0 = (undefined1 **)0x4806e2;
      FUN_0047e4a0();
      ExceptionList = pvStack_18;
      return;
    case 0x24a:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x4804a7;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x280) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x25d:
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x480670;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x4f4) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
  }
  else if (param_2 < 0x6c7) {
    if (param_2 == 0x6c6) {
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x4807a9;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x60) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 == 0x6a2) {
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x480783;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x1d0) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 == 0x6a4) {
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x480757;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x5b4) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
  }
  else {
    if (param_2 == 0x93d) {
      local_cc = auStack_f4;
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x951) {
      piStack_dc = local_c8;
      ppuStack_e0 = (undefined1 **)0x4807f5;
      ExceptionList = &local_14;
      FUN_00561bd0();
      local_c = 2;
      piStack_dc = (int *)param_1;
      ppuStack_e0 = (undefined1 **)0x480811;
      (**(code **)(local_c8[0] + 0xc))();
      ppuStack_e0 = (undefined1 **)0x480820;
      FUN_0048c2f0();
      ppuStack_e0 = (undefined1 **)0x480829;
      FUN_0047e4a0();
      ExceptionList = pvStack_18;
      return;
    }
  }
  piStack_dc = (int *)0x4807d4;
  ExceptionList = &local_14;
  FUN_009a0f40();
  ExceptionList = local_14;
  return;
}

