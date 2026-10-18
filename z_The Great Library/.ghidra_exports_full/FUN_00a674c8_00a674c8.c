// FUN_00a674c8 @ 00a674c8 body=[[00a674c8, 00a67bc4] [00a67bc8, 00a67cd4] [00a67cd8, 00a67d7d]]


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a674c8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar10;
  undefined1 *puStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  char *pcStack_8;
  int *piStack_4;
  
  do {
    iVar2 = *(int *)(unaff_EBP + -0x30);
    piStack_4 = *(int **)(iVar2 + 8);
    pcStack_8 = (char *)0xa674d5;
    (*(code *)PTR__free_00f071fc)();
    iStack_c = 0xa674dc;
    pcStack_8 = (char *)iVar2;
    (*(code *)PTR__free_00f071fc)();
switchD_00a6751a_caseD_6:
    do {
      piStack_4 = (int *)unaff_EBX[8];
      iStack_c = unaff_EBX[6];
      pcStack_8 = (char *)(unaff_EBP + -0x40);
      iStack_10 = 0xa66eb8;
      iVar2 = FUN_00a89d00();
      if ((iVar2 < 1) || (iVar3 = unaff_EBX[7], *(int *)(iVar3 + 0x2c) == 9)) {
        if (iVar2 == -1) {
          piStack_4 = (int *)0xa;
          uVar10 = 0;
          pcStack_8 = "server.cpp";
          *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
          *(undefined4 *)(unaff_EBP + -0x60) = 0;
          *(undefined1 *)(unaff_EBP + -0x70) = 0;
          iStack_c = 0xa67c17;
          FUN_00409350();
          piStack_4 = (int *)0x301;
          iStack_c = unaff_EBP + -0x70;
          pcStack_8 = (char *)0x85c;
          *(undefined4 *)(unaff_EBP + -4) = 0x2d;
          iStack_10 = 0xa67c37;
          FUN_004015b0();
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          piStack_4 = (int *)0xa67c4a;
          piVar6 = (int *)FUN_00987d20();
          pcStack_8 = (char *)0xa67c52;
          piStack_4 = piVar6;
          FUN_00408be0();
          if ((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) {
            piStack_4 = (int *)0xa67c6b;
            iVar2 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))();
            if (iVar2 == -1) {
              uVar10 = 4;
            }
          }
          if (uVar10 != 0) {
            pcStack_8 = (char *)(*(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar10);
            if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
              pcStack_8 = (char *)((uint)pcStack_8 | 4);
            }
            piStack_4 = (int *)0x0;
            iStack_c = 0xa67c96;
            FUN_00401120();
          }
          piStack_4 = (int *)(unaff_EBP + -0x2b4);
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          pcStack_8 = (char *)0xa67ca6;
          FUN_00987ac0();
          piStack_4 = (int *)(unaff_EBP + -0x2b4);
          *(undefined ***)(unaff_EBP + -0x2b4) = std::ios_base::vftable;
          pcStack_8 = (char *)0xa67cbc;
          FUN_00aad52d();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
            piStack_4 = *(int **)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
            pcStack_8 = &UNK_00a67cd5;
            FUN_00aae91b();
          }
          *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
          *(undefined4 *)(unaff_EBP + -0x60) = 0;
          *(undefined1 *)(unaff_EBP + -0x70) = 0;
        }
        piStack_4 = (int *)0xa67cf3;
        (**(code **)(*unaff_EBX + 0x70))();
        if (*(char *)(unaff_EBP + -0x19) != '\0') {
          iVar2 = unaff_EBX[7];
          puVar7 = *(undefined4 **)(iVar2 + 4);
          *(undefined4 *)(iVar2 + 0x2c) = 8;
          for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
            piStack_4 = (int *)0x9;
            pcStack_8 = (char *)0xa67d1b;
            (**(code **)(*(int *)*puVar7 + 4))();
          }
          *(undefined4 *)(iVar2 + 0x2c) = 8;
          piStack_4 = (int *)0xa67d34;
          FUN_00a8a450();
          piStack_4 = (int *)0xa67d3d;
          DVar9 = timeGetTime();
          DAT_012586d0 = DVar9 - _DAT_01258b70;
          piStack_4 = (int *)0x0;
          pcStack_8 = (char *)0x0;
          iStack_c = 0xa67d51;
          FUN_00a899f0();
        }
        *(undefined1 *)(unaff_EBX + 0x19) = 1;
        if ((int *)unaff_EBX[0x3e] != (int *)0x0) {
          piStack_4 = (int *)0xa67d6b;
          (**(code **)(*(int *)unaff_EBX[0x3e] + 4))();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      if (*(int *)(unaff_EBP + -0x40) == 2) {
        piStack_4 = (int *)0xa;
        pcStack_8 = "server.cpp";
        *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
        *(undefined4 *)(unaff_EBP + -0x7c) = 0;
        *(undefined1 *)(unaff_EBP + -0x8c) = 0;
        iStack_c = 0xa67b4b;
        FUN_00409350();
        piStack_4 = (int *)0x301;
        iStack_c = unaff_EBP + -0x8c;
        pcStack_8 = (char *)0x76d;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        iStack_10 = 0xa67b6e;
        FUN_004015b0();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_4 = (int *)0xa67b81;
        piStack_4 = (int *)FUN_00987d20();
        pcStack_8 = (char *)0xa67b87;
        FUN_00401280();
        piStack_4 = (int *)(unaff_EBP + -500);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        pcStack_8 = (char *)0xa67b9a;
        FUN_00987ac0();
        piStack_4 = (int *)(unaff_EBP + -500);
        *(undefined ***)(unaff_EBP + -500) = std::ios_base::vftable;
        pcStack_8 = (char *)0xa67bb0;
        FUN_00aad52d();
        if (*(uint *)(unaff_EBP + -0x78) < 0x10) {
          iVar2 = *(int *)(unaff_EBP + -0x3c);
          *(undefined1 *)(unaff_EBX[7] + 0x25d) = 1;
          *(undefined4 *)(iVar2 + 0x14) = 0;
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        piStack_4 = *(int **)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
        pcStack_8 = &UNK_00a67bc5;
        FUN_00aae91b();
      }
    } while (*(int *)(unaff_EBP + -0x40) != 3);
    if (*(char *)(unaff_EBP + -0x38) != '\0') {
      if (*(char *)(unaff_EBP + -0x38) == '\x01') {
        puVar7 = *(undefined4 **)(*(int *)(unaff_EBP + -0x30) + 8);
        iVar2 = puVar7[1];
        piStack_4 = (int *)iVar2;
        switch(*puVar7) {
        case 0:
          pcStack_8 = (char *)0xa6754e;
          piStack_4 = (int *)iVar3;
          FUN_009af8f0();
          *(int *)(unaff_EBX[7] + 0x68) = iVar2 + 1;
          *(undefined4 *)(unaff_EBX[7] + 0x2c) = 5;
          piStack_4 = (int *)0xa6756f;
          FUN_009885d0();
          piStack_4 = (int *)0x301;
          pcStack_8 = (char *)0x7da;
          *(undefined4 *)(unaff_EBP + -4) = 0x18;
          iStack_10 = 0xa6758e;
          iStack_c = unaff_EBP + -0x1ac;
          FUN_004015b0();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          piStack_4 = (int *)0xa675a1;
          piStack_4 = (int *)FUN_00987d20();
          pcStack_8 = (char *)0xa675a7;
          FUN_00401280();
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          piStack_4 = (int *)0xa675b9;
          FUN_00401650();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_4 = (int *)0xa675cb;
          FUN_00408ad0();
          break;
        case 1:
          *(int *)(iVar3 + 0x40) = iVar2;
          break;
        case 2:
          pcStack_8 = (char *)0xa675de;
          FUN_009b10b0();
          *(int *)(unaff_EBX[7] + 0x68) = iVar2 + 1;
          break;
        case 4:
          if (*(int *)(iVar3 + 0x2c) == 2) {
            piStack_4 = (int *)0x4;
            iStack_c = 0xa675f8;
            pcStack_8 = (char *)iVar3;
            FUN_009af7e0();
          }
          *(int *)(unaff_EBX[7] + 0x54) = iVar2;
          unaff_EBX[0x32] = iVar2;
          piStack_4 = (int *)0xa67614;
          FUN_009885d0();
          piStack_4 = (int *)0x301;
          pcStack_8 = (char *)0x7f0;
          *(undefined4 *)(unaff_EBP + -4) = 0x1a;
          iStack_10 = 0xa67633;
          iStack_c = unaff_EBP + -0xe8;
          FUN_004015b0();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          pcStack_8 = (char *)0xa67647;
          piStack_4 = (int *)iVar2;
          pcStack_8 = (char *)FUN_00987d20();
          iStack_c = 0xa6764d;
          piStack_4 = (int *)FUN_00455470();
          pcStack_8 = (char *)0xa67653;
          FUN_00401280();
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          piStack_4 = (int *)0xa67665;
          FUN_00401650();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_4 = (int *)0xa67677;
          FUN_00408ad0();
          break;
        case 5:
          if (*(int *)(iVar3 + 0x2c) == 2) goto switchD_00a6751a_caseD_b;
          if (unaff_EBX[0x32] == iVar2) {
            *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + 1;
            unaff_EBX[0x32] = *(int *)(unaff_EBX[7] + 0x54);
          }
          else {
            *(int *)(iVar3 + 0x54) = iVar2;
            unaff_EBX[0x32] = *(int *)(unaff_EBX[7] + 0x54);
          }
          break;
        case 7:
          if (iVar2 == *(int *)(iVar3 + 0x6c)) {
            *(undefined1 *)(iVar3 + 0x3c) = 1;
          }
          break;
        case 0xb:
switchD_00a6751a_caseD_b:
          *(undefined4 *)(iVar3 + 0x2c) = 7;
          break;
        case 0xf:
          *(undefined1 *)(iVar3 + 0x25c) = 1;
          piStack_4 = (int *)0xa67abb;
          FUN_009ae5d0();
          iVar2 = unaff_EBX[7];
          if (*(int *)(iVar2 + 0x2c) != 0xb) {
            puVar7 = *(undefined4 **)(iVar2 + 4);
            *(undefined4 *)(iVar2 + 0x2c) = 0xb;
            for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
              piStack_4 = (int *)0x0;
              pcStack_8 = (char *)0xa67add;
              (**(code **)(*(int *)*puVar7 + 4))();
            }
          }
          *(undefined4 *)(iVar2 + 0x2c) = 0xb;
          break;
        case 0x10:
          if (*(int *)(iVar3 + 0x2c) != 0xd) {
            *(undefined4 *)(iVar3 + 0x2c) = 0xd;
            piStack_4 = (int *)0xa67b05;
            FUN_009ae5d0();
          }
          *(undefined4 *)(iVar3 + 0x2c) = 0xd;
          *(undefined1 *)(unaff_EBX[7] + 0x25c) = 0;
          piStack_4 = (int *)0xa67b1f;
          FUN_009ae5d0();
          break;
        case 0x12:
          piStack_4 = (int *)0xa676e0;
          FUN_009885d0();
          piStack_4 = (int *)0x301;
          pcStack_8 = (char *)0x816;
          *(undefined4 *)(unaff_EBP + -4) = 0x1c;
          iStack_10 = 0xa676ff;
          iStack_c = unaff_EBP + -400;
          FUN_004015b0();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          piStack_4 = (int *)0xa67712;
          piStack_4 = (int *)FUN_00987d20();
          pcStack_8 = (char *)0xa67718;
          FUN_00401280();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          piStack_4 = (int *)0xa6772a;
          FUN_00401650();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_4 = (int *)0xa6773c;
          FUN_00408ad0();
          iVar2 = *(int *)(unaff_EBP + -0x30);
          if (8 < *(uint *)(iVar2 + 0xc)) {
            piStack_4 = (int *)0x3c;
            pcStack_8 = (char *)0xa6774c;
            pcStack_8 = (char *)FUN_00aae9af();
            *(char **)(unaff_EBP + -0x24) = pcStack_8;
            *(undefined4 *)(unaff_EBP + -4) = 0x1e;
            if (pcStack_8 == (char *)0x0) {
              iVar3 = 0;
            }
            else {
              piStack_4 = *(int **)(iVar2 + 0xc);
              iStack_c = 0xa67767;
              iVar3 = FUN_009d6ea0();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            piStack_4 = *(int **)(unaff_EBP + -0x24);
            iStack_10 = *(undefined4 *)(iVar3 + 4);
            iStack_c = *(int *)(iVar2 + 8) + 8;
            pcStack_8 = (char *)(*(int *)(iVar2 + 0xc) + -8 + iStack_c);
            iStack_14 = 0xa67791;
            FUN_009d7490();
            *(int *)(unaff_EBX[7] + 0x110) = iVar3;
          }
          iVar2 = unaff_EBX[7];
          if (*(int *)(iVar2 + 0x2c) != 0xe) {
            if (*(int *)(iVar2 + 0x2c) != 6) {
              puVar7 = *(undefined4 **)(iVar2 + 4);
              *(undefined4 *)(iVar2 + 0x2c) = 6;
              for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
                piStack_4 = (int *)0x8;
                pcStack_8 = (char *)0xa677c2;
                (**(code **)(*(int *)*puVar7 + 4))();
              }
            }
            *(undefined4 *)(iVar2 + 0x2c) = 6;
          }
          piStack_4 = (int *)0xa677e1;
          FUN_009885d0();
          piStack_4 = (int *)0x301;
          pcStack_8 = (char *)0x823;
          *(undefined4 *)(unaff_EBP + -4) = 0x1f;
          iStack_10 = 0xa67800;
          iStack_c = unaff_EBP + -0x158;
          FUN_004015b0();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          piStack_4 = (int *)0xa67813;
          piStack_4 = (int *)FUN_00987d20();
          pcStack_8 = (char *)0xa67819;
          FUN_00401280();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          piStack_4 = (int *)0xa6782b;
          FUN_00401650();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_4 = (int *)0xa6783d;
          FUN_00408ad0();
          break;
        case 0x13:
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          if (*(int *)(iVar3 + 0x6c) == iVar2) {
            *(undefined1 *)(unaff_EBP + -0x19) = 1;
            break;
          }
        case 3:
          iStack_c = 0xa6753a;
          pcStack_8 = (char *)iVar3;
          FUN_009b0f50();
          break;
        case 0x14:
          *(undefined4 *)(iVar3 + 0x2c) = 9;
          break;
        case 0x15:
          piStack_4 = (int *)0xa6785e;
          FUN_009885d0();
          piStack_4 = (int *)0x301;
          pcStack_8 = (char *)0x82b;
          *(undefined4 *)(unaff_EBP + -4) = 0x21;
          iStack_10 = 0xa6787d;
          iStack_c = unaff_EBP + -0x104;
          FUN_004015b0();
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          piStack_4 = (int *)0xa67890;
          piStack_4 = (int *)FUN_00987d20();
          pcStack_8 = (char *)0xa67896;
          FUN_00401280();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_4 = (int *)0xa678a8;
          FUN_00401650();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_4 = (int *)0xa678ba;
          FUN_00408ad0();
          piStack_4 = (int *)0x3c;
          pcStack_8 = (char *)0xa678c1;
          pcStack_8 = (char *)FUN_00aae9af();
          *(char **)(unaff_EBP + -0x24) = pcStack_8;
          *(undefined4 *)(unaff_EBP + -4) = 0x23;
          iVar2 = *(int *)(unaff_EBP + -0x30);
          if (pcStack_8 == (char *)0x0) {
            iVar3 = 0;
          }
          else {
            piStack_4 = (int *)(*(int *)(iVar2 + 0xc) + -8);
            iStack_c = 0xa678e2;
            iVar3 = FUN_009d6ea0();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_4 = *(int **)(unaff_EBP + -0x24);
          iStack_10 = *(undefined4 *)(iVar3 + 4);
          iStack_c = *(int *)(iVar2 + 8) + 8;
          pcStack_8 = (char *)(*(int *)(iVar2 + 0xc) + -8 + iStack_c);
          iStack_14 = 0xa6790b;
          FUN_009d7490();
          piStack_4 = (int *)0x8;
          pcStack_8 = (char *)0xa67912;
          piStack_4 = (int *)FUN_00aae9af();
          if (piStack_4 == (int *)0x0) {
            piStack_4 = (int *)0x0;
            pcStack_8 = (char *)0xa67934;
            FUN_009b15c0();
          }
          else {
            *piStack_4 = iVar3;
            pcStack_8 = (char *)0xa67924;
            FUN_009b15c0();
          }
          break;
        case 0x19:
          piStack_4 = (int *)0xa67949;
          FUN_009885d0();
          pcStack_8 = (char *)(unaff_EBP + -0xcc);
          *(undefined4 *)(unaff_EBP + -4) = 0x24;
          iStack_c = 0xa6795f;
          piStack_4 = (int *)(unaff_EBP + -0x13c);
          FUN_009da390();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_4 = (int *)0xa6796a;
          FUN_00408ad0();
          piStack_4 = (int *)0xa6797d;
          FUN_005dac60();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          uVar5 = *(undefined4 *)**(undefined4 **)(unaff_EBP + -0x9c);
          piStack_4 = (int *)0xa6799b;
          FUN_009885d0();
          piStack_4 = (int *)0x114;
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          pcStack_8 = (char *)0xa679a9;
          iVar2 = FUN_00aae9af();
          *(int *)(unaff_EBP + -0x24) = iVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          if (iVar2 == 0) {
            pcStack_8 = (char *)0x0;
          }
          else {
            piStack_4 = (int *)0x3c;
            pcStack_8 = (char *)0xa679c0;
            iVar3 = FUN_00aae9af();
            *(int *)(unaff_EBP + -0x14) = iVar3;
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            if (iVar3 == 0) {
              *(undefined1 *)(unaff_EBP + -4) = 0x29;
              pcStack_8 = (char *)0xa679f7;
              piStack_4 = (int *)iVar2;
              pcStack_8 = (char *)FUN_00990df0();
            }
            else {
              piStack_4 = (int *)0x0;
              pcStack_8 = (char *)0x0;
              iStack_c = 0;
              iStack_18 = 0xa679db;
              iStack_14 = iVar3;
              iStack_10 = uVar5;
              FUN_009d5450();
              *(undefined1 *)(unaff_EBP + -4) = 0x29;
              pcStack_8 = (char *)0xa679e7;
              piStack_4 = (int *)iVar2;
              pcStack_8 = (char *)FUN_00990df0();
            }
          }
          piStack_4 = (int *)0x1;
          iStack_c = unaff_EBP + -0x68c;
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          iStack_10 = 0xa67a14;
          FUN_009a0bf0();
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          piStack_4 = (int *)0xa67a23;
          FUN_00408ad0();
          piStack_4 = (int *)(unaff_EBP + -0x68c);
          pcStack_8 = (char *)0xa67a2f;
          FUN_009a1440();
          piStack_4 = (int *)(unaff_EBP + -0x68c);
          pcStack_8 = (char *)0xa67a47;
          (**(code **)(*(int *)(unaff_EBP + -0xcc) + 0xc))();
          piStack_4 = (int *)0xa67a5a;
          cVar1 = FUN_009da970();
          if (cVar1 == '\0') {
            *(undefined4 *)(unaff_EBX[7] + 0x2c) = 0xe;
            piStack_4 = (int *)0xa67a76;
            FUN_009b0f10();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          piStack_4 = (int *)0xa67a85;
          FUN_009a0dc0();
          piStack_4 = (int *)0xa67a90;
          FUN_009a63f0();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_4 = (int *)0xa67aa2;
          FUN_006336b0();
        }
      }
      goto switchD_00a6751a_caseD_6;
    }
    iVar2 = *(int *)(iVar3 + 0x2c);
    if ((((iVar2 == 4) || (iVar2 == 2)) || (iVar2 == 10)) || ((iVar2 == 0xb || (iVar2 == 0xc)))) {
      piStack_4 = (int *)0x3c;
      pcStack_8 = (char *)0xa672f7;
      pcStack_8 = (char *)FUN_00aae9af();
      *(char **)(unaff_EBP + -0x14) = pcStack_8;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      iVar2 = *(int *)(unaff_EBP + -0x30);
      if (pcStack_8 == (char *)0x0) {
        iVar3 = 0;
      }
      else {
        piStack_4 = *(int **)(iVar2 + 0xc);
        iStack_c = 0xa67315;
        iVar3 = FUN_009d6ea0();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_c = *(int *)(iVar2 + 8);
      piStack_4 = *(int **)(unaff_EBP + -0x20);
      iStack_10 = *(int *)(iVar3 + 4);
      pcStack_8 = (char *)(*(int *)(iVar2 + 0xc) + iStack_c);
      *(int *)(unaff_EBP + -0x14) = iVar3;
      iStack_14 = 0xa6733e;
      FUN_009d7490();
      piStack_4 = (int *)0x114;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 5;
      pcStack_8 = (char *)0xa67356;
      puVar7 = (undefined4 *)FUN_00aae9af();
      *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (puVar7 == (undefined4 *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      else {
        piStack_4 = (int *)0x3c;
        pcStack_8 = (char *)0xa6736d;
        iVar2 = FUN_00aae9af();
        *(int *)(unaff_EBP + -0x24) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar2 == 0) {
          uVar5 = 0;
        }
        else {
          piStack_4 = (int *)0x0;
          pcStack_8 = (char *)0x0;
          iStack_c = 0;
          iStack_18 = 0xa67388;
          iStack_14 = iVar2;
          iStack_10 = iVar3;
          uVar5 = FUN_009d5450();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *puVar7 = &PTR_FUN_00e37c30;
        puVar7[1] = uVar5;
        *(undefined2 *)(puVar7 + 0x44) = 0x100;
        piStack_4 = (int *)0xa673a9;
        FUN_00990100();
        *puVar7 = &PTR_FUN_00e37c48;
        *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
      }
      iStack_18 = unaff_EBX[7];
      piStack_4 = (int *)0x1;
      *(int **)(unaff_EBP + -0x24) = &iStack_14;
      iStack_18 = iStack_18 + 0x1c;
      *(int **)(unaff_EBP + -0x24) = &iStack_14;
      iStack_14 = 0;
      iStack_10 = 0;
      iStack_c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_1c = (undefined1 *)0xa673e8;
      FUN_009a2240();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_18 = *(undefined4 *)(unaff_EBP + -0x18);
      puStack_1c = (undefined1 *)(unaff_EBP - 0x68c);
      FUN_009a0cb0();
      *(undefined ***)(unaff_EBP + -0x4c) = &PTR_FUN_00e38550;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = unaff_EBX[7];
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_1c;
      pcStack_8 = (char *)0xf;
      iStack_c = 0;
      puStack_1c = (undefined1 *)((uint)puStack_1c & 0xffffff00);
      FUN_00408ed0(iVar2 + 0xbc,0,0xffffffff);
      FUN_009a14e0(unaff_EBP + -0x2c);
      puVar7 = (undefined4 *)unaff_EBX[0x15];
      iVar2 = puVar7[1];
      piStack_4 = (int *)0x10;
      pcStack_8 = (char *)0xa67453;
      puVar8 = (undefined4 *)FUN_00aae9af();
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)(unaff_EBP + -0x2c);
        puVar8[1] = iVar2;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar3 = puVar7[2];
      puVar7[1] = puVar8;
      puVar7[2] = iVar3 + 1;
      if (iVar3 == 0) {
        *puVar7 = puVar8;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar8;
      }
      *(undefined ***)(unaff_EBP + -0x4c) = &PTR_FUN_00e38318;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_4 = (int *)0xa6749e;
      FUN_009a0dc0();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00a674b7();
      return;
    }
    if (iVar2 == 6) {
      piStack_4 = (int *)0xa66f33;
      FUN_009885d0();
      piStack_4 = (int *)0x301;
      pcStack_8 = (char *)0x7a1;
      *(undefined4 *)(unaff_EBP + -4) = 0xc;
      iStack_10 = 0xa66f52;
      iStack_c = unaff_EBP + -0x120;
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_4 = (int *)0xa66f65;
      piStack_4 = (int *)FUN_00987d20();
      pcStack_8 = (char *)0xa66f6b;
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_4 = (int *)0xa66f7d;
      FUN_00401650();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_4 = (int *)0xa66f8f;
      FUN_00408ad0();
      piStack_4 = (int *)0x3c;
      pcStack_8 = (char *)0xa66f96;
      pcStack_8 = (char *)FUN_00aae9af();
      *(char **)(unaff_EBP + -0x14) = pcStack_8;
      *(undefined4 *)(unaff_EBP + -4) = 0xe;
      iVar2 = *(int *)(unaff_EBP + -0x30);
      if (pcStack_8 == (char *)0x0) {
        iVar3 = 0;
      }
      else {
        piStack_4 = *(int **)(iVar2 + 0xc);
        iStack_c = 0xa66fb4;
        iVar3 = FUN_009d6ea0();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_c = *(int *)(iVar2 + 8);
      piStack_4 = *(int **)(unaff_EBP + -0x20);
      iStack_10 = *(int *)(iVar3 + 4);
      pcStack_8 = (char *)(*(int *)(iVar2 + 0xc) + iStack_c);
      iStack_14 = 0xa66fd8;
      FUN_009d7490();
      piStack_4 = (int *)0x114;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      pcStack_8 = (char *)0xa66fe9;
      iVar2 = FUN_00aae9af();
      *(int *)(unaff_EBP + -0x14) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0xf;
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        piStack_4 = (int *)0x3c;
        pcStack_8 = (char *)0xa67003;
        iVar4 = FUN_00aae9af();
        *(int *)(unaff_EBP + -0x2c) = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (iVar4 == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          pcStack_8 = (char *)0xa6703c;
          piStack_4 = (int *)iVar2;
          uVar5 = FUN_00990df0();
        }
        else {
          piStack_4 = (int *)0x0;
          pcStack_8 = (char *)0x0;
          iStack_c = 0;
          iStack_18 = 0xa6701e;
          iStack_14 = iVar4;
          iStack_10 = iVar3;
          FUN_009d5450();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          pcStack_8 = (char *)0xa6702a;
          piStack_4 = (int *)iVar2;
          uVar5 = FUN_00990df0();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_4 = (int *)0x1;
      puStack_1c = (undefined1 *)&iStack_14;
      iStack_18 = unaff_EBX[7] + 0x1c;
      *(int **)(unaff_EBP + -0x14) = &iStack_14;
      FUN_009a0d70();
      puStack_1c = (undefined1 *)(unaff_EBP + -0x68c);
      iStack_18 = uVar5;
      FUN_009a0cb0();
      *(undefined4 *)(unaff_EBP + -4) = 0x11;
      *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_00e38550;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_1c;
      FUN_00401320();
      FUN_009a14e0(unaff_EBP + -0x18);
      iVar2 = *(int *)(unaff_EBP + -0x18);
      piStack_4 = (int *)0x10;
      if (*(char *)(iVar2 + 0x36) == '\0') {
        iVar3 = unaff_EBX[7];
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 0xdc);
        pcStack_8 = (char *)0xa67107;
        piVar6 = (int *)FUN_00aae9af();
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          iVar4 = *(int *)(unaff_EBP + -0x18);
          *piVar6 = iVar2;
          piVar6[1] = iVar4;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar2 = *(int *)(iVar3 + 0xe0);
        *(int **)(iVar3 + 0xdc) = piVar6;
        *(int *)(iVar3 + 0xe0) = iVar2 + 1;
        if (iVar2 == 0) {
          *(int **)(iVar3 + 0xd8) = piVar6;
        }
        else {
          *(int **)(*(int *)(unaff_EBP + -0x18) + 8) = piVar6;
        }
      }
      else {
        iVar3 = unaff_EBX[0xe];
        pcStack_8 = (char *)0xa670c1;
        piVar6 = (int *)FUN_00aae9af();
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar2;
          piVar6[1] = iVar3;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar2 = unaff_EBX[0xf];
        unaff_EBX[0xe] = (int)piVar6;
        unaff_EBX[0xf] = iVar2 + 1;
        if (iVar2 == 0) {
          unaff_EBX[0xd] = (int)piVar6;
        }
        else {
          *(int **)(iVar3 + 8) = piVar6;
        }
      }
      *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_00e38318;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_4 = (int *)0xa67165;
      FUN_009a0dc0();
      FUN_00a674c8();
      return;
    }
    if (iVar2 == 5) {
      piStack_4 = (int *)0x3c;
      pcStack_8 = (char *)0xa6717a;
      pcStack_8 = (char *)FUN_00aae9af();
      *(char **)(unaff_EBP + -0x14) = pcStack_8;
      *(undefined4 *)(unaff_EBP + -4) = 0x13;
      iVar2 = *(int *)(unaff_EBP + -0x30);
      if (pcStack_8 == (char *)0x0) {
        iVar3 = 0;
      }
      else {
        piStack_4 = *(int **)(iVar2 + 0xc);
        iStack_c = 0xa67198;
        iVar3 = FUN_009d6ea0();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_c = *(int *)(iVar2 + 8);
      piStack_4 = *(int **)(unaff_EBP + -0x20);
      iStack_10 = *(int *)(iVar3 + 4);
      pcStack_8 = (char *)(*(int *)(iVar2 + 0xc) + iStack_c);
      iStack_14 = 0xa671bc;
      FUN_009d7490();
      piStack_4 = (int *)0x114;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      pcStack_8 = (char *)0xa671cd;
      iVar2 = FUN_00aae9af();
      *(int *)(unaff_EBP + -0x14) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x14;
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        piStack_4 = (int *)0x3c;
        pcStack_8 = (char *)0xa671e7;
        iVar4 = FUN_00aae9af();
        *(int *)(unaff_EBP + -0x2c) = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (iVar4 == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          pcStack_8 = (char *)0xa67220;
          piStack_4 = (int *)iVar2;
          uVar5 = FUN_00990df0();
        }
        else {
          piStack_4 = (int *)0x0;
          pcStack_8 = (char *)0x0;
          iStack_c = 0;
          iStack_18 = 0xa67202;
          iStack_14 = iVar4;
          iStack_10 = iVar3;
          FUN_009d5450();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          pcStack_8 = (char *)0xa6720e;
          piStack_4 = (int *)iVar2;
          uVar5 = FUN_00990df0();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_4 = (int *)0x1;
      puStack_1c = (undefined1 *)&iStack_14;
      iStack_18 = unaff_EBX[7] + 0x1c;
      *(int **)(unaff_EBP + -0x14) = &iStack_14;
      FUN_009a0d70();
      puStack_1c = (undefined1 *)(unaff_EBP + -0x68c);
      iStack_18 = uVar5;
      FUN_009a0cb0();
      *(undefined4 *)(unaff_EBP + -4) = 0x16;
      *(undefined ***)(unaff_EBP + -0x54) = &PTR_FUN_00e38550;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_1c;
      FUN_00401320();
      FUN_009a14e0(unaff_EBP + -0x18);
      iVar2 = unaff_EBX[10];
      piStack_4 = (int *)0x10;
      pcStack_8 = (char *)0xa6729c;
      puVar7 = (undefined4 *)FUN_00aae9af();
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = *(undefined4 *)(unaff_EBP + -0x18);
        puVar7[1] = iVar2;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
      }
      iVar3 = unaff_EBX[0xb];
      unaff_EBX[10] = (int)puVar7;
      unaff_EBX[0xb] = iVar3 + 1;
      if (iVar3 == 0) {
        unaff_EBX[9] = (int)puVar7;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar7;
      }
      *(undefined ***)(unaff_EBP + -0x54) = &PTR_FUN_00e38318;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_4 = (int *)0xa672eb;
      FUN_009a0dc0();
      FUN_00a674c8();
      return;
    }
  } while( true );
}

