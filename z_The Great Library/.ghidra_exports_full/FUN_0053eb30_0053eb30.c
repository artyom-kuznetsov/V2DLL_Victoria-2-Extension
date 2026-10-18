// FUN_0053eb30 @ 0053eb30 body=[[0053eb30, 0053ec68]]


void FUN_0053eb30(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_EAX;
  uint uVar6;
  uint *in_ECX;
  uint uVar7;
  int local_8;
  
  piVar1 = *(int **)(in_EAX + 0xe44);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar2 = *(int *)(*piVar1 + 0x60);
    while (iVar5 = iVar2, iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 0x224);
      if (*(int *)(*(int *)(iVar5 + 0x18) + 300) == param_1) {
        piVar3 = (int *)in_ECX[1];
        local_8 = iVar5;
        if (&local_8 < piVar3) {
          piVar4 = (int *)*in_ECX;
          if (&local_8 < piVar4) goto LAB_0053ebee;
          if (piVar3 == (int *)in_ECX[2]) {
            uVar6 = (int)piVar3 - (int)piVar4 >> 2;
            if (0x3ffffffe < uVar6) goto LAB_0053ec5f;
            uVar6 = uVar6 + 1;
            uVar7 = (int)in_ECX[2] - (int)piVar4 >> 2;
            if (uVar7 < uVar6) {
              if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar7 + (uVar7 >> 1);
              }
              if (uVar7 < uVar6) {
                uVar7 = uVar6;
              }
              FUN_004bf300(uVar7);
            }
          }
          if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
            *(undefined4 *)in_ECX[1] =
                 *(undefined4 *)(*in_ECX + ((int)&local_8 - (int)piVar4 >> 2) * 4);
          }
        }
        else {
LAB_0053ebee:
          if (piVar3 == (int *)in_ECX[2]) {
            uVar6 = (int)((int)piVar3 - *in_ECX) >> 2;
            if (0x3ffffffe < uVar6) {
LAB_0053ec5f:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad("vector<T> too long");
            }
            uVar6 = uVar6 + 1;
            uVar7 = (int)((int)in_ECX[2] - *in_ECX) >> 2;
            if (uVar7 < uVar6) {
              if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar7 + (uVar7 >> 1);
              }
              if (uVar7 < uVar6) {
                uVar7 = uVar6;
              }
              FUN_004bf300(uVar7);
            }
          }
          if ((int *)in_ECX[1] != (int *)0x0) {
            *(int *)in_ECX[1] = iVar5;
          }
        }
        in_ECX[1] = in_ECX[1] + 4;
      }
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

