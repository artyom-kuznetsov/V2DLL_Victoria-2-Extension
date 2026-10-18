// FUN_009af8f0 @ 009af8f0 body=[[009af8f0, 009af9d3] [009af9d7, 009af9ec]]


void FUN_009af8f0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 unaff_EDI;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uStack_f8;
  undefined1 local_f4 [16];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_78 [19];
  void *pvStack_2c;
  undefined1 uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(param_1 + 0x6c) = unaff_EDI;
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = 0;
  FUN_00409350("session.cpp",0xb);
  local_c = 0;
  uVar1 = FUN_004015b0(local_f4,0x1b0,0x301);
  pcVar4 = "Machine id ";
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar1,"Machine id ",0xb,0);
  pcVar3 = " assigned";
  uVar2 = extraout_ECX;
  uVar1 = FUN_00447240(uVar1);
  uVar1 = FUN_00418e30(uVar1);
  FUN_00401280(uVar1);
  uStack_24 = 0;
  FUN_00987ac0(appuStack_78);
  appuStack_78[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_78,uVar2,pcVar3);
  if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pcVar4);
  }
  ExceptionList = pvStack_2c;
  return;
}

