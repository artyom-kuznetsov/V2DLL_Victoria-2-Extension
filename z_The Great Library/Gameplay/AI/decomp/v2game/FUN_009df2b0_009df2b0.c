// FUN_009df2b0 @ 009df2b0 body=[[009df2b0, 009df545]]


void FUN_009df2b0(undefined4 param_1)

{
  LPMSG lpMsg;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int unaff_ESI;
  float10 fVar8;
  DWORD dwMilliseconds;
  
  cVar7 = '\x01';
  if (DAT_01258a74 != 0) {
    cVar7 = *(char *)(DAT_01258a74 + 0x6bca0);
  }
  if ((char)param_1 != '\0') {
    if (cVar7 == '\0') {
      dwMilliseconds = 100;
    }
    else {
      dwMilliseconds = 0;
    }
    Sleep(dwMilliseconds);
  }
  lpMsg = (LPMSG)(unaff_ESI + 0xf4);
  iVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,1);
  while (iVar5 != 0) {
    TranslateMessage(lpMsg);
    DispatchMessageA(lpMsg);
    iVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,1);
  }
  if (*(int *)(unaff_ESI + 0xf8) == 0x12) {
    *(undefined1 *)(unaff_ESI + 0xf1) = 1;
    return;
  }
  iVar5 = *(int *)(unaff_ESI + 0xec);
  fVar3 = *(float *)(iVar5 + 0x80) * 0.01;
  fVar4 = *(float *)(iVar5 + 0x88) * 0.01 * fVar3;
  fVar3 = *(float *)(iVar5 + 0x84) * 0.01 * fVar3;
  if (DAT_00f1f698 != fVar3) {
    piVar6 = (int *)FUN_009c7290();
    (**(code **)(*piVar6 + 0x54))(fVar3);
  }
  if (DAT_00f1f694 != fVar4) {
    piVar6 = (int *)FUN_009e8090();
    (**(code **)(*piVar6 + 0x1c))(fVar4);
  }
  DAT_00f1f694 = fVar4;
  DAT_00f1f698 = fVar3;
  piVar6 = (int *)FUN_009c7290();
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar8 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  (**(code **)(*piVar6 + 0x74))((float)fVar8);
  (**(code **)(**(int **)(unaff_ESI + 0xe4) + 0x24))
            ((int)(*(float *)(*(int *)(unaff_ESI + 0xec) + 0x9c) * 0.01 * 4.0 + 1.0));
  if (*(int **)(unaff_ESI + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_ESI + 0x84) + 4))(param_1);
  }
  if (*(char *)(unaff_ESI + 0x88) != '\0') {
    if (*(int **)(unaff_ESI + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0x84) + 0x10))();
    }
    puVar1 = *(undefined4 **)(unaff_ESI + 0xe0);
    *(undefined4 *)(unaff_ESI + 0xe0) = 0;
    puVar2 = *(undefined4 **)(unaff_ESI + 0x84);
    if ((puVar1 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(unaff_ESI + 0x84) = puVar1;
    *(undefined1 *)(unaff_ESI + 0x88) = 0;
    (**(code **)(**(int **)(unaff_ESI + 0x84) + 8))
              (*(undefined4 *)(unaff_ESI + 0xe4),*(undefined4 *)(unaff_ESI + 0xe8));
    (**(code **)(**(int **)(unaff_ESI + 0x84) + 0xc))();
    (**(code **)(**(int **)(unaff_ESI + 0x84) + 0x14))();
  }
  return;
}

