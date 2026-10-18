// FUN_0053ecc0 @ 0053ecc0 body=[[0053ecc0, 0053ee43]]


void FUN_0053ecc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int in_EAX;
  uint uVar7;
  uint *in_ECX;
  int *piVar8;
  uint uVar9;
  int local_8;
  
  piVar1 = *(int **)(in_EAX + 0xe44);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar1;
    piVar8 = *(int **)(iVar2 + 0x48);
    while ((*(int **)(iVar2 + 0x48) <= piVar8 && (piVar8 < *(int **)(iVar2 + 0x4c)))) {
      iVar3 = *piVar8;
      piVar8 = piVar8 + 1;
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4) + 0x194) +
                      param_1 * 0x10);
      while (iVar6 = iVar3, iVar6 != 0) {
        iVar3 = *(int *)(iVar6 + 0x27c);
        if (*(int *)(*(int *)(iVar6 + 0x1d4) + 0xb0) == param_2) {
          piVar4 = (int *)in_ECX[1];
          local_8 = iVar6;
          if ((&local_8 < piVar4) && (piVar5 = (int *)*in_ECX, piVar5 <= &local_8)) {
            if (piVar4 == (int *)in_ECX[2]) {
              uVar7 = (int)piVar4 - (int)piVar5 >> 2;
              if (0x3ffffffe < uVar7) {
LAB_0053ee3a:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar7 = uVar7 + 1;
              uVar9 = (int)in_ECX[2] - (int)piVar5 >> 2;
              if (uVar9 < uVar7) {
                if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar7) {
                  uVar9 = uVar7;
                }
                FUN_004bf300(uVar9);
              }
            }
            if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
              *(undefined4 *)in_ECX[1] =
                   *(undefined4 *)(*in_ECX + ((int)&local_8 - (int)piVar5 >> 2) * 4);
            }
          }
          else {
            if (piVar4 == (int *)in_ECX[2]) {
              uVar7 = (int)((int)piVar4 - *in_ECX) >> 2;
              if (0x3ffffffe < uVar7) goto LAB_0053ee3a;
              uVar7 = uVar7 + 1;
              uVar9 = (int)((int)in_ECX[2] - *in_ECX) >> 2;
              if (uVar9 < uVar7) {
                if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar7) {
                  uVar9 = uVar7;
                }
                FUN_004bf300(uVar9);
              }
            }
            if ((int *)in_ECX[1] != (int *)0x0) {
              *(int *)in_ECX[1] = iVar6;
            }
          }
          in_ECX[1] = in_ECX[1] + 4;
        }
      }
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

