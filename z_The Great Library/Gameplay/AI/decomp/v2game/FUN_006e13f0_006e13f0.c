// FUN_006e13f0 @ 006e13f0 body=[[006e13f0, 006e1543] [006e1547, 006e1566]]


void FUN_006e13f0(int param_1,int param_2)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f298;
  local_10 = ExceptionList;
  ppvVar2 = &local_10;
  iVar4 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar2, iVar1 = iVar4 + 0x30, iVar1 != param_2) {
      local_8 = 0xffffffff;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      local_14 = iVar1;
      FUN_00408ed0(iVar1,0,0xffffffff);
      local_24 = *(undefined4 *)(iVar4 + 0x50);
      local_20 = *(undefined4 *)(iVar4 + 0x54);
      local_1c = *(undefined4 *)(iVar4 + 0x58);
      local_18 = *(undefined4 *)(iVar4 + 0x5c);
      local_8 = 0;
      cVar3 = FUN_006cf130();
      if (cVar3 == '\0') {
        cVar3 = FUN_006cf130();
        while (cVar3 != '\0') {
          FUN_00408ed0(iVar1 + -0x30,0,0xffffffff);
          *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + -0x10);
          *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + -0xc);
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + -8);
          *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + -4);
          cVar3 = FUN_006cf130();
          iVar1 = iVar1 + -0x30;
        }
        FUN_00408ed0(local_44,0,0xffffffff);
        *(undefined4 *)(iVar1 + 0x20) = local_24;
        *(undefined4 *)(iVar1 + 0x24) = local_20;
        *(undefined4 *)(iVar1 + 0x28) = local_1c;
        *(undefined4 *)(iVar1 + 0x2c) = local_18;
        iVar4 = local_14;
      }
      else {
        FUN_006e1e80(param_1,param_1);
        FUN_00408ed0(local_44,0,0xffffffff);
        *(undefined4 *)(param_1 + 0x20) = local_24;
        *(undefined4 *)(param_1 + 0x24) = local_20;
        *(undefined4 *)(param_1 + 0x28) = local_1c;
        *(undefined4 *)(param_1 + 0x2c) = local_18;
        iVar4 = iVar1;
      }
      local_8 = 0xffffffff;
      ppvVar2 = ExceptionList;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

