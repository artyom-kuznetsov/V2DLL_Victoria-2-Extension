// FUN_007f1be0 @ 007f1be0 body=[[007f1be0, 007f20a3] [007f20a7, 007f212f] [007f2133, 007f2176]]


void FUN_007f1be0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  int iVar9;
  float10 fVar10;
  undefined4 local_a0;
  uint local_8c;
  undefined8 local_84;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c [3];
  uint local_60 [4];
  int local_50;
  uint local_4c;
  float local_44;
  float fStack_40;
  float local_3c;
  void *local_38;
  uint local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4af63;
  local_10 = ExceptionList;
  local_2c = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2 != 0) {
    do {
      local_18 = *(int *)(*(int *)(param_1 + 0x80) + local_2c * 4) * 0x3c0 +
                 *(int *)(param_1 + 0x19c);
      local_34 = *(uint *)(local_18 + 0x130);
      local_1c = 0;
      if (local_34 != 0) {
        local_18 = local_18 + 0x120;
        do {
          uVar5 = local_1c;
          uVar3 = local_1c;
          FUN_0099e240(local_1c);
          piVar2 = (int *)FUN_00868600(uVar3);
          iVar9 = 0;
          if ((int *)*piVar2 != (int *)0x0) {
            iVar9 = *(int *)*piVar2;
          }
          uVar3 = piVar2[2];
          if (*(uint *)(iVar9 + 8) <= uVar3) {
            uVar3 = uVar3 - *(uint *)(iVar9 + 8);
          }
          if (*(int *)(*(int *)(*(int *)(iVar9 + 4) + uVar3 * 4) + 0x48) < 0) {
            uVar3 = uVar5;
            FUN_0099e240(uVar5);
            piVar2 = (int *)FUN_00868600(uVar3);
            iVar9 = 0;
            if ((int *)*piVar2 != (int *)0x0) {
              iVar9 = *(int *)*piVar2;
            }
            uVar3 = piVar2[2];
            if (*(uint *)(iVar9 + 8) <= uVar3) {
              uVar3 = uVar3 - *(uint *)(iVar9 + 8);
            }
            if (*(char *)(*(int *)(*(int *)(iVar9 + 4) + uVar3 * 4) + 0x44) != '\0') {
              iVar9 = 0;
              pcVar4 = (char *)(param_1 + 700);
              while (*pcVar4 != '\0') {
                iVar9 = iVar9 + 1;
                pcVar4 = pcVar4 + 0x10;
                if (299 < iVar9) {
                  ExceptionList = local_10;
                  return;
                }
              }
              if (iVar9 < 0) {
                ExceptionList = local_10;
                return;
              }
              FUN_0099e240(uVar5);
              piVar2 = (int *)FUN_00868600(uVar5);
              iVar7 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar7 = *(int *)*piVar2;
              }
              uVar5 = piVar2[2];
              if (*(uint *)(iVar7 + 8) <= uVar5) {
                uVar5 = uVar5 - *(uint *)(iVar7 + 8);
              }
              iVar8 = iVar9 * 0x10 + param_1;
              *(int *)(*(int *)(*(int *)(iVar7 + 4) + uVar5 * 4) + 0x48) = iVar9;
              *(undefined1 *)(iVar8 + 700) = 1;
              uVar5 = local_1c;
              FUN_0099e240(local_1c);
              piVar2 = (int *)FUN_00868600(uVar5);
              iVar7 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar7 = *(int *)*piVar2;
              }
              uVar5 = piVar2[2];
              if (*(uint *)(iVar7 + 8) <= uVar5) {
                uVar5 = uVar5 - *(uint *)(iVar7 + 8);
              }
              *(undefined1 *)(iVar8 + 0x2bd) =
                   *(undefined1 *)(*(int *)(*(int *)(iVar7 + 4) + uVar5 * 4) + 0x45);
              *(undefined4 *)(param_1 + (iVar9 + 0x2c) * 0x10) = 0;
              if (*(char *)(param_1 + 0x18d4) != '\0') {
                *(undefined4 *)(param_1 + (iVar9 + 0x2c) * 0x10) = 0xff;
              }
              *(undefined1 *)(param_1 + 0x18d4) = 0;
              fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
              uVar5 = local_1c;
              *(float *)(iVar8 + 0x2c4) = (float)fVar10;
              uVar3 = local_1c;
              FUN_0099e240(local_1c);
              piVar2 = (int *)FUN_00868600(uVar3);
              iVar9 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar9 = *(int *)*piVar2;
              }
              uVar3 = piVar2[2];
              if (*(uint *)(iVar9 + 8) <= uVar3) {
                uVar3 = uVar3 - *(uint *)(iVar9 + 8);
              }
              *(undefined4 *)(iVar8 + 0x2c8) = *(undefined4 *)(*(int *)(iVar9 + 4) + uVar3 * 4);
              uVar3 = uVar5;
              FUN_0099e240(uVar5);
              piVar2 = (int *)FUN_00868600(uVar3);
              iVar9 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar9 = *(int *)*piVar2;
              }
              uVar3 = piVar2[2];
              if (*(uint *)(iVar9 + 8) <= uVar3) {
                uVar3 = uVar3 - *(uint *)(iVar9 + 8);
              }
              iVar9 = *(int *)(*(int *)(iVar9 + 4) + uVar3 * 4);
              uVar3 = uVar5;
              FUN_0099e240(uVar5);
              piVar2 = (int *)FUN_00868600(uVar3);
              iVar7 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar7 = *(int *)*piVar2;
              }
              uVar3 = piVar2[2];
              if (*(uint *)(iVar7 + 8) <= uVar3) {
                uVar3 = uVar3 - *(uint *)(iVar7 + 8);
              }
              local_20 = *(undefined4 *)(*(int *)(*(int *)(iVar7 + 4) + uVar3 * 4) + 0x58);
              uVar3 = uVar5;
              FUN_0099e240(uVar5);
              piVar2 = (int *)FUN_00868600(uVar3);
              iVar7 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar7 = *(int *)*piVar2;
              }
              uVar3 = piVar2[2];
              if (*(uint *)(iVar7 + 8) <= uVar3) {
                uVar3 = uVar3 - *(uint *)(iVar7 + 8);
              }
              local_30 = *(float *)(*(int *)(*(int *)(iVar7 + 4) + uVar3 * 4) + 0x5c) * 0.5;
              fVar10 = (float10)FUN_00414c50(local_20);
              local_24 = (float)fVar10;
              fVar10 = (float10)FUN_00414c70(local_20);
              local_6c[2] = (float)fVar10;
              local_6c[0] = local_24;
              local_6c[1] = 0.0;
              local_44 = 0.0 - local_6c[2];
              local_7c = local_24 - 0.0;
              local_70 = *(undefined4 *)(iVar9 + 0x54);
              fStack_40 = local_6c[2] * 0.0 - local_24 * 0.0;
              local_84 = CONCAT44(fStack_40,local_44);
              local_74 = *(undefined4 *)(iVar9 + 0x50);
              local_78 = *(undefined4 *)(iVar9 + 0x4c);
              uVar3 = uVar5;
              local_3c = local_7c;
              local_28 = local_6c[2];
              FUN_0099e240(uVar5);
              piVar2 = (int *)FUN_00868600(uVar3);
              iVar9 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar9 = *(int *)*piVar2;
              }
              uVar3 = piVar2[2];
              if (*(uint *)(iVar9 + 8) <= uVar3) {
                uVar3 = uVar3 - *(uint *)(iVar9 + 8);
              }
              piVar2 = *(int **)(*(int *)(iVar9 + 4) + uVar3 * 4);
              piVar1 = (int *)*piVar2;
              if (piVar1 == (int *)0x0) {
                _Dst = (void *)0x0;
              }
              else {
                uVar6 = 0;
                if ((*(char *)((int)piVar2 + 0x15) != '\0') &&
                   (*(char *)((int)piVar2 + 0x16) == '\0')) {
                  uVar6 = 0x2000;
                }
                (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&local_38,uVar6);
                _Dst = local_38;
              }
              _memset(_Dst,0,6000);
              uVar3 = uVar5;
              FUN_0099e240(uVar5);
              piVar2 = (int *)FUN_00868600(uVar3);
              if ((int *)*piVar2 == (int *)0x0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)*piVar2;
              }
              uVar3 = piVar2[2];
              if (*(uint *)(iVar9 + 8) <= uVar3) {
                uVar3 = uVar3 - *(uint *)(iVar9 + 8);
              }
              local_4c = 0xf;
              local_50 = 0;
              local_60[0] = local_60[0] & 0xffffff00;
              FUN_00408ed0(*(int *)(*(int *)(iVar9 + 4) + uVar3 * 4) + 0x24,0,0xffffffff);
              local_8 = 0;
              if (0x32 < local_50) {
                uVar6 = FUN_009895f0(0x31);
                local_8._0_1_ = 1;
                FUN_00408ed0(uVar6,0,0xffffffff);
                local_8 = (uint)local_8._1_3_ << 8;
                uVar5 = local_1c;
                if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_a0);
                }
              }
              FUN_00a26d00(*(undefined4 *)(param_1 + 0x159c),_Dst,local_60,&local_78,&local_84,
                           local_6c,local_30,0x140);
              FUN_0099e240(uVar5);
              piVar2 = (int *)FUN_00868600(uVar5);
              iVar9 = 0;
              if ((int *)*piVar2 != (int *)0x0) {
                iVar9 = *(int *)*piVar2;
              }
              uVar5 = piVar2[2];
              if (*(uint *)(iVar9 + 8) <= uVar5) {
                uVar5 = uVar5 - *(uint *)(iVar9 + 8);
              }
              piVar2 = (int *)**(undefined4 **)(*(int *)(iVar9 + 4) + uVar5 * 4);
              (**(code **)(*piVar2 + 0x30))(piVar2);
              local_8 = 0xffffffff;
              uVar5 = local_1c;
              if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_60[0]);
              }
            }
          }
          local_1c = uVar5 + 1;
        } while (local_1c < local_34);
      }
      local_2c = local_2c + 1;
    } while (local_2c < (uint)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2));
  }
  ExceptionList = local_10;
  return;
}

