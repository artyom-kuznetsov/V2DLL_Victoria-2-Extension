// FUN_009f10e0 @ 009f10e0 body=[[009f10e0, 009f15f1]]


void FUN_009f10e0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  undefined1 local_64 [80];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b77c5a;
  local_14 = ExceptionList;
  if (param_2 < 0x141) {
    if (param_2 == 0x140) {
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x1ac,0);
      ExceptionList = local_14;
      return;
    }
    switch(param_2) {
    case 0x2e:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    default:
      goto switchD_009f112d_caseD_2f;
    case 0x35:
    case 0x81:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x104,0);
      ExceptionList = local_14;
      return;
    case 0x4b:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    case 0x5c:
      ExceptionList = &local_14;
      FUN_009a1de0();
      ExceptionList = local_14;
      return;
    case 0x65:
    case 0xab:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xb0,0);
      ExceptionList = local_14;
      return;
    case 0x71:
      iVar1 = *(int *)(param_1 + 0x228);
      if (iVar1 == 0x74) {
        *(undefined4 *)(in_ECX + 0x288) = 2;
        return;
      }
      if (iVar1 == 0x73) {
        *(undefined4 *)(in_ECX + 0x288) = 1;
        return;
      }
      if (iVar1 == 0x72) {
        *(undefined4 *)(in_ECX + 0x288) = 0;
        return;
      }
      break;
    case 0x7d:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x78,0);
      ExceptionList = local_14;
      return;
    case 0x7e:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x94,0);
      ExceptionList = local_14;
      return;
    case 0x7f:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xe8,0);
      ExceptionList = local_14;
      return;
    case 0x80:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xcc,0);
      ExceptionList = local_14;
      return;
    case 0x83:
      ExceptionList = &local_14;
      FUN_009a1e10();
      *(undefined4 *)(in_ECX + 0x294) = 0;
      *(undefined4 *)(in_ECX + 0x298) = 0;
      ExceptionList = local_14;
      return;
    case 0x84:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x13c,0);
      ExceptionList = local_14;
      return;
    case 0x8f:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x120,0);
      ExceptionList = local_14;
      return;
    case 0x90:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x21c,0);
      ExceptionList = local_14;
      return;
    case 0x91:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x238,0);
      ExceptionList = local_14;
      return;
    case 0xaa:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x200,0);
      FUN_009885d0();
      local_c = 0;
      cVar2 = FUN_00416db0();
      local_c = 0xffffffff;
      FUN_00408ad0();
      if (cVar2 == '\0') {
        FUN_009a8ee0(local_64,in_ECX + 0x200);
        local_c = 1;
        iVar1 = *(int *)(*(int *)(in_ECX + 100) + 0xa8);
        FUN_009a9880(*(undefined8 *)(iVar1 + 8),*(undefined8 *)(iVar1 + 0x10));
        local_c = CONCAT31(local_c._1_3_,2);
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = 0xffffffff;
        FUN_009a9740();
        ExceptionList = local_14;
        return;
      }
      break;
    case 0xbf:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x25c,0);
      ExceptionList = local_14;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x141:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 400,0);
      ExceptionList = local_14;
      return;
    case 0x142:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x158,0);
      ExceptionList = local_14;
      return;
    case 0x143:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x174,0);
      ExceptionList = local_14;
      return;
    case 0x148:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x1e4,0);
      ExceptionList = local_14;
      return;
    case 0x177:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x1c8,0);
      ExceptionList = local_14;
      return;
    case 0x17e:
      ExceptionList = &local_14;
      FUN_009a1de0();
      ExceptionList = local_14;
      return;
    }
switchD_009f112d_caseD_2f:
    ExceptionList = &local_14;
    FUN_009ecfa0(param_1,param_2);
  }
  ExceptionList = local_14;
  return;
}

