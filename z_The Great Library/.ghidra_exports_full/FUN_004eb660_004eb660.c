// FUN_004eb660 @ 004eb660 body=[[004eb660, 004ebc19]]


void FUN_004eb660(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  int local_16c [86];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b514e8;
  local_10 = ExceptionList;
  if (param_2 < 0x735) {
    if (param_2 == 0x734) {
      ExceptionList = &local_10;
      (**(code **)(*(int *)(in_ECX + 0x2c) + 0xc))(param_1);
      ExceptionList = local_10;
      return;
    }
    if (param_2 < 0x229) {
      if (param_2 == 0x228) {
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x126);
        ExceptionList = local_10;
        return;
      }
      if (param_2 == 0xb2) {
        ExceptionList = &local_10;
        FUN_009a1c10();
        ExceptionList = local_10;
        return;
      }
      if (param_2 == 0x1d2) {
        *(bool *)(in_ECX + 0x125) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
    }
    else if (param_2 < 0x233) {
      if (param_2 == 0x232) {
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x12f);
        ExceptionList = local_10;
        return;
      }
      switch(param_2) {
      case 0x22a:
        ExceptionList = &local_10;
        (**(code **)(*(int *)(in_ECX + 100) + 0xc))(param_1);
        ExceptionList = local_10;
        return;
      case 0x22b:
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 300);
        ExceptionList = local_10;
        return;
      case 0x22c:
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x12d);
        ExceptionList = local_10;
        return;
      case 0x22d:
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x12e);
        ExceptionList = local_10;
        return;
      }
    }
    else if (param_2 < 0x30c) {
      if (param_2 == 0x30b) {
        *(bool *)(in_ECX + 0x120) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
      if (param_2 == 0x262) {
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x144);
        ExceptionList = local_10;
        return;
      }
      ExceptionList = &local_10;
      local_14 = in_ECX;
      if (param_2 == 0x2bf) {
        while( true ) {
          piVar3 = *(int **)(param_1 + 0x1c);
          if ((char)piVar3[0x44] == '\0') {
            iVar1 = (**(code **)(*piVar3 + 4))();
            piVar3[2] = iVar1;
            if (iVar1 == 0) {
              piVar3[3] = 0x13;
            }
            *(undefined1 *)(piVar3 + 0x44) = 1;
          }
          piVar3 = piVar3 + 3;
          piVar4 = local_16c;
          for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          }
          if ((local_16c[0] == 4) || (local_16c[0] == 0x13)) break;
          FUN_009a1440(param_1);
          uVar2 = FUN_009885d0();
          local_8 = 0;
          FUN_00971910();
          iVar1 = FUN_009721b0(uVar2);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          uVar2 = FUN_009885d0();
          local_8 = 1;
          FUN_00971910();
          uVar2 = FUN_009721b0(uVar2);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          *(undefined4 *)(*(int *)(local_14 + 0x134) + *(int *)(iVar1 + 0x40) * 4) = uVar2;
        }
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        ExceptionList = local_10;
        return;
      }
    }
    else if (param_2 == 0x4c6) {
      ExceptionList = &local_10;
      uVar2 = FUN_009885d0();
      local_8 = 2;
      uVar2 = FUN_00973bd0(uVar2);
      *(undefined4 *)(in_ECX + 0x130) = uVar2;
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
  }
  else if (param_2 < 0x919) {
    if (param_2 == 0x918) {
      ExceptionList = &local_10;
      (**(code **)(*(int *)(in_ECX + 0xbc) + 0xc))(param_1);
      ExceptionList = local_10;
      return;
    }
    switch(param_2) {
    case 0x735:
      ExceptionList = &local_10;
      (**(code **)(*(int *)(in_ECX + 0x48) + 0xc))(param_1);
      ExceptionList = local_10;
      return;
    case 0x736:
      ExceptionList = &local_10;
      (**(code **)(*(int *)(in_ECX + 0x80) + 0xc))(param_1);
      ExceptionList = local_10;
      return;
    case 0x737:
      ExceptionList = &local_10;
      (**(code **)(*(int *)(in_ECX + 0x9c) + 0xc))(param_1);
      ExceptionList = local_10;
      return;
    case 0x739:
      ExceptionList = &local_10;
      (**(code **)(*(int *)(in_ECX + 0xd8) + 0xc))(param_1);
      ExceptionList = local_10;
      return;
    case 0x73e:
      ExceptionList = &local_10;
      uVar2 = FUN_004eb5b0();
      *(undefined4 *)(in_ECX + 0xf8) = uVar2;
      ExceptionList = local_10;
      return;
    case 0x745:
      ExceptionList = &local_10;
      uVar2 = FUN_004eb600();
      *(undefined4 *)(in_ECX + 0xfc) = uVar2;
      ExceptionList = local_10;
      return;
    case 0x746:
      *(bool *)(in_ECX + 0x122) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    case 0x747:
      ExceptionList = &local_10;
      uVar2 = FUN_004eb600();
      *(undefined4 *)(in_ECX + 0x100) = uVar2;
      ExceptionList = local_10;
      return;
    case 0x748:
      ExceptionList = &local_10;
      uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x104) = uVar2;
      ExceptionList = local_10;
      return;
    case 0x77d:
      *(bool *)(in_ECX + 0x121) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    case 0x77e:
      *(bool *)(in_ECX + 0x123) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    case 0x781:
      *(bool *)(in_ECX + 0x124) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
  }
  else if (param_2 == 0xa43) {
    ExceptionList = &local_10;
    FUN_009a1d40();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_009a0f40();
  ExceptionList = local_10;
  return;
}

