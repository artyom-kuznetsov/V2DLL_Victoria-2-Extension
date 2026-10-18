// FUN_007d79f0 @ 007d79f0 body=[[007d79f0, 007d8379]]


/* WARNING: Type propagation algorithm not settling */

void FUN_007d79f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int *in_EAX;
  uint uVar6;
  int iVar7;
  int *_Dst;
  int iVar8;
  int *piVar9;
  int unaff_EDI;
  float local_138;
  int local_134;
  float local_130;
  int local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  int local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec [3];
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0 [3];
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined2 local_5e;
  byte *local_5c;
  int local_58;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  float local_4c;
  undefined2 local_46;
  float local_44;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  int local_10;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  piVar9 = param_1;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)piVar9[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)piVar9[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar9[2] = 0;
  *piVar9 = 0;
  piVar9[1] = 0;
  piVar9[3] = 0;
  piVar9[4] = 0;
  piVar9[7] = 0;
  local_10 = *in_EAX;
  iVar2 = in_EAX[2];
  local_12c = in_EAX[1];
  iVar3 = in_EAX[3];
  fVar4 = (float)local_10;
  local_134 = *(int *)(DAT_0125870c + 0x2abc);
  fVar5 = (float)local_12c;
  local_108 = *(int *)(DAT_0125870c + 0x2ac0);
  local_90 = iVar2 + local_10;
  local_8 = 0;
  local_58 = 0;
  if (local_10 < local_90) {
    local_8c = iVar3 + local_12c;
    iVar7 = local_12c;
    do {
      local_14 = iVar7;
      iVar7 = local_14;
      if (local_14 < local_8c) {
        iVar8 = local_8 * 0xc;
        do {
          if ((local_10 < local_134) && (local_14 < local_108)) {
            iVar7 = *(int *)(DAT_0125870c + 0x2130);
            if (local_10 < *(int *)(iVar7 + 4)) {
              if (local_14 < *(int *)(iVar7 + 8)) {
                uVar6 = (uint)*(byte *)(*(int *)(iVar7 + 0x18) * local_14 +
                                        *(int *)(iVar7 + 0xc) * local_10 +
                                       *(int *)(*(int *)(DAT_0125870c + 0x2130) + 0x20));
              }
              else {
                uVar6 = 0;
              }
            }
            else {
              uVar6 = 0;
            }
            if (((((*(char *)(*(int *)(*(int *)(DAT_0125870c + 0x2268 + uVar6 * 4) + 0xc) + 0x90) !=
                    '\0') && (local_10 <= *(int *)(unaff_EDI + 0x40) + -2)) &&
                 (local_14 <= *(int *)(unaff_EDI + 0x44) + -2)) &&
                ((local_84 = local_8 + 4,
                 (int)local_84 <= (*(int *)(unaff_EDI + 0x6c) - *(int *)(unaff_EDI + 0x68)) / 0xc &&
                 (1 < local_10)))) &&
               ((1 < local_14 &&
                ((iVar7 = *(int *)(unaff_EDI + 0x40) * local_14 + local_10,
                 local_5c = (byte *)(*(int *)(unaff_EDI + 0x3c) + iVar7 * 4),
                 *(char *)(*(int *)(unaff_EDI + 0x3c) + iVar7 * 4) != '\0' || (local_5c[3] != 0)))))
               ) {
              local_a8 = (float)local_14 - ((float)iVar3 * 0.5 + fVar5);
              D3DXFloat32To16Array(&local_34,&local_a8,1);
              local_118 = (float)local_10 - ((float)iVar2 * 0.5 + fVar4);
              D3DXFloat32To16Array(&local_5e,&local_118,1);
              local_c = local_5e;
              local_a = local_34;
              *(short *)(*(int *)(unaff_EDI + 0x78) + local_58 * 2) = (short)local_8;
              *(short *)(*(int *)(unaff_EDI + 0x78) + 2 + local_58 * 2) = (short)local_8 + 1;
              *(short *)(*(int *)(unaff_EDI + 0x78) + 4 + local_58 * 2) = (short)local_8 + 2;
              *(short *)(*(int *)(unaff_EDI + 0x78) + 6 + local_58 * 2) = (short)local_8 + 2;
              *(short *)(*(int *)(unaff_EDI + 0x78) + 8 + local_58 * 2) = (short)local_8 + 3;
              *(short *)(*(int *)(unaff_EDI + 0x78) + 10 + local_58 * 2) = (short)local_8;
              local_58 = local_58 + 6;
              local_44 = (float)*local_5c * 0.0625;
              local_4c = (float)local_5c[3] * 0.0625;
              local_8 = local_8 & 0xffff;
              D3DXFloat16To32Array(&local_b0,&local_a,1);
              local_f8 = local_b0 - 0.5;
              D3DXFloat32To16Array(&local_3c,&local_f8,1);
              D3DXFloat16To32Array(&local_b8,&local_c,1);
              local_138 = local_b8 - 0.5;
              D3DXFloat32To16Array(&local_38,&local_138,1);
              local_c0 = DAT_00f092fc;
              local_7a = CONCAT22(local_3c,local_38);
              *(undefined4 *)(iVar8 + *(int *)(unaff_EDI + 0x68)) = local_7a;
              D3DXFloat32To16Array(&local_1a,&local_c0,1);
              local_100 = local_44;
              D3DXFloat32To16Array(&local_50,&local_100,1);
              local_d0[2] = (float)DAT_00f092fc;
              local_94 = CONCAT22(local_1a,local_50);
              *(undefined4 *)(iVar8 + 4 + *(int *)(unaff_EDI + 0x68)) = local_94;
              D3DXFloat32To16Array(&local_1e,local_d0 + 2,1);
              local_120 = local_4c;
              D3DXFloat32To16Array(&local_36,&local_120,1);
              local_9c = CONCAT22(local_1e,local_36);
              *(undefined4 *)(iVar8 + 8 + *(int *)(unaff_EDI + 0x68)) = local_9c;
              D3DXFloat16To32Array(local_d0,&local_a,1);
              local_a0 = local_d0[0] + 0.5;
              D3DXFloat32To16Array(&local_22,&local_a0,1);
              D3DXFloat16To32Array(&local_d8,&local_c,1);
              local_130 = local_d8 - 0.5;
              D3DXFloat32To16Array(&local_52,&local_130,1);
              local_6e = CONCAT22(local_22,local_52);
              *(undefined4 *)(iVar8 + 0xc + *(int *)(unaff_EDI + 0x68)) = local_6e;
              local_e0 = 0;
              D3DXFloat32To16Array(&local_26,&local_e0,1);
              local_110 = local_44;
              D3DXFloat32To16Array(&local_3a,&local_110,1);
              local_88 = CONCAT22(local_26,local_3a);
              *(undefined4 *)(iVar8 + 0x10 + *(int *)(unaff_EDI + 0x68)) = local_88;
              local_ec[1] = 0.0;
              D3DXFloat32To16Array(&local_2a,local_ec + 1,1);
              local_128 = local_4c;
              D3DXFloat32To16Array(&local_4e,&local_128,1);
              local_76 = CONCAT22(local_2a,local_4e);
              *(undefined4 *)(iVar8 + 0x14 + *(int *)(unaff_EDI + 0x68)) = local_76;
              D3DXFloat16To32Array(&local_f0,&local_a,1);
              local_a4 = local_f0 + 0.5;
              D3DXFloat32To16Array(&local_2e,&local_a4,1);
              D3DXFloat16To32Array(&local_ac,&local_c,1);
              local_b4 = local_ac + 0.5;
              D3DXFloat32To16Array(&local_3e,&local_b4,1);
              local_98 = CONCAT22(local_2e,local_3e);
              *(undefined4 *)(iVar8 + 0x18 + *(int *)(unaff_EDI + 0x68)) = local_98;
              local_bc = 0;
              D3DXFloat32To16Array(&local_32,&local_bc,1);
              local_104 = local_44 + 0.049804688;
              local_c4 = local_104;
              D3DXFloat32To16Array(&local_16,&local_c4,1);
              local_7e = CONCAT22(local_32,local_16);
              *(undefined4 *)(iVar8 + 0x1c + *(int *)(unaff_EDI + 0x68)) = local_7e;
              local_d0[1] = 0.0;
              D3DXFloat32To16Array(&local_18,local_d0 + 1,1);
              local_11c = local_4c + 0.049804688;
              local_d4 = local_11c;
              D3DXFloat32To16Array(&local_46,&local_d4,1);
              local_66 = CONCAT22(local_18,local_46);
              *(undefined4 *)(iVar8 + 0x20 + *(int *)(unaff_EDI + 0x68)) = local_66;
              D3DXFloat16To32Array(&local_dc,&local_a,1);
              local_ec[2] = local_dc - 0.5;
              D3DXFloat32To16Array(&local_20,local_ec + 2,1);
              D3DXFloat16To32Array(local_ec,&local_c,1);
              local_f4 = local_ec[0] + 0.5;
              D3DXFloat32To16Array(&local_1c,&local_f4,1);
              local_fc = DAT_00f092fc;
              local_6a = CONCAT22(local_20,local_1c);
              *(undefined4 *)(iVar8 + 0x24 + *(int *)(unaff_EDI + 0x68)) = local_6a;
              D3DXFloat32To16Array(&local_28,&local_fc,1);
              local_10c = local_104;
              D3DXFloat32To16Array(&local_24,&local_10c,1);
              local_114 = DAT_00f092fc;
              local_72 = CONCAT22(local_28,local_24);
              *(undefined4 *)(iVar8 + 0x28 + *(int *)(unaff_EDI + 0x68)) = local_72;
              D3DXFloat32To16Array(&local_30,&local_114,1);
              local_124 = local_11c;
              D3DXFloat32To16Array(&local_2c,&local_124,1);
              local_62 = CONCAT22(local_30,local_2c);
              *(undefined4 *)(iVar8 + 0x2c + *(int *)(unaff_EDI + 0x68)) = local_62;
              local_8 = local_84;
              iVar8 = iVar8 + 0x30;
            }
          }
          local_14 = local_14 + 1;
          iVar7 = local_12c;
          piVar9 = param_1;
        } while (local_14 < local_8c);
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_90);
    if (0 < (int)local_8) {
      *(undefined1 *)(piVar9 + 5) = 1;
      FUN_009f9630(piVar9,*(undefined4 *)(*(int *)(unaff_EDI + 0x54) + 100),local_8,0xc,0,0);
      piVar1 = (int *)*piVar9;
      _Dst = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        if ((*(char *)((int)piVar9 + 0x15) != '\0') && (*(char *)((int)piVar9 + 0x16) == '\0')) {
          _Dst = (int *)0x2000;
        }
        (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&param_1,_Dst);
        _Dst = param_1;
      }
      FID_conflict__memcpy(_Dst,*(void **)(unaff_EDI + 0x68),local_8 * 0xc);
      (**(code **)(*(int *)*piVar9 + 0x30))((int *)*piVar9);
      iVar2 = local_58;
      FUN_009f99d0(piVar9,*(undefined4 *)(*(int *)(unaff_EDI + 0x54) + 100),local_58);
      (**(code **)(*(int *)piVar9[1] + 0x2c))((int *)piVar9[1],0,0,&param_1,0);
      FID_conflict__memcpy(param_1,*(void **)(unaff_EDI + 0x78),iVar2 * 2);
      (**(code **)(*(int *)piVar9[1] + 0x30))((int *)piVar9[1]);
    }
  }
  return;
}

