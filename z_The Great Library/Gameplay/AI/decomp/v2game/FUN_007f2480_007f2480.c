// FUN_007f2480 @ 007f2480 body=[[007f2480, 007f2576] [007f257a, 007f26ea] [007f26ee, 007f27ab]]


void FUN_007f2480(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_c4;
  uint local_b0;
  undefined **local_a4 [3];
  int *local_98;
  int *local_94;
  int *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_50;
  undefined8 local_4c;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_34;
  undefined4 uStack_30;
  float local_2c;
  uint local_28;
  char *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = param_1;
  puStack_c = &LAB_00b3ebea;
  local_10 = ExceptionList;
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x18c) * *(int *)(param_1 + 400)) {
    param_1 = 0;
    ExceptionList = &local_10;
    do {
      piVar4 = (int *)(*(int *)(iVar1 + 0x19c) + param_1);
      local_20 = 0;
      local_28 = piVar4[1] - *piVar4 >> 2;
      if (local_28 != 0) {
        uStack_30 = 0x3f051eb8;
        do {
          uVar5 = local_20;
          local_98 = (int *)0x0;
          local_94 = (int *)0x0;
          local_90 = (int *)0x0;
          local_8c = 0;
          local_88 = 0;
          local_84 = 0;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0;
          local_60 = 0xf;
          local_64 = 0;
          local_74 = local_74 & 0xffffff00;
          local_8 = 0;
          local_18 = *(int *)(*(int *)(*(int *)(iVar1 + 0x19c) + param_1) + local_20 * 4);
          uVar2 = FUN_004c4540(*(undefined4 *)(local_18 + 8));
          local_8._0_1_ = 1;
          FUN_00408ed0(uVar2,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_c4);
          }
          local_58 = *(undefined4 *)(*(int *)(local_18 + 0xc) + 0x58);
          local_54 = 1;
          local_53 = *(char *)(*(int *)(local_18 + 8) + 0x2a) == '\0';
          local_18 = local_1c / *(int *)(iVar1 + 0x18c);
          iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x19c) + param_1) + uVar5 * 4) + 8);
          local_34 = *(float *)(iVar3 + 0x44) -
                     (float)(*(int *)(iVar1 + 0x194) * (local_1c % *(int *)(iVar1 + 0x18c)) +
                            *(int *)(iVar1 + 0x194) / 2);
          piVar4 = (int *)(*(int *)(iVar1 + 0x19c) + param_1);
          local_44 = *(float *)(iVar3 + 0x48) -
                     (float)(int)(*(int *)(iVar1 + 0x198) * local_18 + *(int *)(iVar1 + 0x198) / 2);
          local_4c = CONCAT44(uStack_30,local_34);
          local_40 = *(undefined4 *)(*(int *)(*(int *)(*piVar4 + uVar5 * 4) + 8) + 0x6c);
          local_3c = *(undefined4 *)(*(int *)(*(int *)(*piVar4 + uVar5 * 4) + 8) + 0x70);
          local_50 = 0xffffffff;
          local_2c = local_44;
          if ((uint)piVar4[0x4a] <= piVar4[0x4c] + 1U) {
            FUN_00804640(piVar4 + 0x48);
          }
          local_18 = piVar4[0x4b] + piVar4[0x4c];
          if ((uint)piVar4[0x4a] <= local_18) {
            local_18 = local_18 - piVar4[0x4a];
          }
          if (*(int *)(piVar4[0x49] + local_18 * 4) == 0) {
            iVar3 = FUN_00aae9af(0x60);
            if (iVar3 == 0) {
              local_24 = (char *)0x0;
              std::exception::exception((exception *)local_a4,&local_24);
              local_a4[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
              __CxxThrowException_8(local_a4,&DAT_00e6fb20);
            }
            *(int *)(piVar4[0x49] + local_18 * 4) = iVar3;
          }
          local_18 = *(int *)(piVar4[0x49] + local_18 * 4);
          local_8 = CONCAT31(local_8._1_3_,2);
          if (local_18 != 0) {
            FUN_00805010(local_18);
            uVar5 = local_20;
          }
          piVar4[0x4c] = piVar4[0x4c] + 1;
          local_8 = 0xffffffff;
          if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_74);
          }
          local_60 = 0xf;
          local_64 = 0;
          local_74 = local_74 & 0xffffff00;
          if (local_98 != (int *)0x0) {
            (**(code **)(*local_98 + 8))(local_98);
          }
          if (local_94 != (int *)0x0) {
            (**(code **)(*local_94 + 8))(local_94);
          }
          if (local_90 != (int *)0x0) {
            (**(code **)(*local_90 + 8))(local_90);
          }
          local_20 = uVar5 + 1;
        } while (local_20 < local_28);
      }
      param_1 = param_1 + 0x3c0;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(iVar1 + 0x18c) * *(int *)(iVar1 + 400));
  }
  ExceptionList = local_10;
  return;
}

