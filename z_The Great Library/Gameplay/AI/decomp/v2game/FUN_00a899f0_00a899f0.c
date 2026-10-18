// FUN_00a899f0 @ 00a899f0 body=[[00a899f0, 00a899fc] [00a89a00, 00a89cd5]]


undefined4 FUN_00a899f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  u_long uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *unaff_EDI;
  int local_44;
  u_short local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  u_long local_3c;
  int local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  
  do {
    uVar5 = unaff_EDI[8];
    local_44 = 0;
    if (unaff_EDI[9] * 0xe8 + uVar5 <= uVar5) {
      return 0;
    }
    piVar7 = (int *)(uVar5 + 0xa4);
    do {
      if ((piVar7[-0x23] != 0) && (piVar7[-0x23] != 7)) {
        unaff_EDI[0x16c] = 0;
        unaff_EDI[0x1ef] = 1;
        unaff_EDI[0xb] = 0xc;
        if ((int *)*piVar7 != piVar7) {
          FUN_00a892e0();
        }
        if (((((uint)unaff_EDI[0x16c] < 0x20) && (param_2 != 0)) && ((int *)piVar7[2] != piVar7 + 2)
            ) && ((DAT_012586d0 - piVar7[-0x18] < 86400000 && (iVar3 = FUN_00a89630(), iVar3 == 1)))
           ) {
          return 1;
        }
        if ((int *)piVar7[6] == piVar7 + 6) {
          if ((int *)piVar7[2] == piVar7 + 2) {
            uVar5 = DAT_012586d0 - piVar7[-0x19];
            if (86399999 < uVar5) {
              uVar5 = piVar7[-0x19] - DAT_012586d0;
            }
            if ((499 < uVar5) && (0xb < (uint)*(ushort *)(piVar7 + -4) - unaff_EDI[0xb])) {
              if (piVar7[-0x23] == 4) {
                local_34 = 0xff05;
                local_32 = 1;
                local_30 = 0xc;
                FUN_00a8a550(piVar7 + -0x29,&local_34,0,0,0);
              }
              goto LAB_00a89b34;
            }
          }
        }
        else {
LAB_00a89b34:
          FUN_00a897c0();
        }
        if (((uint)unaff_EDI[0x16c] < 0x20) && ((int *)piVar7[8] != piVar7 + 8)) {
          FUN_00a89410();
        }
        if (unaff_EDI[0x16c] != 0) {
          iVar3 = piVar7[-0x16];
          if (iVar3 == 0) {
            piVar7[-0x16] = DAT_012586d0;
          }
          else {
            uVar5 = DAT_012586d0 - iVar3;
            if (86399999 < uVar5) {
              uVar5 = iVar3 - DAT_012586d0;
            }
            if ((9999 < uVar5) && (piVar7[-0x15] != 0)) {
              uVar4 = (uint)(piVar7[-0x14] << 0x10) / (uint)piVar7[-0x15];
              iVar3 = piVar7[-0x12] - ((uint)piVar7[-0x12] >> 2);
              uVar5 = piVar7[-0x13];
              piVar7[-0x12] = iVar3;
              if (uVar4 < uVar5) {
                iVar6 = uVar5 - (uVar5 - uVar4 >> 3);
                piVar7[-0x13] = iVar6;
                piVar7[-0x12] = (iVar6 - uVar4 >> 2) + iVar3;
              }
              else {
                iVar6 = uVar5 + (uVar4 - uVar5 >> 3);
                piVar7[-0x13] = iVar6;
                piVar7[-0x12] = (uVar4 - iVar6 >> 2) + iVar3;
              }
              piVar7[-0x16] = DAT_012586d0;
              piVar7[-0x15] = 0;
              piVar7[-0x14] = 0;
            }
          }
          local_40 = htons(*(u_short *)(piVar7 + -0x28));
          local_3d = *(undefined1 *)(unaff_EDI + 0x16c);
          local_3e = 0;
          local_3c = htonl(DAT_012586d0);
          uVar2 = DAT_012586d0;
          local_44 = local_44 + 1;
          local_38 = piVar7[-0x27];
          unaff_EDI[0x16e] = &local_40;
          unaff_EDI[0x16d] = 0xc;
          piVar7[-0x1a] = uVar2;
          iVar3 = FUN_00a8b2e0(*unaff_EDI,unaff_EDI + 0x16d,unaff_EDI[0x1ef]);
          FUN_00a885a0(piVar7 + -0x29);
          if (iVar3 < 0) {
            return 0xffffffff;
          }
        }
      }
      piVar1 = piVar7 + 0x11;
      piVar7 = piVar7 + 0x3a;
    } while (piVar1 < (int *)(unaff_EDI[9] * 0xe8 + unaff_EDI[8]));
    if (local_44 == 0) {
      return 0;
    }
  } while( true );
}

