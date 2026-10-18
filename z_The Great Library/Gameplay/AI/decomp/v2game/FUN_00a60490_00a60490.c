// FUN_00a60490 @ 00a60490 body=[[00a60490, 00a60560] [00a60564, 00a60579]]


void FUN_00a60490(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_f4 [4];
  uint uStack_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 0;
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = 0;
  FUN_00409350("server.cpp",10);
  local_c = 0;
  uVar1 = FUN_004015b0(local_f4,0xe8,0x301);
  uVar2 = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar1,"CONNECTION DETECTED",0x13,0);
  FUN_00401280(uVar1);
  uStack_1c = 0;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = pvStack_24;
  return;
}

