// FUN_0092be80 @ 0092be80 body=[[0092be80, 0092c06c]]


void FUN_0092be80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *in_EAX;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar19;
  int *piVar18;
  
  if ((in_EAX != param_1) && (piVar15 = in_EAX + 0x10, piVar15 != param_1)) {
    piVar19 = in_EAX + 0x14;
    do {
      iVar1 = piVar19[-2];
      iVar2 = *piVar19;
      iVar3 = piVar19[-1];
      iVar4 = piVar19[1];
      iVar5 = piVar19[2];
      iVar6 = piVar19[3];
      iVar7 = piVar19[4];
      iVar8 = piVar19[5];
      iVar9 = piVar19[6];
      iVar10 = piVar19[7];
      iVar11 = piVar19[8];
      iVar12 = piVar19[9];
      iVar14 = piVar19[10];
      iVar13 = piVar19[0xb];
      if (((iVar3 == 0) || (in_EAX[3] == 0)) ||
         (*(int *)(in_EAX[3] + 0x10) <= *(int *)(iVar3 + 0x10))) {
        piVar16 = piVar15;
        piVar17 = piVar19 + -1;
        while (((piVar18 = piVar17 + -0x10, iVar3 != 0 && (*piVar18 != 0)) &&
               (*(int *)(iVar3 + 0x10) < *(int *)(*piVar18 + 0x10)))) {
          piVar16[1] = piVar17[-0x12];
          piVar16[2] = piVar17[-0x11];
          piVar16[3] = *piVar18;
          piVar16[4] = piVar17[-0xf];
          piVar16[5] = piVar17[-0xe];
          piVar16[6] = piVar17[-0xd];
          piVar16[7] = piVar17[-0xc];
          piVar16[8] = piVar17[-0xb];
          piVar16[9] = piVar17[-10];
          piVar16[10] = piVar17[-9];
          piVar16[0xb] = piVar17[-8];
          piVar16[0xc] = piVar17[-7];
          piVar16[0xd] = piVar17[-6];
          *(char *)(piVar16 + 0xe) = (char)piVar17[-5];
          piVar16[0xf] = piVar17[-4];
          piVar16 = piVar17 + -0x13;
          piVar17 = piVar18;
        }
        piVar16[2] = iVar1;
        piVar16[4] = iVar2;
        piVar16[5] = iVar4;
        piVar16[6] = iVar5;
        piVar16[7] = iVar6;
        piVar16[8] = iVar7;
        piVar16[9] = iVar8;
        piVar16[10] = iVar9;
        piVar16[0xb] = iVar10;
        piVar16[0xc] = iVar11;
        piVar16[0xd] = iVar12;
        piVar16[1] = 0x18d;
        piVar16[3] = iVar3;
        *(char *)(piVar16 + 0xe) = (char)iVar14;
        piVar16[0xf] = iVar13;
      }
      else {
        FUN_0092c380(param_1);
        in_EAX[2] = iVar1;
        in_EAX[4] = iVar2;
        in_EAX[5] = iVar4;
        in_EAX[6] = iVar5;
        in_EAX[7] = iVar6;
        in_EAX[8] = iVar7;
        in_EAX[9] = iVar8;
        in_EAX[10] = iVar9;
        in_EAX[0xb] = iVar10;
        in_EAX[0xc] = iVar11;
        in_EAX[1] = 0x18d;
        in_EAX[3] = iVar3;
        in_EAX[0xd] = iVar12;
        *(char *)(in_EAX + 0xe) = (char)iVar14;
        in_EAX[0xf] = iVar13;
      }
      piVar15 = piVar15 + 0x10;
      piVar19 = piVar19 + 0x10;
    } while (piVar15 != param_1);
  }
  return;
}

