// FUN_004a31f0 @ 004a31f0 body=[[004a31f0, 004a336c]]


void FUN_004a31f0(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_108 [65];
  
  puVar2 = param_2;
  do {
    while( true ) {
      piVar7 = *(int **)(param_1 + 0x1c);
      if ((char)piVar7[0x44] == '\0') {
        iVar3 = (**(code **)(*piVar7 + 4))();
        piVar7[2] = iVar3;
        if (iVar3 == 0) {
          piVar7[3] = 0x13;
        }
        *(undefined1 *)(piVar7 + 0x44) = 1;
      }
      piVar7 = piVar7 + 3;
      piVar9 = local_108;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      if ((local_108[0] == 4) || (local_108[0] == 0x13)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
      puVar10 = (undefined4 *)(param_1 + 0x228);
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar3 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_2 + 3);
      if (iVar3 == 0) {
        FUN_009a1140();
      }
      else {
        param_2 = (uint *)CONCAT13(param_2._3_1_ + -0x30,param_2._0_3_);
      }
      uVar5 = puVar2[1];
      uVar6 = (int)&param_2 + 3;
      if ((uVar6 < uVar5) && (uVar1 = *puVar2, uVar1 <= uVar6)) break;
      if (uVar5 == puVar2[2]) {
        iVar3 = uVar5 - *puVar2;
        if (iVar3 == -1) goto LAB_004a334d;
        uVar5 = iVar3 + 1;
        uVar6 = puVar2[2] - *puVar2;
        if (uVar6 < uVar5) {
          if (-(uVar6 >> 1) - 1 < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          FUN_009d7290(uVar6);
        }
      }
      if ((undefined1 *)puVar2[1] != (undefined1 *)0x0) {
        *(undefined1 *)puVar2[1] = param_2._3_1_;
      }
      puVar2[1] = puVar2[1] + 1;
    }
    if (uVar5 == puVar2[2]) {
      if (uVar5 - uVar1 == -1) {
LAB_004a334d:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar4 = (uVar5 - uVar1) + 1;
      uVar5 = puVar2[2] - uVar1;
      if (uVar5 < uVar4) {
        if (-(uVar5 >> 1) - 1 < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar4) {
          uVar5 = uVar4;
        }
        FUN_009d7290(uVar5);
      }
    }
    if ((undefined1 *)puVar2[1] != (undefined1 *)0x0) {
      *(undefined1 *)puVar2[1] = *(undefined1 *)((uVar6 - uVar1) + *puVar2);
    }
    puVar2[1] = puVar2[1] + 1;
  } while( true );
}

