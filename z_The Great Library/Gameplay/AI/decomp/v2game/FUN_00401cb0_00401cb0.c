// FUN_00401cb0 @ 00401cb0 body=[[00401cb0, 00401d7c]]


void FUN_00401cb0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 2;
  if (0 < iVar2) {
    piVar4 = *(int **)(unaff_ESI + 0x10);
    iVar5 = 0;
    while ((int *)*piVar4 != param_1) {
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      if (iVar2 <= iVar5) {
        return;
      }
    }
    (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x14))(param_1);
    iVar5 = iVar5 * 4;
    pvVar3 = (void *)(*(int *)(unaff_ESI + 0x10) + iVar5);
    pvVar1 = (void *)((int)pvVar3 + 4);
    FID_conflict__memcpy(pvVar3,pvVar1,(*(int *)(unaff_ESI + 0x14) - (int)pvVar1 >> 2) * 4);
    *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + -4;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x24))(1);
    }
    piVar4 = *(int **)(iVar5 + *(int *)(unaff_ESI + 0x30));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x14))(piVar4);
      (**(code **)(*piVar4 + 0x24))(1);
    }
    pvVar3 = (void *)(*(int *)(unaff_ESI + 0x30) + iVar5);
    pvVar1 = (void *)((int)pvVar3 + 4);
    FID_conflict__memcpy(pvVar3,pvVar1,(*(int *)(unaff_ESI + 0x34) - (int)pvVar1 >> 2) * 4);
    *(int *)(unaff_ESI + 0x34) = *(int *)(unaff_ESI + 0x34) + -4;
    *(undefined1 *)(unaff_ESI + 0x21c) = 1;
  }
  return;
}

