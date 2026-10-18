// FUN_00a7a140 @ 00a7a140 body=[[00a7a140, 00a7a439]]


undefined1 FUN_00a7a140(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int *in_ECX;
  int iVar7;
  float10 fVar8;
  undefined1 uStack_61;
  int *piStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 local_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [12];
  
  *(undefined1 *)(in_ECX + 0x34) = 0;
  local_50 = (undefined1  [16])0x0;
  if (in_ECX[0x31] != 0) {
    while( true ) {
      iVar4 = (**(code **)(*(int *)in_ECX[0x31] + 0x24))((int *)in_ECX[0x31],0x10,local_50);
      if (-1 < iVar4) {
        iVar4 = in_ECX[0x21];
        in_ECX[0x1f] = in_ECX[0x32] + iStack_5c;
        in_ECX[0x20] = in_ECX[0x33] + iStack_58;
        in_ECX[0x21] = iStack_54;
        if (iVar4 != iStack_54) {
          FUN_009ae5d0();
          *(undefined1 *)(in_ECX + 0x34) = 1;
        }
        uVar5 = in_ECX[0x29] - 3;
        in_ECX[0x32] = 0;
        in_ECX[0x33] = 0;
        if ((int)uVar5 < 1) {
          if ((int)uVar5 < 0) {
            iVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
            in_ECX[0x32] = in_ECX[0x1f] % iVar4;
            in_ECX[0x1f] = in_ECX[0x1f] / iVar4;
            in_ECX[0x33] = in_ECX[0x20] % iVar4;
            in_ECX[0x20] = in_ECX[0x20] / iVar4;
          }
        }
        else {
          in_ECX[0x1f] = in_ECX[0x1f] * uVar5;
          in_ECX[0x20] = in_ECX[0x20] * uVar5;
        }
        iVar1 = in_ECX[0x22];
        iVar2 = in_ECX[0x23];
        in_ECX[0x24] = in_ECX[0x24] + in_ECX[0x21];
        iVar4 = iVar1 + in_ECX[0x1f];
        iVar7 = in_ECX[0x20] + iVar2;
        in_ECX[0x22] = iVar4;
        in_ECX[0x23] = iVar7;
        uStack_61 = 0;
        if ((iVar4 != iVar1) || (iVar7 != iVar2)) {
          FUN_00a5f090(iVar4,iVar7);
          uStack_61 = 1;
        }
        (**(code **)(*in_ECX + 0x5c))();
        piStack_60 = in_ECX + 0x26;
        iVar4 = 0;
        do {
          if ((local_50[iVar4] & 0x80) == 0) {
            if (*(char *)((int)in_ECX + iVar4 + 0x94) != '\0') {
              puVar3 = (undefined4 *)in_ECX[7];
              iVar1 = in_ECX[0x23];
              local_50._4_4_ = 0xffffffff;
              local_50._8_4_ = 0xffffffff;
              local_50._12_4_ = 0xffffffff;
              uStack_40 = 0xffffffff;
              uStack_3c = 0xffffffff;
              uStack_38 = 0xffffffff;
              *(int *)(local_50 + iVar4 * 8 + 4) = in_ECX[0x22];
              *(int *)(local_50 + iVar4 * 8 + 8) = iVar1;
              for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[2]) {
                (**(code **)(*(int *)*puVar3 + 4))(local_50 + 4);
              }
              *(undefined1 *)(in_ECX + 0x34) = 1;
            }
            *(undefined1 *)((int)in_ECX + iVar4 + 0x94) = 0;
          }
          else {
            puVar3 = (undefined4 *)in_ECX[1];
            iVar1 = in_ECX[0x23];
            local_50._4_4_ = 0xffffffff;
            local_50._8_4_ = 0xffffffff;
            local_50._12_4_ = 0xffffffff;
            uStack_40 = 0xffffffff;
            uStack_3c = 0xffffffff;
            uStack_38 = 0xffffffff;
            *(int *)(local_50 + iVar4 * 8 + 4) = in_ECX[0x22];
            *(int *)(local_50 + iVar4 * 8 + 8) = iVar1;
            for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[2]) {
              (**(code **)(*(int *)*puVar3 + 4))(local_50 + 4);
            }
            *(undefined1 *)(in_ECX + 0x34) = 1;
            if (*(char *)((int)in_ECX + iVar4 + 0x94) == '\0') {
              fVar8 = (float10)(**(code **)(*(int *)*piStack_60 + 0x14))();
              if (fVar8 == (float10)0) {
                pcVar6 = *(code **)(*(int *)*piStack_60 + 4);
              }
              else {
                fVar8 = (float10)(**(code **)(*(int *)*piStack_60 + 0x14))();
                if (fVar8 <= (float10)*(double *)(in_ECX + 0x2e)) {
                  iVar1 = in_ECX[0x23];
                  aiStack_34[0] = -1;
                  aiStack_34[1] = 0xffffffff;
                  aiStack_34[2] = 0xffffffff;
                  aiStack_34[3] = 0xffffffff;
                  aiStack_34[4] = 0xffffffff;
                  aiStack_34[5] = 0xffffffff;
                  aiStack_34[iVar4 * 2] = in_ECX[0x22];
                  aiStack_34[iVar4 * 2 + 1] = iVar1;
                  FUN_009ae5d0();
                  *(undefined1 *)(in_ECX + 0x34) = 1;
                }
                pcVar6 = *(code **)(*(int *)*piStack_60 + 8);
              }
              (*pcVar6)();
            }
            *(undefined1 *)((int)in_ECX + iVar4 + 0x94) = 1;
          }
          piStack_60 = piStack_60 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        return uStack_61;
      }
      if ((iVar4 != -0x7ff8ffe2) && (iVar4 != -0x7ff8fff4)) break;
      iVar4 = (**(code **)(*(int *)in_ECX[0x31] + 0x1c))((int *)in_ECX[0x31]);
      if (iVar4 < 0) {
        return 0;
      }
    }
  }
  return 0;
}

