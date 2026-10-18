// FUN_0047c9c0 @ 0047c9c0 body=[[0047c9c0, 0047cb83] [0047cb87, 0047cba6] [0047cbaa, 0047cbc6]]


void FUN_0047c9c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  float local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40490;
  local_10 = ExceptionList;
  ppvVar3 = &local_10;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar3, puVar2 = puVar2 + 0x13, puVar2 != param_2) {
      local_8 = 0xffffffff;
      uVar1 = *puVar2;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00408ed0(puVar2 + 1,0,0xffffffff);
      local_8 = 0;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00408ed0(puVar2 + 8,0,0xffffffff);
      local_1c = puVar2[0x10];
      local_18 = *(undefined1 *)(puVar2 + 0x11);
      local_20 = (float)puVar2[0xf];
      local_14 = puVar2[0x12];
      local_8 = 1;
      if (local_20 <= (float)param_1[0xf]) {
        puVar4 = puVar2;
        puVar5 = puVar2 + 0xf;
        while ((float)puVar5[-0x13] < local_20) {
          *puVar4 = puVar5[-0x22];
          FUN_00408ed0(puVar5 + -0x21,0,0xffffffff);
          FUN_00408ed0(puVar5 + -0x1a,0,0xffffffff);
          puVar4[0xf] = puVar5[-0x13];
          puVar4[0x10] = puVar5[-0x12];
          *(undefined1 *)(puVar4 + 0x11) = *(undefined1 *)(puVar5 + -0x11);
          puVar4[0x12] = puVar5[-0x10];
          puVar4 = puVar5 + -0x22;
          puVar5 = puVar5 + -0x13;
        }
        *puVar4 = uVar1;
        FUN_00408ed0(local_58,0,0xffffffff);
        FUN_00408ed0(local_3c,0,0xffffffff);
        puVar4[0xf] = local_20;
        puVar4[0x10] = local_1c;
        *(undefined1 *)(puVar4 + 0x11) = local_18;
        puVar4[0x12] = local_14;
      }
      else {
        FUN_0047cec0(param_1,param_1);
        *param_1 = uVar1;
        FUN_00408ed0(local_58,0,0xffffffff);
        FUN_00408ed0(local_3c,0,0xffffffff);
        param_1[0xf] = local_20;
        param_1[0x10] = local_1c;
        *(undefined1 *)(param_1 + 0x11) = local_18;
        param_1[0x12] = local_14;
      }
      local_8 = 0xffffffff;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      ppvVar3 = ExceptionList;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

