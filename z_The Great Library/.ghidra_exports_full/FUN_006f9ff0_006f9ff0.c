// FUN_006f9ff0 @ 006f9ff0 body=[[006f9ff0, 006fa029] [006fa030, 006fa08c] [006fa090, 006fa0d9]]


void FUN_006f9ff0(void)

{
  void *pvVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x50))();
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  iVar3 = *(int *)(in_ECX + 0xdc) - *(int *)(in_ECX + 0xd8) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xd8) + iVar2 * 4) + 0x50))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  pvVar1 = *(void **)(in_ECX + 0xd8);
  if (pvVar1 != *(void **)(in_ECX + 0xdc)) {
    FID_conflict__memcpy(pvVar1,*(void **)(in_ECX + 0xdc),0);
    *(void **)(in_ECX + 0xdc) = pvVar1;
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0xec) - *(int *)(in_ECX + 0xe8) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xe8) + iVar3 * 4) + 0x50))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  pvVar1 = *(void **)(in_ECX + 0xe8);
  if (pvVar1 != *(void **)(in_ECX + 0xec)) {
    FID_conflict__memcpy(pvVar1,*(void **)(in_ECX + 0xec),0);
    *(void **)(in_ECX + 0xec) = pvVar1;
  }
  return;
}

