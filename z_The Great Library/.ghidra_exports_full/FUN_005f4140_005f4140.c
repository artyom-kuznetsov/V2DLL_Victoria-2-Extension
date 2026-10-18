// FUN_005f4140 @ 005f4140 body=[[005f4140, 005f432d]]


void FUN_005f4140(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  code *pcVar4;
  undefined1 local_50 [56];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  uVar3 = DAT_012587e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5a41b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_0098fc50();
  FUN_0055c6c0(uVar3,&local_18,uVar2);
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = local_14;
  if (*(int *)(in_ECX + 0x14) == 0) {
    if (*(char *)(in_ECX + 0x10) == 'X') {
      if (*(char *)(in_ECX + 0x11) == 'X') {
        if (*(char *)(in_ECX + 0x12) == 'X') {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      FUN_009885d0();
      local_8 = 0;
      FUN_004c4540(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x5c));
      local_8._0_1_ = 1;
      FUN_004015b0(local_50,0x167,0x10004);
      local_8._0_1_ = 2;
      pcVar4 = FUN_00401280;
      uVar3 = FUN_0098fc50(" for control-change in ",FUN_00401280);
      uVar3 = FUN_00987d20(uVar3);
      uVar3 = FUN_00418e30(uVar3);
      uVar3 = FUN_00418e30(uVar3);
      FUN_00989050(uVar3);
      FUN_00408bd0(pcVar4);
      local_8._0_1_ = 1;
      FUN_00401650();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
  }
  ExceptionList = local_10;
  return;
}

