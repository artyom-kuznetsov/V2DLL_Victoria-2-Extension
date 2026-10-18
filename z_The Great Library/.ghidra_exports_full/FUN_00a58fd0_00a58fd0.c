// FUN_00a58fd0 @ 00a58fd0 body=[[00a58fd0, 00a592c8]]


void FUN_00a58fd0(int param_1,int param_2)

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
  if (param_2 < 0x167) {
    if (param_2 == 0x166) {
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    }
    switch(param_2) {
    case 0x1d:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x6c,0);
      ExceptionList = local_14;
      return;
    default:
      goto switchD_00a5901d_caseD_1e;
    case 0x24:
      break;
    case 0x4b:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    case 0x71:
      iVar1 = *(int *)(param_1 + 0x228);
      if ((iVar1 == 0x74) || (iVar1 == 0x31)) {
        *(undefined4 *)(in_ECX + 0xdc) = 2;
        return;
      }
      if (iVar1 == 0x73) {
        *(undefined4 *)(in_ECX + 0xdc) = 1;
        return;
      }
      if (iVar1 == 0x72) {
        *(undefined4 *)(in_ECX + 0xdc) = 0;
        return;
      }
      if (iVar1 == 0x1bc) {
        *(undefined4 *)(in_ECX + 0xdc) = 3;
        return;
      }
      break;
    case 0x83:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    case 0x8c:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x88,0);
      FUN_009885d0();
      local_c = 0;
      cVar2 = FUN_00416db0();
      local_c = 0xffffffff;
      FUN_00408ad0();
      if (cVar2 == '\0') {
        FUN_009a8ee0(local_64,in_ECX + 0x88);
        local_c = 1;
        iVar1 = *(int *)(*(int *)(in_ECX + 0x68) + 0xa8);
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
    case 0x8d:
      ExceptionList = &local_14;
      FUN_009a1ca0();
      ExceptionList = local_14;
      return;
    case 0x8e:
      ExceptionList = &local_14;
      FUN_009a1ca0();
      ExceptionList = local_14;
      return;
    case 0xad:
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    case 0xbf:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xc0,0);
      ExceptionList = local_14;
      return;
    }
  }
  else {
switchD_00a5901d_caseD_1e:
    ExceptionList = &local_14;
    FUN_009ecfa0(param_1,param_2);
  }
  ExceptionList = local_14;
  return;
}

