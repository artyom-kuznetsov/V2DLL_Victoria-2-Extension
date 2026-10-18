// FUN_008ae8a0 @ 008ae8a0 body=[[008ae8a0, 008aeaa8] [008aeac3, 008aeaf2]]


void FUN_008ae8a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_dc [124];
  undefined **appuStack_60 [18];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58bf6;
  local_14 = ExceptionList;
  if (param_2 < 0x3bf) {
    if (param_2 != 0x3be) {
      if (param_2 == 0x3b8) {
        ExceptionList = &local_14;
        iVar1 = FUN_00aae9af(0x24);
        if (iVar1 == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)FUN_008ae250();
        }
        (**(code **)(*piVar2 + 0xc))(param_1);
        FUN_0068f390();
        ExceptionList = pvStack_18;
        return;
      }
      goto LAB_008ae9a0;
    }
  }
  else {
    if (param_2 < 0x3c2) {
      if (param_2 == 0x3c1) {
        ExceptionList = &local_14;
        piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_100);
        uVar3 = 0x591c8;
      }
      else {
        if (param_2 != 0x3bf) {
          bVar5 = param_2 == 0x3c0;
          goto LAB_008ae99a;
        }
        ExceptionList = &local_14;
        piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_dc);
        uVar3 = 30000;
      }
      uVar6 = __allmul(*piVar2,*piVar2 >> 0x1f,uVar3,0);
      uVar3 = __alldiv(uVar6,1000,0);
      goto LAB_008aead9;
    }
    bVar5 = param_2 == 0x56a;
LAB_008ae99a:
    if (!bVar5) {
LAB_008ae9a0:
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      ExceptionList = &local_14;
      FUN_00409350("meantimetohappen.cpp",0x14);
      local_c = 0;
      uVar3 = FUN_004015b0(local_f8,0xc5,0x10004);
      local_c._0_1_ = 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      uVar7 = 0;
      piVar2 = (int *)(iVar1 + 0x14);
      FUN_00987d50(uVar3,"unknown command \'",0x11,0);
      uVar3 = FUN_00418e30(uVar3,param_1 + 0x22c,extraout_ECX,"\' for MTTH in file ");
      uVar3 = FUN_00418e30(uVar3);
      if (0xf < *(uint *)(iVar1 + 0x28)) {
        piVar2 = (int *)*piVar2;
      }
      uVar3 = FUN_00418e30(uVar3,piVar2);
      uVar3 = FUN_00418e30(uVar3," - line ",extraout_ECX_00,uVar7);
      uVar3 = FUN_00455470(uVar3);
      FUN_00401280(uVar3);
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (local_e4 < 0x10) {
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8[0]);
    }
  }
  ExceptionList = &local_14;
  puVar4 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_fc);
  uVar3 = *puVar4;
LAB_008aead9:
  *(undefined4 *)(in_ECX + 8) = uVar3;
  ExceptionList = local_14;
  return;
}

