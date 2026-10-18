// FUN_006784b0 @ 006784b0 body=[[006784b0, 00678553]]


void FUN_006784b0(void)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  float10 fVar6;
  
  piVar2 = *(int **)(unaff_EDI + 0x1638);
  (**(code **)(**(int **)(unaff_EDI + 0x1978) + 0x14))();
  iVar3 = FUN_00b31c00();
  iVar4 = (**(code **)(*piVar2 + 0x2c))();
  if ((*(int *)(iVar4 + 8) == 0) ||
     ((uVar1 = *(ushort *)(*(int *)(unaff_EDI + 0x1d28) + 0x4c),
      iVar4 = (**(code **)(*piVar2 + 0x28))(), iVar4 <= (int)(uint)uVar1 && (iVar3 < 0x3d)))) {
    iVar3 = (**(code **)(*piVar2 + 0x2c))();
    if (*(int *)(iVar3 + 8) != 0) {
      return;
    }
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
    puVar5 = *(undefined4 **)*puVar5;
    (**(code **)(*piVar2 + 0x20))(puVar5,1);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  fVar6 = (float10)(**(code **)(**(int **)(unaff_EDI + 0x1978) + 0x14))();
  *(double *)(unaff_EDI + 0xe0) = (double)fVar6;
  return;
}

