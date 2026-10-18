// FUN_007f8e00 @ 007f8e00 body=[[007f8e00, 007f8e28] [007f8e30, 007f9039]]


void FUN_007f8e00(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EDI;
  undefined4 local_c;
  int local_8;
  
  iVar7 = *(int *)(unaff_EDI + 0x84) - *(int *)(unaff_EDI + 0x80) >> 2;
  local_8 = 0;
  if (0 < iVar7) {
    do {
      iVar1 = *(int *)(*(int *)(unaff_EDI + 0x80) + local_8 * 4);
      iVar2 = *(int *)(unaff_EDI + 0x19c);
      iVar5 = iVar1 * 0x24;
      if ((*(int *)(*(int *)(unaff_EDI + 0x191c) + 0xc + iVar5) != 0) ||
         (*(int *)(*(int *)(unaff_EDI + 0x191c) + 0x10 + iVar5) != 0)) {
        piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
        (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
        piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
        (**(code **)(*piVar3 + 0xe4))(piVar3,7,0);
        piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
        (**(code **)(*piVar3 + 0xe4))(piVar3,0x1b,1);
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0xe8))
                  (*(int **)(unaff_EDI + 0x268),*(undefined4 *)(unaff_EDI + 0x26c));
        local_c = 0;
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0xfc))(*(int **)(unaff_EDI + 0x268),&local_c,0)
        ;
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0x100))(*(int **)(unaff_EDI + 0x268),0);
        if (*(int *)(unaff_EDI + 0x270) != 0) {
          (**(code **)(**(int **)(unaff_EDI + 0x268) + 0x98))
                    (*(int **)(unaff_EDI + 0x268),*(int *)(unaff_EDI + 0x270),
                     iVar1 * 0x3c0 + iVar2 + 0x1fc);
        }
        uVar4 = *(uint *)(unaff_EDI + 0x2a8);
        if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(uVar4 * 0x2c + 0x15c + *(int *)(unaff_EDI + 0x3c));
        }
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0xd0))
                  (*(int **)(unaff_EDI + 0x268),&DAT_00e19384,uVar6);
        uVar4 = *(uint *)(unaff_EDI + 0x2ac);
        if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(uVar4 * 0x2c + 0x15c + *(int *)(unaff_EDI + 0x3c));
        }
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0xd0))
                  (*(int **)(unaff_EDI + 0x268),&DAT_00e1a710,uVar6);
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0x104))(*(int **)(unaff_EDI + 0x268));
        piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
        (**(code **)(*piVar3 + 0x15c))(piVar3,*(undefined4 *)(unaff_EDI + 0x18f4));
        FUN_009f9d50();
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0x108))(*(int **)(unaff_EDI + 0x268));
        (**(code **)(**(int **)(unaff_EDI + 0x268) + 0x10c))(*(int **)(unaff_EDI + 0x268));
        piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
        (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
        piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
        (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
        piVar3 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
        (**(code **)(*piVar3 + 0xe4))(piVar3,0x1b,0);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar7);
  }
  return;
}

