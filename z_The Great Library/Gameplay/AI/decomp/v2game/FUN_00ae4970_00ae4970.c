// FUN_00ae4970 @ 00ae4970 body=[[00ae4970, 00ae49ad] [00ae49b0, 00ae4acb]]


int FUN_00ae4970(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int *extraout_EDX;
  int *piVar8;
  
  *(int **)(in_ECX + 0x10) = param_1;
  *(uint *)(in_ECX + 0xc) = param_4;
  *(undefined4 *)(in_ECX + 0x18) = param_3;
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  FUN_00ae3b80();
  param_4 = 0;
  param_1 = extraout_EDX;
  do {
    iVar1 = *param_1;
    iVar2 = *(int *)(iVar1 + 0x20);
    uVar4 = iVar2 + 1;
    *(uint *)(iVar1 + 0x20) = uVar4;
    if (*(uint *)(iVar1 + 0x24) < uVar4) {
      FUN_00aeb6c0(iVar2 + 2);
    }
    piVar8 = (int *)(*(int *)(iVar1 + 0x1c) + -4 + *(int *)(iVar1 + 0x20) * 4);
    if (piVar8 != (int *)0x0) {
      *piVar8 = in_ECX;
    }
    uVar4 = 0;
    piVar8 = (int *)(in_ECX + 0x10);
    do {
      if (param_4 != uVar4) {
        uVar3 = *(uint *)(iVar1 + 0x10);
        uVar5 = 0;
        if (uVar3 != 0) {
          piVar7 = *(int **)(iVar1 + 0xc);
          do {
            if (*piVar7 == *piVar8) {
              if (uVar5 != 0xffffffff) goto LAB_00ae4a9c;
              break;
            }
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar5 < uVar3);
        }
        *(uint *)(iVar1 + 0x10) = uVar3 + 1;
        if (*(uint *)(iVar1 + 0x14) < uVar3 + 1) {
          iVar2 = uVar3 + 2;
          if (iVar2 == 0) {
            *(undefined4 *)(iVar1 + 0x10) = 0;
            *(undefined4 *)(iVar1 + 0x14) = 0;
            if (*(int *)(iVar1 + 0xc) != 0) {
              (*(code *)PTR__free_00f01b10)(*(int *)(iVar1 + 0xc));
              *(undefined4 *)(iVar1 + 0xc) = 0;
            }
          }
          else {
            if (*(int *)(iVar1 + 0xc) == 0) {
              uVar6 = (*(code *)PTR_FUN_00f01b08)
                                (iVar2 * 4,*(undefined2 *)(iVar1 + 0x18),4,2,0,0xffffffff);
            }
            else {
              uVar6 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar1 + 0xc),iVar2 * 4);
            }
            *(undefined4 *)(iVar1 + 0xc) = uVar6;
            *(int *)(iVar1 + 0x14) = iVar2;
          }
        }
        piVar7 = (int *)(*(int *)(iVar1 + 0xc) + -4 + *(int *)(iVar1 + 0x10) * 4);
        if (piVar7 != (int *)0x0) {
          *piVar7 = *piVar8;
        }
      }
LAB_00ae4a9c:
      uVar4 = uVar4 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar4 < 3);
    param_1 = param_1 + 1;
    param_4 = param_4 + 1;
    if (2 < param_4) {
      return in_ECX;
    }
  } while( true );
}

