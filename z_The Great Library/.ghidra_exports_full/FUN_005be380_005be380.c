// FUN_005be380 @ 005be380 body=[[005be380, 005be62d]]


void FUN_005be380(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x2fd) {
    if (param_2 == 0x2fc) {
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x1d5) {
      if (param_2 == 0x1d4) {
        ExceptionList = &local_14;
        cVar1 = (**(code **)(*in_ECX + 0x24))();
        if (cVar1 != '\0') {
          FUN_009a19f0();
          iVar2 = FUN_009c16d0();
          if (iVar2 == 0) {
            ExceptionList = local_14;
            return;
          }
          FUN_0068f390();
          in_ECX[0xc] = iVar2;
          ExceptionList = local_14;
          return;
        }
        goto LAB_005be5e7;
      }
      if (param_2 == 0x1a) {
        ExceptionList = &local_14;
        FUN_004012f0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0xd9) {
        ExceptionList = &local_14;
        FUN_009885d0();
        local_c = 0;
        FUN_005c1a10();
        iVar2 = FUN_005c2ad0();
        if (iVar2 != 0) {
          FUN_005c03c0();
        }
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 == 0x2f7) {
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 < 0x535) {
    if (param_2 == 0x534) {
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x42e) {
      ExceptionList = &local_14;
      iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
      if (iVar2 == 0) {
        FUN_009a1140();
      }
      *(undefined2 *)(in_ECX + 0x22) = 0;
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x4f9) {
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 == 0x565) {
    ExceptionList = &local_14;
    piVar3 = (int *)FUN_0098fb60();
    in_ECX[0x21] = *piVar3;
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  if (param_2 != 0xb) {
    ExceptionList = &local_14;
    FUN_009a0f40();
    ExceptionList = local_14;
    return;
  }
LAB_005be5e7:
  FUN_009a19f0();
  ExceptionList = local_14;
  return;
}

