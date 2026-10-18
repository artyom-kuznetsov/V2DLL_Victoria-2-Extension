// FUN_00b07790 @ 00b07790 body=[[00b07790, 00b07849]]


void FUN_00b07790(int param_1,int param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  int in_ECX;
  void *pvVar3;
  void *pvVar4;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    uVar2 = (*(code *)PTR_FUN_00f01b08)(*(undefined4 *)(in_ECX + 0x14),0xcc,4,0,0,0);
    *(undefined4 *)(in_ECX + 0x10) = uVar2;
  }
  sVar1 = *(size_t *)(in_ECX + 0x14);
  pvVar4 = (void *)(sVar1 * param_1 + *(int *)(in_ECX + 0xc));
  pvVar3 = (void *)(sVar1 * param_2 + *(int *)(in_ECX + 0xc));
  FID_conflict__memcpy(*(void **)(in_ECX + 0x10),pvVar4,sVar1);
  FID_conflict__memcpy(pvVar4,pvVar3,*(size_t *)(in_ECX + 0x14));
  FID_conflict__memcpy(pvVar3,*(void **)(in_ECX + 0x10),*(size_t *)(in_ECX + 0x14));
  if (*(char *)(in_ECX + 8) != '\0') {
    sVar1 = *(size_t *)(in_ECX + 0x14);
    pvVar4 = (void *)((*(int *)(in_ECX + 4) + param_1) * sVar1 + *(int *)(in_ECX + 0xc));
    pvVar3 = (void *)((param_2 + *(int *)(in_ECX + 4)) * sVar1 + *(int *)(in_ECX + 0xc));
    FID_conflict__memcpy(*(void **)(in_ECX + 0x10),pvVar4,sVar1);
    FID_conflict__memcpy(pvVar4,pvVar3,*(size_t *)(in_ECX + 0x14));
    FID_conflict__memcpy(pvVar3,*(void **)(in_ECX + 0x10),*(size_t *)(in_ECX + 0x14));
  }
  return;
}

