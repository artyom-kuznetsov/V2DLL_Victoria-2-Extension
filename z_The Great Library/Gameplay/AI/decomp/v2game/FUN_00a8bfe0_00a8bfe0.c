// FUN_00a8bfe0 @ 00a8bfe0 body=[[00a8bfe0, 00a8c007] [00a8c010, 00a8c1b8]]


undefined1 FUN_00a8bfe0(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int *in_EAX;
  uint uVar4;
  undefined1 local_5;
  
  local_5 = 0;
  if (in_EAX[1] == 2) {
    if (in_EAX[0x11] < in_EAX[0x12]) {
      while (((undefined4 *)*in_EAX)[1] != 0) {
        uVar4 = (uint)**(byte **)*in_EAX;
        uVar3 = in_EAX[0xd];
        local_5 = 1;
        if (uVar4 == uVar3) {
LAB_00a8c07d:
          if (in_EAX[0xe] == 0xff) {
LAB_00a8c08e:
            if (uVar3 < 0x100) {
              in_EAX = (int *)FUN_00a8bef0();
            }
            in_EAX[0xe] = 1;
            goto LAB_00a8c09e;
          }
          in_EAX[0xe] = in_EAX[0xe] + 1;
        }
        else {
          if (in_EAX[0xe] != 1) {
            if (uVar4 == uVar3) goto LAB_00a8c07d;
            goto LAB_00a8c08e;
          }
          bVar2 = *(byte *)(in_EAX + 0xd);
          in_EAX[0x98] = in_EAX[0x98] << 8 ^
                         *(uint *)(&DAT_00f065f8 + ((uint)in_EAX[0x98] >> 0x18 ^ (uint)bVar2) * 4);
          *(undefined1 *)(uVar3 + 0x58 + (int)in_EAX) = 1;
          *(byte *)(in_EAX[9] + in_EAX[0x11]) = bVar2;
          in_EAX[0x11] = in_EAX[0x11] + 1;
LAB_00a8c09e:
          in_EAX[0xd] = uVar4;
        }
        *(int *)*in_EAX = *(int *)*in_EAX + 1;
        *(int *)(*in_EAX + 4) = *(int *)(*in_EAX + 4) + -1;
        *(int *)(*in_EAX + 8) = *(int *)(*in_EAX + 8) + 1;
        if (*(int *)(*in_EAX + 8) == 0) {
          piVar1 = (int *)(*in_EAX + 0xc);
          *piVar1 = *piVar1 + 1;
        }
        if (in_EAX[0x12] <= in_EAX[0x11]) {
          return 1;
        }
      }
    }
  }
  else if (in_EAX[0x11] < in_EAX[0x12]) {
    while ((((undefined4 *)*in_EAX)[1] != 0 && (in_EAX[3] != 0))) {
      uVar4 = (uint)**(byte **)*in_EAX;
      uVar3 = in_EAX[0xd];
      local_5 = 1;
      if (uVar4 == uVar3) {
LAB_00a8c157:
        if (in_EAX[0xe] == 0xff) {
LAB_00a8c168:
          if (uVar3 < 0x100) {
            in_EAX = (int *)FUN_00a8bef0();
          }
          in_EAX[0xe] = 1;
          goto LAB_00a8c178;
        }
        in_EAX[0xe] = in_EAX[0xe] + 1;
      }
      else {
        if (in_EAX[0xe] != 1) {
          if (uVar4 == uVar3) goto LAB_00a8c157;
          goto LAB_00a8c168;
        }
        bVar2 = *(byte *)(in_EAX + 0xd);
        in_EAX[0x98] = in_EAX[0x98] << 8 ^
                       *(uint *)(&DAT_00f065f8 + ((uint)in_EAX[0x98] >> 0x18 ^ (uint)bVar2) * 4);
        *(undefined1 *)(uVar3 + 0x58 + (int)in_EAX) = 1;
        *(byte *)(in_EAX[9] + in_EAX[0x11]) = bVar2;
        in_EAX[0x11] = in_EAX[0x11] + 1;
LAB_00a8c178:
        in_EAX[0xd] = uVar4;
      }
      *(int *)*in_EAX = *(int *)*in_EAX + 1;
      *(int *)(*in_EAX + 4) = *(int *)(*in_EAX + 4) + -1;
      *(int *)(*in_EAX + 8) = *(int *)(*in_EAX + 8) + 1;
      if (*(int *)(*in_EAX + 8) == 0) {
        piVar1 = (int *)(*in_EAX + 0xc);
        *piVar1 = *piVar1 + 1;
      }
      in_EAX[3] = in_EAX[3] + -1;
      if (in_EAX[0x12] <= in_EAX[0x11]) {
        return 1;
      }
    }
  }
  return local_5;
}

