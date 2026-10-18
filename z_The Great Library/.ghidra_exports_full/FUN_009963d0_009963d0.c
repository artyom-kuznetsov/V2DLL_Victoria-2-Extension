// FUN_009963d0 @ 009963d0 body=[[009963d0, 009964e3]]


void FUN_009963d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  
  (**(code **)(*param_1 + 0x38))();
  puVar6 = *(undefined4 **)(unaff_ESI + 0xb8);
  puVar2 = puVar6 + (*(int *)(unaff_ESI + 0xbc) - (int)puVar6 >> 2);
  do {
    if (puVar6 == puVar2) {
LAB_00996455:
      iVar4 = (*(int *)(unaff_ESI + 0xdc) - *(int *)(unaff_ESI + 0xd8)) / 0xc;
      iVar3 = 0;
      if (0 < iVar4) {
        piVar5 = (int *)(*(int *)(unaff_ESI + 0xd8) + 8);
        while (param_1 != (int *)*piVar5) {
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 3;
          if (iVar4 <= iVar3) {
            (**(code **)(*param_1 + 0x24))(1);
            return;
          }
        }
        iVar1 = *(int *)(unaff_ESI + 0xdc);
        iVar4 = *(int *)(unaff_ESI + 0xd8) + 0xc + iVar3 * 0xc;
        if (iVar4 != iVar1) {
          puVar2 = (undefined4 *)(iVar4 + -4);
          do {
            puVar2[-1] = puVar2[2];
            *puVar2 = puVar2[3];
            iVar4 = iVar4 + 0xc;
            puVar2 = puVar2 + 3;
          } while (iVar4 != iVar1);
        }
        *(int *)(unaff_ESI + 0xdc) = *(int *)(unaff_ESI + 0xdc) + -0xc;
      }
      (**(code **)(*param_1 + 0x24))(1);
      return;
    }
    if ((int *)*puVar6 == param_1) {
      (**(code **)(*param_1 + 0x80))();
      *puVar6 = *(undefined4 *)
                 (*(int *)(unaff_ESI + 0xb8) + -4 +
                 (*(int *)(unaff_ESI + 0xbc) - *(int *)(unaff_ESI + 0xb8) >> 2) * 4);
      iVar4 = *(int *)(unaff_ESI + 0xbc);
      if (((iVar4 - *(int *)(unaff_ESI + 0xb8) & 0xfffffffcU) != 0) &&
         (*(int *)(unaff_ESI + 0xb8) != iVar4)) {
        *(int *)(unaff_ESI + 0xbc) = iVar4 + -4;
      }
      goto LAB_00996455;
    }
    puVar6 = puVar6 + 1;
  } while( true );
}

