// FUN_00a8c500 @ 00a8c500 body=[[00a8c500, 00a8c97e]]


undefined4 FUN_00a8c500(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_18;
  byte *local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  if ((char)in_ECX[4] == '\0') {
    local_14 = *(byte **)(*in_ECX + 0x10);
    local_18 = in_ECX[0x318];
    iVar9 = in_ECX[3];
    iVar7 = in_ECX[0x110];
    iVar5 = *(int *)(*in_ECX + 0x14);
    iVar2 = in_ECX[0x313];
    local_5 = *(byte *)(in_ECX + 2);
    iVar8 = in_ECX[0x3e90] + 1;
    uVar6 = in_ECX[0xe];
    local_10 = iVar5;
    uVar3 = in_ECX[0xf];
LAB_00a8c7e6:
    local_c = uVar3;
    iVar10 = iVar7;
    if (iVar9 < 1) goto LAB_00a8c831;
    while( true ) {
      if (local_10 == 0) goto LAB_00a8c91a;
      uVar3 = local_c;
      if (iVar9 == 1) break;
      *local_14 = local_5;
      local_18 = local_18 << 8 ^ *(uint *)(&DAT_00f065f8 + (local_18 >> 0x18 ^ (uint)local_5) * 4);
      local_14 = local_14 + 1;
      iVar9 = iVar9 + -1;
      local_10 = local_10 + -1;
    }
LAB_00a8c86f:
    local_c = uVar3;
    if (local_10 == 0) {
      iVar9 = 1;
      goto LAB_00a8c91a;
    }
    *local_14 = local_5;
    local_18 = local_18 << 8 ^ *(uint *)(&DAT_00f065f8 + (local_18 >> 0x18 ^ (uint)local_5) * 4);
    local_14 = local_14 + 1;
    local_10 = local_10 + -1;
    iVar10 = iVar7;
LAB_00a8c831:
    if (iVar8 < iVar10) {
      return 1;
    }
    if (iVar10 != iVar8) {
      uVar6 = *(uint *)(iVar2 + uVar6 * 4);
      uVar3 = uVar6 & 0xff;
      uVar6 = uVar6 >> 8;
      iVar7 = iVar10 + 1;
      local_5 = (byte)local_c;
      if ((uVar3 != local_c) || (uVar3 = local_c, iVar7 == iVar8)) goto LAB_00a8c86f;
      uVar4 = *(uint *)(iVar2 + uVar6 * 4);
      iVar7 = iVar10 + 2;
      uVar6 = uVar4 >> 8;
      iVar9 = 2;
      if ((iVar7 != iVar8) && (uVar3 = uVar4 & 0xff, uVar3 == local_c)) {
        uVar6 = *(uint *)(iVar2 + uVar6 * 4);
        uVar4 = uVar6 & 0xff;
        iVar7 = iVar10 + 3;
        uVar6 = uVar6 >> 8;
        iVar9 = 3;
        uVar3 = local_c;
        if ((iVar7 != iVar8) && (uVar3 = uVar4, uVar4 == local_c)) {
          uVar6 = *(uint *)(iVar2 + uVar6 * 4);
          uVar3 = *(uint *)(iVar2 + (uVar6 >> 8) * 4);
          iVar9 = (uVar6 & 0xff) + 4;
          uVar6 = uVar3 >> 8;
          iVar7 = iVar10 + 5;
          uVar3 = uVar3 & 0xff;
        }
      }
      goto LAB_00a8c7e6;
    }
    iVar9 = 0;
    iVar7 = iVar10;
LAB_00a8c91a:
    uVar3 = *(uint *)(*in_ECX + 0x18);
    *(uint *)(*in_ECX + 0x18) = (uVar3 - local_10) + iVar5;
    if (*(uint *)(*in_ECX + 0x18) < uVar3) {
      piVar1 = (int *)(*in_ECX + 0x1c);
      *piVar1 = *piVar1 + 1;
    }
    in_ECX[0x318] = local_18;
    *(byte *)(in_ECX + 2) = local_5;
    in_ECX[0xf] = local_c;
    in_ECX[0xe] = uVar6;
    in_ECX[0x313] = iVar2;
    in_ECX[3] = iVar9;
    in_ECX[0x110] = iVar7;
    *(byte **)(*in_ECX + 0x10) = local_14;
    *(int *)(*in_ECX + 0x14) = local_10;
  }
  else {
    while (*(int *)(*in_ECX + 0x14) != 0) {
      if (in_ECX[3] == 0) {
        iVar9 = in_ECX[0x110];
        iVar7 = in_ECX[0x3e90] + 1;
        if (iVar9 == iVar7) {
          return 0;
        }
        if (iVar7 <= iVar9) {
          return 1;
        }
        *(char *)(in_ECX + 2) = (char)in_ECX[0xf];
        in_ECX[3] = 1;
        uVar6 = *(uint *)(in_ECX[0x313] + in_ECX[0xe] * 4);
        in_ECX[0xe] = uVar6 >> 8;
        if (in_ECX[5] == 0) {
          iVar5 = in_ECX[6] + 1;
          in_ECX[5] = (&DAT_00f069f8)[in_ECX[6]];
          in_ECX[6] = iVar5;
          if (iVar5 == 0x200) {
            in_ECX[6] = 0;
          }
        }
        in_ECX[5] = in_ECX[5] + -1;
        in_ECX[0x110] = iVar9 + 1;
        if (iVar9 + 1 != iVar7) {
          uVar6 = (uint)(byte)((byte)uVar6 ^ in_ECX[5] == 1);
          if (uVar6 == in_ECX[0xf]) {
            in_ECX[3] = 2;
            uVar6 = *(uint *)(in_ECX[0x313] + in_ECX[0xe] * 4);
            in_ECX[0xe] = uVar6 >> 8;
            if (in_ECX[5] == 0) {
              iVar5 = in_ECX[6] + 1;
              in_ECX[5] = (&DAT_00f069f8)[in_ECX[6]];
              in_ECX[6] = iVar5;
              if (iVar5 == 0x200) {
                in_ECX[6] = 0;
              }
            }
            in_ECX[5] = in_ECX[5] + -1;
            in_ECX[0x110] = iVar9 + 2;
            if (iVar9 + 2 != iVar7) {
              uVar6 = (uint)(byte)((byte)uVar6 ^ in_ECX[5] == 1);
              if (uVar6 == in_ECX[0xf]) {
                in_ECX[3] = 3;
                uVar6 = *(uint *)(in_ECX[0x313] + in_ECX[0xe] * 4);
                in_ECX[0xe] = uVar6 >> 8;
                if (in_ECX[5] == 0) {
                  iVar5 = in_ECX[6] + 1;
                  in_ECX[5] = (&DAT_00f069f8)[in_ECX[6]];
                  in_ECX[6] = iVar5;
                  if (iVar5 == 0x200) {
                    in_ECX[6] = 0;
                  }
                }
                in_ECX[5] = in_ECX[5] + -1;
                in_ECX[0x110] = iVar9 + 3;
                if (iVar9 + 3 != iVar7) {
                  uVar6 = (uint)(byte)((byte)uVar6 ^ in_ECX[5] == 1);
                  if (uVar6 == in_ECX[0xf]) {
                    uVar6 = *(uint *)(in_ECX[0x313] + in_ECX[0xe] * 4);
                    in_ECX[0xe] = uVar6 >> 8;
                    if (in_ECX[5] == 0) {
                      iVar7 = in_ECX[6] + 1;
                      in_ECX[5] = (&DAT_00f069f8)[in_ECX[6]];
                      in_ECX[6] = iVar7;
                      if (iVar7 == 0x200) {
                        in_ECX[6] = 0;
                      }
                    }
                    in_ECX[5] = in_ECX[5] + -1;
                    in_ECX[0x110] = iVar9 + 4;
                    in_ECX[3] = ((uint)(in_ECX[5] == 1) ^ uVar6 & 0xff) + 4;
                    uVar6 = *(uint *)(in_ECX[0x313] + in_ECX[0xe] * 4);
                    in_ECX[0xe] = uVar6;
                    in_ECX[0xe] = (uint)in_ECX[0xe] >> 8;
                    in_ECX[0xf] = uVar6 & 0xff;
                    if (in_ECX[5] == 0) {
                      iVar7 = in_ECX[6] + 1;
                      in_ECX[5] = (&DAT_00f069f8)[in_ECX[6]];
                      in_ECX[6] = iVar7;
                      if (iVar7 == 0x200) {
                        in_ECX[6] = 0;
                      }
                    }
                    in_ECX[5] = in_ECX[5] + -1;
                    in_ECX[0xf] = in_ECX[0xf] ^ (uint)(in_ECX[5] == 1);
                    in_ECX[0x110] = iVar9 + 5;
                  }
                  else {
                    in_ECX[0xf] = uVar6;
                  }
                }
              }
              else {
                in_ECX[0xf] = uVar6;
              }
            }
          }
          else {
            in_ECX[0xf] = uVar6;
          }
        }
      }
      else {
        **(undefined1 **)(*in_ECX + 0x10) = (char)in_ECX[2];
        uVar6 = *(uint *)(&DAT_00f065f8 +
                         ((uint)in_ECX[0x318] >> 0x18 ^ (uint)*(byte *)(in_ECX + 2)) * 4);
        in_ECX[3] = in_ECX[3] + -1;
        in_ECX[0x318] = in_ECX[0x318] << 8 ^ uVar6;
        *(int *)(*in_ECX + 0x10) = *(int *)(*in_ECX + 0x10) + 1;
        *(int *)(*in_ECX + 0x14) = *(int *)(*in_ECX + 0x14) + -1;
        *(int *)(*in_ECX + 0x18) = *(int *)(*in_ECX + 0x18) + 1;
        if (*(int *)(*in_ECX + 0x18) == 0) {
          piVar1 = (int *)(*in_ECX + 0x1c);
          *piVar1 = *piVar1 + 1;
        }
      }
    }
  }
  return 0;
}

