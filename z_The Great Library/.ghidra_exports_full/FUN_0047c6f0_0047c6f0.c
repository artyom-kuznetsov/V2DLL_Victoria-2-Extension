// FUN_0047c6f0 @ 0047c6f0 body=[[0047c6f0, 0047c7d8] [0047c7dc, 0047c7f7] [0047c7fb, 0047c813]]


void FUN_0047c6f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  uint local_3c;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40490;
  local_10 = ExceptionList;
  iVar1 = (param_2 - param_1) / 0x4c;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    iVar2 = iVar3 * 0x4c + 0x20 + param_1;
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      local_5c = *(undefined4 *)(iVar2 + -0x6c);
      iVar3 = iVar3 + -1;
      local_44 = 0xf;
      local_48 = 0;
      local_58 = local_58 & 0xffffff00;
      FUN_00408ed0(iVar2 + -0x68,0,0xffffffff);
      local_8 = 0;
      local_28 = 0xf;
      local_2c = 0;
      local_3c = local_3c & 0xffffff00;
      FUN_00408ed0(iVar2 + -0x4c,0,0xffffffff);
      local_1c = *(undefined4 *)(iVar2 + -0x2c);
      local_18 = *(undefined1 *)(iVar2 + -0x28);
      local_14 = *(undefined4 *)(iVar2 + -0x24);
      local_20 = *(undefined4 *)(iVar2 + -0x30);
      local_8 = 1;
      FUN_0047ccd0(param_1,iVar1,&local_5c,param_3);
      local_8 = 0xffffffff;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c = local_3c & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58);
      }
      iVar2 = iVar2 + -0x4c;
    } while (0 < iVar3);
  }
  ExceptionList = local_10;
  return;
}

