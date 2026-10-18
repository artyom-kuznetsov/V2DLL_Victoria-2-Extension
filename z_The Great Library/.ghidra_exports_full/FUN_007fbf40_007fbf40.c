// FUN_007fbf40 @ 007fbf40 body=[[007fbf40, 007fc10c] [007fc110, 007fc35d]]


void FUN_007fbf40(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,0,6,2);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,0,5,2);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x89,0);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x1b,1);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x13,5);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x14,6);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,0);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,0);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,1,4);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,2,2);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,3,3);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,1,1,1);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,4,4);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,5,2);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,6,3);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,1,4,1);
  uVar4 = *(uint *)(*(int *)(unaff_EDI + 0x159c) + 0x49c);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(uVar4 * 0x2c + 0x15c + *(int *)(unaff_EDI + 0x3c));
  }
  (**(code **)(*piVar3 + 0x104))(piVar3,0,uVar1);
  iVar2 = *(int *)(unaff_EDI + 0x84) - *(int *)(unaff_EDI + 0x80) >> 2;
  local_14 = 0;
  if (0 < iVar2) {
    do {
      local_8 = *(int *)(*(int *)(unaff_EDI + 0x80) + local_14 * 4) * 0x3c0 +
                *(int *)(unaff_EDI + 0x19c);
      local_18 = *(int *)(local_8 + 0x130);
      local_10 = 0;
      if (0 < local_18) {
        do {
          iVar6 = local_10;
          local_c = local_8 + 0x120;
          iVar5 = local_10;
          FUN_0099e240(local_10);
          piVar3 = (int *)FUN_00868600(iVar5);
          iVar5 = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            iVar5 = *(int *)*piVar3;
          }
          uVar4 = piVar3[2];
          if (*(uint *)(iVar5 + 8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(iVar5 + 8);
          }
          if (*(char *)(*(int *)(*(int *)(iVar5 + 4) + uVar4 * 4) + 0x44) != '\0') {
            iVar5 = iVar6;
            FUN_0099e240(iVar6);
            piVar3 = (int *)FUN_00868600(iVar5);
            iVar5 = 0;
            if ((int *)*piVar3 != (int *)0x0) {
              iVar5 = *(int *)*piVar3;
            }
            uVar4 = piVar3[2];
            if (*(uint *)(iVar5 + 8) <= uVar4) {
              uVar4 = uVar4 - *(uint *)(iVar5 + 8);
            }
            if (-1 < *(int *)(*(int *)(*(int *)(iVar5 + 4) + uVar4 * 4) + 0x48)) {
              iVar5 = iVar6;
              FUN_0099e240(iVar6);
              piVar3 = (int *)FUN_00868600(iVar5);
              iVar5 = 0;
              if ((int *)*piVar3 != (int *)0x0) {
                iVar5 = *(int *)*piVar3;
              }
              uVar4 = piVar3[2];
              if (*(uint *)(iVar5 + 8) <= uVar4) {
                uVar4 = uVar4 - *(uint *)(iVar5 + 8);
              }
              if (*(int *)(unaff_EDI +
                          (*(int *)(*(int *)(*(int *)(iVar5 + 4) + uVar4 * 4) + 0x48) + 0x2c) * 0x10
                          ) != 0) {
                piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
                (**(code **)(*piVar3 + 0xb0))(piVar3,0x100,local_8 + 0x17c);
                FUN_0099e240(iVar6);
                piVar3 = (int *)FUN_00868600(iVar6);
                iVar5 = 0;
                if ((int *)*piVar3 != (int *)0x0) {
                  iVar5 = *(int *)*piVar3;
                }
                uVar4 = piVar3[2];
                if (*(uint *)(iVar5 + 8) <= uVar4) {
                  uVar4 = uVar4 - *(uint *)(iVar5 + 8);
                }
                iVar5 = *(int *)(unaff_EDI +
                                (*(int *)(*(int *)(*(int *)(iVar5 + 4) + uVar4 * 4) + 0x48) + 0x2c)
                                * 0x10);
                piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
                (**(code **)(*piVar3 + 0xe8))(piVar3,0x3c,&local_1c);
                piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
                (**(code **)(*piVar3 + 0xe4))(piVar3,0x3c,iVar5 << 0x18 | 0xffffff);
                iVar5 = local_10;
                FUN_0099e240(local_10);
                FUN_00868600(iVar5);
                FUN_009f9d50();
                piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
                (**(code **)(*piVar3 + 0xe4))(piVar3,0x3c,local_1c);
                iVar6 = local_10;
              }
            }
          }
          local_10 = iVar6 + 1;
        } while (local_10 < local_18);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar2);
  }
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,3,1);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,6,1);
  piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x10c))(piVar3,0,4,4);
  return;
}

