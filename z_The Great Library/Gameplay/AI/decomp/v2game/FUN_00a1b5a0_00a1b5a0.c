// FUN_00a1b5a0 @ 00a1b5a0 body=[[00a1b5a0, 00a1b905]]


int FUN_00a1b5a0(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  
  if (((in_EAX != (int *)0x0) && ((undefined4 *)in_EAX[7] != (undefined4 *)0x0)) && (*in_EAX != 0))
  {
    uVar2 = *(undefined4 *)in_EAX[7];
    iVar4 = -5;
    do {
      switch(uVar2) {
      case 0:
        if (in_EAX[1] == 0) {
          return iVar4;
        }
        in_EAX[2] = in_EAX[2] + 1;
        in_EAX[1] = in_EAX[1] + -1;
        bVar1 = *(byte *)*in_EAX;
        *(uint *)(in_EAX[7] + 4) = (uint)bVar1;
        *in_EAX = *in_EAX + 1;
        iVar4 = 0;
        if ((bVar1 & 0xf) == 8) {
          puVar3 = (undefined4 *)in_EAX[7];
          if (((uint)puVar3[1] >> 4) + 8 <= (uint)puVar3[4]) {
            *puVar3 = 1;
            goto switchD_00a1b5d5_caseD_1;
          }
          *puVar3 = 0xd;
          in_EAX[6] = (int)"invalid window size";
          goto LAB_00a1b7d2;
        }
        *(undefined4 *)in_EAX[7] = 0xd;
        in_EAX[6] = (int)"unknown compression method";
        *(undefined4 *)(in_EAX[7] + 4) = 5;
        break;
      case 1:
switchD_00a1b5d5_caseD_1:
        if (in_EAX[1] == 0) {
          return iVar4;
        }
        in_EAX[2] = in_EAX[2] + 1;
        puVar3 = (undefined4 *)in_EAX[7];
        in_EAX[1] = in_EAX[1] + -1;
        bVar1 = *(byte *)*in_EAX;
        *in_EAX = (int)((byte *)*in_EAX + 1);
        iVar4 = 0;
        if ((puVar3[1] * 0x100 + (uint)bVar1) % 0x1f != 0) {
          *puVar3 = 0xd;
          in_EAX[6] = (int)"incorrect header check";
          goto LAB_00a1b7d2;
        }
        if ((bVar1 & 0x20) == 0) {
          *puVar3 = 7;
          break;
        }
        *(undefined4 *)in_EAX[7] = 2;
      case 2:
        if (in_EAX[1] != 0) {
          in_EAX[2] = in_EAX[2] + 1;
          in_EAX[1] = in_EAX[1] + -1;
          *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
          iVar4 = 0;
          *in_EAX = *in_EAX + 1;
          *(undefined4 *)in_EAX[7] = 3;
switchD_00a1b5d5_caseD_3:
          if (in_EAX[1] != 0) {
            in_EAX[2] = in_EAX[2] + 1;
            in_EAX[1] = in_EAX[1] + -1;
            *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
            iVar4 = 0;
            *in_EAX = *in_EAX + 1;
            *(undefined4 *)in_EAX[7] = 4;
switchD_00a1b5d5_caseD_4:
            if (in_EAX[1] != 0) {
              in_EAX[2] = in_EAX[2] + 1;
              in_EAX[1] = in_EAX[1] + -1;
              *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
              iVar4 = 0;
              *in_EAX = *in_EAX + 1;
              *(undefined4 *)in_EAX[7] = 5;
switchD_00a1b5d5_caseD_5:
              if (in_EAX[1] != 0) {
                in_EAX[2] = in_EAX[2] + 1;
                in_EAX[1] = in_EAX[1] + -1;
                *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
                *in_EAX = *in_EAX + 1;
                in_EAX[0xc] = ((undefined4 *)in_EAX[7])[2];
                *(undefined4 *)in_EAX[7] = 6;
                return 2;
              }
            }
          }
        }
        return iVar4;
      case 3:
        goto switchD_00a1b5d5_caseD_3;
      case 4:
        goto switchD_00a1b5d5_caseD_4;
      case 5:
        goto switchD_00a1b5d5_caseD_5;
      case 6:
        *(undefined4 *)in_EAX[7] = 0xd;
        in_EAX[6] = (int)"need dictionary";
        *(undefined4 *)(in_EAX[7] + 4) = 0;
        return -2;
      case 7:
        iVar4 = FUN_00a19d90();
        if (iVar4 == -3) {
          *(undefined4 *)in_EAX[7] = 0xd;
          *(undefined4 *)(in_EAX[7] + 4) = 0;
          iVar4 = -3;
        }
        else {
          if (iVar4 == 0) {
            return 0;
          }
          if (iVar4 != 1) {
            return iVar4;
          }
          iVar4 = 0;
          FUN_00a19c70();
          puVar3 = (undefined4 *)in_EAX[7];
          if (puVar3[3] == 0) {
            *puVar3 = 8;
            goto switchD_00a1b5d5_caseD_8;
          }
          *puVar3 = 0xc;
        }
        break;
      case 8:
switchD_00a1b5d5_caseD_8:
        if (in_EAX[1] == 0) {
          return iVar4;
        }
        in_EAX[2] = in_EAX[2] + 1;
        in_EAX[1] = in_EAX[1] + -1;
        *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
        iVar4 = 0;
        *in_EAX = *in_EAX + 1;
        *(undefined4 *)in_EAX[7] = 9;
      case 9:
        if (in_EAX[1] == 0) {
          return iVar4;
        }
        in_EAX[2] = in_EAX[2] + 1;
        in_EAX[1] = in_EAX[1] + -1;
        *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
        iVar4 = 0;
        *in_EAX = *in_EAX + 1;
        *(undefined4 *)in_EAX[7] = 10;
switchD_00a1b5d5_caseD_a:
        if (in_EAX[1] == 0) {
          return iVar4;
        }
        in_EAX[2] = in_EAX[2] + 1;
        in_EAX[1] = in_EAX[1] + -1;
        *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
        iVar4 = 0;
        *in_EAX = *in_EAX + 1;
        *(undefined4 *)in_EAX[7] = 0xb;
switchD_00a1b5d5_caseD_b:
        if (in_EAX[1] == 0) {
          return iVar4;
        }
        in_EAX[2] = in_EAX[2] + 1;
        in_EAX[1] = in_EAX[1] + -1;
        *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
        puVar3 = (undefined4 *)in_EAX[7];
        *in_EAX = *in_EAX + 1;
        if (puVar3[1] == puVar3[2]) {
          *(undefined4 *)in_EAX[7] = 0xc;
switchD_00a1b5d5_caseD_c:
          return 1;
        }
        *puVar3 = 0xd;
        in_EAX[6] = (int)"incorrect data check";
LAB_00a1b7d2:
        iVar4 = 0;
        *(undefined4 *)(in_EAX[7] + 4) = 5;
        break;
      case 10:
        goto switchD_00a1b5d5_caseD_a;
      case 0xb:
        goto switchD_00a1b5d5_caseD_b;
      case 0xc:
        goto switchD_00a1b5d5_caseD_c;
      case 0xd:
        return -3;
      default:
        goto switchD_00a1b5d5_default;
      }
      uVar2 = *(undefined4 *)in_EAX[7];
    } while( true );
  }
switchD_00a1b5d5_default:
  return -2;
}

