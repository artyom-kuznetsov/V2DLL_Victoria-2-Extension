// FUN_009340a0 @ 009340a0 body=[[009340a0, 00934141] [00934148, 009341f0]]


void FUN_009340a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar6 = param_1;
  iVar1 = *(int *)(DAT_012588e8 + 0xb0c);
  piVar5 = *(int **)(param_1 + 0x58);
joined_r0x009340bf:
  do {
    if (piVar5 == (int *)0x0) {
      return;
    }
    piVar7 = (int *)piVar5[2];
    piVar2 = (int *)*piVar5;
    piVar5 = piVar7;
    if (iVar1 < piVar2[2]) {
      piVar7 = *(int **)(iVar6 + 0x58);
      if (piVar7 == (int *)0x0) {
LAB_00934148:
        (**(code **)*piVar2)(1);
      }
      else {
        do {
          if ((int *)*piVar7 == piVar2) {
            if (piVar7 == (int *)0x0) goto LAB_00934148;
            if (*(char *)(iVar6 + 100) == '\0') {
              iVar1 = piVar7[1];
              iVar8 = piVar7[2];
              if (iVar1 != 0) {
                *(int *)(iVar1 + 8) = iVar8;
              }
              if (iVar8 != 0) {
                *(int *)(iVar8 + 4) = iVar1;
              }
              if (piVar7 == *(int **)(iVar6 + 0x58)) {
                *(int *)(iVar6 + 0x58) = iVar8;
              }
              if (piVar7 == *(int **)(iVar6 + 0x5c)) {
                *(int *)(iVar6 + 0x5c) = iVar1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar7);
            }
            *(undefined1 *)(piVar7 + 3) = 1;
            (**(code **)*piVar2)(1);
            goto joined_r0x009340bf;
          }
          piVar7 = (int *)piVar7[2];
        } while (piVar7 != (int *)0x0);
        (**(code **)*piVar2)(1);
      }
      goto joined_r0x009340bf;
    }
    iVar8 = (**(code **)(*piVar2 + 0x18))();
    if (iVar8 == 0x34a) {
      puVar3 = *(undefined4 **)(iVar6 + 0xf0);
      iVar8 = piVar2[4];
      param_1 = iVar8;
      if (&param_1 < puVar3) {
        puVar4 = *(undefined4 **)(iVar6 + 0xec);
        if (&param_1 < puVar4) goto LAB_009341b8;
        if (puVar3 == *(undefined4 **)(iVar6 + 0xf4)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(iVar6 + 0xf0) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar6 + 0xf0) =
               *(undefined4 *)(*(int *)(iVar6 + 0xec) + ((int)&param_1 - (int)puVar4 >> 2) * 4);
        }
      }
      else {
LAB_009341b8:
        if (puVar3 == *(undefined4 **)(iVar6 + 0xf4)) {
          FUN_00a513f0();
        }
        if (*(int **)(iVar6 + 0xf0) != (int *)0x0) {
          **(int **)(iVar6 + 0xf0) = iVar8;
        }
      }
      *(int *)(iVar6 + 0xf0) = *(int *)(iVar6 + 0xf0) + 4;
    }
  } while( true );
}

