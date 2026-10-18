// FUN_00680450 @ 00680450 body=[[00680450, 0068051b]]


void FUN_00680450(int param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = *(void **)(param_1 + 0xaec);
  if (pvVar1 != *(void **)(param_1 + 0xaf0)) {
    FID_conflict__memcpy(pvVar1,*(void **)(param_1 + 0xaf0),0);
    *(void **)(param_1 + 0xaf0) = pvVar1;
  }
  pvVar1 = *(void **)(param_1 + 0xadc);
  if (pvVar1 != *(void **)(param_1 + 0xae0)) {
    FID_conflict__memcpy(pvVar1,*(void **)(param_1 + 0xae0),0);
    *(void **)(param_1 + 0xae0) = pvVar1;
  }
  iVar3 = param_2[1] - *param_2 >> 2;
  FUN_0068ea30(iVar3);
  FUN_0068ea30(iVar3);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0xadc) + iVar2 * 4) = *(undefined4 *)(*param_2 + iVar2 * 4)
      ;
      *(undefined4 *)(*(int *)(param_1 + 0xaec) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  FUN_0068d250(param_1,1);
  return;
}

