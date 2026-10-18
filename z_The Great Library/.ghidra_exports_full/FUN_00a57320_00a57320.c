// FUN_00a57320 @ 00a57320 body=[[00a57320, 00a5772f]]


void FUN_00a57320(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  code *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b70046;
  local_10 = ExceptionList;
  if (param_2 < 0x145) {
    if (param_2 == 0x144) {
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x198);
      ExceptionList = local_10;
      return;
    }
    switch(param_2) {
    case 0x2e:
      ExceptionList = &local_10;
      FUN_009a1e10();
      ExceptionList = local_10;
      return;
    default:
      goto switchD_00a57367_caseD_2f;
    case 0x4b:
      ExceptionList = &local_10;
      FUN_009a1e10();
      ExceptionList = local_10;
      return;
    case 0x7c:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0x29c);
      local_8 = 0;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_009f1d30(iVar2,*(undefined4 *)(in_ECX + 0x158));
      }
      pcVar4 = *(code **)(*piVar3 + 0xc);
      break;
    case 0x83:
      ExceptionList = &local_10;
      FUN_009a1e10();
      ExceptionList = local_10;
      return;
    case 0x84:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x110,0);
      ExceptionList = local_10;
      return;
    case 0x85:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0xbc,0);
      ExceptionList = local_10;
      return;
    case 0x86:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0xa0,0);
      ExceptionList = local_10;
      return;
    case 0x87:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x68,0);
      ExceptionList = local_10;
      return;
    case 0x88:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x84,0);
      ExceptionList = local_10;
      return;
    case 0x8a:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    case 0x92:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    case 0x93:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    case 0x94:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    case 0x95:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    case 0x96:
      ExceptionList = &local_10;
      FUN_009a1c10();
      ExceptionList = local_10;
      return;
    case 0xb3:
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af(0xb0);
      local_8 = 1;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_009eca80(iVar2);
      }
      pcVar4 = *(code **)(*piVar3 + 0xc);
    }
    local_8 = 0xffffffff;
    (*pcVar4)(param_1);
    iVar2 = *(int *)(in_ECX + 0x160);
    uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3);
    (**(code **)(iVar2 + 0x18))(uVar1);
    ExceptionList = local_10;
    return;
  }
  switch(param_2) {
  case 0x145:
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x199);
    ExceptionList = local_10;
    return;
  case 0x188:
    ExceptionList = &local_10;
    FUN_009a1ce0();
    ExceptionList = local_10;
    return;
  case 0x189:
    ExceptionList = &local_10;
    FUN_009a1ce0();
    ExceptionList = local_10;
    return;
  case 0x18a:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0xd8,0);
    ExceptionList = local_10;
    return;
  case 0x18b:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0xf4,0);
    ExceptionList = local_10;
    return;
  case 0x18c:
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x1a4);
    ExceptionList = local_10;
    return;
  }
switchD_00a57367_caseD_2f:
  ExceptionList = &local_10;
  FUN_009ecfa0(param_1,param_2);
  ExceptionList = local_10;
  return;
}

