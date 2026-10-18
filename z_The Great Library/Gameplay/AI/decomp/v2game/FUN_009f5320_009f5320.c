// FUN_009f5320 @ 009f5320 body=[[009f5320, 009f5636]]


void FUN_009f5320(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined2 uVar3;
  SHORT SVar4;
  short sVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *in_ECX;
  undefined1 local_30 [31];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4eb48;
  local_10 = ExceptionList;
  if (param_1 == 0x24) {
    if (param_2 != 0x102) {
      *(undefined2 *)(in_ECX + 0xe) = 0;
      return;
    }
LAB_009f5482:
    ExceptionList = &local_10;
    uVar7 = FUN_009e0910();
    local_8 = 2;
    (**(code **)(*in_ECX + 0x54))(uVar7);
    local_8 = 0xffffffff;
LAB_009f54a5:
    FUN_00408ad0();
LAB_009f54ad:
    pcVar6 = GetKeyState_exref;
    if (param_2 != 0x102) {
LAB_009f54b6:
      pcVar6 = GetKeyState_exref;
      if ((param_1 == 0x2e) && (SVar4 = GetKeyState(0x10), -1 < SVar4)) {
        (**(code **)(*in_ECX + 0xa0))();
        iVar8 = FUN_009f74c0(*(undefined2 *)((int)in_ECX + 0x3a));
        in_ECX[0x11] = *(int *)(iVar8 + 0x10);
        FUN_00408ad0();
      }
    }
  }
  else {
    if (param_1 == 0x23) {
      if (param_2 != 0x102) {
        ExceptionList = &local_10;
        uVar3 = (**(code **)(*in_ECX + 0x14))();
        *(undefined2 *)(in_ECX + 0xe) = uVar3;
        ExceptionList = local_10;
        return;
      }
      goto LAB_009f5482;
    }
    ExceptionList = &local_10;
    if (param_2 != 0x102) goto LAB_009f54b6;
    if ((char)param_1 == '\b') {
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8 = 0;
      cVar2 = FUN_00416db0();
      local_11 = cVar2 == '\0';
      local_8 = 0xffffffff;
      FUN_00408ad0();
      if (local_11 == '\0') {
        pcVar6 = *(code **)(*in_ECX + 0x9c);
      }
      else {
        pcVar6 = *(code **)(*in_ECX + 0xa0);
      }
      (*pcVar6)();
      iVar8 = FUN_009f74c0(*(undefined2 *)((int)in_ECX + 0x3a));
      in_ECX[0x11] = *(int *)(iVar8 + 0x10);
      goto LAB_009f54a5;
    }
    if ((char)param_1 != '\r') goto LAB_009f5482;
    ExceptionList = &local_10;
    cVar2 = FUN_0040b360();
    pcVar6 = GetKeyState_exref;
    if (cVar2 != '\0') {
      if ((char)in_ECX[0x26] != '\0') {
        FUN_009885d0();
        local_8 = 1;
        (**(code **)(*in_ECX + 0x54))(local_30);
        local_8 = 0xffffffff;
        FUN_00408ad0();
      }
      for (puVar1 = (undefined4 *)in_ECX[1]; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[2]) {
        (**(code **)(*(int *)*puVar1 + 0xc))();
      }
      goto LAB_009f54ad;
    }
  }
  if (param_1 == 0x28) {
    if (param_2 != 0x102) {
      (**(code **)(*in_ECX + 0x7c))();
      goto LAB_009f5513;
    }
  }
  else {
LAB_009f5513:
    if ((param_1 == 0x26) && (param_2 != 0x102)) {
      (**(code **)(*in_ECX + 0x78))();
    }
  }
  sVar5 = (*pcVar6)(0x11);
  if (((-1 < sVar5) && (sVar5 = (*pcVar6)(0x10), -1 < sVar5)) && (param_1 == 0x27)) {
    (**(code **)(*in_ECX + 0x74))();
  }
  sVar5 = (*pcVar6)(0x11);
  if ((-1 < sVar5) && (sVar5 = (*pcVar6)(0x10), -1 < sVar5)) {
    if (param_1 != 0x25) goto LAB_009f558b;
    (**(code **)(*in_ECX + 0x6c))();
  }
  if ((param_1 == 0x25) && (sVar5 = (*pcVar6)(0x11), sVar5 < 0)) {
    (**(code **)(*in_ECX + 0x94))();
  }
LAB_009f558b:
  if ((param_1 == 0x27) && (sVar5 = (*pcVar6)(0x11), sVar5 < 0)) {
    (**(code **)(*in_ECX + 0x98))();
  }
  if (param_1 == 0x25) {
    if (param_2 == 0x102) {
      ExceptionList = local_10;
      return;
    }
    sVar5 = (*pcVar6)(0x10);
    if (sVar5 < 0) {
      (**(code **)(*in_ECX + 0x68))(1);
    }
  }
  if (param_1 == 0x27) {
    if (param_2 == 0x102) {
      ExceptionList = local_10;
      return;
    }
    sVar5 = (*pcVar6)(0x10);
    if (sVar5 < 0) {
      (**(code **)(*in_ECX + 0x70))(1);
    }
  }
  if (param_1 == 0x2d) {
    sVar5 = (*pcVar6)(0x11);
    if (sVar5 < 0) {
      (**(code **)(*in_ECX + 200))();
    }
    sVar5 = (*pcVar6)(0x10);
    if (sVar5 < 0) {
      (**(code **)(*in_ECX + 0xc0))();
    }
  }
  ExceptionList = local_10;
  return;
}

