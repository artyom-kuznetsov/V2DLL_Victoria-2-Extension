// FUN_00a1c5b0 @ 00a1c5b0 body=[[00a1c5b0, 00a1c805]]


int FUN_00a1c5b0(int param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 uVar5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint in_ECX;
  uint uVar10;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if ((in_EAX == 0) || (piVar3 = *(int **)(in_EAX + 0x7c), piVar3 == (int *)0x0)) {
    return -0x66;
  }
  if (*piVar3 == 0) {
    return -100;
  }
  if (in_ECX == 0) {
    return 0;
  }
  piVar3[4] = param_1;
  piVar3[5] = in_ECX;
  if ((uint)piVar3[0x17] < in_ECX) {
    piVar3[5] = piVar3[0x17];
  }
  if (piVar3[5] != 0) {
    do {
      if ((piVar3[2] == 0) && (uVar10 = piVar3[0x16], uVar10 != 0)) {
        local_c = 0x4000;
        if ((uVar10 < 0x4000) && (local_c = uVar10, uVar10 == 0)) {
          if (param_2 == (undefined1 *)0x0) {
            return 0;
          }
          *param_2 = 1;
          return 0;
        }
        pcVar4 = (char *)piVar3[0x18];
        if (*pcVar4 == '\0') {
          *(int *)(pcVar4 + 0x1c) = piVar3[0x1a] + piVar3[0xf];
        }
        else {
          if (pcVar4[1] == '\0') {
            return -1;
          }
          SetFilePointer(*(HANDLE *)(pcVar4 + 4),*(int *)(pcVar4 + 0xc) + piVar3[0x1a] + piVar3[0xf]
                         ,(PLONG)0x0,0);
        }
        iVar6 = FUN_00a1b9e0(*piVar3,local_c,1);
        if (iVar6 != 1) {
          return -1;
        }
        iVar6 = *piVar3;
        piVar3[0xf] = piVar3[0xf] + local_c;
        piVar3[0x16] = piVar3[0x16] - local_c;
        piVar3[1] = iVar6;
        piVar3[2] = local_c;
        if (((char)piVar3[0x1b] != '\0') && (uVar10 = 0, local_c != 0)) {
          do {
            uVar5 = FUN_00a1b2a0();
            *(undefined1 *)(uVar10 + iVar6) = uVar5;
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_c);
        }
      }
      uVar10 = piVar3[2];
      uVar7 = piVar3[0x1f];
      if (uVar10 < (uint)piVar3[0x1f]) {
        uVar7 = uVar10;
      }
      if (uVar7 != 0) {
        cVar2 = *(char *)(piVar3[1] + uVar7 + -1);
        piVar3[0x17] = piVar3[0x17] - uVar7;
        piVar1 = piVar3 + 0x1f;
        *piVar1 = *piVar1 - uVar7;
        piVar3[2] = uVar10 - uVar7;
        piVar3[1] = piVar3[1] + uVar7;
        if ((*piVar1 == 0) && (cVar2 != (char)piVar3[0x20])) {
          return -0x6a;
        }
      }
      if (piVar3[0x19] == 0) {
        uVar10 = piVar3[2];
        if ((uint)piVar3[5] < (uint)piVar3[2]) {
          uVar10 = piVar3[5];
        }
        uVar7 = 0;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)(uVar7 + piVar3[4]) = *(undefined1 *)(uVar7 + piVar3[1]);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar10);
        }
        iVar6 = piVar3[4];
        iVar8 = FUN_00a1b150(piVar3[0x14]);
        piVar3[0x17] = piVar3[0x17] - uVar10;
        piVar3[2] = piVar3[2] - uVar10;
        piVar3[5] = piVar3[5] - uVar10;
        piVar3[1] = piVar3[1] + uVar10;
        piVar3[6] = piVar3[6] + uVar10;
        local_8 = local_8 + uVar10;
        piVar3[0x14] = iVar8;
        piVar3[4] = iVar6 + uVar10;
        if ((piVar3[0x17] == 0) && (param_2 != (undefined1 *)0x0)) {
          *param_2 = 1;
        }
      }
      else {
        iVar6 = piVar3[6];
        local_10 = FUN_00a1b5a0();
        iVar8 = piVar3[6];
        iVar9 = FUN_00a1b150(piVar3[0x14]);
        piVar3[0x17] = piVar3[0x17] - (iVar8 - iVar6);
        local_8 = local_8 + (iVar8 - iVar6);
        piVar3[0x14] = iVar9;
        if ((local_10 == 1) || (piVar3[0x17] == 0)) {
          if (param_2 == (undefined1 *)0x0) {
            return local_8;
          }
          *param_2 = 1;
          return local_8;
        }
        if (local_10 != 0) {
          return local_10;
        }
      }
    } while (piVar3[5] != 0);
    if (local_10 != 0) {
      return local_10;
    }
  }
  return local_8;
}

