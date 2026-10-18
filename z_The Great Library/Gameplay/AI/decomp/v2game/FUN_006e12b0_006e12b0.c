// FUN_006e12b0 @ 006e12b0 body=[[006e12b0, 006e1374] [006e1378, 006e138c]]


void FUN_006e12b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f298;
  local_10 = ExceptionList;
  iVar1 = (param_2 - param_1) / 0x30;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    puVar2 = (undefined4 *)(param_1 + 0x28 + iVar3 * 0x30);
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      iVar3 = iVar3 + -1;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      FUN_00408ed0(puVar2 + -0x16,0,0xffffffff);
      local_24 = puVar2[-0xe];
      local_20 = puVar2[-0xd];
      local_1c = puVar2[-0xc];
      local_18 = puVar2[-0xb];
      local_8 = 0;
      FUN_006e1aa0(param_1,iVar3,iVar1,local_44,param_3,param_4);
      local_8 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
      puVar2 = puVar2 + -0xc;
    } while (0 < iVar3);
  }
  ExceptionList = local_10;
  return;
}

