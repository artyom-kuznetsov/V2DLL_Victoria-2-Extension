// FUN_007ccb30 @ 007ccb30 body=[[007ccb30, 007ccd05] [007ccd09, 007ccd2b]]


void FUN_007ccb30(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined **local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ee38;
  local_10 = ExceptionList;
  if ((param_1 != param_2) && (puVar5 = param_1 + 0x11, puVar5 != param_2)) {
    puVar4 = (undefined8 *)(param_1 + 0x1d);
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      uVar2 = *(undefined4 *)(puVar4 + -5);
      uVar3 = *puVar5;
      fVar1 = *(float *)((int)puVar4 + -0x2c);
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      local_14 = puVar5;
      FUN_00408ed0((int)puVar4 + -0x24,0,0xffffffff);
      puVar6 = local_14;
      local_28 = *puVar4;
      local_2c = *(undefined4 *)((int)puVar4 + -4);
      local_18 = *(undefined1 *)(puVar4 + 2);
      local_20 = puVar4[1];
      local_30 = CColor::vftable;
      local_8 = 0;
      puVar7 = puVar4;
      if (fVar1 <= (float)param_1[1]) {
        while (*(float *)(puVar7 + -0xe) < fVar1) {
          *puVar5 = *(undefined4 *)((int)puVar7 + -0x74);
          puVar5[1] = *(undefined4 *)(puVar7 + -0xe);
          puVar5[2] = *(undefined4 *)((int)puVar7 + -0x6c);
          FUN_00408ed0(puVar7 + -0xd,0,0xffffffff);
          puVar5[0xb] = *(undefined4 *)(puVar7 + -9);
          *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)((int)puVar7 + -0x44);
          *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)((int)puVar7 + -0x3c);
          *(undefined1 *)(puVar5 + 0x10) = *(undefined1 *)((int)puVar7 + -0x34);
          puVar5 = (undefined4 *)((int)puVar7 + -0x74);
          puVar7 = (undefined8 *)((int)puVar7 + -0x44);
        }
        *puVar5 = uVar3;
        puVar5[1] = fVar1;
        puVar5[2] = uVar2;
        FUN_00408ed0(local_4c,0,0xffffffff);
        *(undefined8 *)(puVar5 + 0xc) = local_28;
        puVar5[0xb] = local_2c;
        *(undefined8 *)(puVar5 + 0xe) = local_20;
        *(undefined1 *)(puVar5 + 0x10) = local_18;
        puVar6 = local_14;
      }
      else {
        FUN_00985100(param_1,(int)puVar4 + 0x14,param_1);
        *param_1 = uVar3;
        param_1[1] = fVar1;
        param_1[2] = uVar2;
        FUN_00408ed0(local_4c,0,0xffffffff);
        *(undefined8 *)(param_1 + 0xc) = local_28;
        param_1[0xb] = local_2c;
        *(undefined8 *)(param_1 + 0xe) = local_20;
        *(undefined1 *)(param_1 + 0x10) = local_18;
      }
      local_8 = 0xffffffff;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      puVar5 = puVar6 + 0x11;
      puVar4 = (undefined8 *)((int)puVar4 + 0x44);
    } while (puVar5 != param_2);
  }
  ExceptionList = local_10;
  return;
}

