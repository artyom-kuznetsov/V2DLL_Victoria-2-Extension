// FUN_00929150 @ 00929150 body=[[00929150, 009293be]]


void FUN_00929150(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_1d0 [28];
  undefined1 local_1b4 [132];
  undefined **appuStack_130 [67];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5870c;
  local_14 = ExceptionList;
  if (param_2 < 0x8da) {
    if (param_2 != 0x8d9) {
      if (param_2 == 0x40d) {
        ExceptionList = &local_14;
        FUN_005e5a20(param_1,(int *)(in_ECX + 0x1c));
        if ((*(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 0x1c) & 0xfffffffcU) != 4) {
          ExceptionList = local_14;
          return;
        }
        cVar1 = FUN_00929070(in_ECX + 0x3c);
        if (cVar1 == '\0') {
          ExceptionList = local_14;
          return;
        }
        FUN_009885d0();
        local_c = 0;
        FUN_004015b0(local_1b4,0xab,0x10002);
        local_c._0_1_ = 1;
        uVar2 = FUN_00987d20();
        FUN_00401280(uVar2);
        local_c = (uint)local_c._1_3_ << 8;
        FUN_00401650();
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x420) {
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 8);
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x43d) {
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 9);
        ExceptionList = local_14;
        return;
      }
LAB_009292ac:
      ExceptionList = &local_14;
      FUN_009a0f40();
      ExceptionList = local_14;
      return;
    }
    iVar3 = in_ECX + 0x3c;
  }
  else {
    if (param_2 != 0x90e) {
      if (param_2 == 0x90f) {
        ExceptionList = &local_14;
        FUN_005e5a20(param_1,(int *)(in_ECX + 0xc));
        if ((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc) & 0xfffffffcU) != 4) {
          ExceptionList = local_14;
          return;
        }
        cVar1 = FUN_00929070(in_ECX + 0x2c);
        if (cVar1 == '\0') {
          ExceptionList = local_14;
          return;
        }
        FUN_009885d0();
        local_c = 2;
        uVar2 = FUN_004015b0(local_1d0,0xb0,0x10002);
        local_c = CONCAT31(local_c._1_3_,3);
        FUN_00987d50(uVar2,"Warning: Resolved corrupted savegame file - PeaceOffer:flags2",0x3d,0);
        FUN_00401280(uVar2);
        uStack_1c = 2;
        FUN_00987ac0(appuStack_130);
        appuStack_130[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_130);
        FUN_00408ad0();
        ExceptionList = pvStack_24;
        return;
      }
      goto LAB_009292ac;
    }
    iVar3 = in_ECX + 0x2c;
  }
  ExceptionList = &local_14;
  FUN_0092ada0(param_1,iVar3);
  ExceptionList = local_14;
  return;
}

