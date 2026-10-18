// FUN_007cc8b0 @ 007cc8b0 body=[[007cc8b0, 007cc998] [007cc99c, 007cc9b4]]


void FUN_007cc8b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined **local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ee58;
  local_10 = ExceptionList;
  iVar1 = (param_2 - param_1) / 0x44;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    puVar2 = (undefined8 *)(param_1 + 0x30 + iVar3 * 0x44);
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      local_54 = *(undefined4 *)((int)puVar2 + -0x74);
      local_4c = *(undefined4 *)((int)puVar2 + -0x6c);
      local_50 = *(undefined4 *)(puVar2 + -0xe);
      iVar3 = iVar3 + -1;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00408ed0(puVar2 + -0xd,0,0xffffffff);
      local_24 = *(undefined8 *)((int)puVar2 + -0x44);
      local_28 = *(undefined4 *)(puVar2 + -9);
      local_14 = *(undefined1 *)((int)puVar2 + -0x34);
      local_1c = *(undefined8 *)((int)puVar2 + -0x3c);
      local_2c = CColor::vftable;
      local_8 = 0;
      FUN_007d04d0(param_1,iVar1,&local_54,param_3);
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48);
      }
      puVar2 = (undefined8 *)((int)puVar2 + -0x44);
    } while (0 < iVar3);
  }
  ExceptionList = local_10;
  return;
}

