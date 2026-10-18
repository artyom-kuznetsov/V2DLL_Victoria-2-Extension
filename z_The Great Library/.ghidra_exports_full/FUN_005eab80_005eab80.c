// FUN_005eab80 @ 005eab80 body=[[005eab80, 005eadb2]]


void FUN_005eab80(char param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  code *pcVar6;
  undefined1 local_68 [84];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b930a3;
  local_10 = ExceptionList;
  if (param_1 == '\0') {
    ExceptionList = &local_10;
    FUN_0055f640();
    FUN_00522390();
  }
  else {
    ExceptionList = &local_10;
    iVar4 = FUN_0055f640();
    iVar1 = *(int *)(in_ECX + 0xc);
    local_14 = iVar4;
    cVar3 = FUN_0048fee0();
    if ((cVar3 == '\0') && (iVar4 != *(int *)(iVar1 + 0xe64))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_009885d0();
      local_8 = 0;
      FUN_004f97a0();
      local_8._0_1_ = 1;
      FUN_00974c50(local_14);
      local_8._0_1_ = 2;
      FUN_004015b0(local_68,0x438,0x10004);
      local_8._0_1_ = 3;
      pcVar6 = FUN_00401280;
      uVar5 = FUN_00987d20(" to country "," that allready has this culture",FUN_00401280);
      uVar5 = FUN_00989050(uVar5);
      uVar5 = FUN_00418e30(uVar5);
      uVar5 = FUN_00989050(uVar5);
      FUN_00418e30(uVar5);
      FUN_00408bd0(pcVar6);
      local_8._0_1_ = 2;
      FUN_00401650();
      local_8._0_1_ = 1;
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
    else {
      FUN_00522310(local_14);
    }
  }
  ExceptionList = local_10;
  return;
}

