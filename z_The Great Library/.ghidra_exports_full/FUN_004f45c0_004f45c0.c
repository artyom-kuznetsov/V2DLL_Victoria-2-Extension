// FUN_004f45c0 @ 004f45c0 body=[[004f45c0, 004f4aa5]]


void FUN_004f45c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9611b;
  local_14 = ExceptionList;
  if (param_2 < 0x861) {
    if (param_2 == 0x860) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x178);
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x6c5) {
      if (param_2 == 0x6c4) {
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
      if (param_2 < 0x2c9) {
        if (param_2 == 0x2c8) {
          ExceptionList = &local_14;
          FUN_009a1c10();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x8a) {
          ExceptionList = &local_14;
          FUN_009a1c10();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x2a7) {
          local_20 = 0xf;
          local_24 = 0;
          local_34 = local_34 & 0xffffff00;
          local_c = 1;
          ExceptionList = &local_14;
          FUN_009a1750(&local_34,0);
          FUN_004dad40();
          iVar1 = FUN_004dc420(&local_34);
          if (iVar1 == 0) {
            iVar1 = FUN_004dacc0();
          }
          *(int *)(in_ECX + 0x10) = iVar1;
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
      }
      else {
        if (param_2 == 0x4f0) {
          ExceptionList = &local_14;
          FUN_009a1d40();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x657) {
          ExceptionList = &local_14;
          FUN_009a1d40();
          ExceptionList = local_14;
          return;
        }
      }
    }
    else if (param_2 < 0x850) {
      if (param_2 == 0x84f) {
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x6c5) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
    }
    else {
      if (param_2 == 0x850) {
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x851) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x852) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
    }
  }
  else if (param_2 < 0x953) {
    if (param_2 == 0x952) {
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x862) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x180);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x863) {
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 < 0xa67) {
    if (param_2 == 0xa66) {
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0xd8) + 0xc))(param_1);
      FUN_004f2560(in_ECX + 0xd8);
      ExceptionList = pvStack_18;
      return;
    }
    switch(param_2) {
    case 0x953:
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0x954:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x955:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x956:
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_c = 0;
      ExceptionList = &local_14;
      FUN_004f5a50(param_1,&local_34);
      iVar4 = (int)(local_30 - local_34) >> 3;
      iVar1 = 0;
      if (0 < iVar4) {
        puVar3 = (undefined4 *)(in_ECX + 0x188);
        do {
          *puVar3 = *(undefined4 *)(local_34 + iVar1 * 8);
          puVar3[1] = *(undefined4 *)(local_34 + 4 + iVar1 * 8);
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 2;
        } while (iVar1 < iVar4);
      }
      FUN_00aa8540();
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (param_2 == 0xa7c) {
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x20) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 == 0xa89) {
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0xa91) {
      ExceptionList = &local_14;
      iVar1 = FUN_00aae9af(0xc0);
      local_c = 2;
      if (iVar1 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_00860390(iVar1);
      }
      local_c = 0xffffffff;
      *(int **)(in_ECX + 0x1c8) = piVar2;
      (**(code **)(*piVar2 + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    }
  }
  ExceptionList = &local_14;
  FUN_009a0f40();
  ExceptionList = local_14;
  return;
}

