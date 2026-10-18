// FUN_0048f3f0 @ 0048f3f0 body=[[0048f3f0, 0048f478] [0048f482, 0048f48f]]


void FUN_0048f3f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  for (piVar1 = (int *)*unaff_EDI; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*(int *)(*piVar1 + 0xc) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(*piVar1 + 4);
      iVar2 = *(int *)(iVar3 + 0x110);
      if ((iVar2 == 0) ||
         (iVar2 = *(int *)(iVar2 + 0x10),
         (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
        iVar3 = iVar3 + 0x130;
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x34);
      }
      iVar3 = *(int *)(iVar3 + 4);
    }
    (**(code **)(**(int **)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4) + 0x1c))();
    *(undefined4 *)(*piVar1 + 0x3c) = 0;
  }
  if (*unaff_EDI == 0) {
    *unaff_EDI = 0;
    unaff_EDI[1] = 0;
    unaff_EDI[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*unaff_EDI);
}

